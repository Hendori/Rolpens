
/* CowData<int>::_realloc(long) [clone .part.0] */

undefined8 CowData<int>::_realloc(long param_1)

{
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::median_of_3(DocData::MethodDoc const&,
   DocData::MethodDoc const&, DocData::MethodDoc const&) const [clone .isra.0] */

MethodDoc *
SortArray<DocData::MethodDoc,OperatorCompare,true>::median_of_3
          (MethodDoc *param_1,MethodDoc *param_2,MethodDoc *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  
  cVar4 = String::operator==((String *)param_1,(String *)param_2);
  if (cVar4 == '\0') {
    bVar5 = String::naturalcasecmp_to((String *)param_1);
    bVar5 = bVar5 >> 7;
joined_r0x00100150:
    if (bVar5 != 0) {
      cVar4 = String::operator==((String *)param_2,(String *)param_3);
      if (cVar4 == '\0') {
        bVar5 = String::naturalcasecmp_to((String *)param_2);
        bVar5 = bVar5 >> 7;
joined_r0x001002e4:
        if (bVar5 != 0) {
          return param_2;
        }
      }
      else {
        lVar1 = *(long *)(param_2 + 0x58);
        lVar2 = *(long *)(param_3 + 0x58);
        if (lVar1 != 0) {
          lVar7 = *(long *)(lVar1 + -8);
          if (lVar2 == 0) {
            lVar6 = 0;
            if (lVar7 == 0) goto LAB_001002fb;
          }
          else {
            lVar6 = *(long *)(lVar2 + -8);
            if (lVar7 == lVar6) {
              if (lVar7 < 1) goto LAB_001002fb;
              bVar5 = String::operator<((String *)(lVar1 + 8),(String *)(lVar2 + 8));
              goto joined_r0x001002e4;
            }
          }
LAB_00100194:
          bVar5 = lVar7 < lVar6;
          goto joined_r0x001002e4;
        }
        if (lVar2 != 0) {
          lVar6 = *(long *)(lVar2 + -8);
          lVar7 = 0;
          if (lVar6 != 0) goto LAB_00100194;
        }
      }
      cVar4 = String::operator==((String *)param_1,(String *)param_3);
      if (cVar4 != '\0') {
        lVar1 = *(long *)(param_1 + 0x58);
        lVar2 = *(long *)(param_3 + 0x58);
        if (lVar1 == 0) {
          if (lVar2 == 0) {
            return param_1;
          }
          lVar6 = *(long *)(lVar2 + -8);
          lVar7 = 0;
          if (lVar6 == 0) {
            return param_1;
          }
LAB_001001dd:
          if (lVar7 < lVar6) {
            return param_3;
          }
          return param_1;
        }
        lVar7 = *(long *)(lVar1 + -8);
        if (lVar2 == 0) {
          lVar6 = 0;
          if (lVar7 != 0) goto LAB_001001dd;
          goto LAB_001002fb;
        }
        lVar6 = *(long *)(lVar2 + -8);
        if (lVar7 != lVar6) goto LAB_001001dd;
        if (lVar7 < 1) goto LAB_001002fb;
        cVar4 = String::operator<((String *)(lVar1 + 8),(String *)(lVar2 + 8));
        goto joined_r0x00100398;
      }
      cVar4 = String::naturalcasecmp_to((String *)param_1);
      goto joined_r0x0010029b;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar1 != 0) {
      lVar7 = *(long *)(lVar1 + -8);
      if (lVar2 == 0) {
        lVar6 = 0;
        if (lVar7 == 0) goto LAB_001002fb;
      }
      else {
        lVar6 = *(long *)(lVar2 + -8);
        if (lVar7 == lVar6) {
          if (lVar7 < 1) goto LAB_001002fb;
          bVar5 = String::operator<((String *)(lVar1 + 8),(String *)(lVar2 + 8));
          goto joined_r0x00100150;
        }
      }
LAB_00100086:
      bVar5 = lVar7 < lVar6;
      goto joined_r0x00100150;
    }
    if (lVar2 != 0) {
      lVar6 = *(long *)(lVar2 + -8);
      lVar7 = 0;
      if (lVar6 != 0) goto LAB_00100086;
    }
  }
  cVar4 = String::operator==((String *)param_1,(String *)param_3);
  if (cVar4 == '\0') {
    bVar5 = String::naturalcasecmp_to((String *)param_1);
    bVar5 = bVar5 >> 7;
joined_r0x00100270:
    if (bVar5 != 0) {
      return param_1;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(param_3 + 0x58);
    if (lVar1 != 0) {
      lVar7 = *(long *)(lVar1 + -8);
      if (lVar2 == 0) {
        lVar6 = 0;
        if (lVar7 == 0) goto LAB_001002fb;
      }
      else {
        lVar6 = *(long *)(lVar2 + -8);
        if (lVar7 == lVar6) {
          if (lVar7 < 1) goto LAB_001002fb;
          bVar5 = String::operator<((String *)(lVar1 + 8),(String *)(lVar2 + 8));
          goto joined_r0x00100270;
        }
      }
LAB_001000d3:
      bVar5 = lVar7 < lVar6;
      goto joined_r0x00100270;
    }
    if (lVar2 != 0) {
      lVar6 = *(long *)(lVar2 + -8);
      lVar7 = 0;
      if (lVar6 != 0) goto LAB_001000d3;
    }
  }
  cVar4 = String::operator==((String *)param_2,(String *)param_3);
  param_1 = param_2;
  if (cVar4 == '\0') {
    cVar4 = String::naturalcasecmp_to((String *)param_2);
joined_r0x0010029b:
    if (cVar4 < '\0') {
      return param_3;
    }
    return param_1;
  }
  lVar1 = *(long *)(param_2 + 0x58);
  lVar2 = *(long *)(param_3 + 0x58);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      return param_2;
    }
    lVar6 = *(long *)(lVar2 + -8);
    lVar7 = 0;
    if (lVar6 == 0) {
      return param_2;
    }
  }
  else {
    lVar7 = *(long *)(lVar1 + -8);
    if (lVar2 == 0) {
      lVar6 = 0;
      if (lVar7 == 0) goto LAB_001002fb;
    }
    else {
      lVar6 = *(long *)(lVar2 + -8);
      if (lVar7 == lVar6) {
        if (0 < lVar7) {
          cVar4 = String::operator<((String *)(lVar1 + 8),(String *)(lVar2 + 8));
joined_r0x00100398:
          if (cVar4 != '\0') {
            return param_3;
          }
          return param_1;
        }
LAB_001002fb:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  if (lVar7 < lVar6) {
    return param_3;
  }
  return param_2;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
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
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* Ref<FileAccess>::TEMPNAMEPLACEHOLDERVALUE(Ref<FileAccess> const&) [clone .isra.0] */

void __thiscall Ref<FileAccess>::operator=(Ref<FileAccess> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* CowData<Error>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Error>::_copy_on_write(CowData<Error> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
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
  __n = lVar2 * 4;
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



/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) [clone .part.0] */

void __thiscall CowData<char32_t>::operator=(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  
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
    else {
      *(undefined8 *)this = 0;
    }
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  return;
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::median_of_3(DocData::MethodDoc const&,
   DocData::MethodDoc const&, DocData::MethodDoc const&) const [clone .isra.0] */

MethodDoc *
SortArray<DocData::MethodDoc,ConstructorCompare,true>::median_of_3
          (MethodDoc *param_1,MethodDoc *param_2,MethodDoc *param_3)

{
  ArgumentDoc *pAVar1;
  ArgumentDoc *pAVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  String *pSVar9;
  
  lVar7 = *(long *)(param_1 + 0x58);
  lVar6 = *(long *)(param_2 + 0x58);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + -8);
    if (lVar6 == 0) {
      if (lVar8 < 0) {
        lVar5 = *(long *)(param_3 + 0x58);
LAB_0010082e:
        if (lVar5 == 0) {
          if (*(long *)(param_1 + 0x58) == 0) {
            return param_1;
          }
          lVar8 = *(long *)(*(long *)(param_1 + 0x58) + -8);
          lVar6 = 0;
          goto LAB_00100c68;
        }
        lVar6 = *(long *)(lVar5 + -8);
        lVar8 = 0;
LAB_0010083e:
        if (lVar8 < lVar6) {
          return param_2;
        }
LAB_00100843:
        lVar6 = *(long *)(param_1 + 0x58);
        if (lVar6 == 0) {
          if (lVar5 == 0) {
            return param_1;
          }
          lVar6 = *(long *)(lVar5 + -8);
          lVar8 = 0;
LAB_00100c68:
          if (lVar8 < lVar6) {
            return param_3;
          }
          return param_1;
        }
        lVar8 = *(long *)(lVar6 + -8);
        if (lVar5 == 0) {
          lVar6 = 0;
          goto LAB_00100c68;
        }
        pSVar9 = (String *)(param_1 + 8);
        if (lVar8 < 1) goto LAB_00100a9b;
        cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
        if (cVar4 == '\0') {
          lVar6 = *(long *)(param_3 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
            if (cVar4 != '\0') goto LAB_00100bf0;
            pAVar1 = *(ArgumentDoc **)(param_3 + 0x58);
            if (pAVar1 != (ArgumentDoc *)0x0) {
              lVar8 = *(long *)(pAVar1 + -8);
              if (lVar8 < 1) goto LAB_00100a9b;
              pAVar2 = *(ArgumentDoc **)(param_1 + 0x58);
              if (pAVar2 != (ArgumentDoc *)0x0) {
                lVar8 = *(long *)(pAVar2 + -8);
                if (0 < lVar8) {
                  cVar4 = DocData::ArgumentDoc::operator<(pAVar2,pAVar1);
                  if (cVar4 != '\0') {
                    return param_3;
                  }
                  return param_1;
                }
                goto LAB_00100a9b;
              }
            }
          }
        }
        else {
LAB_00100bf0:
          lVar6 = *(long *)(param_1 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
            if (cVar4 != '\0') {
              return param_3;
            }
            lVar6 = *(long *)(param_3 + 0x58);
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + -8);
              if (0 < lVar8) {
                cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar9);
                if (cVar4 == '\0') {
                  return param_1;
                }
                return param_3;
              }
              goto LAB_00100a9b;
            }
          }
        }
      }
      else {
        lVar5 = 0;
        if (*(long *)(param_3 + 0x58) == 0) {
          lVar6 = 0;
          goto LAB_00100a52;
        }
LAB_0010097b:
        pSVar9 = (String *)(param_1 + 8);
        if (lVar8 < 1) goto LAB_00100a9b;
        cVar4 = String::operator==((String *)(lVar7 + 8),pSVar9);
        if (cVar4 == '\0') {
          lVar6 = *(long *)(param_3 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
            if (cVar4 != '\0') goto LAB_00100b70;
            pAVar1 = *(ArgumentDoc **)(param_3 + 0x58);
            if (pAVar1 != (ArgumentDoc *)0x0) {
              lVar8 = *(long *)(pAVar1 + -8);
              if (lVar8 < 1) goto LAB_00100a9b;
              pAVar2 = *(ArgumentDoc **)(param_1 + 0x58);
              if (pAVar2 != (ArgumentDoc *)0x0) {
                lVar8 = *(long *)(pAVar2 + -8);
                if (lVar8 < 1) goto LAB_00100a9b;
                cVar4 = DocData::ArgumentDoc::operator<(pAVar2,pAVar1);
                goto joined_r0x00100bc7;
              }
            }
          }
        }
        else {
LAB_00100b70:
          lVar6 = *(long *)(param_1 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
            if (cVar4 != '\0') {
              return param_1;
            }
            lVar6 = *(long *)(param_3 + 0x58);
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + -8);
              if (lVar8 < 1) goto LAB_00100a9b;
              cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar9);
joined_r0x00100bc7:
              if (cVar4 != '\0') {
                return param_1;
              }
              lVar6 = *(long *)(param_2 + 0x58);
              lVar5 = *(long *)(param_3 + 0x58);
              goto LAB_00100a52;
            }
          }
        }
      }
    }
    else {
      pSVar9 = (String *)(param_1 + 8);
      if (lVar8 < 1) goto LAB_00100a9b;
      cVar4 = String::operator==((String *)(lVar7 + 8),pSVar9);
      if (cVar4 == '\0') {
        lVar6 = *(long *)(param_2 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') goto LAB_00100900;
          pAVar1 = *(ArgumentDoc **)(param_2 + 0x58);
          if (pAVar1 != (ArgumentDoc *)0x0) {
            lVar8 = *(long *)(pAVar1 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            pAVar2 = *(ArgumentDoc **)(param_1 + 0x58);
            if (pAVar2 != (ArgumentDoc *)0x0) {
              lVar8 = *(long *)(pAVar2 + -8);
              if (lVar8 < 1) goto LAB_00100a9b;
              cVar4 = DocData::ArgumentDoc::operator<(pAVar2,pAVar1);
              if (cVar4 == '\0') goto LAB_0010095c;
              goto LAB_00100778;
            }
          }
        }
      }
      else {
LAB_00100900:
        lVar6 = *(long *)(param_1 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') {
LAB_00100778:
            lVar6 = *(long *)(param_2 + 0x58);
            lVar5 = *(long *)(param_3 + 0x58);
            if (lVar6 != 0) goto LAB_0010078a;
            goto LAB_0010082e;
          }
          lVar6 = *(long *)(param_2 + 0x58);
          if (lVar6 == 0) goto LAB_00100a98;
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') goto LAB_00100778;
LAB_0010095c:
          lVar7 = *(long *)(param_1 + 0x58);
          lVar5 = *(long *)(param_3 + 0x58);
          if (lVar7 == 0) goto LAB_00100a39;
          lVar8 = *(long *)(lVar7 + -8);
          if (lVar5 != 0) goto LAB_0010097b;
          lVar6 = 0;
          goto LAB_00100a49;
        }
      }
    }
    goto LAB_00100a98;
  }
  if (lVar6 == 0) {
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar5 == 0) {
      return param_2;
    }
LAB_00100a42:
    lVar6 = *(long *)(lVar5 + -8);
    lVar8 = 0;
LAB_00100a49:
    if (lVar8 < lVar6) {
      return param_1;
    }
    lVar6 = *(long *)(param_2 + 0x58);
LAB_00100a52:
    if (lVar6 == 0) {
      if (lVar5 == 0) {
        return param_2;
      }
      lVar7 = *(long *)(lVar5 + -8);
      lVar6 = 0;
      goto LAB_00100d66;
    }
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar5 != 0) {
      pSVar9 = (String *)(param_2 + 8);
      if (lVar8 < 1) goto LAB_00100a9b;
      cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
      if (cVar4 == '\0') {
        lVar6 = *(long *)(param_3 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') goto LAB_00100a88;
          pAVar1 = *(ArgumentDoc **)(param_3 + 0x58);
          if (pAVar1 != (ArgumentDoc *)0x0) {
            lVar8 = *(long *)(pAVar1 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            pAVar2 = *(ArgumentDoc **)(param_2 + 0x58);
            if (pAVar2 != (ArgumentDoc *)0x0) {
              lVar8 = *(long *)(pAVar2 + -8);
              if (0 < lVar8) {
                cVar4 = DocData::ArgumentDoc::operator<(pAVar2,pAVar1);
                if (cVar4 != '\0') {
                  return param_3;
                }
                return param_2;
              }
              goto LAB_00100a9b;
            }
          }
        }
      }
      else {
LAB_00100a88:
        lVar6 = *(long *)(param_2 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') {
            return param_3;
          }
          lVar6 = *(long *)(param_3 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (0 < lVar8) {
              cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar9);
              if (cVar4 == '\0') {
                return param_2;
              }
              return param_3;
            }
            goto LAB_00100a9b;
          }
        }
      }
LAB_00100a98:
      lVar8 = 0;
LAB_00100a9b:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    lVar5 = *(long *)(param_3 + 0x58);
    if (0 < *(long *)(lVar6 + -8)) {
LAB_0010078a:
      lVar8 = *(long *)(lVar6 + -8);
      if (lVar5 == 0) {
        lVar6 = 0;
        lVar5 = 0;
        goto LAB_0010083e;
      }
      pSVar9 = (String *)(param_2 + 8);
      if (lVar8 < 1) goto LAB_00100a9b;
      cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
      if (cVar4 == '\0') {
        lVar6 = *(long *)(param_3 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') goto LAB_001007b8;
          pAVar1 = *(ArgumentDoc **)(param_3 + 0x58);
          if (pAVar1 != (ArgumentDoc *)0x0) {
            lVar8 = *(long *)(pAVar1 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            pAVar2 = *(ArgumentDoc **)(param_2 + 0x58);
            if (pAVar2 != (ArgumentDoc *)0x0) {
              lVar8 = *(long *)(pAVar2 + -8);
              if (lVar8 < 1) goto LAB_00100a9b;
              cVar4 = DocData::ArgumentDoc::operator<(pAVar2,pAVar1);
              goto joined_r0x0010080b;
            }
          }
        }
      }
      else {
LAB_001007b8:
        lVar6 = *(long *)(param_2 + 0x58);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + -8);
          if (lVar8 < 1) goto LAB_00100a9b;
          cVar4 = String::operator==((String *)(lVar6 + 8),pSVar9);
          if (cVar4 != '\0') {
            return param_2;
          }
          lVar6 = *(long *)(param_3 + 0x58);
          if (lVar6 != 0) {
            lVar8 = *(long *)(lVar6 + -8);
            if (lVar8 < 1) goto LAB_00100a9b;
            cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar9);
joined_r0x0010080b:
            if (cVar4 != '\0') {
              return param_2;
            }
            lVar5 = *(long *)(param_3 + 0x58);
            goto LAB_00100843;
          }
        }
      }
      goto LAB_00100a98;
    }
LAB_00100a39:
    if (lVar5 != 0) goto LAB_00100a42;
    lVar6 = *(long *)(param_2 + 0x58);
    if (lVar6 == 0) {
      return param_2;
    }
  }
  lVar6 = *(long *)(lVar6 + -8);
  lVar7 = 0;
LAB_00100d66:
  if (lVar6 < lVar7) {
    return param_3;
  }
  return param_2;
}



/* get_documentation_default_value(StringName const&, StringName const&, bool&) */

StringName * get_documentation_default_value(StringName *param_1,StringName *param_2,bool *param_3)

{
  StringName *pSVar1;
  char cVar2;
  char *in_RCX;
  long in_FS_OFFSET;
  undefined8 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *in_RCX = '\0';
  cVar2 = ClassDB::can_instantiate(param_2);
  if ((cVar2 == '\0') || (cVar2 = ClassDB::is_virtual(param_2), cVar2 != '\0')) {
    local_60 = (undefined8 *)0x0;
    ClassDB::get_direct_inheriters_from_class(param_2,(List *)&local_60);
    if (local_60 != (undefined8 *)0x0) {
      for (pSVar1 = (StringName *)*local_60; pSVar1 != (StringName *)0x0;
          pSVar1 = *(StringName **)(pSVar1 + 8)) {
        cVar2 = ClassDB::can_instantiate(pSVar1);
        if (cVar2 != '\0') {
          ClassDB::class_get_default_property_value((StringName *)local_58,pSVar1,param_3);
          if (Variant::needs_deinit[*(int *)param_1] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined8 *)(param_1 + 8) = local_50;
          *(undefined8 *)(param_1 + 0x10) = uStack_48;
          cVar2 = *in_RCX;
          *(undefined4 *)param_1 = local_58[0];
          if (cVar2 != '\0') break;
        }
      }
    }
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_60);
  }
  else {
    ClassDB::class_get_default_property_value((StringName *)local_58,param_2,param_3);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_insert(String const&) [clone .isra.0]
    */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,String *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  bool bVar11;
  
  lVar9 = *(long *)this;
  lVar3 = *(long *)(lVar9 + 0x10);
  if (*(long *)(lVar9 + 0x10) != *(long *)(this + 8)) {
    do {
      while( true ) {
        lVar9 = lVar3;
        cVar4 = String::naturalnocasecmp_to(param_1);
        if (cVar4 < '\0') break;
        cVar4 = String::naturalnocasecmp_to((String *)(lVar9 + 0x30));
        if (-1 < cVar4) {
          return;
        }
        lVar3 = *(long *)(lVar9 + 8);
        if (*(long *)(this + 8) == *(long *)(lVar9 + 8)) goto LAB_0010112f;
      }
      lVar3 = *(long *)(lVar9 + 0x10);
    } while (*(long *)(this + 8) != *(long *)(lVar9 + 0x10));
  }
LAB_0010112f:
  piVar5 = (int *)operator_new(0x38,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(piVar5 + 8) = (undefined1  [16])0x0;
  uVar1 = *(undefined8 *)(this + 8);
  piVar5[0xc] = 0;
  piVar5[0xd] = 0;
  lVar3 = *(long *)param_1;
  *piVar5 = 0;
  *(long *)(piVar5 + 6) = lVar9;
  *(undefined8 *)(piVar5 + 2) = uVar1;
  *(undefined8 *)(piVar5 + 4) = uVar1;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(piVar5 + 0xc),(CowData *)param_1);
  }
  if ((*(long *)this == lVar9) || (cVar4 = String::naturalnocasecmp_to(param_1), cVar4 < '\0')) {
    *(int **)(lVar9 + 0x10) = piVar5;
  }
  else {
    *(int **)(lVar9 + 8) = piVar5;
  }
  piVar8 = *(int **)(piVar5 + 2);
  piVar7 = piVar5;
  if (*(int **)(this + 8) == piVar8) {
    do {
      piVar6 = *(int **)(piVar7 + 6);
      bVar11 = piVar7 == *(int **)(piVar6 + 2);
      piVar7 = piVar6;
    } while (bVar11);
    if (*(int **)this == piVar6) {
      piVar6 = (int *)0x0;
    }
  }
  else {
    do {
      piVar7 = piVar8 + 4;
      piVar6 = piVar8;
      piVar8 = *(int **)piVar7;
    } while (*(int **)(this + 8) != *(int **)piVar7);
  }
  *(int **)(piVar5 + 8) = piVar6;
  piVar8 = *(int **)this;
  piVar10 = *(int **)(piVar5 + 4);
  piVar7 = piVar5;
  if (*(int **)(this + 8) == *(int **)(piVar5 + 4)) {
    do {
      piVar10 = piVar7;
      piVar7 = *(int **)(piVar10 + 6);
    } while (piVar10 == *(int **)(piVar7 + 4));
    if (piVar8 != piVar10) goto LAB_001011fc;
    piVar5[10] = 0;
    piVar5[0xb] = 0;
    if (piVar6 == (int *)0x0) goto LAB_00101216;
LAB_00101205:
    *(int **)(piVar6 + 10) = piVar5;
    piVar7 = *(int **)(piVar5 + 10);
    if (piVar7 == (int *)0x0) goto LAB_00101216;
  }
  else {
    do {
      piVar7 = piVar10;
      piVar10 = *(int **)(piVar7 + 2);
    } while (*(int **)(this + 8) != *(int **)(piVar7 + 2));
LAB_001011fc:
    *(int **)(piVar5 + 10) = piVar7;
    if (piVar6 != (int *)0x0) goto LAB_00101205;
  }
  *(int **)(piVar7 + 8) = piVar5;
LAB_00101216:
  piVar7 = *(int **)(piVar5 + 6);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  if (*piVar7 == 0) {
    do {
      while( true ) {
        piVar8 = *(int **)(piVar7 + 6);
        piVar6 = *(int **)(piVar8 + 4);
        piVar10 = piVar7;
        if (piVar6 == piVar7) break;
        if (*piVar6 == 0) goto LAB_001012aa;
        piVar6 = *(int **)(piVar7 + 4);
        if (piVar5 == piVar6) {
          lVar9 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar6 + 2);
          *(long *)(piVar7 + 4) = lVar3;
          piVar5 = piVar8;
          if (lVar9 != lVar3) {
            *(int **)(lVar3 + 0x18) = piVar7;
            piVar5 = *(int **)(piVar7 + 6);
          }
          *(int **)(piVar6 + 6) = piVar5;
          if (piVar7 == *(int **)(piVar5 + 2)) {
            *(int **)(piVar5 + 2) = piVar6;
          }
          else {
            *(int **)(piVar5 + 4) = piVar6;
          }
          *(int **)(piVar6 + 2) = piVar7;
          *(int **)(piVar7 + 6) = piVar6;
          piVar10 = piVar6;
          piVar5 = piVar7;
        }
        piVar7 = *(int **)(this + 8);
        *piVar10 = 1;
        if (piVar8 == piVar7) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar8 = 0;
        }
        lVar9 = *(long *)(piVar8 + 2);
        lVar3 = *(long *)(this + 8);
        lVar2 = *(long *)(lVar9 + 0x10);
        *(long *)(piVar8 + 2) = lVar2;
        if (lVar3 != lVar2) {
          *(int **)(lVar2 + 0x18) = piVar8;
        }
        lVar3 = *(long *)(piVar8 + 6);
        *(long *)(lVar9 + 0x18) = lVar3;
        if (piVar8 == *(int **)(lVar3 + 0x10)) {
          *(long *)(lVar3 + 0x10) = lVar9;
        }
        else {
          *(long *)(lVar3 + 8) = lVar9;
        }
        *(int **)(lVar9 + 0x10) = piVar8;
        *(long *)(piVar8 + 6) = lVar9;
LAB_00101290:
        piVar7 = piVar10;
        if (*piVar10 != 0) goto LAB_001012d9;
      }
      piVar6 = *(int **)(piVar8 + 2);
      if (*piVar6 != 0) {
        piVar6 = *(int **)(piVar7 + 2);
        if (piVar5 == piVar6) {
          lVar9 = *(long *)(this + 8);
          lVar3 = *(long *)(piVar6 + 4);
          *(long *)(piVar7 + 2) = lVar3;
          if (lVar9 == lVar3) {
            *(int **)(piVar6 + 6) = piVar8;
            piVar5 = piVar8;
LAB_00101515:
            *(int **)(piVar5 + 4) = piVar6;
          }
          else {
            *(int **)(lVar3 + 0x18) = piVar7;
            piVar5 = *(int **)(piVar7 + 6);
            *(int **)(piVar6 + 6) = piVar5;
            if (piVar7 == *(int **)(piVar5 + 4)) goto LAB_00101515;
            *(int **)(piVar5 + 2) = piVar6;
          }
          *(int **)(piVar6 + 4) = piVar7;
          *(int **)(piVar7 + 6) = piVar6;
          piVar10 = piVar6;
          piVar5 = piVar7;
        }
        piVar7 = *(int **)(this + 8);
        *piVar10 = 1;
        if (piVar8 == piVar7) {
          _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                           "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
        }
        else {
          *piVar8 = 0;
        }
        lVar9 = *(long *)(piVar8 + 4);
        lVar3 = *(long *)(this + 8);
        lVar2 = *(long *)(lVar9 + 8);
        *(long *)(piVar8 + 4) = lVar2;
        if (lVar3 != lVar2) {
          *(int **)(lVar2 + 0x18) = piVar8;
        }
        lVar3 = *(long *)(piVar8 + 6);
        *(long *)(lVar9 + 0x18) = lVar3;
        if (piVar8 == *(int **)(lVar3 + 8)) {
          *(long *)(lVar3 + 8) = lVar9;
        }
        else {
          *(long *)(lVar3 + 0x10) = lVar9;
        }
        *(int **)(lVar9 + 8) = piVar8;
        *(long *)(piVar8 + 6) = lVar9;
        goto LAB_00101290;
      }
LAB_001012aa:
      piVar5 = *(int **)(this + 8);
      *piVar7 = 1;
      *piVar6 = 1;
      if (piVar8 == piVar5) {
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      else {
        *piVar8 = 0;
      }
      piVar7 = *(int **)(piVar8 + 6);
      piVar5 = piVar8;
    } while (**(int **)(piVar8 + 6) == 0);
LAB_001012d9:
    piVar8 = *(int **)this;
  }
  **(undefined4 **)(piVar8 + 4) = 1;
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::insert(String const&) [clone .isra.0]
    */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::insert
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,String *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  if (*(long *)this == 0) {
    puVar2 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
    uVar1 = *(undefined8 *)(this + 8);
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined4 **)this = puVar2;
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 2) = uVar1;
    *(undefined8 *)(puVar2 + 4) = uVar1;
    *(undefined8 *)(puVar2 + 6) = uVar1;
  }
  _insert(this,param_1);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* DocData::PropertyDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::PropertyDoc const&) [clone .isra.0] */

void __thiscall DocData::PropertyDoc::operator=(PropertyDoc *this,PropertyDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  this[0x18] = param_1[0x18];
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  if (*(long *)(this + 0x38) != *(long *)(param_1 + 0x38)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  this[0x40] = param_1[0x40];
  if (*(long *)(this + 0x48) != *(long *)(param_1 + 0x48)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  this[0x50] = param_1[0x50];
  if (*(long *)(this + 0x58) != *(long *)(param_1 + 0x58)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x58),(CowData *)(param_1 + 0x58));
  }
  this[0x60] = param_1[0x60];
  if (*(long *)(this + 0x68) != *(long *)(param_1 + 0x68)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x68),(CowData *)(param_1 + 0x68));
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)(param_1 + 0x70));
    return;
  }
  return;
}



/* DocData::PropertyDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::PropertyDoc&&) [clone .isra.0] */

void __thiscall DocData::PropertyDoc::operator=(PropertyDoc *this,PropertyDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  this[0x18] = param_1[0x18];
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(this + 0x38) != *(long *)(param_1 + 0x38)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  this[0x40] = param_1[0x40];
  if (*(long *)(this + 0x48) != *(long *)(param_1 + 0x48)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  this[0x50] = param_1[0x50];
  if (*(long *)(this + 0x58) != *(long *)(param_1 + 0x58)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x58));
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  this[0x60] = param_1[0x60];
  if (*(long *)(this + 0x68) != *(long *)(param_1 + 0x68)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x68));
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x70));
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* DocTools::erase_classes(String const&) */

undefined4 DocTools::erase_classes(String *param_1)

{
  code *pcVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  CowData<char32_t> *pCVar7;
  undefined1 (*pauVar8) [16];
  long in_FS_OFFSET;
  undefined4 local_54;
  Object *local_50;
  undefined1 (*local_48) [16];
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_50,param_1);
  if (local_50 != (Object *)0x0) {
    local_48 = (undefined1 (*) [16])0x0;
    (**(code **)(*(long *)local_50 + 0x160))();
    local_40 = 0;
    (**(code **)(*(long *)local_50 + 0x168))((CowData<char32_t> *)&local_38);
    if (local_40 != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      local_40 = local_38;
      local_38 = 0;
    }
    pauVar8 = (undefined1 (*) [16])0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    while ((local_40 != 0 && (1 < *(uint *)(local_40 + -8)))) {
      cVar4 = (**(code **)(*(long *)local_50 + 0x170))();
      if ((cVar4 == '\0') && (cVar4 = String::ends_with((char *)&local_40), cVar4 != '\0')) {
        if (pauVar8 == (undefined1 (*) [16])0x0) {
          pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar8[1] = 0;
          *pauVar8 = (undefined1  [16])0x0;
          local_48 = pauVar8;
        }
        pCVar7 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])pCVar7 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar7 + 0x10) = (undefined1  [16])0x0;
        CowData<char32_t>::_ref(pCVar7,(CowData *)&local_40);
        lVar6 = *(long *)(*pauVar8 + 8);
        *(undefined1 (**) [16])(pCVar7 + 0x18) = pauVar8;
        *(undefined8 *)(pCVar7 + 8) = 0;
        *(long *)(pCVar7 + 0x10) = lVar6;
        if (lVar6 != 0) {
          *(CowData<char32_t> **)(lVar6 + 8) = pCVar7;
        }
        lVar6 = *(long *)*pauVar8;
        *(CowData<char32_t> **)(*pauVar8 + 8) = pCVar7;
        if (lVar6 == 0) {
          *(CowData<char32_t> **)*pauVar8 = pCVar7;
        }
        *(int *)pauVar8[1] = *(int *)pauVar8[1] + 1;
      }
      (**(code **)(*(long *)local_50 + 0x168))((CowData<char32_t> *)&local_38);
      if (local_40 != local_38) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
        local_40 = local_38;
        local_38 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    }
    (**(code **)(*(long *)local_50 + 0x180))();
    if (pauVar8 != (undefined1 (*) [16])0x0) {
      do {
        do {
          pOVar3 = local_50;
          if (*(int *)pauVar8[1] == 0) goto LAB_00101a60;
          pcVar1 = *(code **)(*(long *)local_50 + 0x208);
          local_38 = 0;
          if (*(long *)*(CowData **)*pauVar8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,*(CowData **)*pauVar8);
          }
          (*pcVar1)(pOVar3);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
          pCVar7 = *(CowData<char32_t> **)*pauVar8;
        } while (pCVar7 == (CowData<char32_t> *)0x0);
        if (pauVar8 == *(undefined1 (**) [16])(pCVar7 + 0x18)) {
          lVar6 = *(long *)(pCVar7 + 8);
          lVar2 = *(long *)(pCVar7 + 0x10);
          *(long *)*pauVar8 = lVar6;
          if (pCVar7 == *(CowData<char32_t> **)(*pauVar8 + 8)) {
            *(long *)(*pauVar8 + 8) = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar6;
            lVar6 = *(long *)(pCVar7 + 8);
          }
          if (lVar6 != 0) {
            *(long *)(lVar6 + 0x10) = lVar2;
          }
          CowData<char32_t>::_unref(pCVar7);
          Memory::free_static(pCVar7,false);
          iVar5 = *(int *)pauVar8[1] + -1;
          *(int *)pauVar8[1] = iVar5;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          iVar5 = *(int *)pauVar8[1];
        }
      } while (iVar5 != 0);
      Memory::free_static(pauVar8,false);
      local_48 = (undefined1 (*) [16])0x0;
    }
LAB_00101a60:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_48);
    if (((local_50 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    }
    local_54 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_54;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<DocData::PropertyDoc, _DefaultComparator<DocData::PropertyDoc>, true>::introsort(long,
   long, DocData::PropertyDoc*, long) const [clone .isra.0] */

void SortArray<DocData::PropertyDoc,_DefaultComparator<DocData::PropertyDoc>,true>::introsort
               (long param_1,long param_2,PropertyDoc *param_3,long param_4)

{
  long *plVar1;
  String *pSVar2;
  CowData<char32_t> *this;
  char cVar3;
  PropertyDoc *this_00;
  String *pSVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CowData<char32_t> *pCVar9;
  PropertyDoc *pPVar10;
  CowData *this_01;
  String *pSVar11;
  long in_FS_OFFSET;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  PropertyDoc *local_2d0;
  PropertyDoc *local_2c8;
  long local_2c0;
  PropertyDoc *local_2b8;
  long local_210;
  PropertyDoc local_1b8 [8];
  CowData<char32_t> local_1b0 [8];
  CowData<char32_t> local_1a8 [16];
  CowData<char32_t> local_198 [8];
  CowData<char32_t> local_190 [8];
  CowData<char32_t> local_188 [8];
  CowData<char32_t> local_180 [16];
  CowData<char32_t> local_170 [16];
  CowData<char32_t> local_160 [16];
  CowData<char32_t> local_150 [8];
  CowData<char32_t> local_148 [16];
  PropertyDoc local_138 [8];
  CowData<char32_t> local_130 [8];
  CowData<char32_t> local_128 [16];
  CowData<char32_t> local_118 [8];
  CowData<char32_t> local_110 [8];
  CowData<char32_t> local_108 [8];
  CowData<char32_t> local_100 [16];
  CowData<char32_t> local_f0 [16];
  CowData<char32_t> local_e0 [16];
  CowData<char32_t> local_d0 [8];
  CowData<char32_t> local_c8 [16];
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  String local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  String local_78;
  long local_70;
  String local_68;
  undefined8 local_60;
  String local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  lVar6 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar6) {
    local_2e8 = param_2;
    local_2d0 = (PropertyDoc *)lVar6;
    if (param_4 != 0) {
      pSVar2 = (String *)(param_3 + param_1 * 0x78);
      local_2d8 = param_2;
      pPVar10 = (PropertyDoc *)param_4;
LAB_0010209c:
      local_2d0 = pPVar10;
      pPVar10 = (PropertyDoc *)((long)local_2d0 + -1);
      pSVar11 = (String *)(param_3 + ((lVar6 >> 1) + param_1) * 0x78);
      cVar3 = String::naturalcasecmp_to(pSVar2);
      if (cVar3 < '\0') {
        cVar3 = String::naturalcasecmp_to(pSVar11);
        pSVar4 = pSVar11;
        if (cVar3 < '\0') goto LAB_0010210f;
        cVar3 = String::naturalcasecmp_to(pSVar2);
        pSVar11 = pSVar2;
      }
      else {
        cVar3 = String::naturalcasecmp_to(pSVar2);
        pSVar4 = pSVar2;
        if (cVar3 < '\0') goto LAB_0010210f;
        cVar3 = String::naturalcasecmp_to(pSVar11);
      }
      pSVar4 = pSVar11;
      if (cVar3 < '\0') {
        pSVar4 = (String *)(param_3 + local_2d8 * 0x78 + -0x78);
      }
LAB_0010210f:
      DocData::PropertyDoc::PropertyDoc(local_138,(PropertyDoc *)pSVar4);
      lVar6 = local_2d8;
      local_2e8 = param_1;
      pSVar11 = pSVar2;
      do {
        cVar3 = String::naturalcasecmp_to(pSVar11);
        if (cVar3 < '\0') {
          if (local_2d8 + -1 == local_2e8) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00102147;
          }
        }
        else {
LAB_00102147:
          lVar6 = lVar6 + -1;
          this_00 = param_3 + lVar6 * 0x78;
          while (cVar3 = String::naturalcasecmp_to((String *)local_138), cVar3 < '\0') {
            if (param_1 == lVar6) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar6 = lVar6 + -1;
            this_00 = this_00 + -0x78;
          }
          if (lVar6 <= local_2e8) goto LAB_00102440;
          local_a8 = *(undefined8 *)(pSVar11 + 0x10);
          local_b8 = *(long *)pSVar11;
          lStack_b0 = *(long *)(pSVar11 + 8);
          local_98 = *(long *)(pSVar11 + 0x20);
          lStack_90 = *(long *)(pSVar11 + 0x28);
          local_88 = *(long *)(pSVar11 + 0x30);
          uStack_80 = *(undefined8 *)(pSVar11 + 0x38);
          *(undefined1 (*) [16])pSVar11 = (undefined1  [16])0x0;
          local_a0 = pSVar11[0x18];
          *(undefined8 *)(pSVar11 + 0x10) = 0;
          local_50 = *(long *)(pSVar11 + 0x68);
          lStack_48 = *(long *)(pSVar11 + 0x70);
          local_78 = pSVar11[0x40];
          *(undefined1 (*) [16])(pSVar11 + 0x20) = (undefined1  [16])0x0;
          local_70 = *(long *)(pSVar11 + 0x48);
          *(undefined8 *)(pSVar11 + 0x48) = 0;
          local_68 = pSVar11[0x50];
          *(undefined1 (*) [16])(pSVar11 + 0x30) = (undefined1  [16])0x0;
          local_60 = *(undefined8 *)(pSVar11 + 0x58);
          *(undefined8 *)(pSVar11 + 0x58) = 0;
          local_58 = pSVar11[0x60];
          *(undefined1 (*) [16])(pSVar11 + 0x68) = (undefined1  [16])0x0;
          DocData::PropertyDoc::operator=((PropertyDoc *)pSVar11,this_00);
          DocData::PropertyDoc::operator=(this_00,(PropertyDoc *)&local_b8);
          if (lStack_48 != 0) {
            LOCK();
            plVar1 = (long *)(lStack_48 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(lStack_48 + -0x10),false);
            }
          }
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_50 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_70 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_80);
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_88 + -0x10),false);
            }
          }
          if (lStack_90 != 0) {
            LOCK();
            plVar1 = (long *)(lStack_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(lStack_90 + -0x10),false);
            }
          }
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_98 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (lStack_b0 != 0) {
            LOCK();
            plVar1 = (long *)(lStack_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(lStack_b0 + -0x10),false);
            }
          }
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_b8 + -0x10),false);
            }
          }
        }
        pSVar11 = pSVar11 + 0x78;
        local_2e8 = local_2e8 + 1;
      } while( true );
    }
LAB_00102b5d:
    local_2c8 = local_138;
    local_2c0 = (long)local_2d0 + -2 >> 1;
    local_210 = local_2c0 * 2 + 2;
    local_2b8 = param_3 + (param_1 + local_2c0) * 0x78;
    do {
      DocData::PropertyDoc::PropertyDoc(local_2c8,local_2b8);
      lVar6 = local_210;
      if (local_210 < (long)local_2d0) {
        local_2e0 = local_2c0;
        do {
          cVar3 = String::naturalcasecmp_to((String *)(param_3 + (param_1 + lVar6) * 0x78));
          lVar5 = lVar6;
          lVar7 = lVar6 + -1;
          pPVar10 = param_3 + (param_1 + lVar6 + -1) * 0x78;
          if (-1 < cVar3) {
            lVar5 = lVar6 + 1;
            lVar7 = lVar6;
            pPVar10 = param_3 + (param_1 + lVar6) * 0x78;
          }
          pCVar9 = (CowData<char32_t> *)(param_3 + (local_2e0 + param_1) * 0x78);
          if (*(long *)pCVar9 != *(long *)pPVar10) {
            CowData<char32_t>::_ref(pCVar9,(CowData *)pPVar10);
          }
          if (*(long *)(pCVar9 + 8) != *(long *)((CowData *)pPVar10 + 8)) {
            CowData<char32_t>::_ref(pCVar9 + 8,(CowData *)pPVar10 + 8);
          }
          if (*(long *)(pCVar9 + 0x10) != *(long *)((CowData *)pPVar10 + 0x10)) {
            CowData<char32_t>::_ref(pCVar9 + 0x10,(CowData *)pPVar10 + 0x10);
          }
          pCVar9[0x18] = *(CowData<char32_t> *)((CowData *)pPVar10 + 0x18);
          if (*(long *)(pCVar9 + 0x20) != *(long *)((CowData *)pPVar10 + 0x20)) {
            CowData<char32_t>::_ref(pCVar9 + 0x20,(CowData *)pPVar10 + 0x20);
          }
          if (*(long *)(pCVar9 + 0x28) != *(long *)((CowData *)pPVar10 + 0x28)) {
            CowData<char32_t>::_ref(pCVar9 + 0x28,(CowData *)pPVar10 + 0x28);
          }
          if (*(long *)(pCVar9 + 0x30) != *(long *)((CowData *)pPVar10 + 0x30)) {
            CowData<char32_t>::_ref(pCVar9 + 0x30,(CowData *)pPVar10 + 0x30);
          }
          if (*(long *)(pCVar9 + 0x38) != *(long *)((CowData *)pPVar10 + 0x38)) {
            CowData<char32_t>::_ref(pCVar9 + 0x38,(CowData *)pPVar10 + 0x38);
          }
          pCVar9[0x40] = *(CowData<char32_t> *)((CowData *)pPVar10 + 0x40);
          if (*(long *)(pCVar9 + 0x48) != *(long *)((CowData *)pPVar10 + 0x48)) {
            CowData<char32_t>::_ref(pCVar9 + 0x48,(CowData *)pPVar10 + 0x48);
          }
          pCVar9[0x50] = *(CowData<char32_t> *)((CowData *)pPVar10 + 0x50);
          if (*(long *)(pCVar9 + 0x58) != *(long *)((CowData *)pPVar10 + 0x58)) {
            CowData<char32_t>::_ref(pCVar9 + 0x58,(CowData *)pPVar10 + 0x58);
          }
          pCVar9[0x60] = *(CowData<char32_t> *)((CowData *)pPVar10 + 0x60);
          if (*(long *)(pCVar9 + 0x68) != *(long *)((CowData *)pPVar10 + 0x68)) {
            CowData<char32_t>::_ref(pCVar9 + 0x68,(CowData *)pPVar10 + 0x68);
          }
          if (*(long *)(pCVar9 + 0x70) != *(long *)((CowData *)pPVar10 + 0x70)) {
            CowData<char32_t>::_ref(pCVar9 + 0x70,(CowData *)pPVar10 + 0x70);
          }
          lVar6 = lVar5 * 2;
          local_2e0 = lVar7;
        } while (lVar6 < (long)local_2d0);
        this_01 = (CowData *)pPVar10;
        if ((PropertyDoc *)lVar6 == local_2d0) {
LAB_0010318b:
          lVar7 = lVar6 + -1;
          pPVar10 = param_3 + (param_1 + lVar7) * 0x78;
          DocData::PropertyDoc::operator=((PropertyDoc *)this_01,pPVar10);
        }
        lVar6 = lVar7 + -1;
        DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_b8,local_2c8);
        while (pCVar9 = (CowData<char32_t> *)pPVar10, local_2c0 < lVar7) {
          lVar5 = lVar6 >> 1;
          pPVar10 = param_3 + (param_1 + lVar5) * 0x78;
          cVar3 = String::naturalcasecmp_to((String *)pPVar10);
          pCVar9 = (CowData<char32_t> *)(param_3 + (param_1 + lVar7) * 0x78);
          if (-1 < cVar3) break;
          if (*(long *)pCVar9 != *(long *)pPVar10) {
            CowData<char32_t>::_ref(pCVar9,(CowData *)pPVar10);
          }
          if (*(long *)(pCVar9 + 8) != *(long *)((String *)pPVar10 + 8)) {
            CowData<char32_t>::_ref(pCVar9 + 8,(CowData *)((String *)pPVar10 + 8));
          }
          if (*(long *)(pCVar9 + 0x10) != *(long *)((String *)pPVar10 + 0x10)) {
            CowData<char32_t>::_ref(pCVar9 + 0x10,(CowData *)((String *)pPVar10 + 0x10));
          }
          *(String *)(pCVar9 + 0x18) = ((String *)pPVar10)[0x18];
          if (*(long *)(pCVar9 + 0x20) != *(long *)((String *)pPVar10 + 0x20)) {
            CowData<char32_t>::_ref(pCVar9 + 0x20,(CowData *)((String *)pPVar10 + 0x20));
          }
          if (*(long *)(pCVar9 + 0x28) != *(long *)((String *)pPVar10 + 0x28)) {
            CowData<char32_t>::_ref(pCVar9 + 0x28,(CowData *)((String *)pPVar10 + 0x28));
          }
          if (*(long *)(pCVar9 + 0x30) != *(long *)((String *)pPVar10 + 0x30)) {
            CowData<char32_t>::_ref(pCVar9 + 0x30,(CowData *)((String *)pPVar10 + 0x30));
          }
          if (*(long *)(pCVar9 + 0x38) != *(long *)((String *)pPVar10 + 0x38)) {
            CowData<char32_t>::_ref(pCVar9 + 0x38,(CowData *)((String *)pPVar10 + 0x38));
          }
          *(String *)(pCVar9 + 0x40) = ((String *)pPVar10)[0x40];
          if (*(long *)(pCVar9 + 0x48) != *(long *)((String *)pPVar10 + 0x48)) {
            CowData<char32_t>::_ref(pCVar9 + 0x48,(CowData *)((String *)pPVar10 + 0x48));
          }
          *(String *)(pCVar9 + 0x50) = ((String *)pPVar10)[0x50];
          if (*(long *)(pCVar9 + 0x58) != *(long *)((String *)pPVar10 + 0x58)) {
            CowData<char32_t>::_ref(pCVar9 + 0x58,(CowData *)((String *)pPVar10 + 0x58));
          }
          *(String *)(pCVar9 + 0x60) = ((String *)pPVar10)[0x60];
          if (*(long *)(pCVar9 + 0x68) != *(long *)((String *)pPVar10 + 0x68)) {
            CowData<char32_t>::_ref(pCVar9 + 0x68,(CowData *)((String *)pPVar10 + 0x68));
          }
          if (*(long *)(pCVar9 + 0x70) != *(long *)((String *)pPVar10 + 0x70)) {
            CowData<char32_t>::_ref(pCVar9 + 0x70,(CowData *)((String *)pPVar10 + 0x70));
          }
          lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
          lVar7 = lVar5;
        }
      }
      else {
        this_01 = (CowData *)local_2b8;
        if ((PropertyDoc *)local_210 == local_2d0) goto LAB_0010318b;
        DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_b8,local_2c8);
        pCVar9 = (CowData<char32_t> *)local_2b8;
      }
      DocData::PropertyDoc::operator=((PropertyDoc *)pCVar9,(PropertyDoc *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref(local_c8);
      CowData<char32_t>::_unref(local_d0);
      CowData<char32_t>::_unref(local_e0);
      CowData<char32_t>::_unref(local_f0);
      CowData<char32_t>::_unref(local_100);
      CowData<char32_t>::_unref(local_108);
      CowData<char32_t>::_unref(local_110);
      CowData<char32_t>::_unref(local_118);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref(local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_2c8);
      local_2b8 = local_2b8 + -0x78;
      local_210 = local_210 + -2;
      if (local_2c0 == 0) goto LAB_001024b2;
      local_2c0 = local_2c0 + -1;
    } while( true );
  }
  goto LAB_00102b22;
LAB_00102440:
  DocData::PropertyDoc::~PropertyDoc(local_138);
  introsort(local_2e8,local_2d8,param_3,(long)pPVar10);
  lVar6 = local_2e8 - param_1;
  if (lVar6 < 0x11) goto LAB_00102b22;
  local_2d8 = local_2e8;
  local_2d0 = (PropertyDoc *)lVar6;
  if (pPVar10 == (PropertyDoc *)0x0) goto LAB_00102b5d;
  goto LAB_0010209c;
LAB_001024b2:
  local_2d0 = param_3 + local_2e8 * 0x78 + -0x78;
  local_2e0 = (local_2e8 + -1) - param_1;
  do {
    lVar6 = local_2e0;
    DocData::PropertyDoc::PropertyDoc(local_1b8,local_2d0);
    DocData::PropertyDoc::operator=(local_2d0,param_3 + param_1 * 0x78);
    DocData::PropertyDoc::PropertyDoc(local_2c8,local_1b8);
    if (local_2e0 < 3) {
      lVar5 = 0;
      lVar7 = 2;
      pCVar9 = (CowData<char32_t> *)(param_3 + param_1 * 0x78);
    }
    else {
      local_2e8 = 0;
      lVar7 = 2;
      do {
        cVar3 = String::naturalcasecmp_to((String *)(param_3 + (param_1 + lVar7) * 0x78));
        lVar5 = lVar7 + -1;
        lVar8 = lVar7;
        pCVar9 = (CowData<char32_t> *)(param_3 + (param_1 + lVar7 + -1) * 0x78);
        if (-1 < cVar3) {
          lVar8 = lVar7 + 1;
          lVar5 = lVar7;
          pCVar9 = (CowData<char32_t> *)(param_3 + (param_1 + lVar7) * 0x78);
        }
        this = (CowData<char32_t> *)(param_3 + (local_2e8 + param_1) * 0x78);
        if (*(long *)this != *(long *)pCVar9) {
          CowData<char32_t>::_ref(this,(CowData *)pCVar9);
        }
        if (*(long *)(this + 8) != *(long *)((CowData *)pCVar9 + 8)) {
          CowData<char32_t>::_ref(this + 8,(CowData *)pCVar9 + 8);
        }
        if (*(long *)(this + 0x10) != *(long *)((CowData *)pCVar9 + 0x10)) {
          CowData<char32_t>::_ref(this + 0x10,(CowData *)pCVar9 + 0x10);
        }
        this[0x18] = *(CowData<char32_t> *)((CowData *)pCVar9 + 0x18);
        if (*(long *)(this + 0x20) != *(long *)((CowData *)pCVar9 + 0x20)) {
          CowData<char32_t>::_ref(this + 0x20,(CowData *)pCVar9 + 0x20);
        }
        if (*(long *)(this + 0x28) != *(long *)((CowData *)pCVar9 + 0x28)) {
          CowData<char32_t>::_ref(this + 0x28,(CowData *)pCVar9 + 0x28);
        }
        if (*(long *)(this + 0x30) != *(long *)((CowData *)pCVar9 + 0x30)) {
          CowData<char32_t>::_ref(this + 0x30,(CowData *)pCVar9 + 0x30);
        }
        if (*(long *)(this + 0x38) != *(long *)((CowData *)pCVar9 + 0x38)) {
          CowData<char32_t>::_ref(this + 0x38,(CowData *)pCVar9 + 0x38);
        }
        this[0x40] = *(CowData<char32_t> *)((CowData *)pCVar9 + 0x40);
        if (*(long *)(this + 0x48) != *(long *)((CowData *)pCVar9 + 0x48)) {
          CowData<char32_t>::_ref(this + 0x48,(CowData *)pCVar9 + 0x48);
        }
        this[0x50] = *(CowData<char32_t> *)((CowData *)pCVar9 + 0x50);
        if (*(long *)(this + 0x58) != *(long *)((CowData *)pCVar9 + 0x58)) {
          CowData<char32_t>::_ref(this + 0x58,(CowData *)pCVar9 + 0x58);
        }
        this[0x60] = *(CowData<char32_t> *)((CowData *)pCVar9 + 0x60);
        if (*(long *)(this + 0x68) != *(long *)((CowData *)pCVar9 + 0x68)) {
          CowData<char32_t>::_ref(this + 0x68,(CowData *)pCVar9 + 0x68);
        }
        if (*(long *)(this + 0x70) != *(long *)((CowData *)pCVar9 + 0x70)) {
          CowData<char32_t>::_ref(this + 0x70,(CowData *)pCVar9 + 0x70);
        }
        lVar7 = lVar8 * 2;
        local_2e8 = lVar5;
      } while (lVar7 < local_2e0);
    }
    if (local_2e0 == lVar7) {
      lVar7 = param_1 + local_2e0 + -1;
      lVar5 = local_2e0 + -2 >> 1;
      DocData::PropertyDoc::operator=((PropertyDoc *)pCVar9,param_3 + lVar7 * 0x78);
      DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_b8,local_2c8);
LAB_0010293b:
      while( true ) {
        pSVar2 = (String *)(param_3 + (param_1 + lVar5) * 0x78);
        cVar3 = String::naturalcasecmp_to(pSVar2);
        pCVar9 = (CowData<char32_t> *)(param_3 + lVar7 * 0x78);
        if (-1 < cVar3) break;
        if (*(long *)pCVar9 != *(long *)pSVar2) {
          CowData<char32_t>::_ref(pCVar9,(CowData *)pSVar2);
        }
        if (*(long *)(pCVar9 + 8) != *(long *)(pSVar2 + 8)) {
          CowData<char32_t>::_ref(pCVar9 + 8,(CowData *)(pSVar2 + 8));
        }
        if (*(long *)(pCVar9 + 0x10) != *(long *)(pSVar2 + 0x10)) {
          CowData<char32_t>::_ref(pCVar9 + 0x10,(CowData *)(pSVar2 + 0x10));
        }
        *(String *)(pCVar9 + 0x18) = pSVar2[0x18];
        if (*(long *)(pCVar9 + 0x20) != *(long *)(pSVar2 + 0x20)) {
          CowData<char32_t>::_ref(pCVar9 + 0x20,(CowData *)(pSVar2 + 0x20));
        }
        if (*(long *)(pCVar9 + 0x28) != *(long *)(pSVar2 + 0x28)) {
          CowData<char32_t>::_ref(pCVar9 + 0x28,(CowData *)(pSVar2 + 0x28));
        }
        if (*(long *)(pCVar9 + 0x30) != *(long *)(pSVar2 + 0x30)) {
          CowData<char32_t>::_ref(pCVar9 + 0x30,(CowData *)(pSVar2 + 0x30));
        }
        if (*(long *)(pCVar9 + 0x38) != *(long *)(pSVar2 + 0x38)) {
          CowData<char32_t>::_ref(pCVar9 + 0x38,(CowData *)(pSVar2 + 0x38));
        }
        *(String *)(pCVar9 + 0x40) = pSVar2[0x40];
        if (*(long *)(pCVar9 + 0x48) != *(long *)(pSVar2 + 0x48)) {
          CowData<char32_t>::_ref(pCVar9 + 0x48,(CowData *)(pSVar2 + 0x48));
        }
        *(String *)(pCVar9 + 0x50) = pSVar2[0x50];
        if (*(long *)(pCVar9 + 0x58) != *(long *)(pSVar2 + 0x58)) {
          CowData<char32_t>::_ref(pCVar9 + 0x58,(CowData *)(pSVar2 + 0x58));
        }
        *(String *)(pCVar9 + 0x60) = pSVar2[0x60];
        if (*(long *)(pCVar9 + 0x68) != *(long *)(pSVar2 + 0x68)) {
          CowData<char32_t>::_ref(pCVar9 + 0x68,(CowData *)(pSVar2 + 0x68));
        }
        if (*(long *)(pCVar9 + 0x70) != *(long *)(pSVar2 + 0x70)) {
          CowData<char32_t>::_ref(pCVar9 + 0x70,(CowData *)(pSVar2 + 0x70));
        }
        pCVar9 = (CowData<char32_t> *)pSVar2;
        if (lVar5 == 0) break;
        lVar7 = param_1 + lVar5;
        lVar5 = (lVar5 + -1) / 2;
      }
    }
    else {
      DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_b8,local_2c8);
      if (lVar5 != 0) {
        lVar7 = lVar5 + param_1;
        lVar5 = (lVar5 + -1) / 2;
        goto LAB_0010293b;
      }
    }
    local_2e8 = local_2e0 + -1;
    DocData::PropertyDoc::operator=((PropertyDoc *)pCVar9,(PropertyDoc *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref(local_c8);
    CowData<char32_t>::_unref(local_d0);
    CowData<char32_t>::_unref(local_e0);
    CowData<char32_t>::_unref(local_f0);
    CowData<char32_t>::_unref(local_100);
    CowData<char32_t>::_unref(local_108);
    CowData<char32_t>::_unref(local_110);
    CowData<char32_t>::_unref(local_118);
    CowData<char32_t>::_unref(local_128);
    CowData<char32_t>::_unref(local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_2c8);
    CowData<char32_t>::_unref(local_148);
    CowData<char32_t>::_unref(local_150);
    CowData<char32_t>::_unref(local_160);
    CowData<char32_t>::_unref(local_170);
    CowData<char32_t>::_unref(local_180);
    CowData<char32_t>::_unref(local_188);
    CowData<char32_t>::_unref(local_190);
    CowData<char32_t>::_unref(local_198);
    CowData<char32_t>::_unref(local_1a8);
    CowData<char32_t>::_unref(local_1b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
    local_2d0 = local_2d0 + -0x78;
    local_2e0 = local_2e8;
  } while (1 < lVar6);
LAB_00102b22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<DocData::PropertyDoc, _DefaultComparator<DocData::PropertyDoc>,
   true>::sort(DocData::PropertyDoc*, long) const [clone .part.0] [clone .isra.0] */

void SortArray<DocData::PropertyDoc,_DefaultComparator<DocData::PropertyDoc>,true>::sort
               (PropertyDoc *param_1,long param_2)

{
  CowData *pCVar1;
  PropertyDoc *this;
  char cVar2;
  long lVar3;
  CowData *pCVar4;
  PropertyDoc *pPVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  PropertyDoc *pPVar7;
  CowData<char32_t> *pCVar8;
  long in_FS_OFFSET;
  PropertyDoc *local_158;
  PropertyDoc local_138 [128];
  PropertyDoc local_b8 [8];
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [16];
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [16];
  CowData<char32_t> local_70 [16];
  CowData<char32_t> local_60 [16];
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      introsort(0,1,param_1,0);
      return;
    }
  }
  else {
    lVar3 = 0;
    lVar6 = param_2;
    do {
      lVar6 = lVar6 >> 1;
      lVar3 = lVar3 + 1;
    } while (lVar6 != 1);
    introsort(0,param_2,param_1,lVar3 * 2);
    if (param_2 < 0x11) {
      if (param_2 != 0) {
        lVar6 = 1;
        pCVar8 = (CowData<char32_t> *)(param_1 + 0x78);
        do {
          DocData::PropertyDoc::PropertyDoc(local_b8,(PropertyDoc *)pCVar8);
          cVar2 = String::naturalcasecmp_to((String *)local_b8);
          pCVar4 = (CowData *)pCVar8;
          if (cVar2 < '\0') {
            do {
              pCVar1 = (CowData *)((CowData<char32_t> *)pCVar4 + -0x78);
              if (*(long *)pCVar4 != *(long *)((CowData<char32_t> *)pCVar4 + -0x78)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pCVar4,pCVar1);
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 8) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x70)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 8,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x70));
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x10) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x68)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x10,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x68));
              }
              ((CowData<char32_t> *)pCVar4)[0x18] = ((CowData<char32_t> *)pCVar4)[-0x60];
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x20) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x58)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x20,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x58));
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x28) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x50)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x28,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x50));
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x30) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x48)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x30,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x48));
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x38) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x40)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x38,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x40));
              }
              ((CowData<char32_t> *)pCVar4)[0x40] = ((CowData<char32_t> *)pCVar4)[-0x38];
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x48) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x30)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x48,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x30));
              }
              ((CowData<char32_t> *)pCVar4)[0x50] = ((CowData<char32_t> *)pCVar4)[-0x28];
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x58) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x20)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x58,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x20));
              }
              ((CowData<char32_t> *)pCVar4)[0x60] = ((CowData<char32_t> *)pCVar4)[-0x18];
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x68) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -0x10)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x68,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -0x10));
              }
              if (*(long *)((CowData<char32_t> *)pCVar4 + 0x70) !=
                  *(long *)((CowData<char32_t> *)pCVar4 + -8)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar4 + 0x70,
                           (CowData *)((CowData<char32_t> *)pCVar4 + -8));
              }
              pCVar4 = pCVar1;
            } while (pCVar1 != (CowData *)param_1);
            DocData::PropertyDoc::operator=(param_1,local_b8);
          }
          else {
            DocData::PropertyDoc::PropertyDoc(local_138,local_b8);
            while( true ) {
              this_00 = (CowData<char32_t> *)pCVar4;
              pCVar4 = (CowData *)(this_00 + -0x78);
              cVar2 = String::naturalcasecmp_to((String *)local_138);
              if (-1 < cVar2) break;
              if (this_00 == (CowData<char32_t> *)(param_1 + 0x78)) {
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                break;
              }
              if (*(long *)this_00 != *(long *)(this_00 + -0x78)) {
                CowData<char32_t>::_ref(this_00,pCVar4);
              }
              if (*(long *)(this_00 + 8) != *(long *)(this_00 + -0x70)) {
                CowData<char32_t>::_ref(this_00 + 8,(CowData *)(this_00 + -0x70));
              }
              if (*(long *)(this_00 + 0x10) != *(long *)(this_00 + -0x68)) {
                CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)(this_00 + -0x68));
              }
              this_00[0x18] = this_00[-0x60];
              if (*(long *)(this_00 + 0x20) != *(long *)(this_00 + -0x58)) {
                CowData<char32_t>::_ref(this_00 + 0x20,(CowData *)(this_00 + -0x58));
              }
              if (*(long *)(this_00 + 0x28) != *(long *)(this_00 + -0x50)) {
                CowData<char32_t>::_ref(this_00 + 0x28,(CowData *)(this_00 + -0x50));
              }
              if (*(long *)(this_00 + 0x30) != *(long *)(this_00 + -0x48)) {
                CowData<char32_t>::_ref(this_00 + 0x30,(CowData *)(this_00 + -0x48));
              }
              if (*(long *)(this_00 + 0x38) != *(long *)(this_00 + -0x40)) {
                CowData<char32_t>::_ref(this_00 + 0x38,(CowData *)(this_00 + -0x40));
              }
              this_00[0x40] = this_00[-0x38];
              if (*(long *)(this_00 + 0x48) != *(long *)(this_00 + -0x30)) {
                CowData<char32_t>::_ref(this_00 + 0x48,(CowData *)(this_00 + -0x30));
              }
              this_00[0x50] = this_00[-0x28];
              if (*(long *)(this_00 + 0x58) != *(long *)(this_00 + -0x20)) {
                CowData<char32_t>::_ref(this_00 + 0x58,(CowData *)(this_00 + -0x20));
              }
              this_00[0x60] = this_00[-0x18];
              if (*(long *)(this_00 + 0x68) != *(long *)(this_00 + -0x10)) {
                CowData<char32_t>::_ref(this_00 + 0x68,(CowData *)(this_00 + -0x10));
              }
              if (*(long *)(this_00 + 0x70) != *(long *)(this_00 + -8)) {
                CowData<char32_t>::_ref(this_00 + 0x70,(CowData *)(this_00 + -8));
              }
            }
            DocData::PropertyDoc::operator=((PropertyDoc *)this_00,local_138);
            DocData::PropertyDoc::~PropertyDoc(local_138);
          }
          lVar6 = lVar6 + 1;
          pCVar8 = (CowData<char32_t> *)((PropertyDoc *)pCVar8 + 0x78);
          CowData<char32_t>::_unref(local_48);
          CowData<char32_t>::_unref(local_50);
          CowData<char32_t>::_unref(local_60);
          CowData<char32_t>::_unref(local_70);
          CowData<char32_t>::_unref(local_80);
          CowData<char32_t>::_unref(local_88);
          CowData<char32_t>::_unref(local_90);
          CowData<char32_t>::_unref(local_98);
          CowData<char32_t>::_unref(local_a8);
          CowData<char32_t>::_unref(local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        } while (param_2 != lVar6);
      }
    }
    else {
      lVar6 = 1;
      pPVar7 = param_1 + 0x78;
      do {
        DocData::PropertyDoc::PropertyDoc(local_b8,pPVar7);
        cVar2 = String::naturalcasecmp_to((String *)local_b8);
        pCVar4 = (CowData *)pPVar7;
        if (cVar2 < '\0') {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar4 + -0x78);
            if (*(long *)pCVar4 != *(long *)((CowData<char32_t> *)pCVar4 + -0x78)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar4,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x70)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x70));
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x68)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x68));
            }
            ((CowData<char32_t> *)pCVar4)[0x18] = ((CowData<char32_t> *)pCVar4)[-0x60];
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x20) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x58)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x20,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x58));
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x28) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x50)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x28,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x50));
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x30) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x30,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x48));
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x38) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x38,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x40));
            }
            ((CowData<char32_t> *)pCVar4)[0x40] = ((CowData<char32_t> *)pCVar4)[-0x38];
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x48) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x30)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x48,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x30));
            }
            ((CowData<char32_t> *)pCVar4)[0x50] = ((CowData<char32_t> *)pCVar4)[-0x28];
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x58) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x20)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x58,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x20));
            }
            ((CowData<char32_t> *)pCVar4)[0x60] = ((CowData<char32_t> *)pCVar4)[-0x18];
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x68) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x68,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar4 + 0x70) !=
                *(long *)((CowData<char32_t> *)pCVar4 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar4 + 0x70,
                         (CowData *)((CowData<char32_t> *)pCVar4 + -8));
            }
            pCVar4 = pCVar1;
          } while (pCVar1 != (CowData *)param_1);
          DocData::PropertyDoc::operator=(param_1,local_b8);
        }
        else {
          DocData::PropertyDoc::PropertyDoc(local_138,local_b8);
          this = pPVar7;
          while( true ) {
            pPVar5 = this + -0x78;
            cVar2 = String::naturalcasecmp_to((String *)local_138);
            if (-1 < cVar2) break;
            if (pPVar5 == param_1) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            DocData::PropertyDoc::operator=(this,pPVar5);
            this = pPVar5;
          }
          DocData::PropertyDoc::operator=(this,local_138);
          DocData::PropertyDoc::~PropertyDoc(local_138);
        }
        lVar6 = lVar6 + 1;
        pPVar7 = pPVar7 + 0x78;
        CowData<char32_t>::_unref(local_48);
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref(local_98);
        CowData<char32_t>::_unref(local_a8);
        CowData<char32_t>::_unref(local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      } while (lVar6 != 0x10);
      local_158 = param_1 + 0x780;
      lVar6 = 0x10;
      do {
        DocData::PropertyDoc::PropertyDoc(local_b8,local_158);
        pCVar4 = (CowData *)local_158;
        while( true ) {
          pCVar8 = (CowData<char32_t> *)pCVar4;
          pCVar4 = (CowData *)(pCVar8 + -0x78);
          cVar2 = String::naturalcasecmp_to((String *)local_b8);
          if (-1 < cVar2) break;
          if (pCVar8 == (CowData<char32_t> *)(param_1 + 0x78)) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          if (*(long *)pCVar8 != *(long *)(pCVar8 + -0x78)) {
            CowData<char32_t>::_ref(pCVar8,pCVar4);
          }
          if (*(long *)(pCVar8 + 8) != *(long *)(pCVar8 + -0x70)) {
            CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)(pCVar8 + -0x70));
          }
          if (*(long *)(pCVar8 + 0x10) != *(long *)(pCVar8 + -0x68)) {
            CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)(pCVar8 + -0x68));
          }
          pCVar8[0x18] = pCVar8[-0x60];
          if (*(long *)(pCVar8 + 0x20) != *(long *)(pCVar8 + -0x58)) {
            CowData<char32_t>::_ref(pCVar8 + 0x20,(CowData *)(pCVar8 + -0x58));
          }
          if (*(long *)(pCVar8 + 0x28) != *(long *)(pCVar8 + -0x50)) {
            CowData<char32_t>::_ref(pCVar8 + 0x28,(CowData *)(pCVar8 + -0x50));
          }
          if (*(long *)(pCVar8 + 0x30) != *(long *)(pCVar8 + -0x48)) {
            CowData<char32_t>::_ref(pCVar8 + 0x30,(CowData *)(pCVar8 + -0x48));
          }
          if (*(long *)(pCVar8 + 0x38) != *(long *)(pCVar8 + -0x40)) {
            CowData<char32_t>::_ref(pCVar8 + 0x38,(CowData *)(pCVar8 + -0x40));
          }
          pCVar8[0x40] = pCVar8[-0x38];
          if (*(long *)(pCVar8 + 0x48) != *(long *)(pCVar8 + -0x30)) {
            CowData<char32_t>::_ref(pCVar8 + 0x48,(CowData *)(pCVar8 + -0x30));
          }
          pCVar8[0x50] = pCVar8[-0x28];
          if (*(long *)(pCVar8 + 0x58) != *(long *)(pCVar8 + -0x20)) {
            CowData<char32_t>::_ref(pCVar8 + 0x58,(CowData *)(pCVar8 + -0x20));
          }
          pCVar8[0x60] = pCVar8[-0x18];
          if (*(long *)(pCVar8 + 0x68) != *(long *)(pCVar8 + -0x10)) {
            CowData<char32_t>::_ref(pCVar8 + 0x68,(CowData *)(pCVar8 + -0x10));
          }
          if (*(long *)(pCVar8 + 0x70) != *(long *)(pCVar8 + -8)) {
            CowData<char32_t>::_ref(pCVar8 + 0x70,(CowData *)(pCVar8 + -8));
          }
        }
        lVar6 = lVar6 + 1;
        DocData::PropertyDoc::operator=((PropertyDoc *)pCVar8,local_b8);
        CowData<char32_t>::_unref(local_48);
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref(local_98);
        CowData<char32_t>::_unref(local_a8);
        CowData<char32_t>::_unref(local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        local_158 = local_158 + 0x78;
      } while (param_2 != lVar6);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DocTools::save_classes(String const&, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&, bool) */

undefined8 __thiscall
DocTools::save_classes(DocTools *this,String *param_1,HashMap *param_2,bool param_3)

{
  String *pSVar1;
  CowData *pCVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  code *pcVar21;
  Object *pOVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  bool bVar30;
  char *pcVar31;
  bool bVar32;
  bool bVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long in_FS_OFFSET;
  String *local_248;
  String *local_238;
  CowData<char32_t> *local_230;
  CowData<char32_t> *local_218;
  CowData<char32_t> *local_210;
  CowData<char32_t> *local_1f8;
  CowData *local_1c0;
  int local_14c;
  long local_148;
  String local_140 [8];
  Ref *local_138;
  String local_130 [8];
  long local_128;
  undefined8 local_120;
  CowData<char32_t> local_118 [8];
  String local_110 [8];
  undefined8 local_108;
  String local_100 [8];
  CowData<char32_t> local_f8 [8];
  String local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  CowData<char32_t> local_d8 [8];
  String local_d0 [8];
  undefined8 local_c8;
  String local_c0 [8];
  CowData<char32_t> local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  String local_a0 [8];
  undefined8 local_98;
  String local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = *(undefined8 **)(this + 0x20);
joined_r0x00105519:
  if (puVar4 == (undefined8 *)0x0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  local_148 = 0;
  pSVar1 = (String *)(puVar4 + 3);
  lVar27 = *(long *)(param_2 + 8);
  if ((*(long *)(param_2 + 8) != 0) && (lVar27 = 0, *(int *)(param_2 + 0x2c) != 0)) {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar29 = CONCAT44(0,uVar3);
    lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar24 = String::hash();
    lVar37 = *(long *)(param_2 + 0x10);
    uVar26 = 1;
    if (uVar24 != 0) {
      uVar26 = uVar24;
    }
    uVar38 = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar26 * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar29;
    lVar28 = SUB168(auVar5 * auVar13,8);
    uVar24 = *(uint *)(lVar37 + lVar28 * 4);
    iVar25 = SUB164(auVar5 * auVar13,8);
    lVar27 = local_148;
    if (uVar24 != 0) {
      do {
        if (uVar24 == uVar26) {
          cVar23 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_2 + 8) + lVar28 * 8) + 0x10),pSVar1
                                     );
          if (cVar23 != '\0') {
            if ((*(long *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x2c) == 0)) goto LAB_00107630;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
            uVar35 = CONCAT44(0,uVar3);
            lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
            uVar26 = String::hash();
            lVar34 = *(long *)(param_2 + 0x10);
            uVar29 = 1;
            if (uVar26 != 0) {
              uVar29 = (ulong)uVar26;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar29 * lVar27;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar35;
            lVar37 = SUB168(auVar9 * auVar17,8);
            uVar26 = *(uint *)(lVar34 + lVar37 * 4);
            uVar24 = SUB164(auVar9 * auVar17,8);
            if (uVar26 == 0) goto LAB_00107630;
            uVar38 = 0;
            goto LAB_00106b96;
          }
          lVar37 = *(long *)(param_2 + 0x10);
        }
        uVar38 = uVar38 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar25 + 1) * lVar34;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar29;
        lVar28 = SUB168(auVar6 * auVar14,8);
        uVar24 = *(uint *)(lVar37 + lVar28 * 4);
        iVar25 = SUB164(auVar6 * auVar14,8);
        lVar27 = local_148;
      } while ((uVar24 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar24 * lVar34, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar29, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar3 + iVar25) - SUB164(auVar7 * auVar15,8)) * lVar34,
              auVar16._8_8_ = 0, auVar16._0_8_ = uVar29, uVar38 <= SUB164(auVar8 * auVar16,8)));
    }
  }
  if (*(long *)param_1 != lVar27) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)param_1);
  }
  goto LAB_00105665;
LAB_00106b96:
  if (uVar26 == (uint)uVar29) {
    cVar23 = String::operator==((String *)(*(long *)(*(long *)(param_2 + 8) + lVar37 * 8) + 0x10),
                                pSVar1);
    if (cVar23 != '\0') goto LAB_00108155;
    lVar34 = *(long *)(param_2 + 0x10);
  }
  uVar38 = uVar38 + 1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)(uVar24 + 1) * lVar27;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar35;
  lVar37 = SUB168(auVar10 * auVar18,8);
  uVar26 = *(uint *)(lVar34 + lVar37 * 4);
  uVar24 = SUB164(auVar10 * auVar18,8);
  if ((uVar26 == 0) ||
     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar26 * lVar27, auVar19._8_8_ = 0,
     auVar19._0_8_ = uVar35, auVar12._8_8_ = 0,
     auVar12._0_8_ = (ulong)((uVar3 + uVar24) - SUB164(auVar11 * auVar19,8)) * lVar27,
     auVar20._8_8_ = 0, auVar20._0_8_ = uVar35, SUB164(auVar12 * auVar20,8) < uVar38)) {
LAB_00107630:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar21 = (code *)invalidInstructionException();
    (*pcVar21)();
  }
  goto LAB_00106b96;
LAB_00108155:
  lVar27 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar24 * 8);
  if (local_148 != *(long *)(lVar27 + 0x18)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(lVar27 + 0x18));
  }
LAB_00105665:
  local_1f8 = (CowData<char32_t> *)&local_148;
  local_68 = 0;
  String::parse_latin1((String *)&local_68,".xml");
  String::replace((char *)&local_78,(char *)pSVar1);
  String::replace((char *)&local_70,(char *)&local_78);
  String::operator+((String *)&local_58,(String *)&local_70);
  String::path_join(local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  FileAccess::open((String *)&local_138,(int)local_140,(Error *)0x2);
  if (local_14c == 0) {
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"<?xml version=\"1.0\" encoding=\"UTF-8\" ?>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,0,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"\"");
    bVar32 = SUB81((CowData<char32_t> *)&local_70,0);
    String::xml_escape(bVar32);
    operator+((char *)&local_68,(String *)"<class name=\"");
    String::operator+(local_130,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    bVar30 = SUB81((CowData<char32_t> *)&local_78,0);
    if ((puVar4[4] != 0) && (1 < *(uint *)(puVar4[4] + -8))) {
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"\"");
      String::xml_escape(bVar30);
      operator+((char *)&local_70,(String *)" inherits=\"");
      String::operator+((String *)&local_58,(String *)&local_70);
      String::operator+=(local_130,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (*(char *)(puVar4 + 0x20) != '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"\"");
        String::xml_escape(bVar30);
        operator+((char *)&local_70,(String *)" deprecated=\"");
        String::operator+((String *)&local_58,(String *)&local_70);
        String::operator+=(local_130,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      if (*(char *)(puVar4 + 0x22) != '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"\"");
        String::xml_escape(bVar30);
        operator+((char *)&local_70,(String *)" experimental=\"");
        String::operator+((String *)&local_58,(String *)&local_70);
        String::operator+=(local_130,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
    if ((puVar4[7] != 0) && (1 < *(uint *)(puVar4[7] + -8))) {
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"\"");
      String::xml_escape(bVar30);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," keywords=\"");
      String::operator+((String *)&local_70,(String *)&local_80);
      String::operator+((String *)&local_58,(String *)&local_70);
      String::operator+=(local_130,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    local_128 = 0;
    if (param_3) {
      iVar25 = String::find((char *)local_1f8,0x11bc6a);
      pcVar31 = "../class.xsd";
      if (iVar25 != -1) {
        pcVar31 = "../../../doc/class.xsd";
      }
      String::parse_latin1((String *)&local_128,pcVar31);
    }
    else {
      String::parse_latin1
                ((String *)&local_128,
                 "https://raw.githubusercontent.com/godotengine/godot/master/doc/class.xsd");
    }
    local_1c0 = (CowData *)&local_128;
    local_68 = 0;
    if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_1c0);
    }
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,
               " xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:noNamespaceSchemaLocation=\"%s\">"
              );
    vformat<String>((String *)&local_58,(CowData<char32_t> *)&local_70,(String *)&local_68);
    String::operator+=(local_130,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    local_58 = (Object *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
    _write_string((String *)&local_58,0,local_130);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"<brief_description>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _translate_doc_string((String *)&local_78);
    String::strip_edges(bVar32,bVar30);
    bVar33 = SUB81((String *)&local_68,0);
    String::xml_escape(bVar33);
    local_58 = (Object *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
    _write_string((String *)&local_58,2,(String *)&local_68);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"</brief_description>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"<description>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _translate_doc_string((String *)&local_78);
    String::strip_edges(bVar32,bVar30);
    String::xml_escape(bVar33);
    local_58 = (Object *)0x0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
    _write_string((String *)&local_58,2,(String *)&local_68);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"</description>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"<tutorials>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    lVar27 = puVar4[9];
    for (lVar34 = 0; (lVar27 != 0 && (lVar34 < *(long *)(lVar27 + -8))); lVar34 = lVar34 + 1) {
      local_68 = 0;
      pCVar2 = (CowData *)(lVar27 + lVar34 * 0x10);
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar2);
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2 + 8);
      if ((local_60 == 0) || (*(uint *)(local_60 + -8) < 2)) {
        local_a8 = 0;
        local_58 = (Object *)&_LC8;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_a8);
      }
      else {
        local_58 = (Object *)&_LC43;
        local_70 = 0;
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_70);
        _translate_doc_string((String *)&local_80);
        String::xml_escape(bVar30);
        operator+((char *)&local_58,(String *)" title=\"");
        String::operator+((String *)&local_a8,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      local_78 = 0;
      local_58 = (Object *)0x11bcca;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_78);
      String::xml_escape(SUB81((CowData<char32_t> *)&local_88,0));
      local_98 = 0;
      local_58 = (Object *)&_LC48;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_98);
      operator+((char *)local_a0,(String *)"<link");
      String::operator+(local_90,local_a0);
      String::operator+((String *)&local_80,local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      local_58 = (Object *)0x0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
      _write_string((String *)&local_58,2,(CowData<char32_t> *)&local_70);
      pOVar22 = local_58;
      if (((local_58 != (Object *)0x0) && (cVar23 = RefCounted::unreference(), cVar23 != '\0')) &&
         (cVar23 = predelete_handler(pOVar22), cVar23 != '\0')) {
        (**(code **)(*(long *)pOVar22 + 0x140))();
        Memory::free_static(pOVar22,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar27 = puVar4[9];
    }
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"</tutorials>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,1,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"constructor");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    if (puVar4[0xb] != 0) {
      _write_method_doc((String *)&local_68,(String *)&local_58,puVar4 + 10);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"method");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    if (puVar4[0xd] != 0) {
      _write_method_doc((String *)&local_68,(String *)&local_58,puVar4 + 0xc);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (puVar4[0x1b] != 0) {
      lVar37 = 0;
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"<members>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar27 = puVar4[0x1b];
      for (lVar34 = 0; (lVar27 != 0 && (lVar34 < *(long *)(lVar27 + -8))); lVar34 = lVar34 + 1) {
        lVar28 = *(long *)(lVar27 + 0x10 + lVar37);
        local_120 = 0;
        if ((lVar28 == 0) || (*(uint *)(lVar28 + -8) < 2)) {
LAB_00106440:
          if (lVar27 == 0) goto LAB_00106a88;
          lVar28 = *(long *)(lVar27 + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
        }
        else {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x1b] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x1b] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" enum=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_120,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x1b];
          if (lVar27 == 0) goto LAB_00106a88;
          lVar28 = *(long *)(lVar27 + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          if (*(char *)(lVar27 + 0x18 + lVar37) != '\0') {
            String::operator+=((String *)&local_120," is_bitfield=\"true\"");
            lVar27 = puVar4[0x1b];
            goto LAB_00106440;
          }
        }
        lVar28 = *(long *)(lVar27 + 0x38 + lVar37);
        if ((lVar28 != 0) && (1 < *(uint *)(lVar28 + -8))) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x1b] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x1b] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" default=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_120,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x1b];
          if (lVar27 == 0) goto LAB_00106a88;
        }
        lVar28 = *(long *)(lVar27 + -8);
        if (lVar28 <= lVar34) goto LAB_00106a8e;
        if (*(char *)(lVar27 + 0x50 + lVar37) != '\0') {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x1b] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x1b] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" deprecated=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_120,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x1b];
          if (lVar27 == 0) goto LAB_00106a88;
        }
        lVar28 = *(long *)(lVar27 + -8);
        if (lVar28 <= lVar34) goto LAB_00106a8e;
        if (*(char *)(lVar27 + 0x60 + lVar37) != '\0') {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x1b] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x1b] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" experimental=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_120,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x1b];
          if (lVar27 == 0) goto LAB_00106a88;
        }
        lVar28 = *(long *)(lVar27 + -8);
        if (lVar28 <= lVar34) goto LAB_00106a8e;
        lVar28 = *(long *)(lVar27 + 0x70 + lVar37);
        if ((lVar28 != 0) && (1 < *(uint *)(lVar28 + -8))) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x1b] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x1b] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          local_80 = 0;
          String::parse_latin1((String *)&local_80," keywords=\"");
          String::operator+((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_120,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x1b];
          if (lVar27 == 0) goto LAB_00106a88;
        }
        lVar28 = *(long *)(lVar27 + -8);
        if (lVar28 <= lVar34) goto LAB_00106a8e;
        local_70 = 0;
        if (*(char *)(lVar27 + lVar37 + 0x40) == '\0') {
          String::parse_latin1((String *)&local_70,">");
          local_88 = 0;
          String::parse_latin1((String *)&local_88,"\"");
          String::xml_escape(SUB81((CowData<char32_t> *)&local_98,0));
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"\" getter=\"");
          String::xml_escape(SUB81(local_b8,0));
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"\" setter=\"");
          String::xml_escape(SUB81(local_d8,0));
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"\" type=\"");
          String::xml_escape(SUB81(local_f8,0));
          operator+((char *)local_f0,(String *)"<member name=\"");
          String::operator+((String *)&local_e0,local_f0);
          String::operator+(local_d0,(String *)&local_e0);
          String::operator+(local_c0,local_d0);
          String::operator+(local_b0,local_c0);
          String::operator+(local_a0,local_b0);
          String::operator+(local_90,local_a0);
          String::operator+((String *)&local_80,local_90);
          String::operator+((String *)&local_78,(String *)&local_80);
          String::operator+((String *)&local_68,(String *)&local_78);
          local_58 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
          _write_string((String *)&local_58,2,(String *)&local_68);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
          CowData<char32_t>::_unref(local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref(local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref(local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          _translate_doc_string((String *)&local_78);
          String::strip_edges(bVar32,bVar30);
          String::xml_escape(bVar33);
          local_58 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
          _write_string((String *)&local_58,3,(String *)&local_68);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          local_58 = (Object *)0x0;
          String::parse_latin1((String *)&local_58,"</member>");
          local_68 = 0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
          _write_string((String *)&local_68,2,(String *)&local_58);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        }
        else {
          String::parse_latin1((String *)&local_70," />");
          local_88 = 0;
          String::parse_latin1((String *)&local_88,"\"");
          String::xml_escape(SUB81((CowData<char32_t> *)&local_98,0));
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"\" overrides=\"");
          String::xml_escape(SUB81(local_b8,0));
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"\" getter=\"");
          String::xml_escape(SUB81(local_d8,0));
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"\" setter=\"");
          String::xml_escape(SUB81(local_f8,0));
          local_108 = 0;
          String::parse_latin1((String *)&local_108,"\" type=\"");
          String::xml_escape(SUB81(local_118,0));
          operator+((char *)local_110,(String *)"<member name=\"");
          String::operator+(local_100,local_110);
          String::operator+(local_f0,local_100);
          String::operator+((String *)&local_e0,local_f0);
          String::operator+(local_d0,(String *)&local_e0);
          String::operator+(local_c0,local_d0);
          String::operator+(local_b0,local_c0);
          String::operator+(local_a0,local_b0);
          String::operator+(local_90,local_a0);
          String::operator+((String *)&local_80,local_90);
          String::operator+((String *)&local_78,(String *)&local_80);
          String::operator+((String *)&local_68,(String *)&local_78);
          local_58 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
          _write_string((String *)&local_58,2,(String *)&local_68);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
          CowData<char32_t>::_unref(local_118);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          CowData<char32_t>::_unref(local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref(local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref(local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        lVar37 = lVar37 + 0x78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        lVar27 = puVar4[0x1b];
      }
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"</members>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"signal");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    if (puVar4[0x11] != 0) {
      _write_method_doc((String *)&local_68,(String *)&local_58,puVar4 + 0x10);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (puVar4[0x13] != 0) {
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"<constants>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar27 = puVar4[0x13];
      for (lVar34 = 0; (lVar27 != 0 && (lVar34 < *(long *)(lVar27 + -8))); lVar34 = lVar34 + 1) {
        local_e0 = 0;
        lVar36 = lVar34 * 0x60;
        lVar37 = lVar27 + lVar36;
        if (*(char *)(lVar37 + 0x38) != '\0') {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x13] == 0) {
LAB_00106a88:
            lVar28 = 0;
LAB_00106a8e:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar34,lVar28,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar21 = (code *)invalidInstructionException();
            (*pcVar21)();
          }
          lVar28 = *(long *)(puVar4[0x13] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" deprecated=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_e0,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x13];
        }
        if (lVar27 == 0) goto LAB_00106a88;
        lVar28 = *(long *)(lVar27 + -8);
        if (lVar28 <= lVar34) goto LAB_00106a8e;
        if (*(char *)(lVar27 + 0x48 + lVar36) != '\0') {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x13] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x13] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" experimental=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_e0,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          lVar27 = puVar4[0x13];
          if (lVar27 == 0) goto LAB_00106a88;
          lVar28 = *(long *)(lVar27 + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
        }
        lVar27 = *(long *)(lVar27 + 0x58 + lVar36);
        if ((lVar27 != 0) && (1 < *(uint *)(lVar27 + -8))) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          if (puVar4[0x13] == 0) goto LAB_00106a88;
          lVar28 = *(long *)(puVar4[0x13] + -8);
          if (lVar28 <= lVar34) goto LAB_00106a8e;
          String::xml_escape(bVar30);
          local_80 = 0;
          String::parse_latin1((String *)&local_80," keywords=\"");
          String::operator+((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=((String *)&local_e0,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        local_230 = (CowData<char32_t> *)&local_e0;
        local_238 = (String *)&local_80;
        lVar27 = *(long *)(lVar37 + 0x20);
        if (*(char *)(lVar37 + 0x10) == '\0') {
          if ((lVar27 != 0) && (1 < *(uint *)(lVar27 + -8))) {
            local_70 = 0;
            String::parse_latin1((String *)&local_70,">");
            local_88 = 0;
            String::parse_latin1((String *)&local_88,"\"");
            String::xml_escape(SUB81(&local_98,0));
            local_a8 = 0;
            String::parse_latin1((String *)&local_a8,"\" value=\"platform-dependent\" enum=\"");
            String::xml_escape(SUB81(local_b8,0));
            operator+((char *)local_b0,(String *)"<constant name=\"");
            String::operator+(local_a0,local_b0);
            String::operator+(local_90,local_a0);
            String::operator+(local_238,local_90);
            String::operator+((String *)&local_78,local_238);
            String::operator+((String *)&local_68,(String *)&local_78);
            local_58 = (Object *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
            _write_string((String *)&local_58,2,(String *)&local_68);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            CowData<char32_t>::_unref(local_b8);
            goto LAB_00106ea6;
          }
          local_70 = 0;
          String::parse_latin1((String *)&local_70,">");
          local_88 = 0;
          String::parse_latin1((String *)&local_88,"\" value=\"platform-dependent\"");
          String::xml_escape(SUB81((CowData<char32_t> *)&local_98,0));
          operator+((char *)local_90,(String *)"<constant name=\"");
          String::operator+(local_238,local_90);
          String::operator+((String *)&local_78,local_238);
          String::operator+((String *)&local_68,(String *)&local_78);
          local_58 = (Object *)0x0;
          Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
          _write_string((String *)&local_58,2,(String *)&local_68);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        else {
          if ((lVar27 == 0) || (*(uint *)(lVar27 + -8) < 2)) {
            local_70 = 0;
            String::parse_latin1((String *)&local_70,">");
            local_88 = 0;
            String::parse_latin1((String *)&local_88,"\"");
            String::xml_escape(SUB81(&local_98,0));
            local_a8 = 0;
            String::parse_latin1((String *)&local_a8,"\" value=\"");
            String::xml_escape(SUB81(local_b8,0));
            operator+((char *)local_b0,(String *)"<constant name=\"");
            String::operator+(local_a0,local_b0);
            String::operator+(local_90,local_a0);
            String::operator+(local_238,local_90);
            String::operator+((String *)&local_78,local_238);
            String::operator+((String *)&local_68,(String *)&local_78);
            local_58 = (Object *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
            _write_string((String *)&local_58,2,(String *)&local_68);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            CowData<char32_t>::_unref(local_b8);
          }
          else {
            local_70 = 0;
            if (*(char *)(lVar37 + 0x28) == '\0') {
              String::parse_latin1((String *)&local_70,">");
              pcVar31 = "\"";
            }
            else {
              String::parse_latin1((String *)&local_70,">");
              pcVar31 = "\" is_bitfield=\"true\"";
            }
            local_88 = 0;
            String::parse_latin1((String *)&local_88,pcVar31);
            String::xml_escape(SUB81(&local_98,0));
            local_a8 = 0;
            String::parse_latin1((String *)&local_a8,"\" enum=\"");
            String::xml_escape(SUB81(local_b8,0));
            local_c8 = 0;
            String::parse_latin1((String *)&local_c8,"\" value=\"");
            String::xml_escape(SUB81(local_d8,0));
            operator+((char *)local_d0,(String *)"<constant name=\"");
            String::operator+(local_c0,local_d0);
            String::operator+(local_b0,local_c0);
            String::operator+(local_a0,local_b0);
            String::operator+(local_90,local_a0);
            String::operator+(local_238,local_90);
            String::operator+((String *)&local_78,local_238);
            String::operator+((String *)&local_68,(String *)&local_78);
            local_58 = (Object *)0x0;
            Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
            _write_string((String *)&local_58,2,(String *)&local_68);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
            CowData<char32_t>::_unref(local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref(local_b8);
          }
LAB_00106ea6:
          local_210 = (CowData<char32_t> *)&local_98;
          local_218 = (CowData<char32_t> *)&local_88;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref(local_210);
          CowData<char32_t>::_unref(local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        _translate_doc_string((String *)&local_78);
        String::strip_edges(bVar32,bVar30);
        String::xml_escape(bVar33);
        local_58 = (Object *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
        _write_string((String *)&local_58,3,(String *)&local_68);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_58 = (Object *)0x0;
        String::parse_latin1((String *)&local_58,"</constant>");
        local_68 = 0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
        _write_string((String *)&local_68,2,(String *)&local_58);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref(local_230);
        lVar27 = puVar4[0x13];
      }
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"</constants>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"annotation");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    if (puVar4[0x1d] != 0) {
      _write_method_doc((String *)&local_68,(String *)&local_58,puVar4 + 0x1c);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (puVar4[0x1f] != 0) {
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"<theme_items>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar27 = puVar4[0x1f];
      for (lVar34 = 0; (lVar27 != 0 && (lVar34 < *(long *)(lVar27 + -8))); lVar34 = lVar34 + 1) {
        local_e0 = 0;
        lVar27 = lVar27 + lVar34 * 0x50;
        if (*(long *)(lVar27 + 0x40) != 0) {
          if (1 < *(uint *)(*(long *)(lVar27 + 0x40) + -8)) {
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"\"");
            String::xml_escape(bVar30);
            local_80 = 0;
            String::parse_latin1((String *)&local_80," default=\"");
            String::operator+((String *)&local_70,(String *)&local_80);
            String::operator+((String *)&local_58,(String *)&local_70);
            String::operator+=((String *)&local_e0,(String *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
        }
        local_238 = (String *)&local_e0;
        local_248 = (String *)&local_80;
        if (*(char *)(lVar27 + 0x20) == '\0') {
          cVar23 = *(char *)(lVar27 + 0x30);
        }
        else {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" deprecated=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=(local_238,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          cVar23 = *(char *)(lVar27 + 0x30);
        }
        if (cVar23 != '\0') {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          String::xml_escape(bVar30);
          operator+((char *)&local_70,(String *)" experimental=\"");
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=(local_238,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        if ((*(long *)(lVar27 + 0x48) != 0) && (1 < *(uint *)(*(long *)(lVar27 + 0x48) + -8))) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"\"");
          String::xml_escape(bVar30);
          local_80 = 0;
          String::parse_latin1(local_248," keywords=\"");
          String::operator+((String *)&local_70,local_248);
          String::operator+((String *)&local_58,(String *)&local_70);
          String::operator+=(local_238,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_248);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        local_70 = 0;
        String::parse_latin1((String *)&local_70,">");
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"\"");
        String::xml_escape(SUB81((CowData<char32_t> *)&local_98,0));
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"\" type=\"");
        String::xml_escape(SUB81(local_b8,0));
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,"\" data_type=\"");
        String::xml_escape(SUB81(local_d8,0));
        operator+((char *)local_d0,(String *)"<theme_item name=\"");
        String::operator+(local_c0,local_d0);
        String::operator+(local_b0,local_c0);
        String::operator+(local_a0,local_b0);
        String::operator+(local_90,local_a0);
        String::operator+(local_248,local_90);
        String::operator+((String *)&local_78,local_248);
        String::operator+((String *)&local_68,(String *)&local_78);
        local_58 = (Object *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
        _write_string((String *)&local_58,2,(String *)&local_68);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_248);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
        CowData<char32_t>::_unref(local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref(local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        _translate_doc_string((String *)&local_78);
        String::strip_edges(bVar32,bVar30);
        String::xml_escape(bVar33);
        local_58 = (Object *)0x0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_58,local_138);
        _write_string((String *)&local_58,3,(String *)&local_68);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_58 = (Object *)0x0;
        String::parse_latin1((String *)&local_58,"</theme_item>");
        local_68 = 0;
        Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
        _write_string((String *)&local_68,2,(String *)&local_58);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_238);
        lVar27 = puVar4[0x1f];
      }
      local_58 = (Object *)0x0;
      String::parse_latin1((String *)&local_58,"</theme_items>");
      local_68 = 0;
      Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
      _write_string((String *)&local_68,1,(String *)&local_58);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"operator");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    if (puVar4[0xf] != 0) {
      _write_method_doc((String *)&local_68,(String *)&local_58,puVar4 + 0xe);
    }
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = (Object *)0x0;
    String::parse_latin1((String *)&local_58,"</class>");
    local_68 = 0;
    Ref<FileAccess>::operator=((Ref<FileAccess> *)&local_68,local_138);
    _write_string((String *)&local_68,0,(String *)&local_58);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    CowData<char32_t>::_unref(local_1f8);
  }
  else {
    local_68 = 0;
    String::parse_latin1((String *)&local_68,".");
    operator+((char *)&local_70,(String *)"Can\'t write doc file: ");
    String::operator+((String *)&local_58,(String *)&local_70);
    _err_print_error("save_classes","editor/doc_tools.cpp",0x666,
                     "Condition \"err != OK\" is true. Continuing.",(String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    CowData<char32_t>::_unref(local_1f8);
  }
  puVar4 = (undefined8 *)*puVar4;
  goto joined_r0x00105519;
}



/* DocTools::has_doc(String const&) */

undefined8 __thiscall DocTools::has_doc(DocTools *this,String *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (*(long *)param_1 == 0) {
    uVar1 = 0;
  }
  else if (1 < *(uint *)(*(long *)param_1 + -8)) {
    local_14 = 0;
    uVar1 = HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
            ::_lookup_pos((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                           *)(this + 8),param_1,&local_14);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<MethodInfo, DefaultAllocator>::push_back(MethodInfo const&) [clone .isra.0] */

void __thiscall
List<MethodInfo,DefaultAllocator>::push_back
          (List<MethodInfo,DefaultAllocator> *this,MethodInfo *param_1)

{
  void *pvVar1;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  bool bVar8;
  
  if (*(long *)this == 0) {
    pauVar2 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar2;
    *(undefined4 *)pauVar2[1] = 0;
    *pauVar2 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x88,DefaultAllocator::alloc);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x38) = 1;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x78) = (undefined1  [16])0x0;
  lVar5 = *(long *)param_1;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0x20) = 0;
  *(undefined4 *)(this_00 + 0x30) = 6;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined4 *)(this_00 + 0x58) = 0;
  if (lVar5 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  *(undefined4 *)(this_00 + 8) = *(undefined4 *)(param_1 + 8);
  CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)(param_1 + 0x10));
  StringName::operator=((StringName *)(this_00 + 0x18),(StringName *)(param_1 + 0x18));
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  CowData<char32_t>::_ref(this_00 + 0x28,(CowData *)(param_1 + 0x28));
  plVar7 = *(long **)(this_00 + 0x40);
  *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this_00 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar7;
      if (pvVar1 == (void *)0x0) goto LAB_00108c68;
      if (plVar7 == *(long **)((long)pvVar1 + 0x40)) {
        lVar5 = *(long *)((long)pvVar1 + 0x30);
        lVar4 = *(long *)((long)pvVar1 + 0x38);
        *plVar7 = lVar5;
        if (pvVar1 == (void *)plVar7[1]) {
          plVar7[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x30);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x38) = lVar4;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
        Memory::free_static(pvVar1,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this_00 + 0x40);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
    *(undefined8 *)(this_00 + 0x40) = 0;
  }
  plVar7 = (long *)0x0;
LAB_00108c68:
  if ((*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) &&
     (puVar6 = (undefined4 *)**(undefined8 **)(param_1 + 0x40), puVar6 != (undefined4 *)0x0)) {
    if (plVar7 == (long *)0x0) {
      pauVar2 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this_00 + 0x40) = pauVar2;
      *(undefined4 *)pauVar2[1] = 0;
      *pauVar2 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
        lVar5 = *(long *)(puVar6 + 2);
        *puVar3 = 0;
        puVar3[6] = 0;
        puVar3[10] = 6;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
        *puVar3 = *puVar6;
        if (lVar5 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(puVar6 + 2));
        }
        StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(puVar6 + 4));
        puVar3[6] = puVar6[6];
        if (*(long *)(puVar3 + 8) != *(long *)(puVar6 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(puVar6 + 8));
        }
        puVar3[10] = puVar6[10];
        plVar7 = *(long **)(this_00 + 0x40);
        lVar5 = plVar7[1];
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(long **)(puVar3 + 0x10) = plVar7;
        *(long *)(puVar3 + 0xe) = lVar5;
        if (lVar5 != 0) {
          *(undefined4 **)(lVar5 + 0x30) = puVar3;
        }
        plVar7[1] = (long)puVar3;
        if (*plVar7 == 0) break;
        puVar6 = *(undefined4 **)(puVar6 + 0xc);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
        if (puVar6 == (undefined4 *)0x0) goto LAB_00108d8e;
      }
      puVar6 = *(undefined4 **)(puVar6 + 0xc);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
      *plVar7 = (long)puVar3;
    } while (puVar6 != (undefined4 *)0x0);
  }
LAB_00108d8e:
  if (*(long *)(this_00 + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<Variant>::_unref((CowData<Variant> *)(this_00 + 0x50));
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 0x50) + -0x10);
      do {
        lVar5 = *plVar7;
        if (lVar5 == 0) goto LAB_00108dd2;
        LOCK();
        lVar4 = *plVar7;
        bVar8 = lVar5 == lVar4;
        if (bVar8) {
          *plVar7 = lVar5 + 1;
          lVar4 = lVar5;
        }
        UNLOCK();
      } while (!bVar8);
      if (lVar4 != -1) {
        *(undefined8 *)(this_00 + 0x50) = *(undefined8 *)(param_1 + 0x50);
      }
    }
  }
LAB_00108dd2:
  *(undefined4 *)(this_00 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  if (*(long *)(this_00 + 0x68) != *(long *)(param_1 + 0x68)) {
    CowData<int>::_ref((CowData<int> *)(this_00 + 0x68),(CowData *)(param_1 + 0x68));
  }
  plVar7 = *(long **)this;
  lVar5 = plVar7[1];
  *(long **)(this_00 + 0x80) = plVar7;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(long *)(this_00 + 0x78) = lVar5;
  if (lVar5 != 0) {
    *(CowData<char32_t> **)(lVar5 + 0x70) = this_00;
  }
  plVar7[1] = (long)this_00;
  if (*plVar7 == 0) {
    *plVar7 = (long)this_00;
  }
  *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* CowData<DocData::ArgumentDoc>::_ref(CowData<DocData::ArgumentDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::ArgumentDoc>::_ref(CowData<DocData::ArgumentDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* DocData::MethodDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::MethodDoc const&) [clone .isra.0] */

void __thiscall DocData::MethodDoc::operator=(MethodDoc *this,MethodDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  this[0x18] = param_1[0x18];
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  this[0x30] = param_1[0x30];
  if (*(long *)(this + 0x38) != *(long *)(param_1 + 0x38)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  this[0x40] = param_1[0x40];
  if (*(long *)(this + 0x48) != *(long *)(param_1 + 0x48)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  if (*(long *)(this + 0x58) != *(long *)(param_1 + 0x58)) {
    CowData<DocData::ArgumentDoc>::_ref
              ((CowData<DocData::ArgumentDoc> *)(this + 0x58),(CowData *)(param_1 + 0x58));
  }
  if (*(long *)(this + 0x68) != *(long *)(param_1 + 0x68)) {
    CowData<int>::_ref((CowData<int> *)(this + 0x68),(CowData *)(param_1 + 0x68));
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)(param_1 + 0x70));
    return;
  }
  return;
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::unguarded_linear_insert(long,
   DocData::MethodDoc, DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,OperatorCompare,true>::unguarded_linear_insert
               (long param_1,String *param_2,long param_3)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  CowData<char32_t> *this;
  long lVar7;
  
  this = (CowData<char32_t> *)(param_3 + param_1 * 0x78);
  do {
    pCVar1 = (CowData *)(this + -0x78);
    cVar5 = String::operator==(param_2,(String *)pCVar1);
    if (cVar5 == '\0') {
      cVar5 = String::naturalcasecmp_to(param_2);
      if (-1 < cVar5) goto LAB_0010939f;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x58);
      lVar3 = *(long *)(this + -0x20);
      if (lVar2 == 0) {
        if ((lVar3 == 0) || (lVar6 = *(long *)(lVar3 + -8), lVar6 == 0)) goto LAB_0010939f;
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar2 + -8);
        if (lVar3 == 0) {
          if (lVar7 == 0) {
LAB_00109430:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar3 + -8);
          if (lVar7 == lVar6) {
            if (lVar7 < 1) goto LAB_00109430;
            cVar5 = String::operator<((String *)(lVar2 + 8),(String *)(lVar3 + 8));
            if (cVar5 != '\0') goto LAB_0010926c;
            goto LAB_0010939f;
          }
        }
      }
      if (lVar6 <= lVar7) goto LAB_0010939f;
    }
LAB_0010926c:
    if (param_1 == 1) {
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010939f:
      DocData::MethodDoc::operator=((MethodDoc *)(param_3 + param_1 * 0x78),(MethodDoc *)param_2);
      return;
    }
    if (*(long *)this != *(long *)(this + -0x78)) {
      CowData<char32_t>::_ref(this,pCVar1);
    }
    if (*(long *)(this + 8) != *(long *)(this + -0x70)) {
      CowData<char32_t>::_ref(this + 8,(CowData *)(this + -0x70));
    }
    if (*(long *)(this + 0x10) != *(long *)(this + -0x68)) {
      CowData<char32_t>::_ref(this + 0x10,(CowData *)(this + -0x68));
    }
    this[0x18] = this[-0x60];
    if (*(long *)(this + 0x20) != *(long *)(this + -0x58)) {
      CowData<char32_t>::_ref(this + 0x20,(CowData *)(this + -0x58));
    }
    if (*(long *)(this + 0x28) != *(long *)(this + -0x50)) {
      CowData<char32_t>::_ref(this + 0x28,(CowData *)(this + -0x50));
    }
    this[0x30] = this[-0x48];
    if (*(long *)(this + 0x38) != *(long *)(this + -0x40)) {
      CowData<char32_t>::_ref(this + 0x38,(CowData *)(this + -0x40));
    }
    this[0x40] = this[-0x38];
    if (*(long *)(this + 0x48) != *(long *)(this + -0x30)) {
      CowData<char32_t>::_ref(this + 0x48,(CowData *)(this + -0x30));
    }
    if (*(long *)(this + 0x58) != *(long *)(this + -0x20)) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)(this + 0x58),(CowData *)(this + -0x20));
    }
    if (*(long *)(this + 0x68) != *(long *)(this + -0x10)) {
      CowData<int>::_ref((CowData<int> *)(this + 0x68),(CowData *)(this + -0x10));
    }
    if (*(long *)(this + 0x70) != *(long *)(this + -8)) {
      CowData<char32_t>::_ref(this + 0x70,(CowData *)(this + -8));
    }
    param_1 = param_1 + -1;
    this = (CowData<char32_t> *)pCVar1;
  } while( true );
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::adjust_heap(long, long, long,
   DocData::MethodDoc, DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,OperatorCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,MethodDoc *param_4,long param_5)

{
  CowData<char32_t> *pCVar1;
  String *this;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  String *pSVar10;
  MethodDoc *this_00;
  long in_FS_OFFSET;
  long local_e0;
  MethodDoc local_b8 [88];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_2;
  for (local_e0 = param_2 * 2 + 2; local_e0 < param_3; local_e0 = local_e0 * 2) {
    lVar8 = local_e0 + -1;
    pSVar10 = (String *)(param_5 + (lVar8 + param_1) * 0x78);
    this = (String *)(param_5 + (param_1 + local_e0) * 0x78);
    cVar3 = String::operator==(this,pSVar10);
    if (cVar3 == '\0') {
      cVar3 = String::naturalcasecmp_to(this);
      if (-1 < cVar3) goto LAB_00109681;
    }
    else {
      lVar9 = *(long *)(this + 0x58);
      lVar5 = *(long *)(pSVar10 + 0x58);
      if (lVar9 == 0) {
        if (lVar5 != 0) {
          lVar4 = *(long *)(lVar5 + -8);
          lVar7 = 0;
          if (lVar4 != 0) goto LAB_001094f3;
        }
      }
      else {
        lVar7 = *(long *)(lVar9 + -8);
        if (lVar5 == 0) {
          if (lVar7 == 0) goto LAB_00109960;
          lVar4 = 0;
        }
        else {
          lVar4 = *(long *)(lVar5 + -8);
          if (lVar7 == lVar4) {
            if (0 < lVar7) {
              cVar3 = String::operator<((String *)(lVar9 + 8),(String *)(lVar5 + 8));
              if (cVar3 != '\0') goto LAB_00109504;
              goto LAB_00109681;
            }
            goto LAB_00109960;
          }
        }
LAB_001094f3:
        if (lVar7 < lVar4) goto LAB_00109504;
      }
LAB_00109681:
      lVar8 = local_e0;
      pSVar10 = this;
      local_e0 = local_e0 + 1;
    }
LAB_00109504:
    pCVar1 = (CowData<char32_t> *)(param_5 + (lVar6 + param_1) * 0x78);
    if (*(long *)pCVar1 != *(long *)pSVar10) {
      CowData<char32_t>::_ref(pCVar1,(CowData *)pSVar10);
    }
    if (*(long *)(pCVar1 + 8) != *(long *)((CowData *)pSVar10 + 8)) {
      CowData<char32_t>::_ref(pCVar1 + 8,(CowData *)pSVar10 + 8);
    }
    if (*(long *)(pCVar1 + 0x10) != *(long *)((CowData *)pSVar10 + 0x10)) {
      CowData<char32_t>::_ref(pCVar1 + 0x10,(CowData *)pSVar10 + 0x10);
    }
    pCVar1[0x18] = *(CowData<char32_t> *)((CowData *)pSVar10 + 0x18);
    if (*(long *)(pCVar1 + 0x20) != *(long *)((CowData *)pSVar10 + 0x20)) {
      CowData<char32_t>::_ref(pCVar1 + 0x20,(CowData *)pSVar10 + 0x20);
    }
    if (*(long *)(pCVar1 + 0x28) != *(long *)((CowData *)pSVar10 + 0x28)) {
      CowData<char32_t>::_ref(pCVar1 + 0x28,(CowData *)pSVar10 + 0x28);
    }
    pCVar1[0x30] = *(CowData<char32_t> *)((CowData *)pSVar10 + 0x30);
    if (*(long *)(pCVar1 + 0x38) != *(long *)((CowData *)pSVar10 + 0x38)) {
      CowData<char32_t>::_ref(pCVar1 + 0x38,(CowData *)pSVar10 + 0x38);
    }
    pCVar1[0x40] = *(CowData<char32_t> *)((CowData *)pSVar10 + 0x40);
    if (*(long *)(pCVar1 + 0x48) != *(long *)((CowData *)pSVar10 + 0x48)) {
      CowData<char32_t>::_ref(pCVar1 + 0x48,(CowData *)pSVar10 + 0x48);
    }
    if (*(long *)(pCVar1 + 0x58) != *(long *)((CowData *)pSVar10 + 0x58)) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)(pCVar1 + 0x58),(CowData *)pSVar10 + 0x58);
    }
    if (*(long *)(pCVar1 + 0x68) != *(long *)((CowData *)pSVar10 + 0x68)) {
      CowData<int>::_ref((CowData<int> *)(pCVar1 + 0x68),(CowData *)pSVar10 + 0x68);
    }
    if (*(long *)(pCVar1 + 0x70) != *(long *)((CowData *)pSVar10 + 0x70)) {
      CowData<char32_t>::_ref(pCVar1 + 0x70,(CowData *)pSVar10 + 0x70);
    }
    lVar6 = lVar8;
  }
  if (param_3 == local_e0) {
    lVar8 = lVar6 + param_1;
    lVar6 = param_3 + -1;
    DocData::MethodDoc::operator=
              ((MethodDoc *)(param_5 + lVar8 * 0x78),
               (MethodDoc *)(param_5 + (param_1 + lVar6) * 0x78));
  }
  DocData::MethodDoc::MethodDoc(local_b8,param_4);
  lVar8 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  if (param_2 < lVar6) {
    do {
      lVar9 = lVar8 >> 1;
      this_00 = (MethodDoc *)(param_5 + (param_1 + lVar9) * 0x78);
      cVar3 = String::operator==((String *)this_00,(String *)local_b8);
      if (cVar3 == '\0') {
        cVar3 = String::naturalcasecmp_to((String *)this_00);
        if (-1 < cVar3) {
          this_00 = (MethodDoc *)(param_5 + (param_1 + lVar6) * 0x78);
          break;
        }
      }
      else {
        lVar8 = *(long *)((String *)this_00 + 0x58);
        if (lVar8 == 0) {
          if ((local_60 == 0) || (lVar5 = *(long *)(local_60 + -8), lVar5 == 0)) goto LAB_00109910;
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(lVar8 + -8);
          if (local_60 == 0) {
            if (lVar7 == 0) {
LAB_00109960:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false
                         ,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(local_60 + -8);
            if (lVar7 == lVar5) {
              if (0 < lVar7) {
                cVar3 = String::operator<((String *)(lVar8 + 8),(String *)(local_60 + 8));
                if (cVar3 != '\0') goto LAB_00109738;
                goto LAB_00109910;
              }
              goto LAB_00109960;
            }
          }
        }
        if (lVar5 <= lVar7) goto LAB_00109910;
      }
LAB_00109738:
      pCVar1 = (CowData<char32_t> *)(param_5 + (lVar6 + param_1) * 0x78);
      if (*(long *)pCVar1 != *(long *)this_00) {
        CowData<char32_t>::_ref(pCVar1,(CowData *)this_00);
      }
      if (*(long *)(pCVar1 + 8) != *(long *)((String *)this_00 + 8)) {
        CowData<char32_t>::_ref(pCVar1 + 8,(CowData *)((String *)this_00 + 8));
      }
      if (*(long *)(pCVar1 + 0x10) != *(long *)((String *)this_00 + 0x10)) {
        CowData<char32_t>::_ref(pCVar1 + 0x10,(CowData *)((String *)this_00 + 0x10));
      }
      pCVar1[0x18] = *(CowData<char32_t> *)((String *)this_00 + 0x18);
      if (*(long *)(pCVar1 + 0x20) != *(long *)((String *)this_00 + 0x20)) {
        CowData<char32_t>::_ref(pCVar1 + 0x20,(CowData *)((String *)this_00 + 0x20));
      }
      if (*(long *)(pCVar1 + 0x28) != *(long *)((String *)this_00 + 0x28)) {
        CowData<char32_t>::_ref(pCVar1 + 0x28,(CowData *)((String *)this_00 + 0x28));
      }
      pCVar1[0x30] = *(CowData<char32_t> *)((String *)this_00 + 0x30);
      if (*(long *)(pCVar1 + 0x38) != *(long *)((String *)this_00 + 0x38)) {
        CowData<char32_t>::_ref(pCVar1 + 0x38,(CowData *)((String *)this_00 + 0x38));
      }
      pCVar1[0x40] = *(CowData<char32_t> *)((String *)this_00 + 0x40);
      if (*(long *)(pCVar1 + 0x48) != *(long *)((String *)this_00 + 0x48)) {
        CowData<char32_t>::_ref(pCVar1 + 0x48,(CowData *)((String *)this_00 + 0x48));
      }
      if (*(long *)(pCVar1 + 0x58) != *(long *)((String *)this_00 + 0x58)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)(pCVar1 + 0x58),
                   (CowData *)((String *)this_00 + 0x58));
      }
      if (*(long *)(pCVar1 + 0x68) != *(long *)((String *)this_00 + 0x68)) {
        CowData<int>::_ref((CowData<int> *)(pCVar1 + 0x68),(CowData *)((String *)this_00 + 0x68));
      }
      if (*(long *)(pCVar1 + 0x70) != *(long *)((String *)this_00 + 0x70)) {
        CowData<char32_t>::_ref(pCVar1 + 0x70,(CowData *)((String *)this_00 + 0x70));
      }
      lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar6 = lVar9;
    } while (param_2 < lVar9);
  }
  else {
LAB_00109910:
    this_00 = (MethodDoc *)(param_5 + (lVar6 + param_1) * 0x78);
  }
  DocData::MethodDoc::operator=(this_00,local_b8);
  DocData::MethodDoc::~MethodDoc(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::adjust_heap(long, long, long,
   DocData::MethodDoc, DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,ConstructorCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,MethodDoc *param_4,long param_5)

{
  String *pSVar1;
  CowData *pCVar2;
  CowData<char32_t> *pCVar3;
  long lVar4;
  String *pSVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  CowData *pCVar11;
  MethodDoc *this;
  long lVar12;
  long in_FS_OFFSET;
  long local_e0;
  MethodDoc local_b8 [88];
  String *local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = param_2;
  for (local_e0 = param_2 * 2 + 2; local_e0 < param_3; local_e0 = local_e0 * 2) {
    lVar8 = local_e0 + -1;
    pCVar11 = (CowData *)(param_5 + (lVar8 + param_1) * 0x78);
    pCVar2 = (CowData *)(param_5 + (param_1 + local_e0) * 0x78);
    lVar9 = *(long *)(pCVar11 + 0x58);
    lVar4 = *(long *)(pCVar2 + 0x58);
    if (lVar4 == 0) {
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + -8);
        lVar10 = 0;
        goto LAB_00109cdc;
      }
LAB_00109ce5:
      lVar8 = local_e0;
      pCVar11 = pCVar2;
      local_e0 = local_e0 + 1;
    }
    else {
      lVar10 = *(long *)(lVar4 + -8);
      if (lVar9 == 0) {
        lVar9 = 0;
LAB_00109cdc:
        if (lVar9 <= lVar10) goto LAB_00109ce5;
      }
      else {
        pSVar1 = (String *)(pCVar2 + 8);
        if (lVar10 < 1) goto LAB_00109d0b;
        cVar7 = String::operator==((String *)(lVar4 + 8),pSVar1);
        if (cVar7 == '\0') {
          lVar9 = *(long *)(pCVar11 + 0x58);
          if (lVar9 == 0) goto LAB_00109d08;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==((String *)(lVar9 + 8),pSVar1);
          if (cVar7 != '\0') goto LAB_00109b68;
          pSVar1 = *(String **)(pCVar11 + 0x58);
          if (pSVar1 == (String *)0x0) goto LAB_00109d08;
          lVar10 = *(long *)(pSVar1 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          pSVar5 = *(String **)(pCVar2 + 0x58);
          if (pSVar5 == (String *)0x0) goto LAB_00109d08;
          lVar10 = *(long *)(pSVar5 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==(pSVar5,pSVar1);
          if (cVar7 == '\0') {
            cVar7 = String::operator<(pSVar5,pSVar1);
          }
          else {
            cVar7 = String::operator<(pSVar5 + 8,pSVar1 + 8);
          }
        }
        else {
LAB_00109b68:
          lVar9 = *(long *)(pCVar2 + 0x58);
          if (lVar9 == 0) goto LAB_00109d08;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==((String *)(lVar9 + 8),pSVar1);
          if (cVar7 != '\0') goto LAB_00109ba0;
          lVar9 = *(long *)(pCVar11 + 0x58);
          if (lVar9 == 0) goto LAB_00109d08;
          lVar10 = *(long *)(lVar9 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator!=((String *)(lVar9 + 8),pSVar1);
        }
        if (cVar7 == '\0') goto LAB_00109ce5;
      }
    }
LAB_00109ba0:
    pCVar3 = (CowData<char32_t> *)(param_5 + (lVar12 + param_1) * 0x78);
    if (*(long *)pCVar3 != *(long *)pCVar11) {
      CowData<char32_t>::_ref(pCVar3,pCVar11);
    }
    if (*(long *)(pCVar3 + 8) != *(long *)(pCVar11 + 8)) {
      CowData<char32_t>::_ref(pCVar3 + 8,pCVar11 + 8);
    }
    if (*(long *)(pCVar3 + 0x10) != *(long *)(pCVar11 + 0x10)) {
      CowData<char32_t>::_ref(pCVar3 + 0x10,pCVar11 + 0x10);
    }
    pCVar3[0x18] = *(CowData<char32_t> *)(pCVar11 + 0x18);
    if (*(long *)(pCVar3 + 0x20) != *(long *)(pCVar11 + 0x20)) {
      CowData<char32_t>::_ref(pCVar3 + 0x20,pCVar11 + 0x20);
    }
    if (*(long *)(pCVar3 + 0x28) != *(long *)(pCVar11 + 0x28)) {
      CowData<char32_t>::_ref(pCVar3 + 0x28,pCVar11 + 0x28);
    }
    pCVar3[0x30] = *(CowData<char32_t> *)(pCVar11 + 0x30);
    if (*(long *)(pCVar3 + 0x38) != *(long *)(pCVar11 + 0x38)) {
      CowData<char32_t>::_ref(pCVar3 + 0x38,pCVar11 + 0x38);
    }
    pCVar3[0x40] = *(CowData<char32_t> *)(pCVar11 + 0x40);
    if (*(long *)(pCVar3 + 0x48) != *(long *)(pCVar11 + 0x48)) {
      CowData<char32_t>::_ref(pCVar3 + 0x48,pCVar11 + 0x48);
    }
    if (*(long *)(pCVar3 + 0x58) != *(long *)(pCVar11 + 0x58)) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)(pCVar3 + 0x58),pCVar11 + 0x58);
    }
    if (*(long *)(pCVar3 + 0x68) != *(long *)(pCVar11 + 0x68)) {
      CowData<int>::_ref((CowData<int> *)(pCVar3 + 0x68),pCVar11 + 0x68);
    }
    if (*(long *)(pCVar3 + 0x70) != *(long *)(pCVar11 + 0x70)) {
      CowData<char32_t>::_ref(pCVar3 + 0x70,pCVar11 + 0x70);
    }
    lVar12 = lVar8;
  }
  if (param_3 == local_e0) {
    lVar8 = lVar12 + param_1;
    lVar12 = param_3 + -1;
    DocData::MethodDoc::operator=
              ((MethodDoc *)(param_5 + lVar8 * 0x78),
               (MethodDoc *)(param_5 + (param_1 + lVar12) * 0x78));
  }
  DocData::MethodDoc::MethodDoc(local_b8,param_4);
  lVar8 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
  if (param_2 < lVar12) {
    do {
      pSVar1 = local_60;
      lVar9 = lVar8 >> 1;
      this = (MethodDoc *)(param_5 + (param_1 + lVar9) * 0x78);
      lVar8 = *(long *)((CowData *)this + 0x58);
      if (lVar8 == 0) {
        if (local_60 == (String *)0x0) goto LAB_0010a045;
        lVar8 = *(long *)(local_60 + -8);
        lVar10 = 0;
LAB_0010a03c:
        if (lVar8 <= lVar10) goto LAB_0010a045;
      }
      else {
        lVar10 = *(long *)(lVar8 + -8);
        if (local_60 == (String *)0x0) {
          lVar8 = 0;
          goto LAB_0010a03c;
        }
        pSVar5 = (String *)((CowData *)this + 8);
        if (lVar10 < 1) goto LAB_00109d0b;
        cVar7 = String::operator==((String *)(lVar8 + 8),pSVar5);
        if (cVar7 == '\0') {
          lVar10 = *(long *)(pSVar1 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==(pSVar1 + 8,pSVar5);
          if (cVar7 != '\0') goto LAB_00109eb0;
          lVar10 = *(long *)(pSVar1 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          pSVar5 = *(String **)((CowData *)this + 0x58);
          if (pSVar5 == (String *)0x0) goto LAB_00109d08;
          lVar10 = *(long *)(pSVar5 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==(pSVar5,pSVar1);
          if (cVar7 == '\0') {
            cVar7 = String::operator<(pSVar5,pSVar1);
          }
          else {
            cVar7 = String::operator<(pSVar5 + 8,pSVar1 + 8);
          }
          if (cVar7 == '\0') {
            this = (MethodDoc *)(param_5 + (param_1 + lVar12) * 0x78);
            break;
          }
        }
        else {
LAB_00109eb0:
          lVar8 = *(long *)((CowData *)this + 0x58);
          if (lVar8 == 0) goto LAB_00109d08;
          lVar10 = *(long *)(lVar8 + -8);
          if (lVar10 < 1) goto LAB_00109d0b;
          cVar7 = String::operator==((String *)(lVar8 + 8),pSVar5);
          if (cVar7 == '\0') {
            lVar10 = *(long *)(pSVar1 + -8);
            if (lVar10 < 1) goto LAB_00109d0b;
            cVar7 = String::operator!=(pSVar1 + 8,pSVar5);
            if (cVar7 == '\0') goto LAB_0010a045;
          }
        }
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (lVar12 + param_1) * 0x78);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      if (*(long *)(pCVar3 + 8) != *(long *)((CowData *)this + 8)) {
        CowData<char32_t>::_ref(pCVar3 + 8,(CowData *)this + 8);
      }
      if (*(long *)(pCVar3 + 0x10) != *(long *)((CowData *)this + 0x10)) {
        CowData<char32_t>::_ref(pCVar3 + 0x10,(CowData *)this + 0x10);
      }
      *(CowData *)(pCVar3 + 0x18) = ((CowData *)this)[0x18];
      if (*(long *)(pCVar3 + 0x20) != *(long *)((CowData *)this + 0x20)) {
        CowData<char32_t>::_ref(pCVar3 + 0x20,(CowData *)this + 0x20);
      }
      if (*(long *)(pCVar3 + 0x28) != *(long *)((CowData *)this + 0x28)) {
        CowData<char32_t>::_ref(pCVar3 + 0x28,(CowData *)this + 0x28);
      }
      *(CowData *)(pCVar3 + 0x30) = ((CowData *)this)[0x30];
      if (*(long *)(pCVar3 + 0x38) != *(long *)((CowData *)this + 0x38)) {
        CowData<char32_t>::_ref(pCVar3 + 0x38,(CowData *)this + 0x38);
      }
      *(CowData *)(pCVar3 + 0x40) = ((CowData *)this)[0x40];
      if (*(long *)(pCVar3 + 0x48) != *(long *)((CowData *)this + 0x48)) {
        CowData<char32_t>::_ref(pCVar3 + 0x48,(CowData *)this + 0x48);
      }
      if (*(long *)(pCVar3 + 0x58) != *(long *)((CowData *)this + 0x58)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)(pCVar3 + 0x58),(CowData *)this + 0x58);
      }
      if (*(long *)(pCVar3 + 0x68) != *(long *)((CowData *)this + 0x68)) {
        CowData<int>::_ref((CowData<int> *)(pCVar3 + 0x68),(CowData *)this + 0x68);
      }
      if (*(long *)(pCVar3 + 0x70) != *(long *)((CowData *)this + 0x70)) {
        CowData<char32_t>::_ref(pCVar3 + 0x70,(CowData *)this + 0x70);
      }
      lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar12 = lVar9;
    } while (param_2 < lVar9);
  }
  else {
LAB_0010a045:
    this = (MethodDoc *)(param_5 + (lVar12 + param_1) * 0x78);
  }
  DocData::MethodDoc::operator=(this,local_b8);
  DocData::MethodDoc::~MethodDoc(local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00109d08:
  lVar10 = 0;
LAB_00109d0b:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar10,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::unguarded_linear_insert(long,
   DocData::MethodDoc, DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,ConstructorCompare,true>::unguarded_linear_insert
               (long param_1,MethodDoc *param_2,long param_3)

{
  String *pSVar1;
  String *pSVar2;
  String *this;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  CowData *pCVar7;
  CowData *this_00;
  long lVar8;
  
  pSVar1 = (String *)(param_2 + 8);
  pCVar7 = (CowData *)(param_3 + param_1 * 0x78);
  lVar6 = *(long *)(param_2 + 0x58);
  lVar5 = *(long *)(pCVar7 + -0x20);
  if (lVar6 == 0) goto LAB_0010a307;
  while( true ) {
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar5 == 0) {
      lVar6 = 0;
      goto LAB_0010a313;
    }
    if (lVar8 < 1) goto LAB_0010a3e3;
    cVar4 = String::operator==((String *)(lVar6 + 8),pSVar1);
    if (cVar4 == '\0') break;
LAB_0010a340:
    lVar6 = *(long *)(param_2 + 0x58);
    if (lVar6 == 0) goto LAB_0010a3e0;
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar8 < 1) goto LAB_0010a3e3;
    cVar4 = String::operator==((String *)(lVar6 + 8),pSVar1);
    if (cVar4 == '\0') {
      lVar6 = *(long *)(pCVar7 + -0x20);
      if (lVar6 != 0) {
        lVar8 = *(long *)(lVar6 + -8);
        if (0 < lVar8) {
          cVar4 = String::operator!=((String *)(lVar6 + 8),pSVar1);
          if (cVar4 != '\0') {
            this_00 = pCVar7;
            if (param_1 != 1) goto LAB_0010a1f2;
LAB_0010a3a0:
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_0010a31c:
          DocData::MethodDoc::operator=((MethodDoc *)(param_3 + param_1 * 0x78),param_2);
          return;
        }
        goto LAB_0010a3e3;
      }
      goto LAB_0010a3e0;
    }
LAB_0010a1e8:
    while( true ) {
      this_00 = pCVar7;
      if (param_1 == 1) goto LAB_0010a3a0;
LAB_0010a1f2:
      pCVar7 = (CowData *)((CowData<char32_t> *)this_00 + -0x78);
      if (*(long *)this_00 != *(long *)((CowData<char32_t> *)this_00 + -0x78)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this_00,pCVar7);
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 8) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x70)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 8,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x70));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x10) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x68)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x10,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x68));
      }
      ((CowData<char32_t> *)this_00)[0x18] = ((CowData<char32_t> *)this_00)[-0x60];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x20) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x58)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x20,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x58));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x28) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x50)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x28,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x50));
      }
      ((CowData<char32_t> *)this_00)[0x30] = ((CowData<char32_t> *)this_00)[-0x48];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x38) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x40)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x38,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x40));
      }
      ((CowData<char32_t> *)this_00)[0x40] = ((CowData<char32_t> *)this_00)[-0x38];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x48) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x30)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x48,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x30));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x58) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x20)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)this_00 + 0x58),
                   (CowData *)((CowData<char32_t> *)this_00 + -0x20));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x68) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x10)) {
        CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)this_00 + 0x68),
                           (CowData *)((CowData<char32_t> *)this_00 + -0x10));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x70) !=
          *(long *)((CowData<char32_t> *)this_00 + -8)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x70,
                   (CowData *)((CowData<char32_t> *)this_00 + -8));
      }
      lVar6 = *(long *)(param_2 + 0x58);
      param_1 = param_1 + -1;
      lVar5 = *(long *)((CowData<char32_t> *)this_00 + -0x98);
      if (lVar6 != 0) break;
LAB_0010a307:
      if (lVar5 == 0) goto LAB_0010a31c;
      lVar6 = *(long *)(lVar5 + -8);
      lVar8 = 0;
LAB_0010a313:
      if (lVar6 <= lVar8) goto LAB_0010a31c;
    }
  }
  lVar6 = *(long *)(pCVar7 + -0x20);
  if (lVar6 != 0) {
    lVar8 = *(long *)(lVar6 + -8);
    if (lVar8 < 1) goto LAB_0010a3e3;
    cVar4 = String::operator==((String *)(lVar6 + 8),pSVar1);
    if (cVar4 != '\0') goto LAB_0010a340;
    pSVar2 = *(String **)(pCVar7 + -0x20);
    if (pSVar2 != (String *)0x0) {
      lVar8 = *(long *)(pSVar2 + -8);
      if (lVar8 < 1) goto LAB_0010a3e3;
      this = *(String **)(param_2 + 0x58);
      if (this != (String *)0x0) {
        lVar8 = *(long *)(this + -8);
        if (lVar8 < 1) goto LAB_0010a3e3;
        cVar4 = String::operator==(this,pSVar2);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(this,pSVar2);
        }
        else {
          cVar4 = String::operator<(this + 8,pSVar2 + 8);
        }
        if (cVar4 == '\0') goto LAB_0010a31c;
        goto LAB_0010a1e8;
      }
    }
  }
LAB_0010a3e0:
  lVar8 = 0;
LAB_0010a3e3:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::linear_insert(long, long,
   DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,ConstructorCompare,true>::linear_insert
               (long param_1,long param_2,MethodDoc *param_3)

{
  MethodDoc *this;
  ArgumentDoc *pAVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  MethodDoc *this_00;
  long lVar5;
  long in_FS_OFFSET;
  MethodDoc local_138 [8];
  String local_130 [80];
  ArgumentDoc *local_e0;
  MethodDoc local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DocData::MethodDoc::MethodDoc(local_138,param_3 + param_2 * 0x78);
  this = param_3 + param_1 * 0x78;
  if (local_e0 == (ArgumentDoc *)0x0) {
    if (*(long *)(this + 0x58) != 0) {
      lVar4 = *(long *)(*(long *)(this + 0x58) + -8);
      lVar5 = 0;
      goto LAB_0010a682;
    }
  }
  else {
    lVar5 = *(long *)(local_e0 + -8);
    if (*(long *)(this + 0x58) != 0) {
      if (lVar5 < 1) goto LAB_0010a763;
      cVar3 = String::operator==((String *)(local_e0 + 8),local_130);
      if (cVar3 == '\0') {
        lVar4 = *(long *)(this + 0x58);
        if (lVar4 != 0) {
          lVar5 = *(long *)(lVar4 + -8);
          if (lVar5 < 1) goto LAB_0010a763;
          cVar3 = String::operator==((String *)(lVar4 + 8),local_130);
          if (cVar3 != '\0') goto LAB_0010a6e8;
          pAVar1 = *(ArgumentDoc **)(this + 0x58);
          if (pAVar1 != (ArgumentDoc *)0x0) {
            lVar5 = *(long *)(pAVar1 + -8);
            if (lVar5 < 1) goto LAB_0010a763;
            if (local_e0 != (ArgumentDoc *)0x0) {
              lVar5 = *(long *)(local_e0 + -8);
              if (lVar5 < 1) goto LAB_0010a763;
              cVar3 = DocData::ArgumentDoc::operator<(local_e0,pAVar1);
              goto joined_r0x0010a733;
            }
          }
        }
      }
      else {
LAB_0010a6e8:
        if (local_e0 != (ArgumentDoc *)0x0) {
          lVar5 = *(long *)(local_e0 + -8);
          if (lVar5 < 1) goto LAB_0010a763;
          cVar3 = String::operator==((String *)(local_e0 + 8),local_130);
          if (cVar3 == '\0') {
            lVar4 = *(long *)(this + 0x58);
            if (lVar4 == 0) goto LAB_0010a760;
            lVar5 = *(long *)(lVar4 + -8);
            if (lVar5 < 1) goto LAB_0010a763;
            cVar3 = String::operator!=((String *)(lVar4 + 8),local_130);
joined_r0x0010a733:
            if (cVar3 == '\0') goto LAB_0010a68b;
          }
          goto LAB_0010a550;
        }
      }
LAB_0010a760:
      lVar5 = 0;
LAB_0010a763:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar5,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = 0;
LAB_0010a682:
    if (lVar5 < lVar4) {
LAB_0010a550:
      this_00 = param_3 + param_2 * 0x78;
      if (param_1 < param_2) {
        do {
          if (*(long *)this_00 != *(long *)((CowData<char32_t> *)this_00 + -0x78)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x78));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 8) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x70)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 8,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x70));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 0x10) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x68)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x10,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x68));
          }
          ((CowData<char32_t> *)this_00)[0x18] = ((CowData<char32_t> *)this_00)[-0x60];
          if (*(long *)((CowData<char32_t> *)this_00 + 0x20) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x58)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x20,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x58));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 0x28) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x50)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x28,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x50));
          }
          ((CowData<char32_t> *)this_00)[0x30] = ((CowData<char32_t> *)this_00)[-0x48];
          if (*(long *)((CowData<char32_t> *)this_00 + 0x38) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x40)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x38,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x40));
          }
          ((CowData<char32_t> *)this_00)[0x40] = ((CowData<char32_t> *)this_00)[-0x38];
          if (*(long *)((CowData<char32_t> *)this_00 + 0x48) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x30)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x48,
                       (CowData *)((CowData<char32_t> *)this_00 + -0x30));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 0x58) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x20)) {
            CowData<DocData::ArgumentDoc>::_ref
                      ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)this_00 + 0x58),
                       (CowData *)((CowData<char32_t> *)this_00 + -0x20));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 0x68) !=
              *(long *)((CowData<char32_t> *)this_00 + -0x10)) {
            CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)this_00 + 0x68),
                               (CowData *)((CowData<char32_t> *)this_00 + -0x10));
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 0x70) !=
              *(long *)((CowData<char32_t> *)this_00 + -8)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)this_00 + 0x70,
                       (CowData *)((CowData<char32_t> *)this_00 + -8));
          }
          param_2 = param_2 + -1;
          this_00 = (MethodDoc *)((CowData<char32_t> *)this_00 + -0x78);
        } while (param_1 != param_2);
      }
      DocData::MethodDoc::operator=(this,local_138);
      goto LAB_0010a6b4;
    }
  }
LAB_0010a68b:
  DocData::MethodDoc::MethodDoc(local_b8,local_138);
  unguarded_linear_insert(param_2,local_b8,param_3);
  DocData::MethodDoc::~MethodDoc(local_b8);
LAB_0010a6b4:
  DocData::MethodDoc::~MethodDoc(local_138);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::linear_insert(long, long,
   DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,OperatorCompare,true>::linear_insert
               (long param_1,long param_2,MethodDoc *param_3)

{
  CowData *pCVar1;
  String *this;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  MethodDoc *this_00;
  long lVar6;
  long in_FS_OFFSET;
  MethodDoc local_138 [88];
  long local_e0;
  MethodDoc local_b8 [88];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = param_3 + param_2 * 0x78;
  DocData::MethodDoc::MethodDoc(local_138,this_00);
  this = (String *)(param_3 + param_1 * 0x78);
  cVar4 = String::operator==((String *)local_138,this);
  if (cVar4 == '\0') {
    cVar4 = String::naturalcasecmp_to((String *)local_138);
    if (-1 < cVar4) goto LAB_0010a9cd;
  }
  else {
    lVar2 = *(long *)(this + 0x58);
    if (local_e0 == 0) {
      if (lVar2 == 0) goto LAB_0010a9cd;
      lVar5 = *(long *)(lVar2 + -8);
      lVar6 = 0;
      if (lVar5 == 0) goto LAB_0010a9cd;
    }
    else {
      lVar6 = *(long *)(local_e0 + -8);
      if (lVar2 == 0) {
        lVar5 = 0;
        if (lVar6 == 0) {
LAB_0010ac2b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,0,lVar6,"p_index","size()","",false,
                     true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else {
        lVar5 = *(long *)(lVar2 + -8);
        if (lVar6 == lVar5) {
          if (lVar6 < 1) goto LAB_0010ac2b;
          cVar4 = String::operator<((String *)(local_e0 + 8),(String *)(lVar2 + 8));
          if (cVar4 == '\0') goto LAB_0010a9cd;
          goto LAB_0010a85e;
        }
      }
    }
    if (lVar5 <= lVar6) {
LAB_0010a9cd:
      DocData::MethodDoc::MethodDoc(local_b8,local_138);
      do {
        pCVar1 = (CowData *)((CowData<char32_t> *)this_00 + -0x78);
        cVar4 = String::operator==((String *)local_b8,(String *)pCVar1);
        if (cVar4 == '\0') {
          cVar4 = String::naturalcasecmp_to((String *)local_b8);
          if (-1 < cVar4) goto LAB_0010ab58;
        }
        else {
          lVar2 = *(long *)((CowData<char32_t> *)this_00 + -0x20);
          if (local_60 == 0) {
            if ((lVar2 == 0) || (lVar5 = *(long *)(lVar2 + -8), lVar5 == 0)) goto LAB_0010ab58;
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(local_60 + -8);
            if (lVar2 == 0) {
              if (lVar6 == 0) goto LAB_0010ac2b;
              lVar5 = 0;
            }
            else {
              lVar5 = *(long *)(lVar2 + -8);
              if (lVar5 == lVar6) {
                if (0 < lVar5) {
                  cVar4 = String::operator<((String *)(local_60 + 8),(String *)(lVar2 + 8));
                  if (cVar4 != '\0') goto joined_r0x0010ab9e;
                  goto LAB_0010ab58;
                }
                goto LAB_0010ac2b;
              }
            }
          }
          if (lVar5 <= lVar6) goto LAB_0010ab58;
        }
joined_r0x0010ab9e:
        if (param_2 == 1) goto LAB_0010aba8;
        if (*(long *)this_00 != *(long *)((CowData<char32_t> *)this_00 + -0x78)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)this_00,pCVar1);
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 8) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x70)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 8,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x70));
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 0x10) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x68)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x10,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x68));
        }
        ((CowData<char32_t> *)this_00)[0x18] = ((CowData<char32_t> *)this_00)[-0x60];
        if (*(long *)((CowData<char32_t> *)this_00 + 0x20) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x58)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x20,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x58));
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 0x28) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x50)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x28,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x50));
        }
        ((CowData<char32_t> *)this_00)[0x30] = ((CowData<char32_t> *)this_00)[-0x48];
        if (*(long *)((CowData<char32_t> *)this_00 + 0x38) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x40)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x38,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x40));
        }
        ((CowData<char32_t> *)this_00)[0x40] = ((CowData<char32_t> *)this_00)[-0x38];
        if (*(long *)((CowData<char32_t> *)this_00 + 0x48) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x30)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x48,
                     (CowData *)((CowData<char32_t> *)this_00 + -0x30));
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 0x58) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x20)) {
          CowData<DocData::ArgumentDoc>::_ref
                    ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)this_00 + 0x58),
                     (CowData *)((CowData<char32_t> *)this_00 + -0x20));
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 0x68) !=
            *(long *)((CowData<char32_t> *)this_00 + -0x10)) {
          CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)this_00 + 0x68),
                             (CowData *)((CowData<char32_t> *)this_00 + -0x10));
        }
        if (*(long *)((CowData<char32_t> *)this_00 + 0x70) !=
            *(long *)((CowData<char32_t> *)this_00 + -8)) {
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)this_00 + 0x70,
                     (CowData *)((CowData<char32_t> *)this_00 + -8));
        }
        param_2 = param_2 + -1;
        this_00 = (MethodDoc *)pCVar1;
      } while( true );
    }
  }
LAB_0010a85e:
  if (param_1 < param_2) {
    do {
      if (*(long *)this_00 != *(long *)((CowData<char32_t> *)this_00 + -0x78)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00,(CowData *)((CowData<char32_t> *)this_00 + -0x78));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 8) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x70)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 8,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x70));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x10) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x68)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x10,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x68));
      }
      ((CowData<char32_t> *)this_00)[0x18] = ((CowData<char32_t> *)this_00)[-0x60];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x20) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x58)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x20,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x58));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x28) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x50)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x28,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x50));
      }
      ((CowData<char32_t> *)this_00)[0x30] = ((CowData<char32_t> *)this_00)[-0x48];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x38) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x40)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x38,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x40));
      }
      ((CowData<char32_t> *)this_00)[0x40] = ((CowData<char32_t> *)this_00)[-0x38];
      if (*(long *)((CowData<char32_t> *)this_00 + 0x48) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x30)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x48,
                   (CowData *)((CowData<char32_t> *)this_00 + -0x30));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x58) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x20)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)this_00 + 0x58),
                   (CowData *)((CowData<char32_t> *)this_00 + -0x20));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x68) !=
          *(long *)((CowData<char32_t> *)this_00 + -0x10)) {
        CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)this_00 + 0x68),
                           (CowData *)((CowData<char32_t> *)this_00 + -0x10));
      }
      if (*(long *)((CowData<char32_t> *)this_00 + 0x70) !=
          *(long *)((CowData<char32_t> *)this_00 + -8)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)this_00 + 0x70,
                   (CowData *)((CowData<char32_t> *)this_00 + -8));
      }
      param_2 = param_2 + -1;
      this_00 = (MethodDoc *)((CowData<char32_t> *)this_00 + -0x78);
    } while (param_1 != param_2);
  }
  DocData::MethodDoc::operator=((MethodDoc *)this,local_138);
LAB_0010a980:
  DocData::MethodDoc::~MethodDoc(local_138);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010aba8:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010ab58:
  DocData::MethodDoc::operator=(param_3 + param_2 * 0x78,local_b8);
  DocData::MethodDoc::~MethodDoc(local_b8);
  goto LAB_0010a980;
}



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ArgumentDoc>::_copy_on_write(CowData<DocData::ArgumentDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 0x28 != 0) {
    uVar7 = lVar2 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,pCVar6);
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        CVar1 = pCVar6[0x18];
        *(undefined8 *)(this_00 + 0x20) = 0;
        lVar3 = *(long *)(pCVar6 + 0x20);
        *(CowData *)(this_00 + 0x18) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x28;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::partitioner(long, long,
   DocData::MethodDoc, DocData::MethodDoc*) const [clone .isra.0] */

long SortArray<DocData::MethodDoc,ConstructorCompare,true>::partitioner
               (long param_1,long param_2,long param_3,long param_4)

{
  String *pSVar1;
  long *plVar2;
  CowData<char32_t> CVar3;
  String *pSVar4;
  String *pSVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  CowData<char32_t> *pCVar10;
  String *this;
  long lVar11;
  long lVar12;
  long lVar13;
  CowData<char32_t> *pCVar14;
  long in_FS_OFFSET;
  long local_110;
  long local_100;
  long local_f8;
  long local_f0;
  CowData<char32_t> local_e2;
  CowData<char32_t> local_e1;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  CowData<char32_t> local_a0;
  long local_98;
  long lStack_90;
  CowData<char32_t> local_88;
  long local_80;
  CowData<char32_t> local_78;
  long local_70;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  this = (String *)(param_4 + 8 + param_1 * 0x78);
  lVar9 = *(long *)(param_3 + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(this + 0x50);
  pSVar1 = (String *)(param_3 + 8);
  lVar12 = param_2;
  lVar13 = param_1;
  if (lVar8 == 0) goto LAB_0010af9e;
LAB_0010aeb5:
  lVar11 = *(long *)(lVar8 + -8);
  if (lVar9 == 0) {
    lVar8 = 0;
    lVar9 = 0;
    goto LAB_0010afaa;
  }
  if (lVar11 < 1) goto LAB_0010b633;
  cVar7 = String::operator==((String *)(lVar8 + 8),this);
  if (cVar7 == '\0') {
    lVar8 = *(long *)(param_3 + 0x58);
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar8 + -8);
      if (lVar11 < 1) goto LAB_0010b633;
      cVar7 = String::operator==((String *)(lVar8 + 8),this);
      if (cVar7 != '\0') goto LAB_0010b598;
      pSVar4 = *(String **)(param_3 + 0x58);
      if (pSVar4 != (String *)0x0) {
        lVar11 = *(long *)(pSVar4 + -8);
        if (lVar11 < 1) goto LAB_0010b633;
        pSVar5 = *(String **)(this + 0x50);
        if (pSVar5 != (String *)0x0) {
          lVar11 = *(long *)(pSVar5 + -8);
          if (lVar11 < 1) goto LAB_0010b633;
          cVar7 = String::operator==(pSVar5,pSVar4);
          if (cVar7 == '\0') {
            cVar7 = String::operator<(pSVar5,pSVar4);
          }
          else {
            cVar7 = String::operator<(pSVar5 + 8,pSVar4 + 8);
          }
          goto joined_r0x0010b5e6;
        }
      }
    }
  }
  else {
LAB_0010b598:
    lVar8 = *(long *)(this + 0x50);
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar8 + -8);
      if (lVar11 < 1) goto LAB_0010b633;
      cVar7 = String::operator==((String *)(lVar8 + 8),this);
      if (cVar7 != '\0') goto LAB_0010af70;
      lVar8 = *(long *)(param_3 + 0x58);
      if (lVar8 != 0) {
        lVar11 = *(long *)(lVar8 + -8);
        if (lVar11 < 1) goto LAB_0010b633;
        cVar7 = String::operator!=((String *)(lVar8 + 8),this);
joined_r0x0010b5e6:
        if (cVar7 == '\0') {
          lVar9 = *(long *)(param_3 + 0x58);
          goto LAB_0010afaf;
        }
LAB_0010af70:
        if (param_2 + -1 == lVar13) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          lVar9 = *(long *)(param_3 + 0x58);
          goto LAB_0010afaf;
        }
LAB_0010af82:
        lVar8 = *(long *)(this + 200);
        this = this + 0x78;
        lVar9 = *(long *)(param_3 + 0x58);
        lVar13 = lVar13 + 1;
        if (lVar8 != 0) goto LAB_0010aeb5;
LAB_0010af9e:
        if (lVar9 != 0) {
          lVar8 = *(long *)(lVar9 + -8);
          lVar11 = 0;
LAB_0010afaa:
          if (lVar11 < lVar8) goto LAB_0010af70;
        }
LAB_0010afaf:
        lVar12 = lVar12 + -1;
        pCVar10 = (CowData<char32_t> *)(param_4 + lVar12 * 0x78);
        lVar8 = *(long *)(pCVar10 + 0x58);
        if (lVar9 == 0) goto LAB_0010b0ba;
        do {
          lVar11 = *(long *)(lVar9 + -8);
          pCVar14 = pCVar10;
          if (lVar8 == 0) {
            lVar8 = 0;
            goto LAB_0010b0c6;
          }
          if (lVar11 < 1) goto LAB_0010b633;
          cVar7 = String::operator==((String *)(lVar9 + 8),pSVar1);
          if (cVar7 == '\0') {
            lVar8 = *(long *)(pCVar10 + 0x58);
            if (lVar8 == 0) break;
            lVar11 = *(long *)(lVar8 + -8);
            if (lVar11 < 1) goto LAB_0010b633;
            cVar7 = String::operator==((String *)(lVar8 + 8),pSVar1);
            if (cVar7 != '\0') goto LAB_0010b5f8;
            pSVar4 = *(String **)(pCVar10 + 0x58);
            if (pSVar4 == (String *)0x0) break;
            lVar11 = *(long *)(pSVar4 + -8);
            if (lVar11 < 1) goto LAB_0010b633;
            pSVar5 = *(String **)(param_3 + 0x58);
            if (pSVar5 == (String *)0x0) break;
            lVar11 = *(long *)(pSVar5 + -8);
            if (lVar11 < 1) goto LAB_0010b633;
            cVar7 = String::operator==(pSVar5,pSVar4);
            if (cVar7 == '\0') {
              cVar7 = String::operator<(pSVar5,pSVar4);
            }
            else {
              cVar7 = String::operator<(pSVar5 + 8,pSVar4 + 8);
            }
joined_r0x0010b6a9:
            if (cVar7 == '\0') goto LAB_0010b0d0;
          }
          else {
LAB_0010b5f8:
            lVar8 = *(long *)(param_3 + 0x58);
            if (lVar8 == 0) break;
            lVar11 = *(long *)(lVar8 + -8);
            if (lVar11 < 1) goto LAB_0010b633;
            cVar7 = String::operator==((String *)(lVar8 + 8),pSVar1);
            if (cVar7 == '\0') {
              lVar8 = *(long *)(pCVar10 + 0x58);
              if (lVar8 != 0) {
                lVar11 = *(long *)(lVar8 + -8);
                if (0 < lVar11) {
                  cVar7 = String::operator!=((String *)(lVar8 + 8),pSVar1);
                  goto joined_r0x0010b6a9;
                }
                goto LAB_0010b633;
              }
              break;
            }
          }
          while( true ) {
            if (lVar12 == param_1) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              goto LAB_0010b0d0;
            }
            pCVar10 = pCVar14 + -0x78;
            lVar9 = *(long *)(param_3 + 0x58);
            lVar8 = *(long *)(pCVar14 + -0x20);
            lVar12 = lVar12 + -1;
            if (lVar9 != 0) break;
LAB_0010b0ba:
            pCVar14 = pCVar10;
            if (lVar8 == 0) goto LAB_0010b0d0;
            lVar8 = *(long *)(lVar8 + -8);
            lVar11 = 0;
LAB_0010b0c6:
            if (lVar8 <= lVar11) goto LAB_0010b0d0;
          }
        } while( true );
      }
    }
  }
  lVar11 = 0;
LAB_0010b633:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_0010b0d0:
  if (lVar12 <= lVar13) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar13;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_e0 = *(long *)((CowData<char32_t> *)this + 8);
  local_d8 = *(long *)this;
  *(undefined8 *)((CowData<char32_t> *)this + 8) = 0;
  local_b8 = *(long *)((CowData<char32_t> *)this + -8);
  lStack_b0 = *(long *)this;
  local_110 = *(long *)((CowData<char32_t> *)this + 0x20);
  local_98 = *(long *)((CowData<char32_t> *)this + 0x18);
  lStack_90 = *(long *)((CowData<char32_t> *)this + 0x20);
  lVar8 = *(long *)((CowData<char32_t> *)this + -8);
  local_e1 = ((CowData<char32_t> *)this)[0x10];
  local_d0 = *(long *)((CowData<char32_t> *)this + 0x18);
  local_e2 = ((CowData<char32_t> *)this)[0x28];
  *(undefined1 (*) [16])((CowData<char32_t> *)this + -8) = (undefined1  [16])0x0;
  local_100 = *(long *)((CowData<char32_t> *)this + 0x30);
  CVar3 = ((CowData<char32_t> *)this)[0x38];
  *(undefined8 *)((CowData<char32_t> *)this + 0x30) = 0;
  local_f8 = *(long *)((CowData<char32_t> *)this + 0x40);
  *(undefined1 (*) [16])((CowData<char32_t> *)this + 0x18) = (undefined1  [16])0x0;
  local_f0 = *(long *)((CowData<char32_t> *)this + 0x50);
  local_c0 = *(long *)((CowData<char32_t> *)this + 0x68);
  local_50 = *(long *)((CowData<char32_t> *)this + 0x60);
  lStack_48 = *(long *)((CowData<char32_t> *)this + 0x68);
  *(undefined8 *)((CowData<char32_t> *)this + 0x40) = 0;
  local_c8 = *(long *)((CowData<char32_t> *)this + 0x60);
  *(undefined1 (*) [16])((CowData<char32_t> *)this + 0x60) = (undefined1  [16])0x0;
  lVar9 = *(long *)pCVar14;
  *(undefined8 *)((CowData<char32_t> *)this + 0x50) = 0;
  local_a8 = local_e0;
  local_a0 = local_e1;
  local_88 = local_e2;
  local_80 = local_100;
  local_78 = CVar3;
  local_70 = local_f8;
  local_60 = local_f0;
  if (lVar9 != 0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + -8);
    *(undefined8 *)((CowData<char32_t> *)this + -8) = *(undefined8 *)pCVar14;
    *(undefined8 *)pCVar14 = 0;
    lVar9 = *(long *)this;
  }
  if (*(long *)(pCVar14 + 8) != lVar9) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    *(undefined8 *)this = *(undefined8 *)(pCVar14 + 8);
    *(undefined8 *)(pCVar14 + 8) = 0;
  }
  if (*(long *)((CowData<char32_t> *)this + 8) != *(long *)(pCVar14 + 0x10)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 8);
    *(undefined8 *)((CowData<char32_t> *)this + 8) = *(undefined8 *)(pCVar14 + 0x10);
    *(undefined8 *)(pCVar14 + 0x10) = 0;
  }
  lVar9 = *(long *)(pCVar14 + 0x20);
  ((CowData<char32_t> *)this)[0x10] = pCVar14[0x18];
  if (*(long *)((CowData<char32_t> *)this + 0x18) != lVar9) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 0x18);
    *(undefined8 *)((CowData<char32_t> *)this + 0x18) = *(undefined8 *)(pCVar14 + 0x20);
    *(undefined8 *)(pCVar14 + 0x20) = 0;
  }
  if (*(long *)((CowData<char32_t> *)this + 0x20) != *(long *)(pCVar14 + 0x28)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 0x20);
    *(undefined8 *)((CowData<char32_t> *)this + 0x20) = *(undefined8 *)(pCVar14 + 0x28);
    *(undefined8 *)(pCVar14 + 0x28) = 0;
  }
  lVar9 = *(long *)(pCVar14 + 0x38);
  ((CowData<char32_t> *)this)[0x28] = pCVar14[0x30];
  if (*(long *)((CowData<char32_t> *)this + 0x30) != lVar9) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 0x30);
    *(undefined8 *)((CowData<char32_t> *)this + 0x30) = *(undefined8 *)(pCVar14 + 0x38);
    *(undefined8 *)(pCVar14 + 0x38) = 0;
  }
  lVar9 = *(long *)(pCVar14 + 0x48);
  ((CowData<char32_t> *)this)[0x38] = pCVar14[0x40];
  if (*(long *)((CowData<char32_t> *)this + 0x40) != lVar9) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 0x40);
    *(undefined8 *)((CowData<char32_t> *)this + 0x40) = *(undefined8 *)(pCVar14 + 0x48);
    *(undefined8 *)(pCVar14 + 0x48) = 0;
  }
  if (*(long *)((CowData<char32_t> *)this + 0x50) != *(long *)(pCVar14 + 0x58)) {
    CowData<DocData::ArgumentDoc>::_unref
              ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)this + 0x50));
    *(undefined8 *)((CowData<char32_t> *)this + 0x50) = *(undefined8 *)(pCVar14 + 0x58);
    *(undefined8 *)(pCVar14 + 0x58) = 0;
  }
  lVar9 = *(long *)((CowData<char32_t> *)this + 0x60);
  lVar11 = *(long *)(pCVar14 + 0x68);
  if (lVar9 != lVar11) {
    if (lVar9 != 0) {
      LOCK();
      plVar2 = (long *)(lVar9 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar8 = *(long *)((CowData<char32_t> *)this + 0x60);
        *(undefined8 *)((CowData<char32_t> *)this + 0x60) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      else {
        *(undefined8 *)((CowData<char32_t> *)this + 0x60) = 0;
      }
      lVar11 = *(long *)(pCVar14 + 0x68);
      local_c0 = lStack_48;
      local_c8 = local_50;
      local_f0 = local_60;
      local_f8 = local_70;
      local_e2 = local_88;
      local_100 = local_80;
      local_110 = lStack_90;
      local_e1 = local_a0;
      local_d0 = local_98;
      local_e0 = local_a8;
      local_d8 = lStack_b0;
      lVar8 = local_b8;
      CVar3 = local_78;
    }
    *(long *)((CowData<char32_t> *)this + 0x60) = lVar11;
    *(undefined8 *)(pCVar14 + 0x68) = 0;
  }
  if (*(long *)((CowData<char32_t> *)this + 0x68) != *(long *)(pCVar14 + 0x70)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this + 0x68);
    *(undefined8 *)((CowData<char32_t> *)this + 0x68) = *(undefined8 *)(pCVar14 + 0x70);
    *(undefined8 *)(pCVar14 + 0x70) = 0;
  }
  if (*(long *)pCVar14 != lVar8) {
    CowData<char32_t>::_unref(pCVar14);
    *(long *)pCVar14 = lVar8;
    local_b8 = 0;
  }
  if (*(long *)(pCVar14 + 8) != local_d8) {
    CowData<char32_t>::_unref(pCVar14 + 8);
    *(long *)(pCVar14 + 8) = local_d8;
    lStack_b0 = 0;
  }
  if (*(long *)(pCVar14 + 0x10) != local_e0) {
    CowData<char32_t>::_unref(pCVar14 + 0x10);
    *(long *)(pCVar14 + 0x10) = local_e0;
    local_a8 = 0;
  }
  pCVar14[0x18] = local_e1;
  if (*(long *)(pCVar14 + 0x20) != local_d0) {
    CowData<char32_t>::_unref(pCVar14 + 0x20);
    *(long *)(pCVar14 + 0x20) = local_d0;
    local_98 = 0;
  }
  if (*(long *)(pCVar14 + 0x28) != local_110) {
    CowData<char32_t>::_unref(pCVar14 + 0x28);
    *(long *)(pCVar14 + 0x28) = local_110;
    lStack_90 = 0;
  }
  pCVar14[0x30] = local_e2;
  if (*(long *)(pCVar14 + 0x38) != local_100) {
    CowData<char32_t>::_unref(pCVar14 + 0x38);
    *(long *)(pCVar14 + 0x38) = local_100;
    local_80 = 0;
  }
  pCVar14[0x40] = CVar3;
  if (*(long *)(pCVar14 + 0x48) != local_f8) {
    CowData<char32_t>::_unref(pCVar14 + 0x48);
    *(long *)(pCVar14 + 0x48) = local_f8;
    local_70 = 0;
  }
  if (local_f0 != *(long *)(pCVar14 + 0x58)) {
    CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(pCVar14 + 0x58));
    *(long *)(pCVar14 + 0x58) = local_f0;
    local_60 = 0;
  }
  if (*(long *)(pCVar14 + 0x68) != local_c8) {
    CowData<int>::_unref((CowData<int> *)(pCVar14 + 0x68));
    *(long *)(pCVar14 + 0x68) = local_c8;
    local_50 = 0;
  }
  if (*(long *)(pCVar14 + 0x70) != local_c0) {
    CowData<char32_t>::_unref(pCVar14 + 0x70);
    *(long *)(pCVar14 + 0x70) = local_c0;
    lStack_48 = 0;
  }
  DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
  goto LAB_0010af82;
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::partial_sort(long, long, long,
   DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,ConstructorCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,MethodDoc *param_4)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  String *this;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  MethodDoc *this_00;
  MethodDoc *pMVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  MethodDoc local_138 [128];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  CowData local_a0;
  undefined8 local_98;
  undefined8 local_90;
  CowData local_88;
  undefined8 local_80;
  CowData local_78;
  undefined8 local_70 [2];
  undefined8 local_60 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  lVar11 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar11 < 2) {
    if (param_2 <= param_3) goto LAB_0010bce9;
LAB_0010bab9:
    pMVar9 = param_4 + param_1 * 0x78;
    this_00 = param_4 + param_3 * 0x78;
    lVar8 = param_3;
    do {
      lVar7 = *(long *)(this_00 + 0x58);
      lVar3 = *(long *)(pMVar9 + 0x58);
      if (lVar7 == 0) {
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + -8);
          lVar10 = 0;
          goto LAB_0010bd80;
        }
      }
      else {
        lVar10 = *(long *)(lVar7 + -8);
        if (lVar3 != 0) {
          pSVar2 = (String *)(this_00 + 8);
          if (lVar10 < 1) goto LAB_0010bd9b;
          cVar6 = String::operator==((String *)(lVar7 + 8),pSVar2);
          if (cVar6 == '\0') {
            lVar7 = *(long *)(pMVar9 + 0x58);
            if (lVar7 != 0) {
              lVar10 = *(long *)(lVar7 + -8);
              if (lVar10 < 1) goto LAB_0010bd9b;
              cVar6 = String::operator==((String *)(lVar7 + 8),pSVar2);
              if (cVar6 != '\0') goto LAB_0010bd18;
              pSVar2 = *(String **)(pMVar9 + 0x58);
              if (pSVar2 != (String *)0x0) {
                lVar10 = *(long *)(pSVar2 + -8);
                if (lVar10 < 1) goto LAB_0010bd9b;
                this = *(String **)(this_00 + 0x58);
                if (this != (String *)0x0) {
                  lVar10 = *(long *)(this + -8);
                  if (lVar10 < 1) goto LAB_0010bd9b;
                  cVar6 = String::operator==(this,pSVar2);
                  if (cVar6 == '\0') {
                    cVar6 = String::operator<(this,pSVar2);
                  }
                  else {
                    cVar6 = String::operator<(this + 8,pSVar2 + 8);
                  }
                  goto joined_r0x0010bd5f;
                }
              }
            }
          }
          else {
LAB_0010bd18:
            lVar7 = *(long *)(this_00 + 0x58);
            if (lVar7 != 0) {
              lVar10 = *(long *)(lVar7 + -8);
              if (lVar10 < 1) goto LAB_0010bd9b;
              cVar6 = String::operator==((String *)(lVar7 + 8),pSVar2);
              if (cVar6 == '\0') {
                lVar7 = *(long *)(pMVar9 + 0x58);
                if (lVar7 == 0) goto LAB_0010bd98;
                lVar10 = *(long *)(lVar7 + -8);
                if (lVar10 < 1) goto LAB_0010bd9b;
                cVar6 = String::operator!=((String *)(lVar7 + 8),pSVar2);
joined_r0x0010bd5f:
                if (cVar6 == '\0') goto LAB_0010bc22;
              }
              goto LAB_0010bbd0;
            }
          }
LAB_0010bd98:
          lVar10 = 0;
LAB_0010bd9b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,0,lVar10,"p_index","size()","",false,
                     true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar7 = 0;
LAB_0010bd80:
        if (lVar10 < lVar7) {
LAB_0010bbd0:
          DocData::MethodDoc::MethodDoc(local_138,this_00);
          DocData::MethodDoc::operator=(this_00,pMVar9);
          DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_138);
          adjust_heap(param_1,0,lVar11);
          DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
          DocData::MethodDoc::~MethodDoc(local_138);
        }
      }
LAB_0010bc22:
      lVar8 = lVar8 + 1;
      this_00 = this_00 + 0x78;
    } while (lVar8 < param_2);
    if (lVar11 < 2) goto LAB_0010bce9;
  }
  else {
    lVar8 = lVar11 + -2 >> 1;
    pMVar9 = param_4 + (param_1 + lVar8) * 0x78;
    while( true ) {
      local_b8 = 0;
      if (*(long *)pMVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)pMVar9);
      }
      local_b0 = 0;
      if (*(long *)((CowData *)pMVar9 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)pMVar9 + 8);
      }
      local_a8 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)pMVar9 + 0x10);
      }
      local_a0 = ((CowData *)pMVar9)[0x18];
      local_98 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x20) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pMVar9 + 0x20);
      }
      local_90 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x28) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)pMVar9 + 0x28);
      }
      local_88 = ((CowData *)pMVar9)[0x30];
      local_80 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x38) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)pMVar9 + 0x38);
      }
      local_78 = ((CowData *)pMVar9)[0x40];
      local_70[0] = 0;
      if (*(long *)((CowData *)pMVar9 + 0x48) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_70,(CowData *)pMVar9 + 0x48);
      }
      local_60[0] = 0;
      if (*(long *)((CowData *)pMVar9 + 0x58) != 0) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)local_60,(CowData *)pMVar9 + 0x58);
      }
      local_50 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x68) != 0) {
        CowData<int>::_ref((CowData<int> *)&local_50,(CowData *)pMVar9 + 0x68);
      }
      local_48 = 0;
      if (*(long *)((CowData *)pMVar9 + 0x70) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)pMVar9 + 0x70);
      }
      adjust_heap(param_1,lVar8,lVar11,(CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
      pMVar9 = (MethodDoc *)((CowData *)pMVar9 + -0x78);
      CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (lVar8 == 0) break;
      lVar8 = lVar8 + -1;
    }
    if (param_3 < param_2) goto LAB_0010bab9;
  }
  lVar11 = (param_3 + -1) - param_1;
  pMVar9 = param_4 + param_3 * 0x78 + -0x78;
  do {
    DocData::MethodDoc::MethodDoc(local_138,pMVar9);
    DocData::MethodDoc::operator=(pMVar9,param_4 + param_1 * 0x78);
    DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_138);
    adjust_heap(param_1,0,lVar11,(MethodDoc *)&local_b8,param_4);
    DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
    DocData::MethodDoc::~MethodDoc(local_138);
    bVar4 = 1 < lVar11;
    lVar11 = lVar11 + -1;
    pMVar9 = pMVar9 + -0x78;
  } while (bVar4);
LAB_0010bce9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<DocData::MethodDoc, ConstructorCompare, true>::introsort(long, long,
   DocData::MethodDoc*, long) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,ConstructorCompare,true>::introsort
               (long param_1,long param_2,MethodDoc *param_3,long param_4)

{
  long lVar1;
  MethodDoc *pMVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_180;
  long local_160;
  long local_150;
  long local_148;
  long local_140;
  MethodDoc local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_0010c766:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar3 = param_2;
LAB_0010be81:
      do {
        param_4 = param_4 + -1;
        pMVar2 = (MethodDoc *)
                 median_of_3(param_3 + param_1 * 0x78,param_3 + ((lVar1 >> 1) + param_1) * 0x78,
                             param_3 + lVar3 * 0x78 + -0x78);
        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
        param_2 = partitioner(param_1,lVar3,local_b8,param_3);
        DocData::MethodDoc::~MethodDoc(local_b8);
        lVar1 = lVar3 - param_2;
        if (0x10 < lVar1) {
          if (param_4 != 0) {
            lVar4 = lVar3;
            local_150 = param_4;
LAB_0010bf33:
            do {
              local_150 = local_150 + -1;
              pMVar2 = (MethodDoc *)
                       median_of_3(param_3 + param_2 * 0x78,
                                   param_3 + ((lVar1 >> 1) + param_2) * 0x78,
                                   param_3 + lVar4 * 0x78 + -0x78);
              DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
              lVar3 = partitioner(param_2,lVar4,local_b8,param_3);
              DocData::MethodDoc::~MethodDoc(local_b8);
              lVar1 = lVar4 - lVar3;
              if (0x10 < lVar1) {
                if (local_150 != 0) {
                  lVar5 = lVar4;
                  local_148 = local_150;
LAB_0010bff8:
                  do {
                    local_148 = local_148 + -1;
                    pMVar2 = (MethodDoc *)
                             median_of_3(param_3 + lVar3 * 0x78,
                                         param_3 + ((lVar1 >> 1) + lVar3) * 0x78,
                                         param_3 + lVar5 * 0x78 + -0x78);
                    DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                    lVar4 = partitioner(lVar3,lVar5,local_b8,param_3);
                    DocData::MethodDoc::~MethodDoc(local_b8);
                    lVar1 = lVar5 - lVar4;
                    if (0x10 < lVar1) {
                      if (local_148 != 0) {
                        lVar6 = lVar5;
                        local_140 = local_148;
LAB_0010c0bc:
                        local_140 = local_140 + -1;
                        pMVar2 = (MethodDoc *)
                                 median_of_3(param_3 + lVar4 * 0x78,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 0x78,
                                             param_3 + lVar6 * 0x78 + -0x78);
                        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                        lVar5 = partitioner(lVar4,lVar6,local_b8,param_3);
                        DocData::MethodDoc::~MethodDoc(local_b8);
                        lVar1 = lVar6 - lVar5;
                        if (0x10 < lVar1) goto code_r0x0010c14c;
LAB_0010c610:
                        lVar1 = lVar5 - lVar4;
                        if (0x10 < lVar1) goto LAB_0010c61c;
                        goto LAB_0010c67e;
                      }
LAB_0010c701:
                      partial_sort(lVar4,lVar5,lVar5,param_3);
                    }
joined_r0x0010c726:
                    lVar1 = lVar4 - lVar3;
                    if (lVar1 < 0x11) {
                      lVar1 = lVar3 - param_2;
                      lVar4 = lVar3;
                      if (0x10 < lVar1) goto LAB_0010bf33;
                      lVar1 = param_2 - param_1;
                      lVar3 = param_2;
                      if (0x10 < lVar1) goto LAB_0010be81;
                      goto LAB_0010c766;
                    }
                    lVar5 = lVar4;
                  } while (local_148 != 0);
                }
                partial_sort(lVar3,lVar4,lVar4,param_3);
              }
LAB_0010c7bb:
              lVar1 = lVar3 - param_2;
              if (lVar1 < 0x11) {
                lVar1 = param_2 - param_1;
                lVar3 = param_2;
                if (lVar1 < 0x11) goto LAB_0010c766;
                goto LAB_0010be81;
              }
              lVar4 = lVar3;
            } while (local_150 != 0);
          }
          partial_sort(param_2,lVar3,lVar3,param_3);
        }
        lVar1 = param_2 - param_1;
        if (lVar1 < 0x11) goto LAB_0010c766;
        lVar3 = param_2;
        if (param_4 == 0) break;
      } while( true );
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010c14c:
  if (local_140 != 0) {
    lVar12 = local_140;
    lVar7 = lVar6;
LAB_0010c180:
    do {
      lVar12 = lVar12 + -1;
      pMVar2 = (MethodDoc *)
               median_of_3(param_3 + lVar5 * 0x78,param_3 + ((lVar1 >> 1) + lVar5) * 0x78,
                           param_3 + lVar7 * 0x78 + -0x78);
      DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
      lVar6 = partitioner(lVar5,lVar7,local_b8,param_3);
      DocData::MethodDoc::~MethodDoc(local_b8);
      lVar1 = lVar7 - lVar6;
      if (0x10 < lVar1) {
        if (lVar12 != 0) {
          lVar8 = lVar7;
          local_180 = lVar12;
LAB_0010c231:
          do {
            local_180 = local_180 + -1;
            pMVar2 = (MethodDoc *)
                     median_of_3(param_3 + lVar6 * 0x78,param_3 + ((lVar1 >> 1) + lVar6) * 0x78,
                                 param_3 + lVar8 * 0x78 + -0x78);
            DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
            lVar7 = partitioner(lVar6,lVar8,local_b8,param_3);
            DocData::MethodDoc::~MethodDoc(local_b8);
            lVar1 = lVar8 - lVar7;
            if (0x10 < lVar1) {
              if (local_180 != 0) {
                lVar9 = lVar8;
                lVar13 = local_180;
LAB_0010c2dd:
                do {
                  lVar13 = lVar13 + -1;
                  pMVar2 = (MethodDoc *)
                           median_of_3(param_3 + lVar7 * 0x78,
                                       param_3 + ((lVar1 >> 1) + lVar7) * 0x78,
                                       param_3 + lVar9 * 0x78 + -0x78);
                  DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                  lVar8 = partitioner(lVar7,lVar9,local_b8,param_3);
                  DocData::MethodDoc::~MethodDoc(local_b8);
                  lVar1 = lVar9 - lVar8;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar10 = lVar9;
                      local_160 = lVar13;
LAB_0010c376:
                      do {
                        local_160 = local_160 + -1;
                        pMVar2 = (MethodDoc *)
                                 median_of_3(param_3 + lVar8 * 0x78,
                                             param_3 + ((lVar1 >> 1) + lVar8) * 0x78,
                                             param_3 + lVar10 * 0x78 + -0x78);
                        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                        lVar9 = partitioner(lVar8,lVar10,local_b8,param_3);
                        DocData::MethodDoc::~MethodDoc(local_b8);
                        lVar1 = lVar10 - lVar9;
                        if (0x10 < lVar1) {
                          if (local_160 != 0) {
                            lVar11 = lVar10;
                            lVar14 = local_160;
                            do {
                              lVar14 = lVar14 + -1;
                              pMVar2 = (MethodDoc *)
                                       median_of_3(param_3 + lVar9 * 0x78,
                                                   param_3 + ((lVar1 >> 1) + lVar9) * 0x78,
                                                   param_3 + lVar11 * 0x78 + -0x78);
                              DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                              lVar10 = partitioner(lVar9,lVar11,local_b8,param_3);
                              DocData::MethodDoc::~MethodDoc(local_b8);
                              introsort(lVar10,lVar11,param_3,lVar14);
                              lVar1 = lVar10 - lVar9;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar9 - lVar8;
                                lVar10 = lVar9;
                                if (lVar1 < 0x11) goto LAB_0010c584;
                                goto LAB_0010c376;
                              }
                              lVar11 = lVar10;
                            } while (lVar14 != 0);
                          }
                          partial_sort(lVar9,lVar10,lVar10,param_3);
                        }
                        lVar1 = lVar9 - lVar8;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar8 - lVar7;
                          lVar9 = lVar8;
                          if (lVar1 < 0x11) goto LAB_0010c4f5;
                          goto LAB_0010c2dd;
                        }
                        lVar10 = lVar9;
                      } while (local_160 != 0);
                    }
                    partial_sort(lVar8,lVar9,lVar9,param_3);
                  }
LAB_0010c584:
                  lVar1 = lVar8 - lVar7;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar7 - lVar6;
                    lVar8 = lVar7;
                    if (lVar1 < 0x11) goto LAB_0010c53e;
                    goto LAB_0010c231;
                  }
                  lVar9 = lVar8;
                } while (lVar13 != 0);
              }
              partial_sort(lVar7,lVar8,lVar8,param_3);
            }
LAB_0010c4f5:
            lVar1 = lVar7 - lVar6;
            if (lVar1 < 0x11) {
              lVar1 = lVar6 - lVar5;
              lVar7 = lVar6;
              if (lVar1 < 0x11) goto LAB_0010c610;
              goto LAB_0010c180;
            }
            lVar8 = lVar7;
          } while (local_180 != 0);
        }
        partial_sort(lVar6,lVar7,lVar7,param_3);
      }
LAB_0010c53e:
      lVar1 = lVar6 - lVar5;
      if (lVar1 < 0x11) {
        lVar1 = lVar5 - lVar4;
        lVar6 = lVar5;
        if (lVar1 < 0x11) goto joined_r0x0010c726;
        goto LAB_0010c0bc;
      }
      lVar7 = lVar6;
    } while (lVar12 != 0);
  }
  partial_sort(lVar5,lVar6,lVar6,param_3);
  lVar1 = lVar5 - lVar4;
  if (lVar1 < 0x11) {
LAB_0010c67e:
    lVar1 = lVar4 - lVar3;
    lVar5 = lVar4;
    if (lVar1 < 0x11) goto LAB_0010c7bb;
    goto LAB_0010bff8;
  }
LAB_0010c61c:
  lVar6 = lVar5;
  if (local_140 == 0) goto LAB_0010c701;
  goto LAB_0010c0bc;
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::partitioner(long, long, DocData::MethodDoc,
   DocData::MethodDoc*) const [clone .isra.0] */

long SortArray<DocData::MethodDoc,OperatorCompare,true>::partitioner
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  String *this;
  CowData<char32_t> *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  String local_db;
  String local_da;
  String local_d9;
  long local_d8;
  long local_d0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  String local_a0;
  long local_98;
  long lStack_90;
  String local_88;
  long local_80;
  String local_78;
  long local_70 [2];
  long local_60 [2];
  long local_50;
  long lStack_48;
  long local_40;
  
  this = (String *)(param_4 + param_1 * 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_1;
  lVar9 = param_2;
LAB_0010c919:
  cVar3 = String::operator==(this,param_3);
  if (cVar3 == '\0') {
    cVar3 = String::naturalcasecmp_to(this);
    if (-1 < cVar3) goto LAB_0010c937;
  }
  else {
    lVar7 = *(long *)(this + 0x58);
    lVar5 = *(long *)(param_3 + 0x58);
    if (lVar7 == 0) {
      if (lVar5 == 0) goto LAB_0010c937;
      lVar4 = *(long *)(lVar5 + -8);
      lVar6 = 0;
      if (lVar4 == 0) goto LAB_0010c937;
    }
    else {
      lVar6 = *(long *)(lVar7 + -8);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
LAB_0010d065:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,0,lVar6,"p_index","size()","",false,
                     true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(lVar5 + -8);
        if (lVar6 == lVar4) {
          if (0 < lVar6) {
            cVar3 = String::operator<((String *)(lVar7 + 8),(String *)(lVar5 + 8));
            if (cVar3 == '\0') goto LAB_0010c937;
            goto LAB_0010c900;
          }
          goto LAB_0010d065;
        }
      }
    }
    if (lVar4 <= lVar6) goto LAB_0010c937;
  }
LAB_0010c900:
  if (param_2 + -1 == lVar8) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
LAB_0010c937:
    lVar9 = lVar9 + -1;
    this_00 = (CowData<char32_t> *)(param_4 + lVar9 * 0x78);
    do {
      cVar3 = String::operator==(param_3,(String *)this_00);
      if (cVar3 == '\0') {
        cVar3 = String::naturalcasecmp_to(param_3);
        if (-1 < cVar3) goto joined_r0x0010c9d0;
      }
      else {
        lVar7 = *(long *)(param_3 + 0x58);
        lVar5 = *(long *)(this_00 + 0x58);
        if (lVar7 == 0) {
          if ((lVar5 == 0) || (lVar4 = *(long *)(lVar5 + -8), lVar4 == 0)) goto joined_r0x0010c9d0;
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(lVar7 + -8);
          if (lVar5 == 0) {
            if (lVar6 == 0) goto LAB_0010d065;
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(lVar5 + -8);
            if (lVar6 == lVar4) {
              if (0 < lVar6) {
                cVar3 = String::operator<((String *)(lVar7 + 8),(String *)(lVar5 + 8));
                if (cVar3 != '\0') goto joined_r0x0010cf45;
                goto joined_r0x0010c9d0;
              }
              goto LAB_0010d065;
            }
          }
        }
        if (lVar4 <= lVar6) goto joined_r0x0010c9d0;
      }
joined_r0x0010cf45:
      if (lVar9 == param_1) goto LAB_0010cf50;
      this_00 = this_00 + -0x78;
      lVar9 = lVar9 + -1;
    } while( true );
  }
  goto LAB_0010c911;
LAB_0010cf50:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
joined_r0x0010c9d0:
  if (lVar9 <= lVar8) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar8;
  }
  local_108 = *(long *)this;
  local_100 = *(long *)(this + 8);
  local_b8 = *(long *)this;
  lStack_b0 = *(long *)(this + 8);
  lVar7 = *(long *)(this + 0x10);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  local_e8 = *(long *)(this + 0x28);
  local_da = this[0x18];
  local_98 = *(long *)(this + 0x20);
  lStack_90 = *(long *)(this + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  local_f0 = *(long *)(this + 0x20);
  local_d9 = this[0x30];
  local_d8 = *(long *)(this + 0x38);
  local_db = this[0x40];
  *(undefined8 *)(this + 0x38) = 0;
  local_d0 = *(long *)(this + 0x48);
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  local_f8 = *(long *)(this + 0x58);
  local_50 = *(long *)(this + 0x68);
  lStack_48 = *(long *)(this + 0x70);
  *(undefined8 *)(this + 0x48) = 0;
  local_110 = *(long *)(this + 0x68);
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  lVar5 = *(long *)this_00;
  *(undefined8 *)(this + 0x58) = 0;
  local_a8 = lVar7;
  local_a0 = local_da;
  local_88 = local_d9;
  local_80 = local_d8;
  local_78 = local_db;
  local_70[0] = local_d0;
  local_60[0] = local_f8;
  if (lVar5 != 0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    *(undefined8 *)this = *(undefined8 *)this_00;
    *(undefined8 *)this_00 = 0;
    lVar5 = *(long *)(this + 8);
  }
  if (lVar5 != *(long *)(this_00 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(this_00 + 8);
    *(undefined8 *)(this_00 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(this_00 + 0x10)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this_00 + 0x10);
    *(undefined8 *)(this_00 + 0x10) = 0;
  }
  lVar5 = *(long *)(this_00 + 0x20);
  this[0x18] = *(String *)(this_00 + 0x18);
  if (*(long *)(this + 0x20) != lVar5) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this_00 + 0x20);
    *(undefined8 *)(this_00 + 0x20) = 0;
  }
  if (*(long *)(this + 0x28) != *(long *)(this_00 + 0x28)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(this_00 + 0x28);
    *(undefined8 *)(this_00 + 0x28) = 0;
  }
  lVar5 = *(long *)(this_00 + 0x38);
  this[0x30] = *(String *)(this_00 + 0x30);
  if (*(long *)(this + 0x38) != lVar5) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(this_00 + 0x38);
    *(undefined8 *)(this_00 + 0x38) = 0;
  }
  lVar5 = *(long *)(this_00 + 0x48);
  this[0x40] = *(String *)(this_00 + 0x40);
  if (*(long *)(this + 0x48) != lVar5) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this_00 + 0x48);
    *(undefined8 *)(this_00 + 0x48) = 0;
  }
  if (*(long *)(this + 0x58) != *(long *)(this_00 + 0x58)) {
    CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this + 0x58));
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this_00 + 0x58);
    *(undefined8 *)(this_00 + 0x58) = 0;
  }
  lVar5 = *(long *)(this + 0x68);
  lVar4 = *(long *)(this_00 + 0x68);
  if (lVar5 != lVar4) {
    if (lVar5 != 0) {
      LOCK();
      plVar1 = (long *)(lVar5 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(this + 0x68);
        *(undefined8 *)(this + 0x68) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      else {
        *(undefined8 *)(this + 0x68) = 0;
      }
      lVar4 = *(long *)(this_00 + 0x68);
      local_110 = local_50;
      local_f8 = local_60[0];
      local_db = local_78;
      local_d0 = local_70[0];
      local_d9 = local_88;
      local_d8 = local_80;
      local_e8 = lStack_90;
      local_da = local_a0;
      local_f0 = local_98;
      local_100 = lStack_b0;
      local_108 = local_b8;
      lVar7 = local_a8;
    }
    *(long *)(this + 0x68) = lVar4;
    *(undefined8 *)(this_00 + 0x68) = 0;
  }
  if (*(long *)(this + 0x70) != *(long *)(this_00 + 0x70)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x70));
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this_00 + 0x70);
    *(undefined8 *)(this_00 + 0x70) = 0;
  }
  if (local_108 != *(long *)this_00) {
    CowData<char32_t>::_unref(this_00);
    local_b8 = 0;
    *(long *)this_00 = local_108;
  }
  if (local_100 != *(long *)(this_00 + 8)) {
    CowData<char32_t>::_unref(this_00 + 8);
    lStack_b0 = 0;
    *(long *)(this_00 + 8) = local_100;
  }
  if (lVar7 != *(long *)(this_00 + 0x10)) {
    CowData<char32_t>::_unref(this_00 + 0x10);
    *(long *)(this_00 + 0x10) = lVar7;
    local_a8 = 0;
  }
  *(String *)(this_00 + 0x18) = local_da;
  if (local_f0 != *(long *)(this_00 + 0x20)) {
    CowData<char32_t>::_unref(this_00 + 0x20);
    *(long *)(this_00 + 0x20) = local_f0;
    local_98 = 0;
  }
  if (local_e8 != *(long *)(this_00 + 0x28)) {
    CowData<char32_t>::_unref(this_00 + 0x28);
    *(long *)(this_00 + 0x28) = local_e8;
    lStack_90 = 0;
  }
  *(String *)(this_00 + 0x30) = local_d9;
  if (local_d8 != *(long *)(this_00 + 0x38)) {
    CowData<char32_t>::_unref(this_00 + 0x38);
    *(long *)(this_00 + 0x38) = local_d8;
    local_80 = 0;
  }
  *(String *)(this_00 + 0x40) = local_db;
  if (local_d0 != *(long *)(this_00 + 0x48)) {
    CowData<char32_t>::_unref(this_00 + 0x48);
    *(long *)(this_00 + 0x48) = local_d0;
    local_70[0] = 0;
  }
  if (local_f8 != *(long *)(this_00 + 0x58)) {
    CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this_00 + 0x58));
    *(long *)(this_00 + 0x58) = local_f8;
    local_60[0] = 0;
  }
  lVar7 = *(long *)(this_00 + 0x68);
  if (local_110 != lVar7) {
    if (lVar7 != 0) {
      LOCK();
      plVar1 = (long *)(lVar7 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *(long *)(this_00 + 0x68);
        *(undefined8 *)(this_00 + 0x68) = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      local_110 = local_50;
    }
    local_50 = 0;
    *(long *)(this_00 + 0x68) = local_110;
  }
  lVar7 = lStack_48;
  if (*(long *)(this_00 + 0x70) != lStack_48) {
    CowData<char32_t>::_unref(this_00 + 0x70);
    *(long *)(this_00 + 0x70) = lVar7;
    lStack_48 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_48);
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_50 + -0x10),false);
    }
  }
  CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_0010c911:
  this = this + 0x78;
  lVar8 = lVar8 + 1;
  goto LAB_0010c919;
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::partial_sort(long, long, long,
   DocData::MethodDoc*) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,OperatorCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,MethodDoc *param_4)

{
  long *plVar1;
  String *pSVar2;
  CowData *pCVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  code *pcVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  MethodDoc *pMVar13;
  long in_FS_OFFSET;
  CowData<DocData::ArgumentDoc> *local_218;
  CowData<char32_t> *local_210;
  CowData<char32_t> *local_208;
  CowData<char32_t> *local_200;
  CowData<char32_t> *local_1f8;
  CowData<char32_t> *local_1f0;
  CowData<char32_t> *local_1e8;
  CowData<char32_t> *local_1e0;
  long local_138;
  long local_130;
  long local_128;
  CowData<char32_t> local_120;
  long local_118;
  long local_110;
  CowData<char32_t> local_108;
  long local_100;
  CowData<char32_t> local_f8;
  long local_f0 [2];
  long local_e0 [2];
  long local_d0;
  long local_c8 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  CowData<char32_t> local_a0;
  undefined8 local_98;
  undefined8 local_90;
  CowData<char32_t> local_88;
  undefined8 local_80;
  CowData<char32_t> local_78;
  undefined8 local_70 [2];
  undefined8 local_60 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  lVar12 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar12 < 2) {
    if (param_2 <= param_3) goto LAB_0010dbf7;
LAB_0010d28b:
    pSVar2 = (String *)(param_4 + param_1 * 0x78);
    pMVar13 = param_4 + param_3 * 0x78;
    lVar10 = param_3;
    do {
      while (cVar8 = String::operator==((String *)pMVar13,pSVar2), cVar8 != '\0') {
        lVar4 = *(long *)((String *)pMVar13 + 0x58);
        lVar5 = *(long *)(pSVar2 + 0x58);
        if (lVar4 == 0) {
          if (lVar5 != 0) {
            lVar9 = *(long *)(lVar5 + -8);
            lVar11 = 0;
            if (lVar9 != 0) goto LAB_0010d34b;
          }
        }
        else {
          lVar11 = *(long *)(lVar4 + -8);
          if (lVar5 == 0) {
            if (lVar11 == 0) {
LAB_0010dc70:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,0,lVar11,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar9 = 0;
          }
          else {
            lVar9 = *(long *)(lVar5 + -8);
            if (lVar11 == lVar9) {
              if (lVar11 < 1) goto LAB_0010dc70;
              cVar8 = String::operator<((String *)(lVar4 + 8),(String *)(lVar5 + 8));
              if (cVar8 != '\0') goto LAB_0010d37f;
              goto LAB_0010d350;
            }
          }
LAB_0010d34b:
          if (lVar11 < lVar9) goto LAB_0010d37f;
        }
LAB_0010d350:
        lVar10 = lVar10 + 1;
        pMVar13 = (MethodDoc *)((String *)pMVar13 + 0x78);
        if (param_2 <= lVar10) goto LAB_0010d4da;
      }
      cVar8 = String::naturalcasecmp_to((String *)pMVar13);
      if (-1 < cVar8) goto LAB_0010d350;
LAB_0010d37f:
      DocData::MethodDoc::MethodDoc((MethodDoc *)&local_138,pMVar13);
      if (*(long *)pMVar13 != *(long *)pSVar2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13,(CowData *)pSVar2);
      }
      if (*(long *)((String *)pMVar13 + 8) != *(long *)(pSVar2 + 8)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 8),(CowData *)(pSVar2 + 8));
      }
      if (*(long *)((String *)pMVar13 + 0x10) != *(long *)(pSVar2 + 0x10)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x10),(CowData *)(pSVar2 + 0x10));
      }
      ((String *)pMVar13)[0x18] = pSVar2[0x18];
      if (*(long *)((String *)pMVar13 + 0x20) != *(long *)(pSVar2 + 0x20)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x20),(CowData *)(pSVar2 + 0x20));
      }
      if (*(long *)((String *)pMVar13 + 0x28) != *(long *)(pSVar2 + 0x28)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x28),(CowData *)(pSVar2 + 0x28));
      }
      ((String *)pMVar13)[0x30] = pSVar2[0x30];
      if (*(long *)((String *)pMVar13 + 0x38) != *(long *)(pSVar2 + 0x38)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x38),(CowData *)(pSVar2 + 0x38));
      }
      ((String *)pMVar13)[0x40] = pSVar2[0x40];
      if (*(long *)((String *)pMVar13 + 0x48) != *(long *)(pSVar2 + 0x48)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x48),(CowData *)(pSVar2 + 0x48));
      }
      if (*(long *)((String *)pMVar13 + 0x58) != *(long *)(pSVar2 + 0x58)) {
        CowData<DocData::ArgumentDoc>::_ref
                  ((CowData<DocData::ArgumentDoc> *)((String *)pMVar13 + 0x58),
                   (CowData *)(pSVar2 + 0x58));
      }
      if (*(long *)((String *)pMVar13 + 0x68) != *(long *)(pSVar2 + 0x68)) {
        CowData<int>::_ref((CowData<int> *)((String *)pMVar13 + 0x68),(CowData *)(pSVar2 + 0x68));
      }
      if (*(long *)((String *)pMVar13 + 0x70) != *(long *)(pSVar2 + 0x70)) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)((String *)pMVar13 + 0x70),(CowData *)(pSVar2 + 0x70));
      }
      lVar10 = lVar10 + 1;
      pMVar13 = (MethodDoc *)((String *)pMVar13 + 0x78);
      DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,(MethodDoc *)&local_138);
      adjust_heap(param_1,0,lVar12,(MethodDoc *)&local_b8,param_4);
      DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
      DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_138);
    } while (lVar10 < param_2);
LAB_0010d4da:
    if (lVar12 < 2) goto LAB_0010dbf7;
  }
  else {
    lVar10 = lVar12 + -2 >> 1;
    pMVar13 = param_4 + (param_1 + lVar10) * 0x78;
    while( true ) {
      DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,pMVar13);
      adjust_heap(param_1,lVar10,lVar12,(MethodDoc *)&local_b8,param_4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
      pMVar13 = pMVar13 + -0x78;
      CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
    }
    if (param_3 < param_2) goto LAB_0010d28b;
  }
  local_1e0 = (CowData<char32_t> *)local_70;
  local_1e8 = (CowData<char32_t> *)&local_80;
  local_1f0 = (CowData<char32_t> *)&local_90;
  local_1f8 = (CowData<char32_t> *)&local_98;
  local_200 = (CowData<char32_t> *)&local_a8;
  local_208 = (CowData<char32_t> *)&local_b0;
  local_210 = (CowData<char32_t> *)&local_48;
  local_218 = (CowData<DocData::ArgumentDoc> *)local_60;
  pCVar3 = (CowData *)(param_4 + param_1 * 0x78);
  pMVar13 = param_4 + param_3 * 0x78 + -0x78;
  lVar12 = (param_3 + -1) - param_1;
  do {
    local_138 = 0;
    if (*(long *)pMVar13 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)pMVar13);
    }
    local_130 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 8) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_130,(CowData *)((CowData<char32_t> *)pMVar13 + 8));
    }
    local_128 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x10) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_128,(CowData *)((CowData<char32_t> *)pMVar13 + 0x10));
    }
    local_120 = ((CowData<char32_t> *)pMVar13)[0x18];
    local_118 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x20) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_118,(CowData *)((CowData<char32_t> *)pMVar13 + 0x20));
    }
    local_110 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x28) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_110,(CowData *)((CowData<char32_t> *)pMVar13 + 0x28));
    }
    local_108 = ((CowData<char32_t> *)pMVar13)[0x30];
    local_100 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x38) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_100,(CowData *)((CowData<char32_t> *)pMVar13 + 0x38));
    }
    local_f8 = ((CowData<char32_t> *)pMVar13)[0x40];
    local_f0[0] = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x48) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_f0,(CowData *)((CowData<char32_t> *)pMVar13 + 0x48));
    }
    local_e0[0] = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x58) != 0) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)local_e0,
                 (CowData *)((CowData<char32_t> *)pMVar13 + 0x58));
    }
    local_d0 = 0;
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x68) != 0) {
      CowData<int>::_ref((CowData<int> *)&local_d0,(CowData *)((CowData<char32_t> *)pMVar13 + 0x68))
      ;
    }
    local_c8[0] = 0;
    lVar10 = *(long *)((CowData<char32_t> *)pMVar13 + 0x70);
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x70) != 0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)local_c8,(CowData *)((CowData<char32_t> *)pMVar13 + 0x70));
      lVar10 = local_c8[0];
    }
    if (*(long *)pMVar13 != *(long *)pCVar3) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13,pCVar3);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 8) != *(long *)(pCVar3 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 8,pCVar3 + 8);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x10) != *(long *)(pCVar3 + 0x10)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x10,pCVar3 + 0x10);
    }
    *(CowData *)((CowData<char32_t> *)pMVar13 + 0x18) = pCVar3[0x18];
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x20) != *(long *)(pCVar3 + 0x20)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x20,pCVar3 + 0x20);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x28) != *(long *)(pCVar3 + 0x28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x28,pCVar3 + 0x28);
    }
    *(CowData *)((CowData<char32_t> *)pMVar13 + 0x30) = pCVar3[0x30];
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x38) != *(long *)(pCVar3 + 0x38)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x38,pCVar3 + 0x38);
    }
    *(CowData *)((CowData<char32_t> *)pMVar13 + 0x40) = pCVar3[0x40];
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x48) != *(long *)(pCVar3 + 0x48)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x48,pCVar3 + 0x48);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x58) != *(long *)(pCVar3 + 0x58)) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)pMVar13 + 0x58),
                 pCVar3 + 0x58);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x68) != *(long *)(pCVar3 + 0x68)) {
      CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)pMVar13 + 0x68),pCVar3 + 0x68);
    }
    if (*(long *)((CowData<char32_t> *)pMVar13 + 0x70) != *(long *)(pCVar3 + 0x70)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar13 + 0x70,pCVar3 + 0x70);
    }
    local_b8 = 0;
    if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_138);
    }
    local_b0 = 0;
    if (local_130 != 0) {
      CowData<char32_t>::_ref(local_208,(CowData *)&local_130);
    }
    local_a8 = 0;
    if (local_128 != 0) {
      CowData<char32_t>::_ref(local_200,(CowData *)&local_128);
    }
    local_98 = 0;
    local_a0 = local_120;
    if (local_118 != 0) {
      CowData<char32_t>::_ref(local_1f8,(CowData *)&local_118);
    }
    local_90 = 0;
    if (local_110 != 0) {
      CowData<char32_t>::_ref(local_1f0,(CowData *)&local_110);
    }
    local_80 = 0;
    local_88 = local_108;
    if (local_100 != 0) {
      CowData<char32_t>::_ref(local_1e8,(CowData *)&local_100);
    }
    local_70[0] = 0;
    local_78 = local_f8;
    if (local_f0[0] != 0) {
      CowData<char32_t>::_ref(local_1e0,(CowData *)local_f0);
    }
    local_60[0] = 0;
    if (local_e0[0] != 0) {
      CowData<DocData::ArgumentDoc>::_ref(local_218,(CowData *)local_e0);
    }
    local_50 = 0;
    if (local_d0 != 0) {
      CowData<int>::_ref((CowData<int> *)&local_50,(CowData *)&local_d0);
    }
    local_48 = 0;
    if (lVar10 != 0) {
      CowData<char32_t>::_ref(local_210,(CowData *)local_c8);
    }
    adjust_heap(param_1,0,lVar12,(CowData<char32_t> *)&local_b8,param_4);
    CowData<char32_t>::_unref(local_210);
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_50 + -0x10),false);
      }
    }
    CowData<DocData::ArgumentDoc>::_unref(local_218);
    CowData<char32_t>::_unref(local_1e0);
    CowData<char32_t>::_unref(local_1e8);
    CowData<char32_t>::_unref(local_1f0);
    CowData<char32_t>::_unref(local_1f8);
    CowData<char32_t>::_unref(local_200);
    CowData<char32_t>::_unref(local_208);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_d0 + -0x10),false);
      }
    }
    pMVar13 = (MethodDoc *)((CowData<char32_t> *)pMVar13 + -0x78);
    CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    bVar6 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar6);
LAB_0010dbf7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<DocData::MethodDoc, OperatorCompare, true>::introsort(long, long, DocData::MethodDoc*,
   long) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,OperatorCompare,true>::introsort
               (long param_1,long param_2,MethodDoc *param_3,long param_4)

{
  long lVar1;
  MethodDoc *pMVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_180;
  long local_160;
  long local_150;
  long local_148;
  long local_140;
  MethodDoc local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_0010e626:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar3 = param_2;
LAB_0010dd41:
      do {
        param_4 = param_4 + -1;
        pMVar2 = (MethodDoc *)
                 median_of_3(param_3 + param_1 * 0x78,param_3 + ((lVar1 >> 1) + param_1) * 0x78,
                             param_3 + lVar3 * 0x78 + -0x78);
        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
        param_2 = partitioner(param_1,lVar3,local_b8,param_3);
        DocData::MethodDoc::~MethodDoc(local_b8);
        lVar1 = lVar3 - param_2;
        if (0x10 < lVar1) {
          if (param_4 != 0) {
            lVar4 = lVar3;
            local_150 = param_4;
LAB_0010ddf3:
            do {
              local_150 = local_150 + -1;
              pMVar2 = (MethodDoc *)
                       median_of_3(param_3 + param_2 * 0x78,
                                   param_3 + ((lVar1 >> 1) + param_2) * 0x78,
                                   param_3 + lVar4 * 0x78 + -0x78);
              DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
              lVar3 = partitioner(param_2,lVar4,local_b8,param_3);
              DocData::MethodDoc::~MethodDoc(local_b8);
              lVar1 = lVar4 - lVar3;
              if (0x10 < lVar1) {
                if (local_150 != 0) {
                  lVar5 = lVar4;
                  local_148 = local_150;
LAB_0010deb8:
                  do {
                    local_148 = local_148 + -1;
                    pMVar2 = (MethodDoc *)
                             median_of_3(param_3 + lVar3 * 0x78,
                                         param_3 + ((lVar1 >> 1) + lVar3) * 0x78,
                                         param_3 + lVar5 * 0x78 + -0x78);
                    DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                    lVar4 = partitioner(lVar3,lVar5,local_b8,param_3);
                    DocData::MethodDoc::~MethodDoc(local_b8);
                    lVar1 = lVar5 - lVar4;
                    if (0x10 < lVar1) {
                      if (local_148 != 0) {
                        lVar6 = lVar5;
                        local_140 = local_148;
LAB_0010df7c:
                        local_140 = local_140 + -1;
                        pMVar2 = (MethodDoc *)
                                 median_of_3(param_3 + lVar4 * 0x78,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 0x78,
                                             param_3 + lVar6 * 0x78 + -0x78);
                        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                        lVar5 = partitioner(lVar4,lVar6,local_b8,param_3);
                        DocData::MethodDoc::~MethodDoc(local_b8);
                        lVar1 = lVar6 - lVar5;
                        if (0x10 < lVar1) goto code_r0x0010e00c;
LAB_0010e4d0:
                        lVar1 = lVar5 - lVar4;
                        if (0x10 < lVar1) goto LAB_0010e4dc;
                        goto LAB_0010e53e;
                      }
LAB_0010e5c1:
                      partial_sort(lVar4,lVar5,lVar5,param_3);
                    }
joined_r0x0010e5e6:
                    lVar1 = lVar4 - lVar3;
                    if (lVar1 < 0x11) {
                      lVar1 = lVar3 - param_2;
                      lVar4 = lVar3;
                      if (0x10 < lVar1) goto LAB_0010ddf3;
                      lVar1 = param_2 - param_1;
                      lVar3 = param_2;
                      if (0x10 < lVar1) goto LAB_0010dd41;
                      goto LAB_0010e626;
                    }
                    lVar5 = lVar4;
                  } while (local_148 != 0);
                }
                partial_sort(lVar3,lVar4,lVar4,param_3);
              }
LAB_0010e67b:
              lVar1 = lVar3 - param_2;
              if (lVar1 < 0x11) {
                lVar1 = param_2 - param_1;
                lVar3 = param_2;
                if (lVar1 < 0x11) goto LAB_0010e626;
                goto LAB_0010dd41;
              }
              lVar4 = lVar3;
            } while (local_150 != 0);
          }
          partial_sort(param_2,lVar3,lVar3,param_3);
        }
        lVar1 = param_2 - param_1;
        if (lVar1 < 0x11) goto LAB_0010e626;
        lVar3 = param_2;
        if (param_4 == 0) break;
      } while( true );
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010e00c:
  if (local_140 != 0) {
    lVar12 = local_140;
    lVar7 = lVar6;
LAB_0010e040:
    do {
      lVar12 = lVar12 + -1;
      pMVar2 = (MethodDoc *)
               median_of_3(param_3 + lVar5 * 0x78,param_3 + ((lVar1 >> 1) + lVar5) * 0x78,
                           param_3 + lVar7 * 0x78 + -0x78);
      DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
      lVar6 = partitioner(lVar5,lVar7,local_b8,param_3);
      DocData::MethodDoc::~MethodDoc(local_b8);
      lVar1 = lVar7 - lVar6;
      if (0x10 < lVar1) {
        if (lVar12 != 0) {
          lVar8 = lVar7;
          local_180 = lVar12;
LAB_0010e0f1:
          do {
            local_180 = local_180 + -1;
            pMVar2 = (MethodDoc *)
                     median_of_3(param_3 + lVar6 * 0x78,param_3 + ((lVar1 >> 1) + lVar6) * 0x78,
                                 param_3 + lVar8 * 0x78 + -0x78);
            DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
            lVar7 = partitioner(lVar6,lVar8,local_b8,param_3);
            DocData::MethodDoc::~MethodDoc(local_b8);
            lVar1 = lVar8 - lVar7;
            if (0x10 < lVar1) {
              if (local_180 != 0) {
                lVar9 = lVar8;
                lVar13 = local_180;
LAB_0010e19d:
                do {
                  lVar13 = lVar13 + -1;
                  pMVar2 = (MethodDoc *)
                           median_of_3(param_3 + lVar7 * 0x78,
                                       param_3 + ((lVar1 >> 1) + lVar7) * 0x78,
                                       param_3 + lVar9 * 0x78 + -0x78);
                  DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                  lVar8 = partitioner(lVar7,lVar9,local_b8,param_3);
                  DocData::MethodDoc::~MethodDoc(local_b8);
                  lVar1 = lVar9 - lVar8;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar10 = lVar9;
                      local_160 = lVar13;
LAB_0010e236:
                      do {
                        local_160 = local_160 + -1;
                        pMVar2 = (MethodDoc *)
                                 median_of_3(param_3 + lVar8 * 0x78,
                                             param_3 + ((lVar1 >> 1) + lVar8) * 0x78,
                                             param_3 + lVar10 * 0x78 + -0x78);
                        DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                        lVar9 = partitioner(lVar8,lVar10,local_b8,param_3);
                        DocData::MethodDoc::~MethodDoc(local_b8);
                        lVar1 = lVar10 - lVar9;
                        if (0x10 < lVar1) {
                          if (local_160 != 0) {
                            lVar11 = lVar10;
                            lVar14 = local_160;
                            do {
                              lVar14 = lVar14 + -1;
                              pMVar2 = (MethodDoc *)
                                       median_of_3(param_3 + lVar9 * 0x78,
                                                   param_3 + ((lVar1 >> 1) + lVar9) * 0x78,
                                                   param_3 + lVar11 * 0x78 + -0x78);
                              DocData::MethodDoc::MethodDoc(local_b8,pMVar2);
                              lVar10 = partitioner(lVar9,lVar11,local_b8,param_3);
                              DocData::MethodDoc::~MethodDoc(local_b8);
                              introsort(lVar10,lVar11,param_3,lVar14);
                              lVar1 = lVar10 - lVar9;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar9 - lVar8;
                                lVar10 = lVar9;
                                if (lVar1 < 0x11) goto LAB_0010e444;
                                goto LAB_0010e236;
                              }
                              lVar11 = lVar10;
                            } while (lVar14 != 0);
                          }
                          partial_sort(lVar9,lVar10,lVar10,param_3);
                        }
                        lVar1 = lVar9 - lVar8;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar8 - lVar7;
                          lVar9 = lVar8;
                          if (lVar1 < 0x11) goto LAB_0010e3b5;
                          goto LAB_0010e19d;
                        }
                        lVar10 = lVar9;
                      } while (local_160 != 0);
                    }
                    partial_sort(lVar8,lVar9,lVar9,param_3);
                  }
LAB_0010e444:
                  lVar1 = lVar8 - lVar7;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar7 - lVar6;
                    lVar8 = lVar7;
                    if (lVar1 < 0x11) goto LAB_0010e3fe;
                    goto LAB_0010e0f1;
                  }
                  lVar9 = lVar8;
                } while (lVar13 != 0);
              }
              partial_sort(lVar7,lVar8,lVar8,param_3);
            }
LAB_0010e3b5:
            lVar1 = lVar7 - lVar6;
            if (lVar1 < 0x11) {
              lVar1 = lVar6 - lVar5;
              lVar7 = lVar6;
              if (lVar1 < 0x11) goto LAB_0010e4d0;
              goto LAB_0010e040;
            }
            lVar8 = lVar7;
          } while (local_180 != 0);
        }
        partial_sort(lVar6,lVar7,lVar7,param_3);
      }
LAB_0010e3fe:
      lVar1 = lVar6 - lVar5;
      if (lVar1 < 0x11) {
        lVar1 = lVar5 - lVar4;
        lVar6 = lVar5;
        if (lVar1 < 0x11) goto joined_r0x0010e5e6;
        goto LAB_0010df7c;
      }
      lVar7 = lVar6;
    } while (lVar12 != 0);
  }
  partial_sort(lVar5,lVar6,lVar6,param_3);
  lVar1 = lVar5 - lVar4;
  if (lVar1 < 0x11) {
LAB_0010e53e:
    lVar1 = lVar4 - lVar3;
    lVar5 = lVar4;
    if (lVar1 < 0x11) goto LAB_0010e67b;
    goto LAB_0010deb8;
  }
LAB_0010e4dc:
  lVar6 = lVar5;
  if (local_140 == 0) goto LAB_0010e5c1;
  goto LAB_0010df7c;
}



/* Vector<DocData::ArgumentDoc>::push_back(DocData::ArgumentDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::ArgumentDoc>::push_back(Vector<DocData::ArgumentDoc> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::ArgumentDoc>::resize<false>
                    ((CowData<DocData::ArgumentDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::ArgumentDoc>::_copy_on_write((CowData<DocData::ArgumentDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 0x28);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      this_00[0x18] = *(CowData<char32_t> *)(param_2 + 0x18);
      if (*(long *)(this_00 + 0x20) == *(long *)(param_2 + 0x20)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* CowData<DocData::TutorialDoc>::_ref(CowData<DocData::TutorialDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::TutorialDoc>::_ref(CowData<DocData::TutorialDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<DocData::TutorialDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::TutorialDoc>::_copy_on_write(CowData<DocData::TutorialDoc> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  ulong uVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(lVar6 * 0x10 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<DocData::MethodDoc>::_ref(CowData<DocData::MethodDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::MethodDoc>::_ref(CowData<DocData::MethodDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::MethodDoc>::_copy_on_write(CowData<DocData::MethodDoc> *this)

{
  MethodDoc *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  MethodDoc *pMVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x78 != 0) {
    uVar6 = lVar1 * 0x78 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        this_00 = (MethodDoc *)((long)(puVar3 + 2) + lVar4);
        lVar7 = lVar7 + 1;
        pMVar5 = (MethodDoc *)(*(long *)this + lVar4);
        lVar4 = lVar4 + 0x78;
        DocData::MethodDoc::MethodDoc(this_00,pMVar5);
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* merge_methods(Vector<DocData::MethodDoc>&, Vector<DocData::MethodDoc> const&) */

void merge_methods(Vector *param_1,Vector *param_2)

{
  String *this;
  String *pSVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar2 + -8);
  }
  pSVar5 = *(String **)(param_2 + 8);
  if (pSVar5 != (String *)0x0) {
    pSVar1 = pSVar5 + *(long *)(pSVar5 + -8) * 0x78;
    for (; pSVar1 != pSVar5; pSVar5 = pSVar5 + 0x78) {
      if (0 < lVar6) {
        do {
          lVar8 = 0;
          lVar7 = lVar6;
          do {
            lVar4 = (lVar7 + lVar8) / 2;
            cVar3 = String::naturalcasecmp_to((String *)(lVar2 + lVar4 * 0x78));
            if (cVar3 < '\0') {
              lVar8 = lVar4 + 1;
              lVar4 = lVar7;
            }
            lVar7 = lVar4;
          } while (lVar8 < lVar4);
          if (lVar8 < lVar6) {
            this = (String *)(lVar2 + lVar8 * 0x78);
            cVar3 = String::operator==(this,pSVar5);
            if (cVar3 != '\0') {
              if (*(long *)(this + 0x28) != *(long *)(pSVar5 + 0x28)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(this + 0x28),(CowData *)(pSVar5 + 0x28));
              }
              this[0x30] = pSVar5[0x30];
              if (*(long *)(this + 0x38) != *(long *)(pSVar5 + 0x38)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(this + 0x38),(CowData *)(pSVar5 + 0x38));
              }
              this[0x40] = pSVar5[0x40];
              if (*(long *)(this + 0x48) != *(long *)(pSVar5 + 0x48)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(this + 0x48),(CowData *)(pSVar5 + 0x48));
              }
              if (*(long *)(this + 0x70) != *(long *)(pSVar5 + 0x70)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)(this + 0x70),(CowData *)(pSVar5 + 0x70));
              }
            }
          }
          pSVar5 = pSVar5 + 0x78;
        } while (pSVar1 != pSVar5);
        return;
      }
    }
  }
  return;
}



/* CowData<DocData::ConstantDoc>::_ref(CowData<DocData::ConstantDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::ConstantDoc>::_ref(CowData<DocData::ConstantDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ConstantDoc>::_copy_on_write(CowData<DocData::ConstantDoc> *this)

{
  ConstantDoc *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ConstantDoc *pCVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x60 != 0) {
    uVar6 = lVar1 * 0x60 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (ConstantDoc *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pCVar5 = (ConstantDoc *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x60;
      DocData::ConstantDoc::ConstantDoc(this_00,pCVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<DocData::PropertyDoc>::_ref(CowData<DocData::PropertyDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::PropertyDoc>::_ref(CowData<DocData::PropertyDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::PropertyDoc>::_copy_on_write(CowData<DocData::PropertyDoc> *this)

{
  PropertyDoc *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  PropertyDoc *pPVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x78 != 0) {
    uVar6 = lVar1 * 0x78 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 0;
    lVar7 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    if (lVar1 != 0) {
      do {
        this_00 = (PropertyDoc *)((long)(puVar3 + 2) + lVar4);
        lVar7 = lVar7 + 1;
        pPVar5 = (PropertyDoc *)(*(long *)this + lVar4);
        lVar4 = lVar4 + 0x78;
        DocData::PropertyDoc::PropertyDoc(this_00,pPVar5);
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<DocData::ThemeItemDoc>::_ref(CowData<DocData::ThemeItemDoc> const&) [clone .part.0] */

void __thiscall
CowData<DocData::ThemeItemDoc>::_ref(CowData<DocData::ThemeItemDoc> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* CowData<DocData::ThemeItemDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ThemeItemDoc>::_copy_on_write(CowData<DocData::ThemeItemDoc> *this)

{
  ThemeItemDoc *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ThemeItemDoc *pTVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x50 != 0) {
    uVar6 = lVar1 * 0x50 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (ThemeItemDoc *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pTVar5 = (ThemeItemDoc *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x50;
      DocData::ThemeItemDoc::ThemeItemDoc(this_00,pTVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Vector<DocData::MethodDoc>::push_back(DocData::MethodDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::MethodDoc>::push_back(Vector<DocData::MethodDoc> *this,MethodDoc *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::MethodDoc>::resize<false>
                    ((CowData<DocData::MethodDoc> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(this + 8));
        DocData::MethodDoc::operator=((MethodDoc *)(*(long *)(this + 8) + lVar3 * 0x78),param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<DocData::ConstantDoc>::push_back(DocData::ConstantDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::ConstantDoc>::push_back(Vector<DocData::ConstantDoc> *this,CowData *param_2)

{
  int iVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::ConstantDoc>::resize<false>
                    ((CowData<DocData::ConstantDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::ConstantDoc>::_copy_on_write((CowData<DocData::ConstantDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(lVar3 * 0x60 + *(long *)(this + 8));
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      this_00[0x10] = *(CowData<char32_t> *)(param_2 + 0x10);
      if (*(long *)(this_00 + 0x18) != *(long *)(param_2 + 0x18)) {
        CowData<char32_t>::_ref(this_00 + 0x18,param_2 + 0x18);
      }
      if (*(long *)(this_00 + 0x20) != *(long *)(param_2 + 0x20)) {
        CowData<char32_t>::_ref(this_00 + 0x20,param_2 + 0x20);
      }
      this_00[0x28] = *(CowData<char32_t> *)(param_2 + 0x28);
      if (*(long *)(this_00 + 0x30) != *(long *)(param_2 + 0x30)) {
        CowData<char32_t>::_ref(this_00 + 0x30,param_2 + 0x30);
      }
      this_00[0x38] = *(CowData<char32_t> *)(param_2 + 0x38);
      if (*(long *)(this_00 + 0x40) != *(long *)(param_2 + 0x40)) {
        CowData<char32_t>::_ref(this_00 + 0x40,param_2 + 0x40);
      }
      this_00[0x48] = *(CowData<char32_t> *)(param_2 + 0x48);
      if (*(long *)(this_00 + 0x50) != *(long *)(param_2 + 0x50)) {
        CowData<char32_t>::_ref(this_00 + 0x50,param_2 + 0x50);
      }
      if (*(long *)(this_00 + 0x58) == *(long *)(param_2 + 0x58)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x58,param_2 + 0x58);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* DocData::ClassDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::ClassDoc&&) [clone .isra.0] */

void __thiscall DocData::ClassDoc::operator=(ClassDoc *this,ClassDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(this + 0x18) != *(long *)(param_1 + 0x18)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<DocData::TutorialDoc>::_unref((CowData<DocData::TutorialDoc> *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x40));
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x50));
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(this + 0x60) != *(long *)(param_1 + 0x60)) {
    CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x60));
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x70));
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(this + 0x80) != *(long *)(param_1 + 0x80)) {
    CowData<DocData::ConstantDoc>::_unref((CowData<DocData::ConstantDoc> *)(this + 0x80));
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
  ::operator=((HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
               *)(this + 0x88),(HashMap *)(param_1 + 0x88));
  if (*(long *)(this + 0xc0) != *(long *)(param_1 + 0xc0)) {
    CowData<DocData::PropertyDoc>::_unref((CowData<DocData::PropertyDoc> *)(this + 0xc0));
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long *)(this + 0xd0) != *(long *)(param_1 + 0xd0)) {
    CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0xd0));
    *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(this + 0xe0) != *(long *)(param_1 + 0xe0)) {
    CowData<DocData::ThemeItemDoc>::_unref((CowData<DocData::ThemeItemDoc> *)(this + 0xe0));
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  this[0xe8] = param_1[0xe8];
  if (*(long *)(this + 0xf0) != *(long *)(param_1 + 0xf0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xf0));
    *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  this[0xf8] = param_1[0xf8];
  if (*(long *)(this + 0x100) != *(long *)(param_1 + 0x100)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x100));
    *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  this[0x108] = param_1[0x108];
  if (*(long *)(this + 0x110) != *(long *)(param_1 + 0x110)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x110));
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  return;
}



/* DocData::ClassDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::ClassDoc const&) [clone .isra.0] */

void __thiscall DocData::ClassDoc::operator=(ClassDoc *this,ClassDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  if (*(long *)(this + 0x18) != *(long *)(param_1 + 0x18)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<DocData::TutorialDoc>::_ref
              ((CowData<DocData::TutorialDoc> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  if (*(long *)(this + 0x60) != *(long *)(param_1 + 0x60)) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x60),(CowData *)(param_1 + 0x60));
  }
  if (*(long *)(this + 0x70) != *(long *)(param_1 + 0x70)) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x70),(CowData *)(param_1 + 0x70));
  }
  if (*(long *)(this + 0x80) != *(long *)(param_1 + 0x80)) {
    CowData<DocData::ConstantDoc>::_ref
              ((CowData<DocData::ConstantDoc> *)(this + 0x80),(CowData *)(param_1 + 0x80));
  }
  HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
  ::operator=((HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
               *)(this + 0x88),(HashMap *)(param_1 + 0x88));
  if (*(long *)(this + 0xc0) != *(long *)(param_1 + 0xc0)) {
    CowData<DocData::PropertyDoc>::_ref
              ((CowData<DocData::PropertyDoc> *)(this + 0xc0),(CowData *)(param_1 + 0xc0));
  }
  if (*(long *)(this + 0xd0) != *(long *)(param_1 + 0xd0)) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0xd0),(CowData *)(param_1 + 0xd0));
  }
  if (*(long *)(this + 0xe0) != *(long *)(param_1 + 0xe0)) {
    CowData<DocData::ThemeItemDoc>::_ref
              ((CowData<DocData::ThemeItemDoc> *)(this + 0xe0),(CowData *)(param_1 + 0xe0));
  }
  this[0xe8] = param_1[0xe8];
  if (*(long *)(this + 0xf0) != *(long *)(param_1 + 0xf0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xf0),(CowData *)(param_1 + 0xf0));
  }
  this[0xf8] = param_1[0xf8];
  if (*(long *)(this + 0x100) != *(long *)(param_1 + 0x100)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x100),(CowData *)(param_1 + 0x100));
  }
  this[0x108] = param_1[0x108];
  if (*(long *)(this + 0x110) != *(long *)(param_1 + 0x110)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x110),(CowData *)(param_1 + 0x110));
    return;
  }
  return;
}



/* Vector<DocData::PropertyDoc>::push_back(DocData::PropertyDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::PropertyDoc>::push_back(Vector<DocData::PropertyDoc> *this,PropertyDoc *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::PropertyDoc>::resize<false>
                    ((CowData<DocData::PropertyDoc> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<DocData::PropertyDoc>::_copy_on_write((CowData<DocData::PropertyDoc> *)(this + 8));
        DocData::PropertyDoc::operator=((PropertyDoc *)(*(long *)(this + 8) + lVar3 * 0x78),param_2)
        ;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<DocData::ThemeItemDoc>::push_back(DocData::ThemeItemDoc) [clone .isra.0] */

void __thiscall
Vector<DocData::ThemeItemDoc>::push_back(Vector<DocData::ThemeItemDoc> *this,CowData *param_2)

{
  int iVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DocData::ThemeItemDoc>::resize<false>
                    ((CowData<DocData::ThemeItemDoc> *)(this + 8),lVar2);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar3 = -1;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8);
    lVar3 = lVar2 + -1;
    if (-1 < lVar3) {
      CowData<DocData::ThemeItemDoc>::_copy_on_write((CowData<DocData::ThemeItemDoc> *)(this + 8));
      this_00 = (CowData<char32_t> *)(lVar3 * 0x50 + *(long *)(this + 8));
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      if (*(long *)(this_00 + 0x18) != *(long *)(param_2 + 0x18)) {
        CowData<char32_t>::_ref(this_00 + 0x18,param_2 + 0x18);
      }
      this_00[0x20] = *(CowData<char32_t> *)(param_2 + 0x20);
      if (*(long *)(this_00 + 0x28) != *(long *)(param_2 + 0x28)) {
        CowData<char32_t>::_ref(this_00 + 0x28,param_2 + 0x28);
      }
      this_00[0x30] = *(CowData<char32_t> *)(param_2 + 0x30);
      if (*(long *)(this_00 + 0x38) != *(long *)(param_2 + 0x38)) {
        CowData<char32_t>::_ref(this_00 + 0x38,param_2 + 0x38);
      }
      if (*(long *)(this_00 + 0x40) != *(long *)(param_2 + 0x40)) {
        CowData<char32_t>::_ref(this_00 + 0x40,param_2 + 0x40);
      }
      if (*(long *)(this_00 + 0x48) == *(long *)(param_2 + 0x48)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x48,param_2 + 0x48);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false);
  return;
}



/* DocTools::merge_from(DocTools const&) */

void __thiscall DocTools::merge_from(DocTools *this,DocTools *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  code *pcVar21;
  undefined8 *puVar22;
  char cVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  String *pSVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  String *pSVar38;
  String *pSVar39;
  uint uVar40;
  uint uVar41;
  String *pSVar42;
  long lVar43;
  long in_FS_OFFSET;
  long local_98;
  String *local_90;
  long local_88;
  undefined8 *local_50 [2];
  long local_40;
  
  puVar3 = *(undefined8 **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x00110f09:
  if (puVar3 == (undefined8 *)0x0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x30) * 8);
    uVar24 = String::hash();
    uVar34 = CONCAT44(0,uVar2);
    lVar36 = *(long *)(param_1 + 0x18);
    uVar28 = 1;
    if (uVar24 != 0) {
      uVar28 = uVar24;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar28 * lVar32;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar34;
    lVar30 = SUB168(auVar5 * auVar13,8);
    uVar24 = *(uint *)(lVar36 + lVar30 * 4);
    iVar29 = SUB164(auVar5 * auVar13,8);
    if (uVar24 != 0) {
      uVar40 = 0;
      do {
        if (uVar24 == uVar28) {
          cVar23 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + lVar30 * 8) + 0x10),
                                      (String *)(puVar3 + 3));
          if (cVar23 != '\0') {
            if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x34) == 0))
            goto LAB_00111089;
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4);
            lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x30) * 8);
            uVar24 = String::hash();
            uVar34 = CONCAT44(0,uVar2);
            lVar36 = *(long *)(param_1 + 0x18);
            uVar28 = 1;
            if (uVar24 != 0) {
              uVar28 = uVar24;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar28 * lVar32;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar34;
            lVar30 = SUB168(auVar9 * auVar17,8);
            uVar24 = *(uint *)(lVar36 + lVar30 * 4);
            uVar40 = SUB164(auVar9 * auVar17,8);
            if (uVar24 == 0) goto LAB_00111089;
            uVar41 = 0;
            goto LAB_00111187;
          }
          lVar36 = *(long *)(param_1 + 0x18);
        }
        uVar40 = uVar40 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar29 + 1) * lVar32;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar34;
        lVar30 = SUB168(auVar6 * auVar14,8);
        uVar24 = *(uint *)(lVar36 + lVar30 * 4);
        iVar29 = SUB164(auVar6 * auVar14,8);
      } while ((uVar24 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar24 * lVar32, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar34, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar2 + iVar29) - SUB164(auVar7 * auVar15,8)) * lVar32,
              auVar16._8_8_ = 0, auVar16._0_8_ = uVar34, uVar40 <= SUB164(auVar8 * auVar16,8)));
    }
  }
  goto LAB_00111038;
LAB_00111187:
  if (uVar24 == uVar28) {
    cVar23 = String::operator==((String *)(*(long *)(*(long *)(param_1 + 0x10) + lVar30 * 8) + 0x10)
                                ,(String *)(puVar3 + 3));
    if (cVar23 != '\0') goto LAB_001111b4;
    lVar36 = *(long *)(param_1 + 0x18);
  }
  uVar41 = uVar41 + 1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)(uVar40 + 1) * lVar32;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar34;
  lVar30 = SUB168(auVar10 * auVar18,8);
  uVar24 = *(uint *)(lVar36 + lVar30 * 4);
  uVar40 = SUB164(auVar10 * auVar18,8);
  if ((uVar24 == 0) ||
     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar24 * lVar32, auVar19._8_8_ = 0,
     auVar19._0_8_ = uVar34, auVar12._8_8_ = 0,
     auVar12._0_8_ = (ulong)((uVar2 + uVar40) - SUB164(auVar11 * auVar19,8)) * lVar32,
     auVar20._8_8_ = 0, auVar20._0_8_ = uVar34, SUB164(auVar12 * auVar20,8) < uVar41)) {
LAB_00111089:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar21 = (code *)invalidInstructionException();
    (*pcVar21)();
  }
  goto LAB_00111187;
LAB_001111b4:
  lVar32 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar40 * 8);
  *(undefined1 *)(puVar3 + 0x20) = *(undefined1 *)(lVar32 + 0x100);
  if (puVar3[0x21] != *(long *)(lVar32 + 0x108)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 0x21),(CowData *)(lVar32 + 0x108));
  }
  *(undefined1 *)(puVar3 + 0x22) = *(undefined1 *)(lVar32 + 0x110);
  if (puVar3[0x23] != *(long *)(lVar32 + 0x118)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 0x23),(CowData *)(lVar32 + 0x118));
  }
  if (puVar3[7] != *(long *)(lVar32 + 0x38)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 7),(CowData *)(lVar32 + 0x38));
  }
  if (puVar3[6] != *(long *)(lVar32 + 0x30)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 6),(CowData *)(lVar32 + 0x30));
  }
  if (puVar3[5] != *(long *)(lVar32 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 5),(CowData *)(lVar32 + 0x28));
  }
  if (puVar3[9] != *(long *)(lVar32 + 0x48)) {
    CowData<DocData::TutorialDoc>::_ref
              ((CowData<DocData::TutorialDoc> *)(puVar3 + 9),(CowData *)(lVar32 + 0x48));
  }
  pSVar39 = *(String **)(lVar32 + 0x58);
  if (pSVar39 == (String *)0x0) {
    lVar36 = 0;
  }
  else {
    lVar36 = *(long *)(pSVar39 + -8);
  }
  CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(puVar3 + 0xb));
  pSVar42 = (String *)puVar3[0xb];
  CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(puVar3 + 0xb));
  pSVar38 = (String *)puVar3[0xb];
  if (pSVar38 != (String *)0x0) {
    pSVar38 = pSVar38 + *(long *)(pSVar38 + -8) * 0x78;
  }
  for (; pSVar38 != pSVar42; pSVar42 = pSVar42 + 0x78) {
    if (0 < lVar36) goto LAB_0011137b;
  }
LAB_001116f5:
  merge_methods((Vector *)(puVar3 + 0xc),(Vector *)(lVar32 + 0x60));
  merge_methods((Vector *)(puVar3 + 0x10),(Vector *)(lVar32 + 0x80));
  lVar36 = *(long *)(lVar32 + 0x98);
  if (lVar36 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = *(long *)(lVar36 + -8);
  }
  CowData<DocData::ConstantDoc>::_copy_on_write((CowData<DocData::ConstantDoc> *)(puVar3 + 0x13));
  pSVar39 = (String *)puVar3[0x13];
  CowData<DocData::ConstantDoc>::_copy_on_write((CowData<DocData::ConstantDoc> *)(puVar3 + 0x13));
  pSVar38 = (String *)puVar3[0x13];
  if (pSVar38 != (String *)0x0) {
    pSVar38 = pSVar38 + *(long *)(pSVar38 + -8) * 0x60;
  }
  for (; pSVar38 != pSVar39; pSVar39 = pSVar39 + 0x60) {
    if (0 < local_98) goto LAB_00111c68;
  }
LAB_001117b8:
  merge_methods((Vector *)(puVar3 + 0x1c),(Vector *)(lVar32 + 0xe0));
  CowData<DocData::PropertyDoc>::_copy_on_write((CowData<DocData::PropertyDoc> *)(puVar3 + 0x1b));
  lVar36 = puVar3[0x1b];
  if (lVar36 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = *(long *)(lVar36 + -8);
  }
  pSVar39 = *(String **)(lVar32 + 0xd8);
  if (pSVar39 != (String *)0x0) {
    pSVar38 = pSVar39 + *(long *)(pSVar39 + -8) * 0x78;
    for (; pSVar39 != pSVar38; pSVar39 = pSVar39 + 0x78) {
      if (0 < local_98) goto LAB_00111b50;
    }
  }
LAB_00111841:
  CowData<DocData::ThemeItemDoc>::_copy_on_write((CowData<DocData::ThemeItemDoc> *)(puVar3 + 0x1f));
  lVar36 = puVar3[0x1f];
  if (lVar36 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = *(long *)(lVar36 + -8);
  }
  local_90 = *(String **)(lVar32 + 0xf8);
  if ((local_90 != (String *)0x0) &&
     (pSVar39 = local_90 + *(long *)(local_90 + -8) * 0x50, local_90 != pSVar39)) {
    pSVar38 = local_90 + 0x10;
    do {
      if (0 < local_88) goto LAB_001119f8;
      local_90 = local_90 + 0x50;
      pSVar38 = pSVar38 + 0x50;
    } while (pSVar39 != local_90);
  }
LAB_001118c5:
  CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(puVar3 + 0xf));
  lVar36 = puVar3[0xf];
  if (lVar36 == 0) {
    local_98 = 0;
  }
  else {
    local_98 = *(long *)(lVar36 + -8);
  }
  pSVar39 = *(String **)(lVar32 + 0x78);
  if (pSVar39 != (String *)0x0) {
    pSVar38 = pSVar39 + *(long *)(pSVar39 + -8) * 0x78;
    for (; pSVar39 != pSVar38; pSVar39 = pSVar39 + 0x78) {
      if (0 < local_98) goto LAB_00111d9c;
    }
  }
LAB_00111038:
  puVar3 = (undefined8 *)*puVar3;
  goto joined_r0x00110f09;
LAB_0011137b:
  do {
    lVar30 = 0;
    pSVar31 = pSVar39;
    do {
      lVar33 = *(long *)(pSVar42 + 0x58);
      if (*(long *)(pSVar31 + 0x58) == 0) {
        lVar37 = 0;
        if (lVar33 != 0) goto LAB_001113bf;
LAB_001113c8:
        cVar23 = String::operator!=(pSVar31,pSVar42);
        if (cVar23 == '\0') {
          if (*(long *)(pSVar31 + 0x58) == 0) {
            local_50[0] = (undefined8 *)0x0;
          }
          else {
            local_50[0] = (undefined8 *)0x0;
            __n = *(size_t *)(*(long *)(pSVar31 + 0x58) + -8);
            if ((long)__n < 0) {
              _err_print_error("resize","./core/templates/cowdata.h",0x157,
                               "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",
                               0,0);
            }
            else if (__n != 0) {
              uVar34 = __n - 1 | __n - 1 >> 1;
              uVar34 = uVar34 | uVar34 >> 2;
              uVar34 = uVar34 | uVar34 >> 4;
              uVar34 = uVar34 | uVar34 >> 8;
              uVar34 = uVar34 | uVar34 >> 0x10;
              puVar25 = (undefined8 *)Memory::alloc_static((uVar34 | uVar34 >> 0x20) + 0x11,false);
              if (puVar25 == (undefined8 *)0x0) {
                _err_print_error("resize","./core/templates/cowdata.h",0x171,
                                 "Parameter \"mem_new\" is null.",0,0);
              }
              else {
                local_50[0] = puVar25 + 2;
                *puVar25 = 1;
                memset(local_50[0],0,__n);
                puVar25[1] = __n;
              }
              lVar33 = 0;
              do {
                lVar37 = 0;
                do {
                  lVar43 = *(long *)(pSVar42 + 0x58);
                  if (lVar43 == 0) {
LAB_001115b0:
                    lVar35 = 0;
                    lVar27 = lVar37;
                    goto LAB_001115d4;
                  }
                  lVar35 = *(long *)(lVar43 + -8);
                  lVar27 = lVar37;
                  if (lVar35 <= lVar37) goto LAB_001115d4;
                  lVar4 = *(long *)(pSVar31 + 0x58);
                  lVar27 = lVar33;
                  if (lVar4 == 0) {
                    lVar35 = 0;
                    goto LAB_001115d4;
                  }
                  lVar35 = *(long *)(lVar4 + -8);
                  if (lVar35 <= lVar33) goto LAB_001115d4;
                  cVar23 = String::operator==((String *)(lVar4 + 8 + lVar33 * 0x28),
                                              (String *)(lVar43 + 8 + lVar37 * 0x28));
                  puVar25 = local_50[0];
                  if (cVar23 != '\0') {
                    if (local_50[0] == (undefined8 *)0x0) goto LAB_001115b0;
                    lVar35 = local_50[0][-1];
                    lVar27 = lVar37;
                    if (lVar35 <= lVar37) goto LAB_001115d4;
                    if (*(char *)((long)local_50[0] + lVar37) == '\0') {
                      puVar22 = local_50[0];
                      if (1 < (ulong)local_50[0][-2]) {
                        if (local_50[0] == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)invalidInstructionException();
                          (*pcVar21)();
                        }
                        __n_00 = local_50[0][-1];
                        lVar43 = 0;
                        if (__n_00 != 0) {
                          uVar34 = __n_00 - 1 | __n_00 - 1 >> 1;
                          uVar34 = uVar34 | uVar34 >> 2;
                          uVar34 = uVar34 | uVar34 >> 4;
                          uVar34 = uVar34 | uVar34 >> 8;
                          uVar34 = uVar34 | uVar34 >> 0x10;
                          lVar43 = (uVar34 | uVar34 >> 0x20) + 1;
                        }
                        puVar26 = (undefined8 *)Memory::alloc_static(lVar43 + 0x10,false);
                        puVar22 = local_50[0];
                        if (puVar26 == (undefined8 *)0x0) {
                          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                                           "Parameter \"mem_new\" is null.",0,0);
                          puVar22 = local_50[0];
                        }
                        else {
                          puVar25 = puVar26 + 2;
                          *puVar26 = 1;
                          puVar26[1] = __n_00;
                          memcpy(puVar25,local_50[0],__n_00);
                          LOCK();
                          plVar1 = puVar22 + -2;
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          puVar22 = puVar25;
                          if (*plVar1 == 0) {
                            Memory::free_static(local_50[0] + -2,false);
                          }
                        }
                      }
                      local_50[0] = puVar22;
                      *(undefined1 *)((long)puVar25 + lVar37) = 1;
                      break;
                    }
                  }
                  lVar37 = lVar37 + 1;
                } while (lVar37 < (long)__n);
                lVar33 = lVar33 + 1;
              } while (lVar33 < (long)__n);
              lVar27 = 0;
              if (local_50[0] != (undefined8 *)0x0) {
                lVar35 = local_50[0][-1];
                while( true ) {
                  if (lVar35 <= lVar27) goto LAB_001115d4;
                  if (*(char *)((long)local_50[0] + lVar27) == '\0') break;
                  lVar27 = lVar27 + 1;
                  if ((long)__n <= lVar27) goto LAB_00111654;
                }
                CowData<bool>::_unref((CowData<bool> *)local_50);
                goto LAB_00111390;
              }
              lVar35 = 0;
              goto LAB_001115d4;
            }
          }
LAB_00111654:
          CowData<bool>::_unref((CowData<bool> *)local_50);
          if (*(long *)(pSVar42 + 0x28) != *(long *)(pSVar31 + 0x28)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(pSVar42 + 0x28),(CowData *)(pSVar31 + 0x28));
          }
          lVar30 = *(long *)(pSVar31 + 0x38);
          pSVar42[0x30] = pSVar31[0x30];
          if (*(long *)(pSVar42 + 0x38) != lVar30) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(pSVar42 + 0x38),(CowData *)(pSVar31 + 0x38));
          }
          lVar30 = *(long *)(pSVar31 + 0x48);
          pSVar42[0x40] = pSVar31[0x40];
          if (*(long *)(pSVar42 + 0x48) != lVar30) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)(pSVar42 + 0x48),(CowData *)(pSVar31 + 0x48));
          }
          break;
        }
      }
      else {
        lVar37 = *(long *)(*(long *)(pSVar31 + 0x58) + -8);
        if (lVar33 == 0) {
          lVar33 = 0;
        }
        else {
LAB_001113bf:
          lVar33 = *(long *)(lVar33 + -8);
        }
        if (lVar33 == lVar37) goto LAB_001113c8;
      }
LAB_00111390:
      lVar30 = lVar30 + 1;
      pSVar31 = pSVar31 + 0x78;
    } while (lVar30 != lVar36);
    pSVar42 = pSVar42 + 0x78;
  } while (pSVar38 != pSVar42);
  goto LAB_001116f5;
LAB_00111c68:
  do {
    lVar30 = 0;
    lVar33 = local_98;
    do {
      while( true ) {
        lVar37 = lVar30 + lVar33;
        lVar43 = lVar37 / 2;
        cVar23 = String::operator<((String *)
                                   (((lVar37 - (lVar37 >> 0x3f) & 0xfffffffffffffffeU) + lVar43) *
                                    0x20 + lVar36),pSVar39);
        if (cVar23 != '\0') break;
        lVar33 = lVar43;
        if (lVar43 <= lVar30) goto LAB_00111cb0;
      }
      lVar30 = lVar43 + 1;
    } while (lVar30 < lVar33);
LAB_00111cb0:
    if (lVar30 < local_98) {
      pSVar42 = (String *)(lVar36 + lVar30 * 0x60);
      cVar23 = String::operator==(pSVar42,pSVar39);
      if (cVar23 != '\0') {
        if (*(long *)(pSVar39 + 0x30) != *(long *)(pSVar42 + 0x30)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar39 + 0x30),(CowData *)(pSVar42 + 0x30))
          ;
        }
        pSVar39[0x38] = pSVar42[0x38];
        if (*(long *)(pSVar39 + 0x40) != *(long *)(pSVar42 + 0x40)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar39 + 0x40),(CowData *)(pSVar42 + 0x40))
          ;
        }
        pSVar39[0x48] = pSVar42[0x48];
        if (*(long *)(pSVar39 + 0x50) != *(long *)(pSVar42 + 0x50)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar39 + 0x50),(CowData *)(pSVar42 + 0x50))
          ;
        }
        if (*(long *)(pSVar39 + 0x58) != *(long *)(pSVar42 + 0x58)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar39 + 0x58),(CowData *)(pSVar42 + 0x58))
          ;
        }
      }
    }
    pSVar39 = pSVar39 + 0x60;
  } while (pSVar38 != pSVar39);
  goto LAB_001117b8;
LAB_00111b50:
  do {
    lVar30 = 0;
    lVar33 = local_98;
    do {
      while( true ) {
        lVar37 = (lVar33 + lVar30) / 2;
        cVar23 = String::naturalcasecmp_to((String *)(lVar36 + lVar37 * 0x78));
        if (-1 < cVar23) break;
        lVar30 = lVar37 + 1;
        if (lVar33 <= lVar30) goto LAB_00111ba0;
      }
      lVar33 = lVar37;
    } while (lVar30 < lVar37);
LAB_00111ba0:
    if (lVar30 < local_98) {
      pSVar42 = (String *)(lVar36 + lVar30 * 0x78);
      cVar23 = String::operator==(pSVar42,pSVar39);
      if (cVar23 != '\0') {
        if (*(long *)(pSVar42 + 0x20) != *(long *)(pSVar39 + 0x20)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x20),(CowData *)(pSVar39 + 0x20))
          ;
        }
        pSVar42[0x50] = pSVar39[0x50];
        if (*(long *)(pSVar42 + 0x58) != *(long *)(pSVar39 + 0x58)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x58),(CowData *)(pSVar39 + 0x58))
          ;
        }
        pSVar42[0x60] = pSVar39[0x60];
        if (*(long *)(pSVar42 + 0x68) != *(long *)(pSVar39 + 0x68)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x68),(CowData *)(pSVar39 + 0x68))
          ;
        }
        if (*(long *)(pSVar42 + 0x70) != *(long *)(pSVar39 + 0x70)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x70),(CowData *)(pSVar39 + 0x70))
          ;
        }
      }
    }
    pSVar39 = pSVar39 + 0x78;
  } while (pSVar38 != pSVar39);
  goto LAB_00111841;
LAB_001119f8:
  do {
    lVar30 = 0;
    lVar33 = local_88;
    do {
      while( true ) {
        lVar37 = (lVar30 + lVar33) / 2;
        pSVar31 = (String *)(lVar36 + lVar37 * 0x50);
        pSVar42 = pSVar31 + 0x10;
        cVar23 = String::operator==(pSVar42,pSVar38);
        if (cVar23 != '\0') break;
        cVar23 = String::operator<(pSVar42,pSVar38);
        if (cVar23 == '\0') goto LAB_00111a19;
LAB_00111a65:
        lVar30 = lVar37 + 1;
        if (lVar33 <= lVar30) goto LAB_00111a6e;
      }
      cVar23 = String::naturalcasecmp_to(pSVar31);
      if (cVar23 < '\0') goto LAB_00111a65;
LAB_00111a19:
      lVar33 = lVar37;
    } while (lVar30 < lVar37);
LAB_00111a6e:
    if (lVar30 < local_88) {
      pSVar42 = (String *)(lVar36 + lVar30 * 0x50);
      cVar23 = String::operator==(pSVar42,local_90);
      if ((cVar23 != '\0') && (cVar23 = String::operator==(pSVar42 + 0x10,pSVar38), cVar23 != '\0'))
      {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x18),(CowData *)(local_90 + 0x18));
        pSVar42[0x20] = local_90[0x20];
        CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x28),(CowData *)(local_90 + 0x28));
        pSVar42[0x30] = local_90[0x30];
        CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x38),(CowData *)(local_90 + 0x38));
        CowData<char32_t>::_ref((CowData<char32_t> *)(pSVar42 + 0x48),(CowData *)(local_90 + 0x48));
      }
    }
    pSVar38 = pSVar38 + 0x50;
    local_90 = local_90 + 0x50;
  } while (pSVar39 != local_90);
  goto LAB_001118c5;
LAB_00111d9c:
  do {
    lVar32 = 0;
    lVar30 = local_98;
    do {
      lVar33 = (lVar32 + lVar30) / 2;
      pSVar42 = (String *)(lVar36 + lVar33 * 0x78);
      cVar23 = String::operator==(pSVar42,pSVar39);
      if (cVar23 == '\0') {
        cVar23 = String::naturalcasecmp_to(pSVar42);
        if (cVar23 < '\0') {
LAB_00111e29:
          lVar32 = lVar33 + 1;
          lVar33 = lVar30;
        }
      }
      else {
        lVar37 = *(long *)(pSVar42 + 0x58);
        lVar43 = *(long *)(pSVar39 + 0x58);
        if (lVar37 == 0) {
          if (lVar43 != 0) {
            lVar27 = *(long *)(lVar43 + -8);
            lVar35 = 0;
            if (lVar27 != 0) goto LAB_00111dcf;
          }
        }
        else {
          lVar35 = *(long *)(lVar37 + -8);
          if (lVar43 == 0) {
            if (lVar35 == 0) goto LAB_00111ee4;
            lVar27 = 0;
          }
          else {
            lVar27 = *(long *)(lVar43 + -8);
            if (lVar27 == lVar35) {
              if (0 < lVar27) {
                cVar23 = String::operator<((String *)(lVar37 + 8),(String *)(lVar43 + 8));
                if (cVar23 != '\0') goto LAB_00111e29;
                goto LAB_00111de0;
              }
              goto LAB_00111ee4;
            }
          }
LAB_00111dcf:
          if (lVar35 < lVar27) goto LAB_00111e29;
        }
      }
LAB_00111de0:
      lVar30 = lVar33;
    } while (lVar32 < lVar33);
    if (lVar32 < local_98) {
      pSVar42 = (String *)(lVar36 + lVar32 * 0x78);
      cVar23 = String::operator==(pSVar42,pSVar39);
      if (cVar23 != '\0') {
        lVar32 = *(long *)(pSVar42 + 0x58);
        lVar30 = *(long *)(pSVar39 + 0x58);
        if (lVar32 == 0) {
          if ((lVar30 == 0) || (*(long *)(lVar30 + -8) == 0)) {
LAB_00111f1c:
            if (*(long *)(pSVar42 + 0x28) != *(long *)(pSVar39 + 0x28)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(pSVar42 + 0x28),(CowData *)(pSVar39 + 0x28));
            }
            pSVar42[0x30] = pSVar39[0x30];
            if (*(long *)(pSVar42 + 0x38) != *(long *)(pSVar39 + 0x38)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(pSVar42 + 0x38),(CowData *)(pSVar39 + 0x38));
            }
            pSVar42[0x40] = pSVar39[0x40];
            if (*(long *)(pSVar42 + 0x48) != *(long *)(pSVar39 + 0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(pSVar42 + 0x48),(CowData *)(pSVar39 + 0x48));
            }
          }
        }
        else {
          lVar33 = *(long *)(lVar32 + -8);
          if (lVar30 == 0) {
            if (lVar33 == 0) {
              lVar35 = 0;
LAB_00111ee4:
              lVar27 = 0;
LAB_001115d4:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar27,lVar35,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar21 = (code *)invalidInstructionException();
              (*pcVar21)();
            }
          }
          else {
            lVar35 = *(long *)(lVar30 + -8);
            if (lVar33 == lVar35) {
              if (lVar33 < 1) goto LAB_00111ee4;
              cVar23 = String::operator==((String *)(lVar32 + 8),(String *)(lVar30 + 8));
              if (cVar23 != '\0') goto LAB_00111f1c;
            }
          }
        }
      }
    }
    pSVar39 = pSVar39 + 0x78;
  } while (pSVar38 != pSVar39);
  goto LAB_00111038;
}



/* DocTools::add_doc(DocData::ClassDoc const&) */

void __thiscall DocTools::add_doc(DocTools *this,ClassDoc *param_1)

{
  undefined8 uVar1;
  ClassDoc *this_00;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this_01;
  undefined4 *puVar2;
  
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    this_00 = (ClassDoc *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[]((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                            *)(this + 8),(String *)param_1);
    DocData::ClassDoc::operator=(this_00,param_1);
    this_01 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
              HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
              ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                            *)(this + 0x38),(String *)(param_1 + 8));
    if (*(long *)this_01 == 0) {
      puVar2 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
      uVar1 = *(undefined8 *)(this_01 + 8);
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *(undefined4 **)this_01 = puVar2;
      *puVar2 = 1;
      *(undefined8 *)(puVar2 + 2) = uVar1;
      *(undefined8 *)(puVar2 + 4) = uVar1;
      *(undefined8 *)(puVar2 + 6) = uVar1;
    }
    RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert(this_01,(String *)param_1);
    return;
  }
  _err_print_error("add_doc","editor/doc_tools.cpp",0x162,
                   "Condition \"p_class_doc.name.is_empty()\" is true.",0,0);
  return;
}



/* DocTools::remove_doc(String const&) */

void __thiscall DocTools::remove_doc(DocTools *this,String *param_1)

{
  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
  *this_00;
  String *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  char cVar49;
  uint uVar50;
  long lVar51;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this_01;
  int iVar52;
  uint uVar53;
  long lVar54;
  long lVar55;
  ulong uVar56;
  ulong uVar57;
  long *plVar58;
  ulong uVar59;
  long lVar60;
  ulong uVar61;
  Element *pEVar62;
  uint *puVar63;
  uint uVar64;
  uint uVar65;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    this_00 = (HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
               *)(this + 8);
    local_44 = 0;
    cVar49 = HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
             ::_lookup_pos(this_00,param_1,&local_44);
    if (cVar49 != '\0') {
      lVar51 = HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
               ::operator[](this_00,param_1);
      if ((*(long *)(this + 0x40) != 0) && (*(int *)(this + 100) != 0)) {
        pSVar1 = (String *)(lVar51 + 8);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
        uVar57 = CONCAT44(0,uVar6);
        lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
        uVar50 = String::hash();
        uVar53 = 1;
        if (uVar50 != 0) {
          uVar53 = uVar50;
        }
        lVar60 = *(long *)(this + 0x48);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar53 * lVar51;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar57;
        lVar55 = SUB168(auVar15 * auVar35,8);
        uVar50 = *(uint *)(lVar60 + lVar55 * 4);
        iVar52 = SUB164(auVar15 * auVar35,8);
        if (uVar50 != 0) {
          uVar64 = 0;
          do {
            if (uVar53 == uVar50) {
              cVar49 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x40) + lVar55 * 8) + 0x10),
                                          pSVar1);
              if (cVar49 != '\0') {
                this_01 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                          HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                          ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                        *)(this + 0x38),pSVar1);
                if ((*(long *)this_01 == 0) ||
                   (pEVar62 = *(Element **)(*(long *)this_01 + 0x10),
                   pEVar62 == *(Element **)(this_01 + 8))) goto LAB_001125bd;
                goto LAB_0011258a;
              }
              lVar60 = *(long *)(this + 0x48);
            }
            uVar64 = uVar64 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar52 + 1) * lVar51;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = uVar57;
            lVar55 = SUB168(auVar16 * auVar36,8);
            uVar50 = *(uint *)(lVar60 + lVar55 * 4);
            iVar52 = SUB164(auVar16 * auVar36,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar51, auVar37._8_8_ = 0,
                  auVar37._0_8_ = uVar57, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar6 + iVar52) - SUB164(auVar17 * auVar37,8)) * lVar51,
                  auVar38._8_8_ = 0, auVar38._0_8_ = uVar57, uVar64 <= SUB164(auVar18 * auVar38,8)))
          ;
        }
      }
      goto LAB_00112222;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("remove_doc","editor/doc_tools.cpp",0x168,
                     "Condition \"p_class_name.is_empty() || !class_list.has(p_class_name)\" is true."
                     ,0,0);
    return;
  }
  goto LAB_00112965;
LAB_00112670:
  uVar65 = uVar65 + 1;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = (ulong)(uVar64 + 1) * lVar51;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar57;
  lVar55 = SUB168(auVar20 * auVar40,8);
  uVar50 = *(uint *)(lVar60 + lVar55 * 4);
  uVar64 = SUB164(auVar20 * auVar40,8);
  if ((uVar50 == 0) ||
     (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar50 * lVar51, auVar41._8_8_ = 0,
     auVar41._0_8_ = uVar57, auVar22._8_8_ = 0,
     auVar22._0_8_ = (ulong)((uVar6 + uVar64) - SUB164(auVar21 * auVar41,8)) * lVar51,
     auVar42._8_8_ = 0, auVar42._0_8_ = uVar57, SUB164(auVar22 * auVar42,8) < uVar65))
  goto LAB_00112222;
  goto LAB_001126b9;
  while (pEVar62 = *(Element **)(pEVar62 + 0x10), *(Element **)(this_01 + 8) != pEVar62) {
LAB_0011258a:
    cVar49 = String::naturalnocasecmp_to(param_1);
    if (-1 < cVar49) {
      cVar49 = String::naturalnocasecmp_to((String *)(pEVar62 + 0x30));
      if (-1 < cVar49) {
        if (((pEVar62 != (Element *)0x0) &&
            (RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_erase(this_01,pEVar62),
            *(int *)(this_01 + 0x10) == 0)) && (pvVar8 = *(void **)this_01, pvVar8 != (void *)0x0))
        {
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x30));
          Memory::free_static(pvVar8,false);
          *(undefined8 *)this_01 = 0;
        }
        break;
      }
      pEVar62 = *(Element **)(pEVar62 + 8);
      if (*(Element **)(this_01 + 8) == pEVar62) break;
      goto LAB_0011258a;
    }
  }
LAB_001125bd:
  lVar51 = HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
           ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                         *)(this + 0x38),pSVar1);
  if (((*(int *)(lVar51 + 0x10) == 0) && (*(long *)(this + 0x40) != 0)) &&
     (*(int *)(this + 100) != 0)) {
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
    lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
    uVar50 = String::hash();
    uVar57 = CONCAT44(0,uVar6);
    uVar53 = 1;
    if (uVar50 != 0) {
      uVar53 = uVar50;
    }
    lVar60 = *(long *)(this + 0x48);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar53 * lVar51;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar57;
    lVar55 = SUB168(auVar19 * auVar39,8);
    uVar50 = *(uint *)(lVar60 + lVar55 * 4);
    uVar64 = SUB164(auVar19 * auVar39,8);
    if (uVar50 != 0) {
      uVar65 = 0;
LAB_001126b9:
      uVar59 = (ulong)uVar64;
      if (uVar53 != uVar50) goto LAB_00112670;
      cVar49 = String::operator==((String *)(*(long *)(*(long *)(this + 0x40) + lVar55 * 8) + 0x10),
                                  pSVar1);
      if (cVar49 == '\0') {
        lVar60 = *(long *)(this + 0x48);
        goto LAB_00112670;
      }
      lVar51 = *(long *)(this + 0x48);
      lVar60 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
      uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
      uVar61 = CONCAT44(0,uVar6);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = (ulong)(uVar64 + 1) * lVar60;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar61;
      uVar56 = SUB168(auVar23 * auVar43,8);
      lVar55 = *(long *)(this + 0x40);
      puVar63 = (uint *)(lVar51 + uVar56 * 4);
      uVar50 = SUB164(auVar23 * auVar43,8);
      uVar57 = (ulong)uVar50;
      uVar53 = *puVar63;
      if ((uVar53 != 0) &&
         (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar53 * lVar60, auVar44._8_8_ = 0,
         auVar44._0_8_ = uVar61, auVar25._8_8_ = 0,
         auVar25._0_8_ = (ulong)((uVar6 + uVar50) - SUB164(auVar24 * auVar44,8)) * lVar60,
         auVar45._8_8_ = 0, auVar45._0_8_ = uVar61, SUB164(auVar25 * auVar45,8) != 0)) {
        while( true ) {
          puVar5 = (uint *)(lVar51 + uVar59 * 4);
          *puVar63 = *puVar5;
          puVar2 = (undefined8 *)(lVar55 + uVar56 * 8);
          *puVar5 = uVar53;
          puVar3 = (undefined8 *)(lVar55 + uVar59 * 8);
          uVar7 = *puVar2;
          *puVar2 = *puVar3;
          *puVar3 = uVar7;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = (ulong)((int)uVar57 + 1) * lVar60;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = uVar61;
          uVar56 = SUB168(auVar28 * auVar48,8);
          puVar63 = (uint *)(lVar51 + uVar56 * 4);
          uVar53 = *puVar63;
          uVar59 = uVar57;
          if ((uVar53 == 0) ||
             (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)uVar53 * lVar60, auVar46._8_8_ = 0,
             auVar46._0_8_ = uVar61, auVar27._8_8_ = 0,
             auVar27._0_8_ =
                  (ulong)((SUB164(auVar28 * auVar48,8) + uVar6) - SUB164(auVar26 * auVar46,8)) *
                  lVar60, auVar47._8_8_ = 0, auVar47._0_8_ = uVar61,
             SUB164(auVar27 * auVar47,8) == 0)) break;
          uVar57 = uVar56 & 0xffffffff;
        }
      }
      *(undefined4 *)(lVar51 + uVar59 * 4) = 0;
      plVar4 = (long *)(lVar55 + uVar59 * 8);
      plVar58 = (long *)*plVar4;
      if (*(long **)(this + 0x50) == plVar58) {
        *(long *)(this + 0x50) = *plVar58;
        plVar58 = (long *)*plVar4;
      }
      if (*(long **)(this + 0x58) == plVar58) {
        *(long *)(this + 0x58) = plVar58[1];
        plVar58 = (long *)*plVar4;
      }
      if ((long *)plVar58[1] != (long *)0x0) {
        *(long *)plVar58[1] = *plVar58;
        plVar58 = (long *)*plVar4;
      }
      if (*plVar58 != 0) {
        *(long *)(*plVar58 + 8) = plVar58[1];
        plVar58 = (long *)*plVar4;
      }
      RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
                ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)(plVar58 + 3));
      pvVar8 = (void *)plVar58[3];
      if (pvVar8 != (void *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar8 + 0x30));
        Memory::free_static(pvVar8,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(plVar58 + 2));
      Memory::free_static(plVar58,false);
      *(undefined8 *)(*(long *)(this + 0x40) + uVar59 * 8) = 0;
      *(int *)(this + 100) = *(int *)(this + 100) + -1;
    }
  }
LAB_00112222:
  local_44 = 0;
  cVar49 = HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
           ::_lookup_pos(this_00,param_1,&local_44);
  if (cVar49 != '\0') {
    lVar51 = *(long *)(this + 0x18);
    lVar60 = *(long *)(this + 0x10);
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    uVar57 = CONCAT44(0,uVar6);
    lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(local_44 + 1) * lVar55;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar57;
    lVar54 = SUB168(auVar9 * auVar29,8);
    puVar63 = (uint *)(lVar51 + lVar54 * 4);
    uVar50 = SUB164(auVar9 * auVar29,8);
    uVar53 = *puVar63;
    if (uVar53 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar53 * lVar55;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar57;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((uVar6 + uVar50) - SUB164(auVar10 * auVar30,8)) * lVar55;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar57;
      iVar52 = SUB164(auVar11 * auVar31,8);
      while (uVar64 = uVar50, iVar52 != 0) {
        puVar5 = (uint *)(lVar51 + (ulong)local_44 * 4);
        *puVar63 = *puVar5;
        puVar2 = (undefined8 *)(lVar60 + lVar54 * 8);
        *puVar5 = uVar53;
        puVar3 = (undefined8 *)(lVar60 + (ulong)local_44 * 8);
        uVar7 = *puVar2;
        *puVar2 = *puVar3;
        *puVar3 = uVar7;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(uVar64 + 1) * lVar55;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar57;
        lVar54 = SUB168(auVar14 * auVar34,8);
        puVar63 = (uint *)(lVar51 + lVar54 * 4);
        uVar50 = SUB164(auVar14 * auVar34,8);
        uVar53 = *puVar63;
        local_44 = uVar64;
        if (uVar53 == 0) break;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar53 * lVar55;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar57;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar50 + uVar6) - SUB164(auVar12 * auVar32,8)) * lVar55;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar57;
        iVar52 = SUB164(auVar13 * auVar33,8);
      }
    }
    uVar57 = (ulong)local_44;
    *(undefined4 *)(lVar51 + uVar57 * 4) = 0;
    plVar4 = (long *)(lVar60 + uVar57 * 8);
    plVar58 = (long *)*plVar4;
    if (*(long **)(this + 0x20) == plVar58) {
      *(long *)(this + 0x20) = *plVar58;
      plVar58 = (long *)*plVar4;
    }
    if (*(long **)(this + 0x28) == plVar58) {
      *(long *)(this + 0x28) = plVar58[1];
      plVar58 = (long *)*plVar4;
    }
    if ((long *)plVar58[1] != (long *)0x0) {
      *(long *)plVar58[1] = *plVar58;
      plVar58 = (long *)*plVar4;
    }
    if (*plVar58 != 0) {
      *(long *)(*plVar58 + 8) = plVar58[1];
      plVar58 = (long *)*plVar4;
    }
    DocData::ClassDoc::~ClassDoc((ClassDoc *)(plVar58 + 3));
    CowData<char32_t>::_unref((CowData<char32_t> *)(plVar58 + 2));
    Memory::free_static(plVar58,false);
    *(undefined8 *)(*(long *)(this + 0x10) + uVar57 * 8) = 0;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112965:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DocTools::_load(Ref<XMLParser>) */

int __thiscall DocTools::_load(DocTools *this,Ref *param_2)

{
  CowData<char32_t> *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcVar10;
  char cVar11;
  CowData<char32_t> CVar12;
  undefined1 uVar13;
  int iVar14;
  ClassDoc *this_01;
  CowData<char32_t> *this_02;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this_03;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 extraout_RDX;
  long lVar18;
  CowData<char32_t> *this_04;
  String *pSVar19;
  long in_FS_OFFSET;
  byte bVar20;
  CowData<char32_t> *local_218;
  long local_200;
  String local_1f8 [8];
  String local_1f0 [8];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [16];
  CowData<char32_t> local_1c8;
  undefined7 uStack_1c7;
  CowData<char32_t> CStack_1c0;
  undefined7 uStack_1bf;
  CowData<char32_t> local_1b8;
  undefined7 uStack_1b7;
  CowData<char32_t> CStack_1b0;
  undefined7 uStack_1af;
  CowData<char32_t> local_1a8;
  undefined7 uStack_1a7;
  CowData<char32_t> CStack_1a0;
  undefined7 uStack_19f;
  CowData<char32_t> CStack_198;
  undefined7 uStack_197;
  char *local_190;
  undefined1 local_188 [16];
  undefined1 local_178;
  undefined1 local_170 [24];
  char *local_158;
  undefined8 local_150 [21];
  undefined8 local_a8;
  long local_40;
  
  bVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_001129b6:
  iVar14 = XMLParser::read();
  do {
    if (iVar14 != 0) {
      iVar14 = 0;
      goto LAB_00112d59;
    }
    iVar14 = XMLParser::get_node_type();
    if (iVar14 == 1) {
      XMLParser::get_node_name();
      cVar11 = String::operator==((String *)&local_158,"?xml");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      if (cVar11 == '\0') goto LAB_001129a8;
      XMLParser::skip_section();
      iVar14 = XMLParser::get_node_type();
    }
    else {
LAB_001129a8:
      iVar14 = XMLParser::get_node_type();
    }
    if (iVar14 != 1) goto LAB_001129b6;
    XMLParser::get_node_name();
    cVar11 = String::operator!=((String *)&local_158,"class");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      _err_print_error("_load","editor/doc_tools.cpp",0x50c,
                       "Condition \"parser->get_node_name() != \"class\"\" is true. Returning: ERR_FILE_CORRUPT"
                       ,0,0);
LAB_0011379d:
      iVar14 = 0x10;
LAB_00112d59:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar14;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"name");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 == '\0') {
      _err_print_error("_load","editor/doc_tools.cpp",0x50e,
                       "Condition \"!parser->has_attribute(\"name\")\" is true. Returning: ERR_FILE_CORRUPT"
                       ,0,0);
      goto LAB_0011379d;
    }
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"name");
    XMLParser::get_named_attribute_value((String *)&local_200);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    pSVar19 = (String *)&local_158;
    for (lVar16 = 0x23; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined8 *)pSVar19 = 0;
      pSVar19 = pSVar19 + (ulong)bVar20 * -0x10 + 8;
    }
    local_a8 = _LC15;
    this_01 = (ClassDoc *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[]((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                            *)(this + 8),(String *)&local_200);
    DocData::ClassDoc::operator=(this_01,(ClassDoc *)&local_158);
    DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_158);
    this_02 = (CowData<char32_t> *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[]((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                            *)(this + 8),(String *)&local_200);
    if (*(long *)this_02 != local_200) {
      CowData<char32_t>::_ref(this_02,(CowData *)&local_200);
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"inherits");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_1d8._8_8_;
      local_1d8 = auVar4 << 0x40;
      String::parse_latin1((String *)local_1d8,"inherits");
      XMLParser::get_named_attribute_value((String *)&local_158);
      if ((char *)*(long *)(this_02 + 8) != local_158) {
        CowData<char32_t>::_unref(this_02 + 8);
        *(char **)(this_02 + 8) = local_158;
        local_158 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
    }
    this_03 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
              HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
              ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                            *)(this + 0x38),(String *)(this_02 + 8));
    if (*(long *)this_03 == 0) {
      puVar15 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(puVar15 + 8) = (undefined1  [16])0x0;
      uVar17 = *(undefined8 *)(this_03 + 8);
      *(undefined8 *)(puVar15 + 0xc) = 0;
      *(undefined4 **)this_03 = puVar15;
      *puVar15 = 1;
      *(undefined8 *)(puVar15 + 2) = uVar17;
      *(undefined8 *)(puVar15 + 4) = uVar17;
      *(undefined8 *)(puVar15 + 6) = uVar17;
    }
    RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert(this_03,(String *)&local_200);
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"is_deprecated");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      local_1e0 = 0;
      String::parse_latin1((String *)&local_1e0,"is_deprecated");
      XMLParser::get_named_attribute_value((String *)local_1d8);
      String::to_lower();
      CVar12 = (CowData<char32_t>)String::operator==((String *)&local_158,"true");
      this_02[0xe8] = CVar12;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"is_experimental");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      local_1e0 = 0;
      String::parse_latin1((String *)&local_1e0,"is_experimental");
      XMLParser::get_named_attribute_value((String *)local_1d8);
      String::to_lower();
      CVar12 = (CowData<char32_t>)String::operator==((String *)&local_158,"true");
      this_02[0xf8] = CVar12;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"deprecated");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      this_02[0xe8] = (CowData<char32_t>)0x1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_1d8._8_8_;
      local_1d8 = auVar3 << 0x40;
      String::parse_latin1((String *)local_1d8,"deprecated");
      XMLParser::get_named_attribute_value((String *)&local_158);
      if ((char *)*(long *)(this_02 + 0xf0) != local_158) {
        CowData<char32_t>::_unref(this_02 + 0xf0);
        *(char **)(this_02 + 0xf0) = local_158;
        local_158 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"experimental");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      this_02[0xf8] = (CowData<char32_t>)0x1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_1d8._8_8_;
      local_1d8 = auVar2 << 0x40;
      String::parse_latin1((String *)local_1d8,"experimental");
      XMLParser::get_named_attribute_value((String *)&local_158);
      if ((char *)*(long *)(this_02 + 0x100) != local_158) {
        CowData<char32_t>::_unref(this_02 + 0x100);
        *(char **)(this_02 + 0x100) = local_158;
        local_158 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
    }
    pSVar19 = *(String **)param_2;
    local_158 = (char *)0x0;
    String::parse_latin1((String *)&local_158,"keywords");
    cVar11 = XMLParser::has_attribute(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (cVar11 != '\0') {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_1d8._8_8_;
      local_1d8 = auVar1 << 0x40;
      String::parse_latin1((String *)local_1d8,"keywords");
      XMLParser::get_named_attribute_value((String *)&local_158);
      if (*(char **)(this_02 + 0x20) != local_158) {
        CowData<char32_t>::_unref(this_02 + 0x20);
        *(char **)(this_02 + 0x20) = local_158;
        local_158 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
    }
    do {
      do {
        while( true ) {
          iVar14 = XMLParser::read();
          if (iVar14 != 0) goto LAB_00112d2e;
          iVar14 = XMLParser::get_node_type();
          if (iVar14 != 1) break;
          XMLParser::get_node_name();
          cVar11 = String::operator==(local_1f8,"brief_description");
          if (cVar11 == '\0') {
            cVar11 = String::operator==(local_1f8,"description");
            if (cVar11 == '\0') {
              cVar11 = String::operator==(local_1f8,"tutorials");
              if (cVar11 == '\0') {
                cVar11 = String::operator==(local_1f8,"constructors");
                if (cVar11 == '\0') {
                  cVar11 = String::operator==(local_1f8,"methods");
                  if (cVar11 == '\0') {
                    cVar11 = String::operator==(local_1f8,"operators");
                    if (cVar11 == '\0') {
                      cVar11 = String::operator==(local_1f8,"signals");
                      if (cVar11 == '\0') {
                        cVar11 = String::operator==(local_1f8,"annotations");
                        if (cVar11 == '\0') {
                          cVar11 = String::operator==(local_1f8,"members");
                          if (cVar11 == '\0') {
                            cVar11 = String::operator==(local_1f8,"theme_items");
                            local_218 = (CowData<char32_t> *)&local_1e8;
                            if (cVar11 == '\0') {
                              cVar11 = String::operator==(local_1f8,"constants");
                              if (cVar11 == '\0') {
                                auVar9._8_8_ = 0;
                                auVar9._0_8_ = local_1d8._8_8_;
                                local_1d8 = auVar9 << 0x40;
                                String::parse_latin1((String *)local_1d8,".");
                                operator+((char *)&local_1e0,(String *)"Invalid tag in doc file: ");
                                String::operator+((String *)&local_158,(String *)&local_1e0);
                                _err_print_error("_load","editor/doc_tools.cpp",0x5fd,
                                                 "Method/function failed. Returning: ERR_FILE_CORRUPT"
                                                 ,(String *)&local_158,0,0,extraout_RDX);
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
LAB_001136a6:
                                iVar14 = 0x10;
                                goto LAB_00112ec3;
                              }
                              local_218 = (CowData<char32_t> *)local_1f0;
LAB_001144d7:
                              do {
                                do {
                                  iVar14 = XMLParser::read();
                                  if (iVar14 != 0) goto LAB_00112dc7;
                                  iVar14 = XMLParser::get_node_type();
                                  if (iVar14 == 1) {
                                    XMLParser::get_node_name();
                                    cVar11 = String::operator==((String *)local_218,"constant");
                                    if (cVar11 == '\0') {
                                      auVar8._8_8_ = 0;
                                      auVar8._0_8_ = local_1d8._8_8_;
                                      local_1d8 = auVar8 << 0x40;
                                      String::parse_latin1((String *)local_1d8,".");
                                      operator+((char *)&local_1e0,
                                                (String *)"Invalid tag in doc file: ");
                                      String::operator+((String *)&local_158,(String *)&local_1e0);
                                      uVar17 = 0x5f4;
                                      goto LAB_00114f5d;
                                    }
                                    pSVar19 = *(String **)param_2;
                                    local_1c8 = (CowData<char32_t>)0x0;
                                    local_1d8 = (undefined1  [16])0x0;
                                    CStack_1c0 = (CowData<char32_t>)0x0;
                                    uStack_1bf = 0;
                                    local_1b8 = (CowData<char32_t>)0x0;
                                    uStack_1b7 = 0;
                                    local_188 = (undefined1  [16])0x0;
                                    CStack_1b0 = (CowData<char32_t>)0x0;
                                    local_1a8 = (CowData<char32_t>)0x0;
                                    uStack_1a7 = 0;
                                    CStack_1a0 = (CowData<char32_t>)0x0;
                                    CStack_198 = (CowData<char32_t>)0x0;
                                    uStack_197 = 0;
                                    local_190 = (char *)((ulong)local_190 & 0xffffffffffffff00);
                                    local_158 = (char *)0x0;
                                    String::parse_latin1((String *)&local_158,"name");
                                    cVar11 = XMLParser::has_attribute(pSVar19);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                    if (cVar11 == '\0') {
                                      _err_print_error("_load","editor/doc_tools.cpp",0x5ce,
                                                                                                              
                                                  "Condition \"!parser->has_attribute(\"name\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                    }
                                    else {
                                      local_1e0 = 0;
                                      String::parse_latin1((String *)&local_1e0,"name");
                                      XMLParser::get_named_attribute_value((String *)&local_158);
                                      if (local_158 != (char *)0x0) {
                                        CowData<char32_t>::operator=
                                                  ((CowData<char32_t> *)local_1d8,
                                                   (CowData *)&local_158);
                                      }
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                      pSVar19 = *(String **)param_2;
                                      local_158 = (char *)0x0;
                                      String::parse_latin1((String *)&local_158,"value");
                                      cVar11 = XMLParser::has_attribute(pSVar19);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      if (cVar11 != '\0') {
                                        local_1e0 = 0;
                                        String::parse_latin1((String *)&local_1e0,"value");
                                        XMLParser::get_named_attribute_value((String *)&local_158);
                                        if ((char *)local_1d8._8_8_ != local_158) {
                                          CowData<char32_t>::operator=
                                                    ((CowData<char32_t> *)(local_1d8 + 8),
                                                     (CowData *)&local_158);
                                        }
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                        pSVar19 = *(String **)param_2;
                                        local_1c8 = (CowData<char32_t>)0x1;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"enum");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"enum");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_1b7,local_1b8) != local_158) {
                                            CowData<char32_t>::operator=
                                                      (&local_1b8,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          pSVar19 = *(String **)param_2;
                                          local_158 = (char *)0x0;
                                          String::parse_latin1((String *)&local_158,"is_bitfield");
                                          cVar11 = XMLParser::has_attribute(pSVar19);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          if (cVar11 != '\0') {
                                            local_1e8 = 0;
                                            String::parse_latin1((String *)&local_1e8,"is_bitfield")
                                            ;
                                            XMLParser::get_named_attribute_value
                                                      ((String *)&local_1e0);
                                            String::to_lower();
                                            CStack_1b0 = (CowData<char32_t>)
                                                         String::operator==((String *)&local_158,
                                                                            "true");
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e0);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e8);
                                          }
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"is_deprecated");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e8 = 0;
                                          String::parse_latin1((String *)&local_1e8,"is_deprecated")
                                          ;
                                          XMLParser::get_named_attribute_value((String *)&local_1e0)
                                          ;
                                          String::to_lower();
                                          CStack_1a0 = (CowData<char32_t>)
                                                       String::operator==((String *)&local_158,
                                                                          "true");
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"is_experimental")
                                        ;
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e8 = 0;
                                          String::parse_latin1
                                                    ((String *)&local_1e8,"is_experimental");
                                          XMLParser::get_named_attribute_value((String *)&local_1e0)
                                          ;
                                          String::to_lower();
                                          uVar13 = String::operator==((String *)&local_158,"true");
                                          local_190 = (char *)CONCAT71(local_190._1_7_,uVar13);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"deprecated");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          CStack_1a0 = (CowData<char32_t>)0x1;
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"deprecated");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_197,CStack_198) != local_158)
                                          {
                                            CowData<char32_t>::operator=
                                                      (&CStack_198,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"experimental");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_190 = (char *)CONCAT71(local_190._1_7_,1);
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"experimental");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)local_188._0_8_ != local_158) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)local_188,
                                                       (CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"keywords");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"keywords");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)local_188._8_8_ != local_158) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)(local_188 + 8),
                                                       (CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        cVar11 = XMLParser::is_empty();
                                        if (cVar11 == '\0') {
                                          XMLParser::read();
                                          iVar14 = XMLParser::get_node_type();
                                          if (iVar14 == 3) {
                                            XMLParser::get_node_data();
                                            if ((char *)CONCAT71(uStack_1a7,local_1a8) != local_158)
                                            {
                                              CowData<char32_t>::operator=
                                                        (&local_1a8,(CowData *)&local_158);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                          }
                                        }
                                        DocData::ConstantDoc::ConstantDoc
                                                  ((ConstantDoc *)&local_158,
                                                   (ConstantDoc *)local_1d8);
                                        Vector<DocData::ConstantDoc>::push_back
                                                  ((Vector<DocData::ConstantDoc> *)(this_02 + 0x78),
                                                   (String *)&local_158);
                                        DocData::ConstantDoc::~ConstantDoc
                                                  ((ConstantDoc *)&local_158);
                                        DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)local_1d8)
                                        ;
                                        CowData<char32_t>::_unref(local_218);
                                        goto LAB_001144d7;
                                      }
                                      _err_print_error("_load","editor/doc_tools.cpp",0x5d0,
                                                                                                              
                                                  "Condition \"!parser->has_attribute(\"value\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                    }
                                    DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)local_1d8);
                                    goto LAB_00114e3a;
                                  }
                                  iVar14 = XMLParser::get_node_type();
                                } while (iVar14 != 2);
                                XMLParser::get_node_name();
                                cVar11 = String::operator==((String *)&local_158,"constants");
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                              } while (cVar11 == '\0');
                            }
                            else {
LAB_00113887:
                              do {
                                do {
                                  iVar14 = XMLParser::read();
                                  if (iVar14 != 0) goto LAB_00112dc7;
                                  iVar14 = XMLParser::get_node_type();
                                  if (iVar14 == 1) {
                                    XMLParser::get_node_name();
                                    cVar11 = String::operator==((String *)local_218,"theme_item");
                                    if (cVar11 == '\0') {
                                      auVar6._8_8_ = 0;
                                      auVar6._0_8_ = local_1d8._8_8_;
                                      local_1d8 = auVar6 << 0x40;
                                      String::parse_latin1((String *)local_1d8,".");
                                      operator+((char *)&local_1e0,
                                                (String *)"Invalid tag in doc file: ");
                                      String::operator+((String *)&local_158,(String *)&local_1e0);
                                      uVar17 = 0x5bf;
LAB_00114f5d:
                                      _err_print_error("_load","editor/doc_tools.cpp",uVar17,
                                                                                                              
                                                  "Method/function failed. Returning: ERR_FILE_CORRUPT"
                                                  ,(String *)&local_158,0,0);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
LAB_00114e3a:
                                      CowData<char32_t>::_unref(local_218);
                                      goto LAB_001136a6;
                                    }
                                    pSVar19 = *(String **)param_2;
                                    local_1d8 = (undefined1  [16])0x0;
                                    local_1c8 = (CowData<char32_t>)0x0;
                                    uStack_1c7 = 0;
                                    CStack_1c0 = (CowData<char32_t>)0x0;
                                    uStack_1bf = 0;
                                    CStack_1a0 = (CowData<char32_t>)0x0;
                                    uStack_19f = 0;
                                    CStack_198 = (CowData<char32_t>)0x0;
                                    uStack_197 = 0;
                                    local_1b8 = (CowData<char32_t>)0x0;
                                    CStack_1b0 = (CowData<char32_t>)0x0;
                                    uStack_1af = 0;
                                    local_1a8 = (CowData<char32_t>)0x0;
                                    local_190 = (char *)0x0;
                                    local_158 = (char *)0x0;
                                    String::parse_latin1((String *)&local_158,"name");
                                    cVar11 = XMLParser::has_attribute(pSVar19);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                    if (cVar11 == '\0') {
                                      _err_print_error("_load","editor/doc_tools.cpp",0x5a6,
                                                                                                              
                                                  "Condition \"!parser->has_attribute(\"name\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                    }
                                    else {
                                      local_1e0 = 0;
                                      String::parse_latin1((String *)&local_1e0,"name");
                                      XMLParser::get_named_attribute_value((String *)&local_158);
                                      if (local_158 != (char *)0x0) {
                                        CowData<char32_t>::operator=
                                                  ((CowData<char32_t> *)local_1d8,
                                                   (CowData *)&local_158);
                                      }
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                      pSVar19 = *(String **)param_2;
                                      local_158 = (char *)0x0;
                                      String::parse_latin1((String *)&local_158,"type");
                                      cVar11 = XMLParser::has_attribute(pSVar19);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      if (cVar11 == '\0') {
                                        _err_print_error("_load","editor/doc_tools.cpp",0x5a8,
                                                                                                                  
                                                  "Condition \"!parser->has_attribute(\"type\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                      }
                                      else {
                                        local_1e0 = 0;
                                        String::parse_latin1((String *)&local_1e0,"type");
                                        XMLParser::get_named_attribute_value((String *)&local_158);
                                        if ((char *)local_1d8._8_8_ != local_158) {
                                          CowData<char32_t>::operator=
                                                    ((CowData<char32_t> *)(local_1d8 + 8),
                                                     (CowData *)&local_158);
                                        }
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"data_type");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"data_type");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_1c7,local_1c8) != local_158) {
                                            CowData<char32_t>::operator=
                                                      (&local_1c8,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          pSVar19 = *(String **)param_2;
                                          local_158 = (char *)0x0;
                                          String::parse_latin1((String *)&local_158,"deprecated");
                                          cVar11 = XMLParser::has_attribute(pSVar19);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          if (cVar11 != '\0') {
                                            local_1b8 = (CowData<char32_t>)0x1;
                                            local_1e0 = 0;
                                            String::parse_latin1((String *)&local_1e0,"deprecated");
                                            XMLParser::get_named_attribute_value
                                                      ((String *)&local_158);
                                            if ((char *)CONCAT71(uStack_1af,CStack_1b0) != local_158
                                               ) {
                                              CowData<char32_t>::operator=
                                                        (&CStack_1b0,(CowData *)&local_158);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e0);
                                          }
                                          pSVar19 = *(String **)param_2;
                                          local_158 = (char *)0x0;
                                          String::parse_latin1((String *)&local_158,"experimental");
                                          cVar11 = XMLParser::has_attribute(pSVar19);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          if (cVar11 != '\0') {
                                            local_1a8 = (CowData<char32_t>)0x1;
                                            local_1e0 = 0;
                                            String::parse_latin1
                                                      ((String *)&local_1e0,"experimental");
                                            XMLParser::get_named_attribute_value
                                                      ((String *)&local_158);
                                            if ((char *)CONCAT71(uStack_19f,CStack_1a0) != local_158
                                               ) {
                                              CowData<char32_t>::operator=
                                                        (&CStack_1a0,(CowData *)&local_158);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e0);
                                          }
                                          pSVar19 = *(String **)param_2;
                                          local_158 = (char *)0x0;
                                          String::parse_latin1((String *)&local_158,"keywords");
                                          cVar11 = XMLParser::has_attribute(pSVar19);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          if (cVar11 != '\0') {
                                            local_1e0 = 0;
                                            String::parse_latin1((String *)&local_1e0,"keywords");
                                            XMLParser::get_named_attribute_value
                                                      ((String *)&local_158);
                                            if (local_190 != local_158) {
                                              CowData<char32_t>::operator=
                                                        ((CowData<char32_t> *)&local_190,
                                                         (CowData *)&local_158);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e0);
                                          }
                                          cVar11 = XMLParser::is_empty();
                                          if (cVar11 == '\0') {
                                            XMLParser::read();
                                            iVar14 = XMLParser::get_node_type();
                                            if (iVar14 == 3) {
                                              XMLParser::get_node_data();
                                              if ((char *)CONCAT71(uStack_1bf,CStack_1c0) !=
                                                  local_158) {
                                                CowData<char32_t>::operator=
                                                          (&CStack_1c0,(CowData *)&local_158);
                                              }
                                              CowData<char32_t>::_unref
                                                        ((CowData<char32_t> *)&local_158);
                                            }
                                          }
                                          DocData::ThemeItemDoc::ThemeItemDoc
                                                    ((ThemeItemDoc *)&local_158,
                                                     (ThemeItemDoc *)local_1d8);
                                          Vector<DocData::ThemeItemDoc>::push_back
                                                    ((Vector<DocData::ThemeItemDoc> *)
                                                     (this_02 + 0xd8),(String *)&local_158);
                                          DocData::ThemeItemDoc::~ThemeItemDoc
                                                    ((ThemeItemDoc *)&local_158);
                                          DocData::ThemeItemDoc::~ThemeItemDoc
                                                    ((ThemeItemDoc *)local_1d8);
                                          CowData<char32_t>::_unref(local_218);
                                          goto LAB_00113887;
                                        }
                                        _err_print_error("_load","editor/doc_tools.cpp",0x5aa,
                                                                                                                  
                                                  "Condition \"!parser->has_attribute(\"data_type\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                      }
                                    }
                                    DocData::ThemeItemDoc::~ThemeItemDoc((ThemeItemDoc *)local_1d8);
                                    goto LAB_00114e3a;
                                  }
                                  iVar14 = XMLParser::get_node_type();
                                } while (iVar14 != 2);
                                XMLParser::get_node_name();
                                cVar11 = String::operator==((String *)&local_158,"theme_items");
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                              } while (cVar11 == '\0');
                            }
                          }
                          else {
LAB_00113ce5:
                            do {
                              do {
                                iVar14 = XMLParser::read();
                                if (iVar14 != 0) goto LAB_00112dc7;
                                iVar14 = XMLParser::get_node_type();
                                if (iVar14 == 1) {
                                  XMLParser::get_node_name();
                                  cVar11 = String::operator==(local_1f0,"member");
                                  if (cVar11 == '\0') {
                                    auVar7._8_8_ = 0;
                                    auVar7._0_8_ = local_1d8._8_8_;
                                    local_1d8 = auVar7 << 0x40;
                                    String::parse_latin1((String *)local_1d8,".");
                                    operator+((char *)&local_1e0,
                                              (String *)"Invalid tag in doc file: ");
                                    String::operator+((String *)&local_158,(String *)&local_1e0);
                                    _err_print_error("_load","editor/doc_tools.cpp",0x596,
                                                                                                          
                                                  "Method/function failed. Returning: ERR_FILE_CORRUPT"
                                                  ,(String *)&local_158,0,0);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                                  }
                                  else {
                                    pSVar19 = *(String **)param_2;
                                    CStack_1c0 = (CowData<char32_t>)0x0;
                                    local_1d8 = (undefined1  [16])0x0;
                                    local_1b8 = (CowData<char32_t>)0x0;
                                    uStack_1b7 = 0;
                                    CStack_1b0 = (CowData<char32_t>)0x0;
                                    uStack_1af = 0;
                                    local_1a8 = (CowData<char32_t>)0x0;
                                    uStack_1a7 = 0;
                                    CStack_1a0 = (CowData<char32_t>)0x0;
                                    uStack_19f = 0;
                                    local_170._0_16_ = (undefined1  [16])0x0;
                                    local_1c8 = (CowData<char32_t>)0x0;
                                    uStack_1c7 = 0;
                                    CStack_198 = (CowData<char32_t>)0x0;
                                    local_190 = (char *)0x0;
                                    local_188._0_8_ = local_188._1_8_ << 8;
                                    local_188._8_8_ = 0;
                                    local_178 = 0;
                                    local_158 = (char *)0x0;
                                    String::parse_latin1((String *)&local_158,"name");
                                    cVar11 = XMLParser::has_attribute(pSVar19);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                    if (cVar11 == '\0') {
                                      _err_print_error("_load","editor/doc_tools.cpp",0x56b,
                                                                                                              
                                                  "Condition \"!parser->has_attribute(\"name\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                    }
                                    else {
                                      local_1e0 = 0;
                                      String::parse_latin1((String *)&local_1e0,"name");
                                      XMLParser::get_named_attribute_value((String *)&local_158);
                                      if (local_158 != (char *)0x0) {
                                        CowData<char32_t>::operator=
                                                  ((CowData<char32_t> *)local_1d8,
                                                   (CowData *)&local_158);
                                      }
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                      pSVar19 = *(String **)param_2;
                                      local_158 = (char *)0x0;
                                      String::parse_latin1((String *)&local_158,"type");
                                      cVar11 = XMLParser::has_attribute(pSVar19);
                                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                      if (cVar11 != '\0') {
                                        local_1e0 = 0;
                                        String::parse_latin1((String *)&local_1e0,"type");
                                        XMLParser::get_named_attribute_value((String *)&local_158);
                                        if ((char *)local_1d8._8_8_ != local_158) {
                                          CowData<char32_t>::operator=
                                                    ((CowData<char32_t> *)(local_1d8 + 8),
                                                     (CowData *)&local_158);
                                        }
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"setter");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"setter");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_1af,CStack_1b0) != local_158)
                                          {
                                            CowData<char32_t>::operator=
                                                      (&CStack_1b0,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"getter");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"getter");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_1a7,local_1a8) != local_158) {
                                            CowData<char32_t>::operator=
                                                      (&local_1a8,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"enum");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"enum");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)CONCAT71(uStack_1c7,local_1c8) != local_158) {
                                            CowData<char32_t>::operator=
                                                      (&local_1c8,(CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          pSVar19 = *(String **)param_2;
                                          local_158 = (char *)0x0;
                                          String::parse_latin1((String *)&local_158,"is_bitfield");
                                          cVar11 = XMLParser::has_attribute(pSVar19);
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          if (cVar11 != '\0') {
                                            local_1e8 = 0;
                                            String::parse_latin1((String *)&local_1e8,"is_bitfield")
                                            ;
                                            XMLParser::get_named_attribute_value
                                                      ((String *)&local_1e0);
                                            String::to_lower();
                                            CStack_1c0 = (CowData<char32_t>)
                                                         String::operator==((String *)&local_158,
                                                                            "true");
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e0);
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_1e8);
                                          }
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"is_deprecated");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e8 = 0;
                                          String::parse_latin1((String *)&local_1e8,"is_deprecated")
                                          ;
                                          XMLParser::get_named_attribute_value((String *)&local_1e0)
                                          ;
                                          String::to_lower();
                                          uVar13 = String::operator==((String *)&local_158,"true");
                                          local_188[0] = uVar13;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"is_experimental")
                                        ;
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e8 = 0;
                                          String::parse_latin1
                                                    ((String *)&local_1e8,"is_experimental");
                                          XMLParser::get_named_attribute_value((String *)&local_1e0)
                                          ;
                                          String::to_lower();
                                          local_178 = String::operator==((String *)&local_158,"true"
                                                                        );
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"deprecated");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_188[0] = 1;
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"deprecated");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)local_188._8_8_ != local_158) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)(local_188 + 8),
                                                       (CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"experimental");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_178 = 1;
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"experimental");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)local_170._0_8_ != local_158) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)local_170,
                                                       (CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        pSVar19 = *(String **)param_2;
                                        local_158 = (char *)0x0;
                                        String::parse_latin1((String *)&local_158,"keywords");
                                        cVar11 = XMLParser::has_attribute(pSVar19);
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                                        if (cVar11 != '\0') {
                                          local_1e0 = 0;
                                          String::parse_latin1((String *)&local_1e0,"keywords");
                                          XMLParser::get_named_attribute_value((String *)&local_158)
                                          ;
                                          if ((char *)local_170._8_8_ != local_158) {
                                            CowData<char32_t>::operator=
                                                      ((CowData<char32_t> *)(local_170 + 8),
                                                       (CowData *)&local_158);
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_158)
                                          ;
                                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0)
                                          ;
                                        }
                                        cVar11 = XMLParser::is_empty();
                                        if (cVar11 == '\0') {
                                          XMLParser::read();
                                          iVar14 = XMLParser::get_node_type();
                                          if (iVar14 == 3) {
                                            XMLParser::get_node_data();
                                            if ((char *)CONCAT71(uStack_1b7,local_1b8) != local_158)
                                            {
                                              CowData<char32_t>::operator=
                                                        (&local_1b8,(CowData *)&local_158);
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)&local_158);
                                          }
                                        }
                                        DocData::PropertyDoc::PropertyDoc
                                                  ((PropertyDoc *)&local_158,
                                                   (PropertyDoc *)local_1d8);
                                        Vector<DocData::PropertyDoc>::push_back
                                                  ((Vector<DocData::PropertyDoc> *)(this_02 + 0xb8),
                                                   (String *)&local_158);
                                        DocData::PropertyDoc::~PropertyDoc
                                                  ((PropertyDoc *)&local_158);
                                        DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)local_1d8)
                                        ;
                                        CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
                                        goto LAB_00113ce5;
                                      }
                                      _err_print_error("_load","editor/doc_tools.cpp",0x56d,
                                                                                                              
                                                  "Condition \"!parser->has_attribute(\"type\")\" is true. Returning: ERR_FILE_CORRUPT"
                                                  ,0,0);
                                    }
                                    DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)local_1d8);
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
                                  goto LAB_001136a6;
                                }
                                iVar14 = XMLParser::get_node_type();
                              } while (iVar14 != 2);
                              XMLParser::get_node_name();
                              cVar11 = String::operator==((String *)&local_158,"members");
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                            } while (cVar11 == '\0');
                          }
                        }
                        else {
                          iVar14 = _parse_methods(param_2,(Vector *)(this_02 + 200));
                          if (iVar14 != 0) {
                            _err_print_error("_load","editor/doc_tools.cpp",0x562,
                                             "Condition \"err2\" is true. Returning: err2",0,0);
                            goto LAB_00112ec3;
                          }
                        }
                      }
                      else {
                        iVar14 = _parse_methods(param_2,(Vector *)(this_02 + 0x68));
                        if (iVar14 != 0) {
                          _err_print_error("_load","editor/doc_tools.cpp",0x55f,
                                           "Condition \"err2\" is true. Returning: err2",0,0);
                          goto LAB_00112ec3;
                        }
                      }
                    }
                    else {
                      iVar14 = _parse_methods(param_2,(Vector *)(this_02 + 0x58));
                      if (iVar14 != 0) {
                        _err_print_error("_load","editor/doc_tools.cpp",0x55c,
                                         "Condition \"err2\" is true. Returning: err2",0,0);
                        goto LAB_00112ec3;
                      }
                    }
                  }
                  else {
                    iVar14 = _parse_methods(param_2,(Vector *)(this_02 + 0x48));
                    if (iVar14 != 0) {
                      _err_print_error("_load","editor/doc_tools.cpp",0x559,
                                       "Condition \"err2\" is true. Returning: err2",0,0);
                      goto LAB_00112ec3;
                    }
                  }
                }
                else {
                  iVar14 = _parse_methods(param_2,(Vector *)(this_02 + 0x38));
                  if (iVar14 != 0) {
                    _err_print_error("_load","editor/doc_tools.cpp",0x556,
                                     "Condition \"err2\" is true. Returning: err2",0,0);
LAB_00112ec3:
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
                    goto LAB_00112d59;
                  }
                }
              }
              else {
                do {
                  do {
                    while( true ) {
                      iVar14 = XMLParser::read();
                      if (iVar14 != 0) goto LAB_00112dc7;
                      iVar14 = XMLParser::get_node_type();
                      if (iVar14 != 1) break;
                      XMLParser::get_node_name();
                      cVar11 = String::operator==((String *)&local_1e8,"link");
                      if (cVar11 == '\0') {
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = local_1d8._8_8_;
                        local_1d8 = auVar5 << 0x40;
                        String::parse_latin1((String *)local_1d8,".");
                        operator+((char *)&local_1e0,(String *)"Invalid tag in doc file: ");
                        String::operator+((String *)&local_158,(String *)&local_1e0);
                        _err_print_error("_load","editor/doc_tools.cpp",0x54e,
                                         "Method/function failed. Returning: ERR_FILE_CORRUPT",
                                         (String *)&local_158,0,0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
                        goto LAB_001136a6;
                      }
                      pSVar19 = *(String **)param_2;
                      local_1d8 = (undefined1  [16])0x0;
                      local_158 = "title";
                      local_1e0 = 0;
                      local_150[0] = 5;
                      String::parse_latin1((StrRange *)&local_1e0);
                      cVar11 = XMLParser::has_attribute(pSVar19);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                      this_00 = (CowData<char32_t> *)(local_1d8 + 8);
                      if (cVar11 != '\0') {
                        local_1e0 = 0;
                        String::parse_latin1((String *)&local_1e0,"title");
                        XMLParser::get_named_attribute_value((String *)&local_158);
                        if (local_158 != (char *)0x0) {
                          CowData<char32_t>::_unref(this_00);
                          pcVar10 = local_158;
                          local_158 = (char *)0x0;
                          local_1d8._8_8_ = pcVar10;
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                      }
                      XMLParser::read();
                      iVar14 = XMLParser::get_node_type();
                      if (iVar14 == 3) {
                        XMLParser::get_node_data();
                        String::strip_edges(SUB81((String *)&local_158,0),
                                            SUB81((StrRange *)&local_1e0,0));
                        if ((char *)local_1d8._0_8_ != local_158) {
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                          pcVar10 = local_158;
                          local_158 = (char *)0x0;
                          local_1d8._0_8_ = pcVar10;
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
                        local_158 = (char *)0x0;
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_158,(CowData *)local_1d8);
                        local_150[0] = 0;
                        CowData<char32_t>::_ref((CowData<char32_t> *)local_150,(CowData *)this_00);
                        if (*(long *)(this_02 + 0x30) == 0) {
                          lVar16 = 1;
                        }
                        else {
                          lVar16 = *(long *)(*(long *)(this_02 + 0x30) + -8) + 1;
                        }
                        iVar14 = CowData<DocData::TutorialDoc>::resize<false>
                                           ((CowData<DocData::TutorialDoc> *)(this_02 + 0x30),lVar16
                                           );
                        if (iVar14 == 0) {
                          if (*(long *)(this_02 + 0x30) == 0) {
                            lVar18 = -1;
                            lVar16 = 0;
                          }
                          else {
                            lVar16 = *(long *)(*(long *)(this_02 + 0x30) + -8);
                            lVar18 = lVar16 + -1;
                            if (-1 < lVar18) {
                              CowData<DocData::TutorialDoc>::_copy_on_write
                                        ((CowData<DocData::TutorialDoc> *)(this_02 + 0x30));
                              this_04 = (CowData<char32_t> *)
                                        (lVar18 * 0x10 + *(long *)(this_02 + 0x30));
                              CowData<char32_t>::_ref(this_04,(CowData *)&local_158);
                              CowData<char32_t>::_ref(this_04 + 8,(CowData *)local_150);
                              goto LAB_001131f2;
                            }
                          }
                          _err_print_index_error
                                    ("set","./core/templates/cowdata.h",0xcf,lVar18,lVar16,"p_index"
                                     ,"size()","",false,false);
                        }
                        else {
                          _err_print_error("push_back","./core/templates/vector.h",0x142,
                                           "Condition \"err\" is true. Returning: true");
                        }
LAB_001131f2:
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                      }
                      CowData<char32_t>::_unref(this_00);
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
                    }
                    iVar14 = XMLParser::get_node_type();
                  } while (iVar14 != 2);
                  XMLParser::get_node_name();
                  cVar11 = String::operator==((String *)&local_158,"tutorials");
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
                } while (cVar11 == '\0');
              }
            }
            else {
              XMLParser::read();
              iVar14 = XMLParser::get_node_type();
              if (iVar14 == 3) {
                XMLParser::get_node_data();
                if (*(char **)(this_02 + 0x18) != local_158) {
                  CowData<char32_t>::_unref(this_02 + 0x18);
                  *(char **)(this_02 + 0x18) = local_158;
                  local_158 = (char *)0x0;
                }
                goto LAB_00112e41;
              }
            }
          }
          else {
            XMLParser::read();
            iVar14 = XMLParser::get_node_type();
            if (iVar14 == 3) {
              XMLParser::get_node_data();
              if (*(char **)(this_02 + 0x10) == local_158) {
LAB_00112e41:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              }
              else {
                CowData<char32_t>::_unref(this_02 + 0x10);
                *(char **)(this_02 + 0x10) = local_158;
                local_158 = (char *)0x0;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
              }
            }
          }
LAB_00112dc7:
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
        }
        iVar14 = XMLParser::get_node_type();
      } while (iVar14 != 2);
      XMLParser::get_node_name();
      cVar11 = String::operator==((String *)&local_158,"class");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    } while (cVar11 == '\0');
LAB_00112d2e:
    Vector<DocData::ConstantDoc>::sort_custom<_DefaultComparator<DocData::ConstantDoc>,true>
              ((Vector<DocData::ConstantDoc> *)(this_02 + 0x78));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
    iVar14 = XMLParser::read();
  } while( true );
}



/* DocTools::load_classes(String const&) */

int __thiscall DocTools::load_classes(DocTools *this,String *param_1)

{
  String *pSVar1;
  String *pSVar2;
  char cVar3;
  RefCounted *this_00;
  long in_FS_OFFSET;
  int local_5c;
  Object *local_58;
  String *local_50;
  String *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::open((String *)&local_58,param_1);
  if (local_58 != (Object *)0x0) {
    (**(code **)(*(long *)local_58 + 0x160))();
    local_50 = (String *)0x0;
    (**(code **)(*(long *)local_58 + 0x168))((CowData<char32_t> *)&local_48);
    if (local_50 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = local_48;
      local_48 = (String *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    while (local_50 != (String *)0x0) {
      while( true ) {
        if (*(uint *)(local_50 + -8) < 2) goto LAB_001151df;
        cVar3 = (**(code **)(*(long *)local_58 + 0x170))();
        if ((cVar3 == '\0') && (cVar3 = String::ends_with((char *)&local_50), cVar3 != '\0')) {
          this_00 = (RefCounted *)operator_new(0x1d0,"");
          RefCounted::RefCounted(this_00);
          *(code **)this_00 = RefCounted::init_ref;
          *(undefined8 *)(this_00 + 400) = 0;
          *(undefined8 *)(this_00 + 0x1a8) = 0;
          this_00[0x1b0] = (RefCounted)0x0;
          *(undefined4 *)(this_00 + 0x1b4) = 0;
          *(undefined8 *)(this_00 + 0x1b8) = 0;
          *(undefined8 *)(this_00 + 0x1c8) = 0;
          *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
          postinitialize_handler((Object *)this_00);
          cVar3 = RefCounted::init_ref();
          if (cVar3 == '\0') {
            this_00 = (RefCounted *)0x0;
          }
          String::path_join((String *)&local_48);
          local_5c = XMLParser::open((String *)this_00);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          if (local_5c != 0) {
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
              Memory::free_static(this_00,false);
            }
            goto LAB_001151eb;
          }
          local_48 = (String *)this_00;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_48 = (String *)0x0;
            _load(this);
          }
          else {
            _load(this);
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
              (**(code **)(*(long *)this_00 + 0x140))(this_00);
              Memory::free_static(this_00,false);
            }
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
        }
        (**(code **)(*(long *)local_58 + 0x168))((CowData<char32_t> *)&local_48);
        pSVar2 = local_48;
        pSVar1 = local_50;
        if (local_50 == local_48) break;
        if (local_50 != (String *)0x0) {
          LOCK();
          local_50 = local_50 + -0x10;
          *(long *)local_50 = *(long *)local_50 + -1;
          UNLOCK();
          if (*(long *)local_50 == 0) {
            local_50 = (String *)0x0;
            Memory::free_static(pSVar1 + -0x10,false);
          }
        }
        local_50 = local_48;
        if (local_48 == (String *)0x0) goto LAB_001151df;
      }
      if (local_48 == (String *)0x0) break;
      LOCK();
      pSVar1 = local_48 + -0x10;
      *(long *)pSVar1 = *(long *)pSVar1 + -1;
      UNLOCK();
      if (*(long *)pSVar1 == 0) {
        local_48 = (String *)0x0;
        Memory::free_static(pSVar2 + -0x10,false);
      }
    }
LAB_001151df:
    local_5c = 0;
    (**(code **)(*(long *)local_58 + 0x180))();
LAB_001151eb:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (((local_58 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_5c;
}



/* DocTools::load_compressed(unsigned char const*, int, int) */

int __thiscall DocTools::load_compressed(DocTools *this,uchar *param_1,int param_2,int param_3)

{
  ulong *__dest;
  uint uVar1;
  long lVar2;
  void *pvVar3;
  size_t __n;
  code *pcVar4;
  char cVar5;
  int iVar6;
  ulong *puVar7;
  RefCounted *this_00;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  ulong *local_50;
  
  uVar11 = (ulong)param_3;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ulong *)0x0;
  if ((long)uVar11 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
  }
  else if (uVar11 != 0) {
    uVar10 = uVar11 - 1 | uVar11 - 1 >> 1;
    uVar10 = uVar10 | uVar10 >> 2;
    uVar10 = uVar10 | uVar10 >> 4;
    uVar10 = uVar10 | uVar10 >> 8;
    puVar7 = (ulong *)Memory::alloc_static((uVar10 | uVar10 >> 0x10) + 0x11,false);
    if (puVar7 == (ulong *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
    }
    else {
      local_50 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = uVar11;
      if (1 < *puVar7) {
        if (local_50 == (ulong *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        __n = puVar7[1];
        uVar11 = 0x10;
        if (__n != 0) {
          uVar11 = __n - 1 | __n - 1 >> 1;
          uVar11 = uVar11 | uVar11 >> 2;
          uVar11 = uVar11 | uVar11 >> 4;
          uVar11 = uVar11 | uVar11 >> 8;
          uVar11 = uVar11 | uVar11 >> 0x10;
          uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
        }
        puVar8 = (undefined8 *)Memory::alloc_static(uVar11,false);
        if (puVar8 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          __dest = puVar8 + 2;
          *puVar8 = 1;
          puVar8[1] = __n;
          memcpy(__dest,local_50,__n);
          LOCK();
          *puVar7 = *puVar7 - 1;
          UNLOCK();
          local_50 = __dest;
          if (*puVar7 == 0) {
            Memory::free_static(puVar7,false);
          }
        }
      }
    }
  }
  iVar6 = Compression::decompress(local_50,param_3,param_1,param_2,1);
  if (iVar6 == -1) {
    iVar6 = 0x10;
    _err_print_error("load_compressed","editor/doc_tools.cpp",0x711,
                     "Condition \"ret == -1\" is true. Returning: ERR_FILE_CORRUPT",
                     "Compressed file is corrupt.",0,0);
  }
  else {
    if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
      lVar9 = 0;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar9) != 0) {
            *(int *)(*(long *)(this + 0x18) + lVar9) = 0;
            pvVar3 = *(void **)(*(long *)(this + 0x10) + lVar9 * 2);
            DocData::ClassDoc::~ClassDoc((ClassDoc *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            *(undefined8 *)(*(long *)(this + 0x10) + lVar9 * 2) = 0;
          }
          lVar9 = lVar9 + 4;
        } while (lVar9 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    }
    this_00 = (RefCounted *)operator_new(0x1d0,"");
    RefCounted::RefCounted(this_00);
    *(code **)this_00 = RefCounted::init_ref;
    *(undefined8 *)(this_00 + 400) = 0;
    *(undefined8 *)(this_00 + 0x1a8) = 0;
    this_00[0x1b0] = (RefCounted)0x0;
    *(undefined4 *)(this_00 + 0x1b4) = 0;
    *(undefined8 *)(this_00 + 0x1b8) = 0;
    *(undefined8 *)(this_00 + 0x1c8) = 0;
    *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    cVar5 = RefCounted::init_ref();
    if (cVar5 == '\0') {
      this_00 = (RefCounted *)0x0;
    }
    iVar6 = XMLParser::open_buffer((Vector *)this_00);
    if (iVar6 == 0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        _load(this);
      }
      else {
        _load(this);
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
    }
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_00), cVar5 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
  }
  if (local_50 != (ulong *)0x0) {
    LOCK();
    puVar7 = local_50 + -2;
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    if (*puVar7 == 0) {
      Memory::free_static(local_50 + -2,false);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DocTools::load_xml(unsigned char const*, int) */

int DocTools::load_xml(uchar *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  RefCounted *this;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this = (RefCounted *)operator_new(0x1d0,"");
  RefCounted::RefCounted(this);
  *(code **)this = RefCounted::init_ref;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x1b0] = (RefCounted)0x0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    this = (RefCounted *)0x0;
  }
  iVar3 = XMLParser::_open_buffer((uchar *)this,CONCAT44(in_register_00000034,param_2));
  if (iVar3 == 0) {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      _load((DocTools *)param_1);
      cVar2 = RefCounted::unreference();
      goto joined_r0x00115acd;
    }
    _load((DocTools *)param_1);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      Memory::free_static(this,false);
    }
  }
  cVar2 = RefCounted::unreference();
joined_r0x00115acd:
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* WARNING: Removing unreachable block (ram,0x00118d71) */
/* WARNING: Removing unreachable block (ram,0x00118d7b) */
/* WARNING: Removing unreachable block (ram,0x00118d91) */
/* WARNING: Removing unreachable block (ram,0x00118da8) */
/* WARNING: Removing unreachable block (ram,0x001180df) */
/* DocTools::generate(BitField<DocTools::GenerateFlags>) */

void __thiscall DocTools::generate(DocTools *this,uint param_2)

{
  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
  *this_00;
  HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
  *this_01;
  StringName *pSVar1;
  Element *pEVar2;
  void *pvVar3;
  MethodDoc *pMVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  CowData<char32_t> CVar24;
  char cVar25;
  char cVar26;
  undefined1 uVar27;
  String SVar28;
  char cVar29;
  int iVar30;
  undefined4 uVar31;
  int iVar32;
  uint uVar33;
  EditorSettings *this_02;
  ClassDoc *pCVar34;
  String *pSVar35;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *pRVar36;
  ulong uVar37;
  CowData<char32_t> *pCVar38;
  char *pcVar39;
  Variant *pVVar40;
  undefined8 uVar41;
  undefined4 *puVar42;
  long lVar43;
  List *pLVar44;
  long *plVar45;
  long *plVar46;
  Object *pOVar47;
  int iVar48;
  long lVar49;
  int iVar50;
  uint uVar51;
  uint *puVar52;
  CowData<char32_t> CVar53;
  PropertyInfo *pPVar54;
  uint uVar55;
  StringName *pSVar56;
  StringName *pSVar57;
  long **pplVar58;
  uint uVar59;
  int *piVar60;
  long lVar61;
  CowData *pCVar62;
  int *piVar63;
  MethodDoc *pMVar64;
  long in_FS_OFFSET;
  bool bVar65;
  byte bVar66;
  ulong local_408;
  String *local_400;
  String *local_3f8;
  CowData<char32_t> *local_3e8;
  CowData<char32_t> *local_3e0;
  CowData<char32_t> *local_3d8;
  CowData<char32_t> *local_3d0;
  List *local_3c8;
  List<PropertyInfo,DefaultAllocator> *local_3c0;
  long *local_360;
  long local_358;
  undefined8 *local_350;
  int *local_348;
  long *local_340;
  undefined8 *local_338;
  long *local_330;
  long *local_328;
  Object *local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined1 local_2e8 [16];
  long local_2d8;
  CowData<char32_t> local_2d0;
  long *local_2c8 [2];
  long *local_2b8;
  long *plStack_2b0;
  CowData<char32_t> local_2a8;
  undefined7 uStack_2a7;
  CowData<char32_t> local_2a0;
  undefined7 uStack_29f;
  long lStack_298;
  uint uStack_290;
  int iStack_28c;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  ulong local_270;
  undefined1 local_268 [16];
  undefined1 local_250 [16];
  uint local_238;
  undefined4 uStack_234;
  long *plStack_230;
  String local_228;
  undefined7 uStack_227;
  String SStack_220;
  undefined7 uStack_21f;
  CowData<char32_t> CStack_218;
  undefined7 uStack_217;
  uint uStack_210;
  undefined4 uStack_20c;
  CowData<char32_t> local_208;
  undefined7 uStack_207;
  CowData<char32_t> CStack_200;
  undefined7 uStack_1ff;
  CowData<char32_t> local_1f8;
  undefined7 uStack_1f7;
  long *local_1f0;
  undefined1 local_1e8 [16];
  Vector<int> local_1d8 [8];
  undefined1 local_1d0 [16];
  long *local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  int local_1a0;
  undefined4 uStack_19c;
  long *local_198;
  ulong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  Vector<DocData::MethodDoc> local_170 [8];
  long local_168;
  undefined8 local_160;
  long local_150;
  Vector<DocData::ConstantDoc> local_140 [8];
  long local_138;
  ulong local_108;
  Vector<DocData::MethodDoc> local_f0 [8];
  long local_e8;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  bVar66 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  if (*(long *)(in_FS_OFFSET + lRam0000000000115b96) != 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("generate","editor/doc_tools.cpp",0x194,
                       "Condition \"!Thread::is_main_thread()\" is true.",0,0);
      return;
    }
    goto LAB_0011b93c;
  }
  local_360 = (long *)0x0;
  if ((param_2 & 2) == 0) {
    ClassDB::get_class_list((List *)&local_360);
    if ((local_360 == (long *)0x0) ||
       (pSVar57 = (StringName *)*local_360, pSVar57 == (StringName *)0x0)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    while (cVar25 = StringName::operator==(pSVar57,"ProjectSettings"), cVar25 == '\0') {
      pSVar57 = *(StringName **)(pSVar57 + 8);
      if (pSVar57 == (StringName *)0x0) {
        generate();
        return;
      }
    }
    if (local_360 != *(long **)(pSVar57 + 0x18)) {
      _err_print_error("move_to_back","./core/templates/list.h",0x238,
                       "Condition \"p_I->data != _data\" is true.",0,0);
      goto LAB_00115bce;
    }
    lVar49 = *(long *)(pSVar57 + 8);
    if (lVar49 == 0) goto LAB_00115bce;
    if ((StringName *)*local_360 == pSVar57) {
      *local_360 = lVar49;
    }
    pSVar1 = *(StringName **)(pSVar57 + 0x10);
    pSVar56 = (StringName *)local_360[1];
    if ((StringName *)local_360[1] == pSVar57) {
      local_360[1] = (long)pSVar1;
      pSVar56 = pSVar1;
    }
    if (pSVar1 != (StringName *)0x0) {
      *(long *)(pSVar1 + 8) = lVar49;
      lVar49 = *(long *)(pSVar57 + 8);
    }
    *(StringName **)(lVar49 + 0x10) = pSVar1;
    *(StringName **)(pSVar56 + 8) = pSVar57;
    *(StringName **)(pSVar57 + 0x10) = pSVar56;
    *(undefined8 *)(pSVar57 + 8) = 0;
    local_360[1] = (long)pSVar57;
LAB_00115bd7:
    do {
      if ((int)local_360[2] == 0) break;
      lVar49 = *(long *)*local_360;
      if (lVar49 == 0) {
        local_358 = 0;
      }
      else {
        local_358 = 0;
        if (*(char **)(lVar49 + 8) == (char *)0x0) {
          if (*(long *)(lVar49 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_358,(CowData *)(lVar49 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_358,*(char **)(lVar49 + 8));
        }
      }
      local_400 = (String *)&local_358;
      StringName::StringName((StringName *)&local_1b8,local_400,false);
      CVar24 = (CowData<char32_t>)ClassDB::is_class_exposed((StringName *)&local_1b8);
      if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
        StringName::unref();
      }
      uVar37 = _LC15;
      if (CVar24 == (CowData<char32_t>)0x0) {
        cVar25 = is_print_verbose_enabled();
        if (cVar25 != '\0') {
          local_2b8 = (long *)0x0;
          if (local_358 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,(CowData *)local_400);
          }
          auVar18._8_8_ = 0;
          auVar18._0_8_ = local_2e8._8_8_;
          local_2e8 = auVar18 << 0x40;
          String::parse_latin1((String *)local_2e8,"Class \'%s\' is not exposed, skipping.");
          vformat<String>((String *)&local_238,(String *)local_2e8,(CowData<char32_t> *)&local_2b8);
          Variant::Variant((Variant *)local_58,(String *)&local_238);
          stringify_variants((Variant *)&local_1b8);
          __print_line((String *)&local_1b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
        }
        plVar45 = local_360;
        if ((local_360 != (long *)0x0) && (plVar46 = (long *)*local_360, plVar46 != (long *)0x0)) {
          if (local_360 == (long *)plVar46[3]) {
            lVar49 = plVar46[1];
            lVar61 = plVar46[2];
            *local_360 = lVar49;
            if (plVar46 == (long *)local_360[1]) {
              local_360[1] = lVar61;
            }
            if (lVar61 != 0) {
              *(long *)(lVar61 + 8) = lVar49;
              lVar49 = plVar46[1];
            }
            if (lVar49 != 0) {
              *(long *)(lVar49 + 0x10) = lVar61;
            }
            if ((StringName::configured != '\0') && (*plVar46 != 0)) {
              StringName::unref();
            }
            Memory::free_static(plVar46,false);
            *(int *)(plVar45 + 2) = (int)plVar45[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          if ((int)local_360[2] == 0) {
            Memory::free_static(local_360,false);
            local_360 = (long *)0x0;
          }
        }
      }
      else {
        pSVar57 = (StringName *)&local_1b8;
        for (lVar49 = 0x23; lVar49 != 0; lVar49 = lVar49 + -1) {
          *(undefined8 *)pSVar57 = 0;
          pSVar57 = pSVar57 + (ulong)bVar66 * -0x10 + 8;
        }
        local_318 = (undefined1  [16])0x0;
        local_308 = (undefined1  [16])0x0;
        local_2f8 = _LC15;
        local_108 = _LC15;
        pCVar34 = (ClassDoc *)
                  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                  ::operator[]((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                                *)(this + 8),local_400);
        DocData::ClassDoc::operator=(pCVar34,(ClassDoc *)&local_1b8);
        DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_1b8);
        pCVar38 = (CowData<char32_t> *)
                  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                  ::operator[]((HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                                *)(this + 8),local_400);
        if (*(long *)pCVar38 != local_358) {
          CowData<char32_t>::_ref(pCVar38,(CowData *)local_400);
        }
        StringName::StringName((StringName *)&local_2b8,local_400,false);
        ClassDB::get_parent_class((StringName *)&local_238);
        lVar49 = CONCAT44(uStack_234,local_238);
        if (lVar49 == 0) {
LAB_00118f8b:
          local_1b8 = (long *)0x0;
        }
        else {
          local_1b8 = (long *)0x0;
          if (*(char **)(lVar49 + 8) == (char *)0x0) {
            if (*(long *)(lVar49 + 0x10) == 0) goto LAB_00118f8b;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
          }
        }
        if (*(long **)(pCVar38 + 8) != local_1b8) {
          CowData<char32_t>::_unref(pCVar38 + 8);
          *(long **)(pCVar38 + 8) = local_1b8;
          local_1b8 = (long *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        if ((StringName::configured != '\0') &&
           (((CONCAT44(uStack_234,local_238) == 0 ||
             (StringName::unref(), StringName::configured != '\0')) && (local_2b8 != (long *)0x0))))
        {
          StringName::unref();
        }
        pRVar36 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                  HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                  ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                *)(this + 0x38),(String *)(pCVar38 + 8));
        if (*(long *)pRVar36 == 0) {
          puVar42 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(puVar42 + 8) = (undefined1  [16])0x0;
          uVar41 = *(undefined8 *)(pRVar36 + 8);
          *(undefined8 *)(puVar42 + 0xc) = 0;
          *(undefined4 **)pRVar36 = puVar42;
          *puVar42 = 1;
          *(undefined8 *)(puVar42 + 2) = uVar41;
          *(undefined8 *)(puVar42 + 4) = uVar41;
          *(undefined8 *)(puVar42 + 6) = uVar41;
        }
        RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert(pRVar36,local_400);
        local_350 = (undefined8 *)0x0;
        local_348 = (int *)0x0;
        uStack_290 = (uint)uVar37;
        iStack_28c = (int)(uVar37 >> 0x20);
        plStack_2b0 = (long *)0x0;
        local_2a8 = (CowData<char32_t>)0x0;
        uStack_2a7 = 0;
        local_2a0 = (CowData<char32_t>)0x0;
        uStack_29f = 0;
        lStack_298 = 0;
        cVar25 = String::operator==(local_400,"EditorSettings");
        if (cVar25 == '\0') {
          cVar25 = String::operator==(local_400,"ProjectSettings");
          if (cVar25 != '\0') {
            pLVar44 = (List *)ProjectSettings::get_singleton();
            Object::get_property_list(pLVar44,SUB81((List *)&local_350,0));
            List<PropertyInfo,DefaultAllocator>::operator=
                      ((List<PropertyInfo,DefaultAllocator> *)&local_348,(List *)&local_350);
            goto LAB_00116e35;
          }
          StringName::StringName((StringName *)&local_238,"ResourceImporter",false);
          StringName::StringName((StringName *)local_2e8,local_400,false);
          cVar25 = ClassDB::is_parent_class((StringName *)local_2e8,(StringName *)&local_238);
          if ((cVar25 == '\0') ||
             (cVar25 = String::operator!=(local_400,"EditorImportPlugin"), cVar25 == '\0')) {
            if (StringName::configured != '\0') {
              cVar25 = '\0';
              goto LAB_001173f9;
            }
LAB_00117436:
            cVar25 = String::begins_with((char *)local_400);
            if (cVar25 == '\0') {
LAB_0011744f:
              StringName::StringName((StringName *)&local_1b8,local_400,false);
              ClassDB::get_property_list
                        ((StringName *)&local_1b8,(List *)&local_350,false,(Object *)0x0);
              if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                StringName::unref();
              }
              StringName::StringName((StringName *)&local_1b8,local_400,false);
              ClassDB::get_property_list
                        ((StringName *)&local_1b8,(List *)&local_348,true,(Object *)0x0);
              if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::StringName((StringName *)&local_1b8,local_400,false);
              cVar25 = ClassDB::can_instantiate((StringName *)&local_1b8);
              if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                StringName::unref();
              }
              if (cVar25 == '\0') goto LAB_0011744f;
              StringName::StringName((StringName *)&local_1b8,local_400,false);
              lVar49 = ClassDB::instantiate((StringName *)&local_1b8);
              if (((lVar49 == 0) ||
                  (pOVar47 = (Object *)
                             __dynamic_cast(lVar49,&Object::typeinfo,&EditorExportPlatform::typeinfo
                                           ), pOVar47 == (Object *)0x0)) ||
                 (cVar25 = RefCounted::init_ref(), cVar25 == '\0')) {
                if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                  StringName::unref();
                }
              }
              else {
                if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                  StringName::unref();
                }
                local_1b8 = (long *)0x0;
                (**(code **)(*(long *)pOVar47 + 0x1b8))(pOVar47,(ClassDoc *)&local_1b8);
                if ((local_1b8 != (long *)0x0) &&
                   (pPVar54 = (PropertyInfo *)*local_1b8, pPVar54 != (PropertyInfo *)0x0)) {
                  do {
                    List<PropertyInfo,DefaultAllocator>::push_back
                              ((List<PropertyInfo,DefaultAllocator> *)&local_350,pPVar54);
                    pPVar54 = *(PropertyInfo **)(pPVar54 + 0x50);
                  } while (pPVar54 != (PropertyInfo *)0x0);
                }
                local_3e0 = (CowData<char32_t> *)&local_350;
                List<PropertyInfo,DefaultAllocator>::operator=
                          ((List<PropertyInfo,DefaultAllocator> *)&local_348,(List *)local_3e0);
                List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
                          ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_1b8);
                cVar25 = RefCounted::unreference();
                if ((cVar25 != '\0') && (cVar25 = predelete_handler(pOVar47), cVar25 != '\0')) {
                  (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
                  Memory::free_static(pOVar47,false);
                }
              }
            }
            cVar25 = '\0';
            cVar26 = '\0';
          }
          else {
            StringName::StringName((StringName *)&local_1b8,local_400,false);
            cVar25 = ClassDB::can_instantiate((StringName *)&local_1b8);
            if ((StringName::configured != '\0') &&
               ((local_1b8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')))
               ) {
LAB_001173f9:
              if (local_2e8._0_8_ != 0) {
                StringName::unref();
              }
              if ((StringName::configured != '\0') && (CONCAT44(uStack_234,local_238) != 0)) {
                StringName::unref();
              }
            }
            if (cVar25 == '\0') goto LAB_00117436;
            StringName::StringName((StringName *)&local_1b8,local_400,false);
            pOVar47 = (Object *)ClassDB::instantiate((StringName *)&local_1b8);
            if (pOVar47 != (Object *)0x0) {
              pOVar47 = (Object *)
                        __dynamic_cast(pOVar47,&Object::typeinfo,&ResourceImporter::typeinfo);
            }
            if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
              StringName::unref();
            }
            local_238 = 0;
            uStack_234 = 0;
            pcVar13 = *(code **)(*(long *)pOVar47 + 0x1b0);
            local_1b8 = (long *)0x0;
            String::parse_latin1((String *)&local_1b8,"");
            (*pcVar13)(pOVar47,(ClassDoc *)&local_1b8,(StringName *)&local_238);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if (((long *)CONCAT44(uStack_234,local_238) != (long *)0x0) &&
               (pPVar54 = *(PropertyInfo **)CONCAT44(uStack_234,local_238),
               pPVar54 != (PropertyInfo *)0x0)) {
              do {
                List<PropertyInfo,DefaultAllocator>::push_back
                          ((List<PropertyInfo,DefaultAllocator> *)&local_350,pPVar54);
                StringName::StringName((StringName *)&local_1b8,(String *)(pPVar54 + 8),false);
                pVVar40 = (Variant *)
                          HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                        *)&local_2b8,(StringName *)&local_1b8);
                Variant::operator=(pVVar40,(Variant *)(pPVar54 + 0x30));
                if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                  StringName::unref();
                }
                pPVar54 = *(PropertyInfo **)(pPVar54 + 0x48);
              } while (pPVar54 != (PropertyInfo *)0x0);
            }
            local_3e0 = (CowData<char32_t> *)&local_350;
            List<PropertyInfo,DefaultAllocator>::operator=
                      ((List<PropertyInfo,DefaultAllocator> *)&local_348,(List *)local_3e0);
            cVar26 = predelete_handler(pOVar47);
            if (cVar26 != '\0') {
              (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
              Memory::free_static(pOVar47,false);
            }
            List<ResourceImporter::ImportOption,DefaultAllocator>::~List
                      ((List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_238);
            cVar26 = cVar25;
          }
        }
        else {
          this_02 = (EditorSettings *)operator_new(0x3c0,"");
          EditorSettings::EditorSettings(this_02);
          postinitialize_handler((Object *)this_02);
          cVar26 = RefCounted::init_ref();
          if (cVar26 == '\0') {
            Object::get_property_list((List *)0x0,SUB81((List *)&local_350,0));
            List<PropertyInfo,DefaultAllocator>::operator=
                      ((List<PropertyInfo,DefaultAllocator> *)&local_348,(List *)&local_350);
          }
          else {
            Object::get_property_list((List *)this_02,SUB81((List *)&local_350,0));
            List<PropertyInfo,DefaultAllocator>::operator=
                      ((List<PropertyInfo,DefaultAllocator> *)&local_348,(List *)&local_350);
            cVar26 = RefCounted::unreference();
            if ((cVar26 != '\0') && (cVar26 = predelete_handler((Object *)this_02), cVar26 != '\0'))
            {
              (**(code **)(*(long *)this_02 + 0x140))(this_02);
              Memory::free_static(this_02,false);
            }
          }
LAB_00116e35:
          cVar26 = '\0';
        }
        local_3c0 = (List<PropertyInfo,DefaultAllocator> *)&local_348;
        local_3e0 = (CowData<char32_t> *)&local_350;
        List<PropertyInfo,DefaultAllocator>::sort_custom<Comparator<PropertyInfo>>
                  ((List<PropertyInfo,DefaultAllocator> *)local_3e0);
        List<PropertyInfo,DefaultAllocator>::sort_custom<Comparator<PropertyInfo>>(local_3c0);
        piVar63 = local_348;
        if (local_348 != (int *)0x0) {
          piVar63 = *(int **)local_348;
        }
        if ((local_350 != (undefined8 *)0x0) && (piVar60 = (int *)*local_350, piVar60 != (int *)0x0)
           ) {
          do {
            CVar53 = CVar24;
            if ((((((piVar63 != (int *)0x0) && (*piVar63 == *piVar60)) &&
                  (cVar29 = String::operator==((String *)(piVar63 + 2),(String *)(piVar60 + 2)),
                  cVar29 != '\0')) &&
                 ((*(long *)(piVar63 + 4) == *(long *)(piVar60 + 4) && (piVar63[6] == piVar60[6]))))
                && (cVar29 = String::operator==((String *)(piVar63 + 8),(String *)(piVar60 + 8)),
                   cVar29 != '\0')) && (piVar63[10] == piVar60[10])) {
              piVar63 = *(int **)(piVar63 + 0xc);
              CVar53 = (CowData<char32_t>)0x0;
            }
            if (cVar25 == '\0') {
LAB_00116e90:
              if (((piVar60[10] & 0x1c8U) == 0) &&
                 ((*piVar60 != 0 || ((piVar60[10] & 0x40000U) == 0)))) {
                local_228 = (String)0x0;
                uStack_227 = 0;
                pCVar62 = (CowData *)(piVar60 + 2);
                local_1f0 = (long *)0x0;
                local_238 = 0;
                uStack_234 = 0;
                plStack_230 = (long *)0x0;
                CStack_218 = (CowData<char32_t>)0x0;
                uStack_217 = 0;
                uStack_210 = 0;
                uStack_20c = 0;
                local_208 = (CowData<char32_t>)0x0;
                uStack_207 = 0;
                CStack_200 = (CowData<char32_t>)0x0;
                uStack_1ff = 0;
                local_1d0 = (undefined1  [16])0x0;
                SStack_220 = (String)0x0;
                local_1f8 = (CowData<char32_t>)0x0;
                local_1e8 = ZEXT716(local_1e8._1_7_) << 8;
                local_1d8[0] = (Vector<int>)0x0;
                if (*(long *)(piVar60 + 2) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,pCVar62);
                }
                local_1f8 = CVar53;
                if (CVar53 != (CowData<char32_t>)0x0) {
                  StringName::StringName((StringName *)local_2e8,(String *)pCVar38,false);
                  ClassDB::get_parent_class((StringName *)&local_1b8);
                  if (local_1b8 == (long *)0x0) {
                    local_328 = (long *)0x0;
LAB_001188a5:
                    if (StringName::configured != '\0') {
LAB_001188a9:
                      if (local_2e8._0_8_ != 0) {
                        StringName::unref();
                      }
                    }
                  }
                  else {
                    local_328 = (long *)0x0;
                    if ((char *)local_1b8[1] == (char *)0x0) {
                      if (local_1b8[2] != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_328,(CowData *)(local_1b8 + 2));
                        goto LAB_00118882;
                      }
                      if (StringName::configured != '\0') goto LAB_00118896;
                    }
                    else {
                      String::parse_latin1((String *)&local_328,(char *)local_1b8[1]);
LAB_00118882:
                      if (StringName::configured != '\0') {
                        if (local_1b8 != (long *)0x0) {
LAB_00118896:
                          StringName::unref();
                          goto LAB_001188a5;
                        }
                        goto LAB_001188a9;
                      }
                    }
                  }
                  local_3f8 = (String *)&local_328;
                  while( true ) {
                    StringName::StringName((StringName *)&local_1b8,(String *)&local_238,false);
                    StringName::StringName((StringName *)local_2e8,local_3f8,false);
                    cVar29 = ClassDB::has_property
                                       ((StringName *)local_2e8,(StringName *)&local_1b8,true);
                    if ((StringName::configured != '\0') &&
                       (((local_2e8._0_8_ == 0 ||
                         (StringName::unref(), StringName::configured != '\0')) &&
                        (local_1b8 != (long *)0x0)))) {
                      StringName::unref();
                    }
                    if (cVar29 != '\0') break;
                    StringName::StringName((StringName *)&local_320,local_3f8,false);
                    ClassDB::get_parent_class((StringName *)local_2e8);
                    if (local_2e8._0_8_ == 0) {
LAB_00118a29:
                      local_1b8 = (long *)0x0;
                    }
                    else {
                      local_1b8 = (long *)0x0;
                      if (*(char **)(local_2e8._0_8_ + 8) == (char *)0x0) {
                        if (*(long *)(local_2e8._0_8_ + 0x10) == 0) goto LAB_00118a29;
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_1b8,
                                   (CowData *)(local_2e8._0_8_ + 0x10));
                      }
                      else {
                        String::parse_latin1((String *)&local_1b8,*(char **)(local_2e8._0_8_ + 8));
                      }
                    }
                    if (local_328 != local_1b8) {
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_3f8);
                      local_328 = local_1b8;
                      local_1b8 = (long *)0x0;
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                    if (((StringName::configured != '\0') &&
                        ((local_2e8._0_8_ == 0 ||
                         (StringName::unref(), StringName::configured != '\0')))) &&
                       (local_320 != (Object *)0x0)) {
                      StringName::unref();
                    }
                  }
                  if (local_1f0 != local_328) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1f0,(CowData *)local_3f8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_3f8);
                }
                local_78 = 0;
                local_70 = (undefined1  [16])0x0;
                cVar29 = String::operator==(local_400,"ProjectSettings");
                if (cVar29 == '\0') {
                  cVar29 = String::operator==(local_400,"EditorSettings");
                  if (cVar29 == '\0') {
                    if (cVar26 == '\0') {
                      StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                      StringName::StringName((StringName *)local_2e8,local_400,false);
                      get_documentation_default_value
                                ((StringName *)local_58,(StringName *)local_2e8,(bool *)&local_1b8);
                      if (Variant::needs_deinit[(int)local_78] != '\0') {
                        Variant::_clear_internal();
                      }
                      local_78 = CONCAT44(local_78._4_4_,local_58[0]);
                      local_70._8_8_ = uStack_48;
                      local_70._0_8_ = local_50;
                      if (((StringName::configured != '\0') &&
                          ((local_2e8._0_8_ == 0 ||
                           (StringName::unref(), StringName::configured != '\0')))) &&
                         (local_1b8 != (long *)0x0)) {
                        StringName::unref();
                      }
                      if (CVar53 != (CowData<char32_t>)0x0) {
                        local_328 = (long *)((ulong)local_328 & 0xffffffffffffff00);
                        StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                        StringName::StringName((StringName *)&local_320,local_400,false);
                        ClassDB::get_parent_class((StringName *)local_2e8);
                        get_documentation_default_value
                                  ((StringName *)local_58,(StringName *)local_2e8,(bool *)&local_1b8
                                  );
                        if (((StringName::configured != '\0') &&
                            ((local_2e8._0_8_ == 0 ||
                             (StringName::unref(), StringName::configured != '\0')))) &&
                           (((local_320 == (Object *)0x0 ||
                             (StringName::unref(), StringName::configured != '\0')) &&
                            (local_1b8 != (long *)0x0)))) {
                          StringName::unref();
                        }
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        goto LAB_001172df;
                      }
                    }
                    else {
                      StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                      pVVar40 = (Variant *)
                                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                              *)&local_2b8,(StringName *)&local_1b8);
                      Variant::operator=((Variant *)&local_78,pVVar40);
                      if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                        StringName::unref();
                      }
                      iVar50 = (int)local_78;
LAB_00117711:
                      if (iVar50 != 0x18) {
                        DocData::get_default_value_string((Variant *)&local_1b8);
                        if ((long *)CONCAT71(uStack_1ff,CStack_200) != local_1b8) {
                          CowData<char32_t>::operator=(&CStack_200,(CowData *)&local_1b8);
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                      }
                    }
                  }
LAB_00116fc4:
                  StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                  StringName::StringName((StringName *)local_2e8,local_400,false);
                  ClassDB::get_property_setter((StringName *)&local_340,(StringName *)local_2e8);
                  if ((StringName::configured != '\0') &&
                     (((local_2e8._0_8_ == 0 ||
                       (StringName::unref(), StringName::configured != '\0')) &&
                      (local_1b8 != (long *)0x0)))) {
                    StringName::unref();
                  }
                  StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                  StringName::StringName((StringName *)local_2e8,local_400,false);
                  ClassDB::get_property_getter((StringName *)&local_338,(StringName *)local_2e8);
                  if (((StringName::configured != '\0') &&
                      ((local_2e8._0_8_ == 0 ||
                       (StringName::unref(), StringName::configured != '\0')))) &&
                     (local_1b8 != (long *)0x0)) {
                    StringName::unref();
                  }
                  if (local_340 == (long *)0x0) {
LAB_001180d8:
                    local_1b8 = (long *)0x0;
                  }
                  else {
                    local_1b8 = (long *)0x0;
                    if ((char *)local_340[1] == (char *)0x0) {
                      if (local_340[2] == 0) goto LAB_001180d8;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_1b8,(CowData *)(local_340 + 2));
                    }
                    else {
                      String::parse_latin1((String *)&local_1b8,(char *)local_340[1]);
                    }
                  }
                  if (local_1b8 != (long *)CONCAT44(uStack_20c,uStack_210)) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_210);
                    plVar45 = local_1b8;
                    local_1b8 = (long *)0x0;
                    uStack_210 = (uint)plVar45;
                    uStack_20c = (undefined4)((ulong)plVar45 >> 0x20);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                  if (local_338 == (undefined8 *)0x0) {
LAB_001180c5:
                    local_1b8 = (long *)0x0;
                  }
                  else {
                    local_1b8 = (long *)0x0;
                    if ((char *)local_338[1] == (char *)0x0) {
                      if (local_338[2] == 0) goto LAB_001180c5;
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_1b8,(CowData *)(local_338 + 2));
                    }
                    else {
                      String::parse_latin1((String *)&local_1b8,(char *)local_338[1]);
                    }
                  }
                  if (local_1b8 != (long *)CONCAT71(uStack_207,local_208)) {
                    CowData<char32_t>::_unref(&local_208);
                    plVar45 = local_1b8;
                    local_1b8 = (long *)0x0;
                    local_208 = SUB81(plVar45,0);
                    uStack_207 = (undefined7)((ulong)plVar45 >> 8);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                  if (local_338 == (undefined8 *)0x0) {
joined_r0x0011776d:
                    if (local_340 != (long *)0x0) {
                      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      ::insert((StringName *)&local_1b8);
                    }
                    if ((*piVar60 == 0x18) && (piVar60[6] == 0x11)) {
                      if (plStack_230 != *(long **)(piVar60 + 8)) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&plStack_230,(CowData *)(piVar60 + 8));
                      }
                    }
                    else {
                      Variant::get_type_name((ClassDoc *)&local_1b8);
                      if (plStack_230 != local_1b8) {
                        CowData<char32_t>::_unref((CowData<char32_t> *)&plStack_230);
                        plStack_230 = local_1b8;
                        local_1b8 = (long *)0x0;
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                    }
                  }
                  else {
                    StringName::StringName((StringName *)&local_1b8,local_400,false);
                    lVar49 = ClassDB::get_method((StringName *)&local_1b8,(StringName *)&local_338);
                    if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                      StringName::unref();
                    }
                    if (lVar49 == 0) {
                      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      ::insert((StringName *)&local_1b8);
                      goto joined_r0x0011776d;
                    }
                    MethodBind::get_return_info();
                    if ((int)local_1b8 == 2) {
                      if ((local_190 & 0x10200) != 0) {
                        if (lStack_1a8 == 0) {
                          auVar17._8_8_ = 0;
                          auVar17._0_8_ = local_2e8._8_8_;
                          local_2e8 = auVar17 << 0x40;
LAB_0011b624:
                          lVar49 = 0;
                        }
                        else {
                          auVar15._8_8_ = 0;
                          auVar15._0_8_ = local_2e8._8_8_;
                          local_2e8 = auVar15 << 0x40;
                          if (*(char **)(lStack_1a8 + 8) == (char *)0x0) {
                            if (*(long *)(lStack_1a8 + 0x10) == 0) goto LAB_0011b624;
                            CowData<char32_t>::_ref
                                      ((CowData<char32_t> *)local_2e8,(CowData *)(lStack_1a8 + 0x10)
                                      );
                            lVar49 = local_2e8._0_8_;
                          }
                          else {
                            String::parse_latin1((String *)local_2e8,*(char **)(lStack_1a8 + 8));
                            lVar49 = local_2e8._0_8_;
                          }
                        }
                        if (lVar49 != CONCAT71(uStack_227,local_228)) {
                          CowData<char32_t>::operator=
                                    ((CowData<char32_t> *)&local_228,(CowData *)local_2e8);
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                        SStack_220 = (String)((byte)((uint)local_190 >> 9) & 1);
                        String::parse_latin1((String *)&plStack_230,"int");
                        goto LAB_00117244;
                      }
                      if (lStack_1a8 == 0) {
                        if (local_1a0 != 0x11) goto LAB_00119e97;
LAB_00119333:
                        if (plStack_230 != local_198) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&plStack_230,(CowData *)&local_198);
                        }
                        goto LAB_00117244;
                      }
LAB_001171f9:
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = local_2e8._8_8_;
                      local_2e8 = auVar14 << 0x40;
                      if (*(char **)(lStack_1a8 + 8) == (char *)0x0) {
                        plVar45 = *(long **)(lStack_1a8 + 0x10);
                        if (*(long **)(lStack_1a8 + 0x10) != (long *)0x0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)local_2e8,(CowData *)(lStack_1a8 + 0x10));
                          plVar45 = (long *)local_2e8._0_8_;
                        }
                      }
                      else {
                        String::parse_latin1((String *)local_2e8,*(char **)(lStack_1a8 + 8));
                        plVar45 = (long *)local_2e8._0_8_;
                      }
                      if (plVar45 != plStack_230) {
LAB_0011722c:
                        CowData<char32_t>::operator=
                                  ((CowData<char32_t> *)&plStack_230,(CowData *)local_2e8);
                      }
LAB_0011723c:
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                    }
                    else {
                      if (lStack_1a8 != 0) goto LAB_001171f9;
                      if ((int)local_1b8 == 0x1c) {
                        if (local_1a0 == 0x1f) {
                          local_320 = (Object *)0x0;
                          String::parse_latin1((String *)&local_320,"[]");
                          String::operator+((String *)local_2e8,(String *)&local_198);
                          if (plStack_230 != (long *)local_2e8._0_8_) {
                            CowData<char32_t>::operator=
                                      ((CowData<char32_t> *)&plStack_230,(CowData *)local_2e8);
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
                          goto LAB_00117244;
                        }
LAB_00119e8e:
                        if (local_1a0 == 0x11) goto LAB_00119333;
LAB_00119e97:
                        Variant::get_type_name((StringName *)local_2e8);
                        if (plStack_230 != (long *)local_2e8._0_8_) goto LAB_0011722c;
                        goto LAB_0011723c;
                      }
                      if ((int)local_1b8 == 0x1b) {
                        if (local_1a0 != 0x26) goto LAB_00119e8e;
                        local_320 = (Object *)0x0;
                        String::parse_latin1((String *)&local_320,"]");
                        String::replace((char *)&local_330,(char *)&local_198);
                        operator+((char *)&local_328,(String *)"Dictionary[");
                        String::operator+((String *)local_2e8,(String *)&local_328);
                        if (plStack_230 != (long *)local_2e8._0_8_) {
                          CowData<char32_t>::operator=
                                    ((CowData<char32_t> *)&plStack_230,(CowData *)local_2e8);
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_320);
                      }
                      else {
                        if (local_1a0 == 0x11) goto LAB_00119333;
                        if ((int)local_1b8 != 0) goto LAB_00119e97;
                        if ((local_190 & 0x20000) == 0) {
                          String::parse_latin1((String *)&plStack_230,"void");
                        }
                        else {
                          String::parse_latin1((String *)&plStack_230,"Variant");
                        }
                      }
                    }
LAB_00117244:
                    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
                    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                    insert((StringName *)&local_1b8);
                    if (local_340 != (long *)0x0) {
                      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      ::insert((StringName *)&local_1b8);
                    }
                  }
                  DocData::PropertyDoc::PropertyDoc
                            ((PropertyDoc *)&local_1b8,(PropertyDoc *)&local_238);
                  Vector<DocData::PropertyDoc>::push_back
                            ((Vector<DocData::PropertyDoc> *)(pCVar38 + 0xb8),(ClassDoc *)&local_1b8
                            );
                  DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_1b8);
                  if ((StringName::configured != '\0') &&
                     (((local_338 == (undefined8 *)0x0 ||
                       (StringName::unref(), StringName::configured != '\0')) &&
                      (local_340 != (long *)0x0)))) {
                    StringName::unref();
                  }
                }
                else {
                  pSVar35 = (String *)ProjectSettings::get_singleton();
                  cVar29 = ProjectSettings::is_builtin_setting(pSVar35);
                  if (cVar29 != '\0') {
                    if ((*(byte *)(piVar60 + 10) & 4) != 0) {
                      pSVar35 = (String *)ProjectSettings::get_singleton();
                      cVar29 = ProjectSettings::get_ignore_value_in_docs(pSVar35);
                      if (cVar29 == '\0') {
                        ProjectSettings::get_singleton();
                        StringName::StringName((StringName *)&local_1b8,(String *)pCVar62,false);
                        Object::property_get_revert((StringName *)local_58);
                        if (Variant::needs_deinit[(int)local_78] != '\0') {
                          Variant::_clear_internal();
                        }
                        local_78 = CONCAT44(local_78._4_4_,local_58[0]);
                        local_70._8_8_ = uStack_48;
                        local_70._0_8_ = local_50;
                        iVar50 = local_58[0];
                        if ((StringName::configured != '\0') &&
                           (iVar50 = local_58[0], local_1b8 != (long *)0x0)) {
                          StringName::unref();
                          iVar50 = (int)local_78;
                        }
                        goto LAB_00117711;
                      }
                    }
                    goto LAB_00116fc4;
                  }
                }
LAB_001172df:
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_238);
              }
            }
            else {
              pSVar35 = (String *)(piVar60 + 2);
              cVar29 = String::operator==(pSVar35,"resource_local_to_scene");
              if (((cVar29 == '\0') &&
                  (cVar29 = String::operator==(pSVar35,"resource_name"), cVar29 == '\0')) &&
                 ((cVar29 = String::operator==(pSVar35,"resource_path"), cVar29 == '\0' &&
                  ((cVar29 = String::operator==(pSVar35,"script"), cVar29 == '\0' &&
                   (cVar29 = String::operator==(pSVar35,"resource_scene_unique_id"), cVar29 == '\0')
                   ))))) goto LAB_00116e90;
            }
            piVar60 = *(int **)(piVar60 + 0xc);
          } while (piVar60 != (int *)0x0);
        }
        local_3c8 = (List *)&local_340;
        if ((*(long *)(pCVar38 + 0xc0) != 0) &&
           (lVar49 = *(long *)(*(long *)(pCVar38 + 0xc0) + -8), lVar49 != 0)) {
          CowData<DocData::PropertyDoc>::_copy_on_write
                    ((CowData<DocData::PropertyDoc> *)(pCVar38 + 0xc0));
          SortArray<DocData::PropertyDoc,_DefaultComparator<DocData::PropertyDoc>,true>::sort
                    (*(PropertyDoc **)(pCVar38 + 0xc0),lVar49);
        }
        local_340 = (long *)0x0;
        StringName::StringName((StringName *)&local_1b8,local_400,false);
        ClassDB::get_method_list((StringName *)&local_1b8,local_3c8,true,false);
        if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
          StringName::unref();
        }
        if (local_340 != (long *)0x0) {
          for (pSVar35 = (String *)*local_340; pSVar35 != (String *)0x0;
              pSVar35 = *(String **)(pSVar35 + 0x70)) {
LAB_001178ad:
            piVar63 = *(int **)pSVar35;
            if ((piVar63 == (int *)0x0) || (lVar49 = *(long *)(piVar63 + -2), (uint)lVar49 < 2)) {
LAB_001178a0:
              pSVar35 = *(String **)(pSVar35 + 0x70);
              if (pSVar35 == (String *)0x0) break;
              goto LAB_001178ad;
            }
            if (lVar49 < 1) {
              uVar37 = 0;
              goto LAB_001187a5;
            }
            if ((*piVar63 == 0x5f) && (((byte)pSVar35[0x38] & 8) == 0)) goto LAB_001178a0;
            StringName::StringName((StringName *)&local_1b8,pSVar35,false);
            uVar41 = local_318._0_8_;
            if ((local_318._0_8_ != 0) && (local_2f8._4_4_ != 0)) {
              uVar33 = *(uint *)(hash_table_size_primes + (local_2f8 & 0xffffffff) * 4);
              uVar37 = CONCAT44(0,uVar33);
              lVar49 = *(long *)(hash_table_size_primes_inv + (local_2f8 & 0xffffffff) * 8);
              if (local_1b8 == (long *)0x0) {
                uVar51 = StringName::get_empty_hash();
              }
              else {
                uVar51 = *(uint *)(local_1b8 + 4);
              }
              if (uVar51 == 0) {
                uVar51 = 1;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar51 * lVar49;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar37;
              lVar61 = SUB168(auVar5 * auVar9,8);
              uVar55 = *(uint *)(local_308._8_8_ + lVar61 * 4);
              iVar50 = SUB164(auVar5 * auVar9,8);
              if (uVar55 != 0) {
                uVar59 = 0;
                do {
                  if ((uVar55 == uVar51) &&
                     (CVar53 = CVar24,
                     *(long **)(uVar41 + (ulong)*(uint *)(local_318._8_8_ + lVar61 * 4) * 8) ==
                     local_1b8)) goto LAB_00117a1a;
                  uVar59 = uVar59 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (ulong)(iVar50 + 1) * lVar49;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar37;
                  lVar61 = SUB168(auVar6 * auVar10,8);
                  uVar55 = *(uint *)(local_308._8_8_ + lVar61 * 4);
                  iVar50 = SUB164(auVar6 * auVar10,8);
                } while ((uVar55 != 0) &&
                        (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar55 * lVar49, auVar11._8_8_ = 0,
                        auVar11._0_8_ = uVar37, auVar8._8_8_ = 0,
                        auVar8._0_8_ = (ulong)((uVar33 + iVar50) - SUB164(auVar7 * auVar11,8)) *
                                       lVar49, auVar12._8_8_ = 0, auVar12._0_8_ = uVar37,
                        uVar59 <= SUB164(auVar8 * auVar12,8)));
                CVar53 = (CowData<char32_t>)0x0;
LAB_00117a1a:
                if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
                  StringName::unref();
                }
                if ((CVar53 != (CowData<char32_t>)0x0) &&
                   (((*(long *)(pSVar35 + 0x40) == 0 ||
                     (iVar50 = *(int *)(*(long *)(pSVar35 + 0x40) + 0x10), iVar50 == 0)) ||
                    ((iVar50 == 1 && (*(int *)(pSVar35 + 8) == 0)))))) goto LAB_001178a0;
                goto LAB_00117a54;
              }
            }
            if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
              StringName::unref();
            }
LAB_00117a54:
            local_228 = (String)0x0;
            uStack_227 = 0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            uStack_210 = 0;
            uStack_20c = 0;
            local_1d0 = (undefined1  [16])0x0;
            SStack_220 = (String)0x0;
            local_208 = (CowData<char32_t>)0x0;
            CStack_200 = (CowData<char32_t>)0x0;
            uStack_1ff = 0;
            local_1f8 = (CowData<char32_t>)0x0;
            local_1f0 = (long *)0x0;
            local_1e8._8_8_ = 0;
            local_1b8 = (long *)0x0;
            String::parse_latin1((String *)&local_1b8,"");
            DocData::method_doc_from_methodinfo
                      ((MethodDoc *)&local_238,(MethodInfo *)pSVar35,(String *)&local_1b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            StringName::StringName((StringName *)&local_1b8,pSVar35,false);
            StringName::StringName((StringName *)&local_320,local_400,false);
            ClassDB::get_method_error_return_values
                      ((StringName *)local_2e8,(StringName *)&local_320);
            if ((StringName::configured != '\0') &&
               (((local_320 == (Object *)0x0 ||
                 (StringName::unref(), StringName::configured != '\0')) &&
                (local_1b8 != (long *)0x0)))) {
              StringName::unref();
            }
            if (((undefined4 *)local_2e8._8_8_ != (undefined4 *)0x0) &&
               (lVar49 = *(long *)(local_2e8._8_8_ + -8), lVar49 != 0)) {
              if (lVar49 < 1) {
                _err_print_index_error
                          ("insert","./core/templates/cowdata.h",0xf0,0,lVar49 + 1,"p_pos",
                           "new_size","",false,false);
LAB_0011b658:
                puVar42 = (undefined4 *)local_2e8._8_8_;
                if ((undefined4 *)local_2e8._8_8_ == (undefined4 *)0x0) goto LAB_00117b73;
              }
              else {
                lVar61 = 0;
                do {
                  puVar42 = (undefined4 *)local_2e8._8_8_;
                  if (*(int *)(local_2e8._8_8_ + lVar61 * 4) == 0) goto LAB_00118e1e;
                  lVar61 = lVar61 + 1;
                } while (lVar49 != lVar61);
                iVar50 = CowData<Error>::resize<false>((CowData<Error> *)(local_2e8 + 8),lVar49 + 1)
                ;
                if (iVar50 != 0) {
                  _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                                   "Condition \"err\" is true. Returning: err",0,0);
                  goto LAB_0011b658;
                }
                CowData<Error>::_copy_on_write((CowData<Error> *)(local_2e8 + 8));
                puVar42 = (undefined4 *)local_2e8._8_8_;
                memmove((undefined4 *)(local_2e8._8_8_ + 4),(void *)local_2e8._8_8_,lVar49 * 4);
                *puVar42 = 0;
              }
LAB_00118e1e:
              lVar49 = 0;
              do {
                if (*(long *)(puVar42 + -2) <= lVar49) break;
                if ((local_1d0._0_8_ != 0) && (0 < *(long *)(local_1d0._0_8_ + -8))) {
                  lVar61 = 0;
                  do {
                    if (puVar42[lVar49] == *(int *)(local_1d0._0_8_ + lVar61 * 4))
                    goto LAB_00118e66;
                    lVar61 = lVar61 + 1;
                  } while (*(long *)(local_1d0._0_8_ + -8) != lVar61);
                }
                Vector<int>::push_back(local_1d8,puVar42[lVar49]);
LAB_00118e66:
                lVar49 = lVar49 + 1;
                puVar42 = (undefined4 *)local_2e8._8_8_;
              } while ((undefined4 *)local_2e8._8_8_ != (undefined4 *)0x0);
            }
LAB_00117b73:
            DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
            Vector<DocData::MethodDoc>::push_back((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48));
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
            uVar41 = local_2e8._8_8_;
            if (local_2e8._8_8_ != 0) {
              LOCK();
              plVar45 = (long *)(local_2e8._8_8_ + -0x10);
              *plVar45 = *plVar45 + -1;
              UNLOCK();
              if (*plVar45 == 0) {
                local_2e8._8_8_ = 0;
                Memory::free_static((void *)(uVar41 + -0x10),false);
              }
            }
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
          }
        }
        Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>
                  ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48));
        local_338 = (undefined8 *)0x0;
        StringName::StringName((StringName *)&local_1b8,local_400,false);
        ClassDB::get_signal_list((StringName *)&local_1b8,(List *)&local_338,true);
        if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
          StringName::unref();
        }
        if ((local_338 != (undefined8 *)0x0) && (*(int *)(local_338 + 2) != 0)) {
          for (pCVar62 = (CowData *)*local_338; pCVar62 != (CowData *)0x0;
              pCVar62 = *(CowData **)(pCVar62 + 0x70)) {
            local_228 = (String)0x0;
            uStack_227 = 0;
            CStack_200 = (CowData<char32_t>)0x0;
            uStack_1ff = 0;
            local_1f0 = (long *)0x0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            uStack_210 = 0;
            uStack_20c = 0;
            local_1d0 = (undefined1  [16])0x0;
            SStack_220 = (String)0x0;
            local_208 = (CowData<char32_t>)0x0;
            local_1f8 = (CowData<char32_t>)0x0;
            local_1e8._8_8_ = 0;
            if (*(long *)pCVar62 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,pCVar62);
            }
            if ((*(long **)(pCVar62 + 0x40) != (long *)0x0) &&
               (pPVar54 = (PropertyInfo *)**(long **)(pCVar62 + 0x40),
               pPVar54 != (PropertyInfo *)0x0)) {
              do {
                local_2d8 = 0;
                local_2d0 = (CowData<char32_t>)0x0;
                local_2c8[0] = (long *)0x0;
                local_2e8 = (undefined1  [16])0x0;
                DocData::argument_doc_from_arginfo((ArgumentDoc *)local_2e8,pPVar54);
                local_1b8 = (long *)0x0;
                if (local_2e8._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)local_2e8);
                }
                local_1b0 = 0;
                uStack_1ac = 0;
                if (local_2e8._8_8_ != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_1b0,(CowData *)(local_2e8 + 8));
                }
                lStack_1a8 = 0;
                if (local_2d8 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_1a8,(CowData *)&local_2d8);
                }
                local_198 = (long *)0x0;
                local_1a0 = CONCAT31(local_1a0._1_3_,local_2d0);
                if (local_2c8[0] != (long *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)local_2c8);
                }
                Vector<DocData::ArgumentDoc>::push_back
                          ((Vector<DocData::ArgumentDoc> *)local_1e8,(ClassDoc *)&local_1b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
                CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_1a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_2c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_2d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)(local_2e8 + 8));
                CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                pPVar54 = *(PropertyInfo **)(pPVar54 + 0x30);
              } while (pPVar54 != (PropertyInfo *)0x0);
            }
            DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
            Vector<DocData::MethodDoc>::push_back
                      ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x68),(ClassDoc *)&local_1b8);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
          }
          Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>
                    ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x68));
        }
        local_330 = (long *)0x0;
        StringName::StringName((StringName *)&local_1b8,local_400,false);
        ClassDB::get_integer_constant_list((StringName *)&local_1b8,(List *)&local_330,true);
        if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
          StringName::unref();
        }
        if ((local_330 != (long *)0x0) &&
           (pCVar62 = (CowData *)*local_330, pCVar62 != (CowData *)0x0)) {
          do {
            local_228 = (String)0x0;
            local_208 = (CowData<char32_t>)0x0;
            uStack_207 = 0;
            local_1f8 = (CowData<char32_t>)0x0;
            uStack_1f7 = 0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            SStack_220 = (String)0x0;
            uStack_21f = 0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            local_1e8 = (undefined1  [16])0x0;
            uStack_210 = uStack_210 & 0xffffff00;
            CStack_200 = (CowData<char32_t>)0x0;
            local_1f0 = (long *)((ulong)local_1f0 & 0xffffffffffffff00);
            if (*(long *)pCVar62 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,pCVar62);
            }
            StringName::StringName((StringName *)local_2e8,(String *)pCVar62,false);
            StringName::StringName((StringName *)&local_320,local_400,false);
            ClassDB::get_integer_constant
                      ((StringName *)&local_320,(StringName *)local_2e8,(bool *)0x0);
            itos((long)&local_1b8);
            if (plStack_230 != local_1b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&plStack_230);
              plStack_230 = local_1b8;
              local_1b8 = (long *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if ((StringName::configured != '\0') &&
               (((local_320 == (Object *)0x0 ||
                 (StringName::unref(), StringName::configured != '\0')) && (local_2e8._0_8_ != 0))))
            {
              StringName::unref();
            }
            local_228 = (String)0x1;
            String::parse_latin1(&SStack_220,"int");
            StringName::StringName((StringName *)&local_320,(String *)pCVar62,false);
            StringName::StringName((StringName *)&local_328,local_400,false);
            ClassDB::get_integer_constant_enum
                      ((StringName *)local_2e8,(StringName *)&local_328,
                       SUB81((StringName *)&local_320,0));
            if (local_2e8._0_8_ == 0) {
LAB_00117feb:
              local_1b8 = (long *)0x0;
            }
            else {
              local_1b8 = (long *)0x0;
              if (*(char **)(local_2e8._0_8_ + 8) == (char *)0x0) {
                if (*(long *)(local_2e8._0_8_ + 0x10) == 0) goto LAB_00117feb;
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_1b8,(CowData *)(local_2e8._0_8_ + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_1b8,*(char **)(local_2e8._0_8_ + 8));
              }
            }
            if ((long *)CONCAT71(uStack_217,CStack_218) != local_1b8) {
              CowData<char32_t>::_unref(&CStack_218);
              plVar45 = local_1b8;
              local_1b8 = (long *)0x0;
              CStack_218 = SUB81(plVar45,0);
              uStack_217 = (undefined7)((ulong)plVar45 >> 8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if ((((StringName::configured != '\0') &&
                 ((local_2e8._0_8_ == 0 || (StringName::unref(), StringName::configured != '\0'))))
                && ((local_328 == (long *)0x0 ||
                    (StringName::unref(), StringName::configured != '\0')))) &&
               (local_320 != (Object *)0x0)) {
              StringName::unref();
            }
            StringName::StringName((StringName *)&local_1b8,(String *)&CStack_218,false);
            StringName::StringName((StringName *)local_2e8,local_400,false);
            uVar27 = ClassDB::is_enum_bitfield
                               ((StringName *)local_2e8,(StringName *)&local_1b8,false);
            uStack_210 = CONCAT31(uStack_210._1_3_,uVar27);
            if (((StringName::configured != '\0') &&
                ((local_2e8._0_8_ == 0 || (StringName::unref(), StringName::configured != '\0'))))
               && (local_1b8 != (long *)0x0)) {
              StringName::unref();
            }
            DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_1b8,(ConstantDoc *)&local_238);
            Vector<DocData::ConstantDoc>::push_back
                      ((Vector<DocData::ConstantDoc> *)(pCVar38 + 0x78),(ClassDoc *)&local_1b8);
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_1b8);
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_238);
            pCVar62 = *(CowData **)(pCVar62 + 8);
          } while (pCVar62 != (CowData *)0x0);
        }
        local_328 = (long *)0x0;
        uVar41 = ThemeDB::get_singleton();
        StringName::StringName((StringName *)&local_1b8,local_400,false);
        ThemeDB::get_class_items(uVar41,(ClassDoc *)&local_1b8,&local_328,0);
        if ((StringName::configured != '\0') && (local_1b8 != (long *)0x0)) {
          StringName::unref();
        }
        ThemeDB::get_singleton();
        ThemeDB::get_default_theme();
        if ((local_328 != (long *)0x0) && (puVar52 = (uint *)*local_328, puVar52 != (uint *)0x0)) {
          do {
            lVar49 = *(long *)(puVar52 + 4);
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_210 = 0;
            uStack_20c = 0;
            local_208 = (CowData<char32_t>)0x0;
            local_1f0 = (long *)0x0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            local_228 = (String)0x0;
            uStack_227 = 0;
            SStack_220 = (String)0x0;
            uStack_21f = 0;
            CStack_200 = (CowData<char32_t>)0x0;
            uStack_1ff = 0;
            local_1f8 = (CowData<char32_t>)0x0;
            uStack_1f7 = 0;
            if (lVar49 == 0) {
LAB_00118230:
              local_1b8 = (long *)0x0;
            }
            else {
              local_1b8 = (long *)0x0;
              if (*(char **)(lVar49 + 8) == (char *)0x0) {
                if (*(long *)(lVar49 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
                  goto LAB_00118206;
                }
              }
              else {
                String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
LAB_00118206:
                if ((long *)CONCAT44(uStack_234,local_238) != local_1b8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
                  local_238 = (uint)local_1b8;
                  uStack_234 = (undefined4)((ulong)local_1b8 >> 0x20);
                  goto LAB_00118230;
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if (*puVar52 < 6) {
              switch(*puVar52) {
              case 0:
                String::parse_latin1((String *)&plStack_230,"Color");
                String::parse_latin1(&local_228,"color");
                uVar33 = *puVar52;
                break;
              case 1:
                String::parse_latin1((String *)&plStack_230,"int");
                String::parse_latin1(&local_228,"constant");
                if (1 < *puVar52) goto LAB_00118289;
                goto LAB_001185be;
              case 2:
                String::parse_latin1((String *)&plStack_230,"Font");
                String::parse_latin1(&local_228,"font");
                uVar33 = *puVar52;
                break;
              case 3:
                String::parse_latin1((String *)&plStack_230,"int");
                String::parse_latin1(&local_228,"font_size");
                uVar33 = *puVar52;
                break;
              case 4:
                String::parse_latin1((String *)&plStack_230,"Texture2D");
                String::parse_latin1(&local_228,"icon");
                uVar33 = *puVar52;
                break;
              case 5:
                String::parse_latin1((String *)&plStack_230,"StyleBox");
                String::parse_latin1(&local_228,"style");
                uVar33 = *puVar52;
              }
              if (uVar33 < 2) {
LAB_001185be:
                pOVar47 = local_320;
                StringName::StringName((StringName *)local_2e8,local_400,false);
                Theme::get_theme_item(local_58,pOVar47,*puVar52,puVar52 + 4);
                DocData::get_default_value_string((Variant *)&local_1b8);
                if ((long *)CONCAT71(uStack_1f7,local_1f8) != local_1b8) {
                  CowData<char32_t>::_unref(&local_1f8);
                  plVar45 = local_1b8;
                  local_1b8 = (long *)0x0;
                  local_1f8 = SUB81(plVar45,0);
                  uStack_1f7 = (undefined7)((ulong)plVar45 >> 8);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_2e8._0_8_ != 0)) {
                  StringName::unref();
                }
              }
            }
LAB_00118289:
            DocData::ThemeItemDoc::ThemeItemDoc
                      ((ThemeItemDoc *)&local_1b8,(ThemeItemDoc *)&local_238);
            Vector<DocData::ThemeItemDoc>::push_back
                      ((Vector<DocData::ThemeItemDoc> *)(pCVar38 + 0xd8));
            DocData::ThemeItemDoc::~ThemeItemDoc((ThemeItemDoc *)&local_1b8);
            DocData::ThemeItemDoc::~ThemeItemDoc((ThemeItemDoc *)&local_238);
            puVar52 = *(uint **)(puVar52 + 0x12);
          } while (puVar52 != (uint *)0x0);
        }
        Vector<DocData::ThemeItemDoc>::sort_custom<_DefaultComparator<DocData::ThemeItemDoc>,true>
                  ((Vector<DocData::ThemeItemDoc> *)(pCVar38 + 0xd8));
        if (((local_320 != (Object *)0x0) &&
            (cVar25 = RefCounted::unreference(), pOVar47 = local_320, cVar25 != '\0')) &&
           (cVar25 = predelete_handler(local_320), cVar25 != '\0')) {
          (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
          Memory::free_static(pOVar47,false);
        }
        if (local_328 != (long *)0x0) {
          do {
            plVar45 = local_328;
            pEVar2 = (Element *)*local_328;
            if (pEVar2 == (Element *)0x0) {
              if ((int)local_328[2] != 0) {
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
                goto LAB_00118358;
              }
              break;
            }
            if (local_328 == *(long **)(pEVar2 + 0x58)) {
              *local_328 = *(long *)(pEVar2 + 0x48);
              if (pEVar2 == (Element *)local_328[1]) {
                local_328[1] = *(long *)(pEVar2 + 0x50);
              }
              if (*(long *)(pEVar2 + 0x50) != 0) {
                *(undefined8 *)(*(long *)(pEVar2 + 0x50) + 0x48) = *(undefined8 *)(pEVar2 + 0x48);
              }
              if (*(long *)(pEVar2 + 0x48) != 0) {
                *(undefined8 *)(*(long *)(pEVar2 + 0x48) + 0x50) = *(undefined8 *)(pEVar2 + 0x50);
              }
              memdelete_allocator<List<ThemeDB::ThemeItemBind,DefaultAllocator>::Element,DefaultAllocator>
                        (pEVar2);
              *(int *)(plVar45 + 2) = (int)plVar45[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
          } while ((int)local_328[2] != 0);
          Memory::free_static(local_328,false);
        }
LAB_00118358:
        plVar45 = local_360;
        if ((local_360 != (long *)0x0) && (plVar46 = (long *)*local_360, plVar46 != (long *)0x0)) {
          if (local_360 == (long *)plVar46[3]) {
            lVar49 = plVar46[1];
            lVar61 = plVar46[2];
            *local_360 = lVar49;
            if (plVar46 == (long *)local_360[1]) {
              local_360[1] = lVar61;
            }
            if (lVar61 != 0) {
              *(long *)(lVar61 + 8) = lVar49;
              lVar49 = plVar46[1];
            }
            if (lVar49 != 0) {
              *(long *)(lVar49 + 0x10) = lVar61;
            }
            if ((StringName::configured != '\0') && (*plVar46 != 0)) {
              StringName::unref();
            }
            Memory::free_static(plVar46,false);
            *(int *)(plVar45 + 2) = (int)plVar45[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          if ((int)local_360[2] == 0) {
            Memory::free_static(local_360,false);
            local_360 = (long *)0x0;
          }
        }
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_330);
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_338);
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)local_3c8);
        plVar45 = plStack_2b0;
        if (plStack_2b0 != (long *)0x0) {
          piVar63 = (int *)CONCAT71(uStack_2a7,local_2a8);
          if ((iStack_28c != 0) &&
             (uVar33 = *(uint *)(hash_table_size_primes + (ulong)uStack_290 * 4), uVar33 != 0)) {
            piVar60 = piVar63;
            plVar46 = plStack_2b0;
            do {
              if (*piVar60 != 0) {
                pvVar3 = (void *)*plVar46;
                *piVar60 = 0;
                if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar3,false);
                *plVar46 = 0;
              }
              piVar60 = piVar60 + 1;
              plVar46 = plVar46 + 1;
            } while (piVar63 + uVar33 != piVar60);
          }
          Memory::free_static(plVar45,false);
          Memory::free_static(piVar63,false);
        }
        List<PropertyInfo,DefaultAllocator>::~List(local_3c0);
        List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_3e0)
        ;
        uVar41 = local_318._0_8_;
        if ((long *)local_318._0_8_ != (long *)0x0) {
          uVar37 = (ulong)local_2f8._4_4_;
          uVar22 = local_308._8_8_;
          if (local_2f8._4_4_ != 0) {
            if (*(uint *)(hash_table_size_primes + (local_2f8 & 0xffffffff) * 4) != 0) {
              memset((void *)local_308._8_8_,0,
                     (ulong)*(uint *)(hash_table_size_primes + (local_2f8 & 0xffffffff) * 4) * 4);
            }
            plVar45 = (long *)uVar41;
            do {
              if ((StringName::configured != '\0') && (*plVar45 != 0)) {
                StringName::unref();
              }
              plVar45 = plVar45 + 1;
            } while (plVar45 != (long *)(uVar41 + uVar37 * 8));
          }
          Memory::free_static((void *)uVar41,false);
          Memory::free_static((void *)local_308._0_8_,false);
          Memory::free_static((void *)local_318._8_8_,false);
          Memory::free_static((void *)uVar22,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_400);
    } while (local_360 != (long *)0x0);
  }
  else {
    ClassDB::get_extensions_class_list((List *)&local_360);
LAB_00115bce:
    if (local_360 != (long *)0x0) goto LAB_00115bd7;
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_360);
  uVar21 = _LC15;
  if ((param_2 & 1) == 0) {
    pplVar58 = &local_1b8;
    for (lVar49 = 0x23; lVar49 != 0; lVar49 = lVar49 + -1) {
      *pplVar58 = (long *)(ulong)(param_2 & 1);
      pplVar58 = pplVar58 + (ulong)bVar66 * -2 + 1;
    }
    this_00 = (HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
               *)(this + 8);
    local_108 = _LC15;
    local_238 = 0;
    uStack_234 = 0;
    String::parse_latin1((String *)&local_238,"Variant");
    pCVar34 = (ClassDoc *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[](this_00,(String *)&local_238);
    DocData::ClassDoc::operator=(pCVar34,(ClassDoc *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
    DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_1b8);
    local_1b8 = (long *)0x0;
    String::parse_latin1((String *)&local_1b8,"Variant");
    this_01 = (HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
               *)(this + 0x38);
    pSVar35 = (String *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[](this_00,(String *)&local_1b8);
    String::parse_latin1(pSVar35,"Variant");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    local_238 = 0;
    uStack_234 = 0;
    String::parse_latin1((String *)&local_238,"");
    pRVar36 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
              HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
              ::operator[](this_01,(String *)&local_238);
    local_1b8 = (long *)0x0;
    String::parse_latin1((String *)&local_1b8,"Variant");
    RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::insert(pRVar36,(String *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
    local_408 = 0;
    do {
      uVar37 = 0x1000001L >> ((byte)local_408 & 0x3f);
      if ((uVar37 & 1) == 0) {
        Variant::get_type_name((String *)&local_338,local_408);
        pplVar58 = &local_1b8;
        for (lVar49 = 0x23; lVar49 != 0; lVar49 = lVar49 + -1) {
          *pplVar58 = (long *)(ulong)((uint)uVar37 & 1);
          pplVar58 = pplVar58 + (ulong)bVar66 * -2 + 1;
        }
        local_108 = uVar21;
        pCVar34 = (ClassDoc *)
                  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                  ::operator[](this_00,(String *)&local_338);
        DocData::ClassDoc::operator=(pCVar34,(ClassDoc *)&local_1b8);
        DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_1b8);
        pCVar38 = (CowData<char32_t> *)
                  HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                  ::operator[](this_00,(String *)&local_338);
        if (*(undefined8 **)pCVar38 != local_338) {
          CowData<char32_t>::_ref(pCVar38,(CowData *)&local_338);
        }
        local_1b8 = (long *)0x0;
        String::parse_latin1((String *)&local_1b8,"");
        pRVar36 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                  HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                  ::operator[](this_01,(String *)&local_1b8);
        RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::insert(pRVar36,(String *)&local_338)
        ;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        local_90 = (undefined1  [16])0x0;
        local_318._0_12_ = ZEXT412(0);
        local_98 = 0;
        Variant::construct(local_408,(List *)&local_98,0);
        local_330 = (long *)0x0;
        Variant::get_method_list((List *)&local_98);
        Variant::get_constructor_list(local_408,(List<MethodInfo,DefaultAllocator> *)&local_330);
        bVar65 = (0x200010UL >> (local_408 & 0x3f) & 1) != 0;
        uVar33 = 0;
        do {
          uVar51 = (uint)(uVar33 < 2);
          do {
            iVar50 = Variant::get_operator_return_type(uVar33,local_408,uVar51);
            if ((iVar50 != 0) && (uVar33 != 0xc || !bVar65)) {
              local_1b8 = (long *)0x0;
              lStack_1a8 = 0;
              local_1a0 = 0;
              uStack_19c = 0;
              local_1b0 = 0;
              uStack_1ac = 0;
              local_198 = (long *)0x0;
              local_190 = 0;
              local_188 = 6;
              local_180 = 1;
              local_178 = 0;
              local_168 = 0;
              local_160 = 0;
              local_150 = 0;
              Variant::get_operator_name((CowData<char32_t> *)&local_2b8,uVar33);
              operator+((char *)&local_238,(String *)"operator ");
              if (local_1b8 != (long *)CONCAT44(uStack_234,local_238)) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                local_1b8 = (long *)CONCAT44(uStack_234,local_238);
                local_238 = 0;
                uStack_234 = 0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
              local_1b0 = iVar50;
              if (uVar51 != 0) {
                local_238 = 0;
                uStack_234 = 0;
                local_2b8 = (long *)0x11c162;
                plStack_230 = (long *)0x0;
                local_228 = (String)0x0;
                uStack_227 = 0;
                SStack_220 = (String)0x0;
                uStack_21f = 0;
                CStack_218 = (CowData<char32_t>)0x0;
                uStack_217 = 0;
                uStack_210 = 6;
                plStack_2b0 = (long *)0x5;
                String::parse_latin1((StrRange *)&plStack_230);
                local_238 = uVar51;
                List<PropertyInfo,DefaultAllocator>::push_back
                          ((List<PropertyInfo,DefaultAllocator> *)&local_178,
                           (PropertyInfo *)&local_238);
                CowData<char32_t>::_unref(&CStack_218);
                if ((StringName::configured != '\0') && (CONCAT71(uStack_227,local_228) != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&plStack_230);
              }
              List<MethodInfo,DefaultAllocator>::push_back
                        ((List<MethodInfo,DefaultAllocator> *)&local_330,(MethodInfo *)&local_1b8);
              lVar49 = local_150;
              if (local_150 != 0) {
                LOCK();
                plVar45 = (long *)(local_150 + -0x10);
                *plVar45 = *plVar45 + -1;
                UNLOCK();
                if (*plVar45 == 0) {
                  local_150 = 0;
                  Memory::free_static((void *)(lVar49 + -0x10),false);
                }
              }
              CowData<Variant>::_unref((CowData<Variant> *)&local_168);
              List<PropertyInfo,DefaultAllocator>::~List
                        ((List<PropertyInfo,DefaultAllocator> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
              if ((StringName::configured != '\0') && (CONCAT44(uStack_19c,local_1a0) != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_1a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            }
            uVar51 = uVar51 + 1;
          } while (uVar51 != 0x27);
          uVar33 = uVar33 + 1;
        } while (uVar33 != 0x14);
        if (bVar65) {
          local_1b8 = (long *)0x0;
          lStack_1a8 = 0;
          local_1a0 = 0;
          uStack_19c = 0;
          local_1b0 = 0;
          uStack_1ac = 0;
          local_198 = (long *)0x0;
          local_190 = 0;
          local_188 = 6;
          local_180 = 1;
          local_178 = 0;
          local_168 = 0;
          local_160 = 0;
          local_150 = 0;
          String::parse_latin1((String *)&local_1b8,"operator %");
          plStack_230 = (long *)0x0;
          local_228 = (String)0x0;
          uStack_227 = 0;
          local_1b0 = 4;
          local_238 = 0;
          uStack_234 = 0;
          SStack_220 = (String)0x0;
          uStack_21f = 0;
          CStack_218 = (CowData<char32_t>)0x0;
          uStack_217 = 0;
          uStack_210 = 6;
          String::parse_latin1((String *)&plStack_230,"right");
          local_238 = 0;
          uStack_210 = 0x20000;
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)&local_178,(PropertyInfo *)&local_238);
          List<MethodInfo,DefaultAllocator>::push_back
                    ((List<MethodInfo,DefaultAllocator> *)&local_330,(MethodInfo *)&local_1b8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_238);
          MethodInfo::~MethodInfo((MethodInfo *)&local_1b8);
        }
        cVar25 = Variant::is_keyed(local_408);
        if (cVar25 == '\0') {
          cVar25 = Variant::has_indexing(local_408);
          if (cVar25 != '\0') {
            local_1b8 = (long *)0x0;
            lStack_1a8 = 0;
            local_1a0 = 0;
            uStack_19c = 0;
            local_1b0 = 0;
            uStack_1ac = 0;
            local_198 = (long *)0x0;
            local_190 = 0;
            local_188 = 6;
            local_180 = 1;
            local_178 = 0;
            local_168 = 0;
            local_160 = 0;
            local_150 = 0;
            String::parse_latin1((String *)&local_1b8,"operator []");
            local_1b0 = Variant::get_indexed_element_type(local_408);
            uVar31 = Variant::get_indexed_element_usage(local_408);
            local_188 = CONCAT44(local_188._4_4_,uVar31);
            local_238 = 0;
            uStack_234 = 0;
            SStack_220 = (String)0x0;
            uStack_21f = 0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            uStack_210 = 6;
            plStack_230 = (long *)0x0;
            local_228 = (String)0x0;
            uStack_227 = 0;
            String::parse_latin1((String *)&plStack_230,"index");
            local_238 = 2;
            goto LAB_001175f8;
          }
        }
        else {
          local_1b8 = (long *)0x0;
          lStack_1a8 = 0;
          local_1a0 = 0;
          uStack_19c = 0;
          local_1b0 = 0;
          uStack_1ac = 0;
          local_198 = (long *)0x0;
          local_190 = 0;
          local_188 = 6;
          local_180 = 1;
          local_178 = 0;
          local_168 = 0;
          local_160 = 0;
          local_150 = 0;
          String::parse_latin1((String *)&local_1b8,"operator []");
          local_1b0 = 0;
          local_188 = CONCAT44(local_188._4_4_,0x20000);
          local_238 = 0;
          uStack_234 = 0;
          SStack_220 = (String)0x0;
          uStack_21f = 0;
          CStack_218 = (CowData<char32_t>)0x0;
          uStack_217 = 0;
          uStack_210 = 6;
          plStack_230 = (long *)0x0;
          local_228 = (String)0x0;
          uStack_227 = 0;
          String::parse_latin1((String *)&plStack_230,"key");
          local_238 = 0;
          uStack_210 = 0x20000;
LAB_001175f8:
          List<PropertyInfo,DefaultAllocator>::push_back
                    ((List<PropertyInfo,DefaultAllocator> *)&local_178,(PropertyInfo *)&local_238);
          List<MethodInfo,DefaultAllocator>::push_back
                    ((List<MethodInfo,DefaultAllocator> *)&local_330,(MethodInfo *)&local_1b8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_238);
          MethodInfo::~MethodInfo((MethodInfo *)&local_1b8);
        }
        if ((local_330 != (long *)0x0) &&
           (pCVar62 = (CowData *)*local_330, pCVar62 != (CowData *)0x0)) {
          do {
            local_228 = (String)0x0;
            uStack_227 = 0;
            CStack_200 = (CowData<char32_t>)0x0;
            uStack_1ff = 0;
            local_1f0 = (long *)0x0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            uStack_210 = 0;
            uStack_20c = 0;
            local_1d0 = (undefined1  [16])0x0;
            SStack_220 = (String)0x0;
            local_208 = (CowData<char32_t>)0x0;
            local_1f8 = (CowData<char32_t>)0x0;
            local_1e8._8_8_ = 0;
            if (*(long *)pCVar62 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,pCVar62);
            }
            if ((*(undefined8 **)(pCVar62 + 0x40) != (undefined8 *)0x0) &&
               (puVar42 = (undefined4 *)**(undefined8 **)(pCVar62 + 0x40),
               puVar42 != (undefined4 *)0x0)) {
              iVar50 = 0;
              do {
                local_1b0 = 0;
                uStack_1ac = 0;
                local_1b8 = (long *)CONCAT44(local_1b8._4_4_,*puVar42);
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b0,(CowData *)(puVar42 + 2));
                StringName::StringName((StringName *)&lStack_1a8,(StringName *)(puVar42 + 4));
                local_1a0 = puVar42[6];
                local_198 = (long *)0x0;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)(puVar42 + 8));
                local_2d8 = 0;
                local_190 = CONCAT44(local_190._4_4_,puVar42[10]);
                local_2d0 = (CowData<char32_t>)0x0;
                local_2c8[0] = (long *)0x0;
                local_2e8 = (undefined1  [16])0x0;
                DocData::argument_doc_from_arginfo
                          ((ArgumentDoc *)local_2e8,(PropertyInfo *)&local_1b8);
                if (local_2e8._0_8_ != CONCAT44(uStack_1ac,local_1b0)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_2e8,(CowData *)&local_1b0);
                }
                lVar61 = *(long *)(pCVar62 + 0x40);
                if (*(long *)(pCVar62 + 0x50) == 0) {
                  if (lVar61 == 0) goto LAB_00118784;
                  lVar49 = 0;
                  iVar30 = 0;
LAB_00116cd6:
                  iVar48 = *(int *)(lVar61 + 0x10);
                }
                else {
                  lVar49 = *(long *)(*(long *)(pCVar62 + 0x50) + -8);
                  iVar48 = 0;
                  iVar30 = (int)lVar49;
                  if (lVar61 != 0) goto LAB_00116cd6;
                }
                uVar33 = (iVar30 + iVar50) - iVar48;
                if (-1 < (int)uVar33) {
                  uVar37 = (ulong)uVar33;
                  if (lVar49 <= (long)uVar37) goto LAB_001187a5;
                  DocData::get_default_value_string((Variant *)&local_2b8);
                  if (local_2c8[0] != local_2b8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_2c8);
                    local_2c8[0] = local_2b8;
                    local_2b8 = (long *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
                }
                local_2b8 = (long *)0x0;
                if (local_2e8._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,(CowData *)local_2e8);
                }
                plStack_2b0 = (long *)0x0;
                if (local_2e8._8_8_ != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&plStack_2b0,(CowData *)(local_2e8 + 8));
                }
                local_3d8 = (CowData<char32_t> *)&plStack_2b0;
                local_3e8 = (CowData<char32_t> *)(local_2e8 + 8);
                local_2a8 = (CowData<char32_t>)0x0;
                uStack_2a7 = 0;
                if (local_2d8 != 0) {
                  CowData<char32_t>::_ref(&local_2a8,(CowData *)&local_2d8);
                }
                local_3d0 = &local_2a8;
                local_3e0 = (CowData<char32_t> *)&local_2d8;
                lStack_298 = 0;
                local_2a0 = local_2d0;
                if (local_2c8[0] != (long *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_298,(CowData *)local_2c8);
                }
                iVar50 = iVar50 + 1;
                Vector<DocData::ArgumentDoc>::push_back
                          ((Vector<DocData::ArgumentDoc> *)local_1e8,(CowData<char32_t> *)&local_2b8
                          );
                CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_298);
                CowData<char32_t>::_unref(local_3d0);
                CowData<char32_t>::_unref(local_3d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_2c8);
                CowData<char32_t>::_unref(local_3e0);
                CowData<char32_t>::_unref(local_3e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_2e8);
                PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
                puVar42 = *(undefined4 **)(puVar42 + 0xc);
              } while (puVar42 != (undefined4 *)0x0);
            }
            DocData::return_doc_from_retinfo((MethodDoc *)&local_238,(PropertyInfo *)(pCVar62 + 8));
            uVar33 = *(uint *)(pCVar62 + 0x38);
            if ((uVar33 & 0x10) != 0) {
              if ((CONCAT71(uStack_217,CStack_218) != 0) &&
                 (1 < *(uint *)(CONCAT71(uStack_217,CStack_218) + -8))) {
                String::operator+=((String *)&CStack_218," ");
              }
              String::operator+=((String *)&CStack_218,"vararg");
              uVar33 = *(uint *)(pCVar62 + 0x38);
            }
            if ((uVar33 & 4) != 0) {
              if ((CONCAT71(uStack_217,CStack_218) != 0) &&
                 (1 < *(uint *)(CONCAT71(uStack_217,CStack_218) + -8))) {
                String::operator+=((String *)&CStack_218," ");
              }
              String::operator+=((String *)&CStack_218,"const");
              uVar33 = *(uint *)(pCVar62 + 0x38);
            }
            if ((uVar33 & 0x20) != 0) {
              if ((CONCAT71(uStack_217,CStack_218) != 0) &&
                 (1 < *(uint *)(CONCAT71(uStack_217,CStack_218) + -8))) {
                String::operator+=((String *)&CStack_218," ");
              }
              String::operator+=((String *)&CStack_218,"static");
            }
            cVar25 = String::operator==((String *)&local_238,(String *)&local_338);
            if (cVar25 == '\0') {
              cVar25 = String::begins_with((char *)&local_238);
              if (cVar25 == '\0') {
                DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
                Vector<DocData::MethodDoc>::push_back
                          ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48),(ClassDoc *)&local_1b8);
                DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
              }
              else {
                DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
                Vector<DocData::MethodDoc>::push_back
                          ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x58),(ClassDoc *)&local_1b8);
                DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
              }
            }
            else {
              DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
              Vector<DocData::MethodDoc>::push_back
                        ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x38),(ClassDoc *)&local_1b8);
              DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
            }
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
            pCVar62 = *(CowData **)(pCVar62 + 0x70);
          } while (pCVar62 != (CowData *)0x0);
        }
        if ((*(long *)(pCVar38 + 0x40) != 0) &&
           (lVar49 = *(long *)(*(long *)(pCVar38 + 0x40) + -8), lVar49 != 0)) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(pCVar38 + 0x40));
          pMVar4 = *(MethodDoc **)(pCVar38 + 0x40);
          if (lVar49 == 1) {
            SortArray<DocData::MethodDoc,ConstructorCompare,true>::introsort(0,1,pMVar4,0);
          }
          else {
            lVar43 = 0;
            lVar61 = lVar49;
            do {
              lVar61 = lVar61 >> 1;
              lVar43 = lVar43 + 1;
            } while (lVar61 != 1);
            SortArray<DocData::MethodDoc,ConstructorCompare,true>::introsort
                      (0,lVar49,pMVar4,lVar43 * 2);
            lVar61 = 1;
            lVar43 = 1;
            if (lVar49 < 0x11) {
              do {
                lVar43 = lVar61 + 1;
                SortArray<DocData::MethodDoc,ConstructorCompare,true>::linear_insert
                          (0,lVar61,pMVar4);
                lVar61 = lVar43;
              } while (lVar49 != lVar43);
            }
            else {
              do {
                lVar61 = lVar43 + 1;
                SortArray<DocData::MethodDoc,ConstructorCompare,true>::linear_insert
                          (0,lVar43,pMVar4);
                lVar43 = lVar61;
              } while (lVar61 != 0x10);
              lVar61 = 0x10;
              pMVar64 = pMVar4 + 0x780;
              do {
                DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,pMVar64);
                SortArray<DocData::MethodDoc,ConstructorCompare,true>::unguarded_linear_insert
                          (lVar61,(ClassDoc *)&local_1b8,pMVar4);
                lVar61 = lVar61 + 1;
                DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
                pMVar64 = pMVar64 + 0x78;
              } while (lVar49 != lVar61);
            }
          }
        }
        if ((*(long *)(pCVar38 + 0x60) != 0) &&
           (lVar49 = *(long *)(*(long *)(pCVar38 + 0x60) + -8), lVar49 != 0)) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(pCVar38 + 0x60));
          pMVar4 = *(MethodDoc **)(pCVar38 + 0x60);
          if (lVar49 == 1) {
            SortArray<DocData::MethodDoc,OperatorCompare,true>::introsort(0,1,pMVar4,0);
          }
          else {
            lVar43 = 0;
            lVar61 = lVar49;
            do {
              lVar61 = lVar61 >> 1;
              lVar43 = lVar43 + 1;
            } while (lVar61 != 1);
            SortArray<DocData::MethodDoc,OperatorCompare,true>::introsort
                      (0,lVar49,pMVar4,lVar43 * 2);
            lVar61 = 1;
            lVar43 = 1;
            if (lVar49 < 0x11) {
              do {
                lVar43 = lVar61 + 1;
                SortArray<DocData::MethodDoc,OperatorCompare,true>::linear_insert(0,lVar61,pMVar4);
                lVar61 = lVar43;
              } while (lVar49 != lVar43);
            }
            else {
              do {
                lVar61 = lVar43 + 1;
                SortArray<DocData::MethodDoc,OperatorCompare,true>::linear_insert(0,lVar43,pMVar4);
                lVar43 = lVar61;
              } while (lVar61 != 0x10);
              lVar61 = 0x10;
              pMVar64 = pMVar4 + 0x780;
              do {
                DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,pMVar64);
                SortArray<DocData::MethodDoc,OperatorCompare,true>::unguarded_linear_insert
                          (lVar61,(ClassDoc *)&local_1b8,pMVar4);
                lVar61 = lVar61 + 1;
                DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
                pMVar64 = pMVar64 + 0x78;
              } while (lVar49 != lVar61);
            }
          }
        }
        Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>
                  ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48));
        local_328 = (long *)0x0;
        Variant::get_property_list((List *)&local_98);
        if ((local_328 != (long *)0x0) &&
           (puVar42 = (undefined4 *)*local_328, puVar42 != (undefined4 *)0x0)) {
          do {
            local_228 = (String)0x0;
            uStack_227 = 0;
            local_1f0 = (long *)0x0;
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            uStack_210 = 0;
            uStack_20c = 0;
            local_208 = (CowData<char32_t>)0x0;
            uStack_207 = 0;
            CStack_200 = (CowData<char32_t>)0x0;
            uStack_1ff = 0;
            local_1d0 = (undefined1  [16])0x0;
            SStack_220 = (String)0x0;
            local_1f8 = (CowData<char32_t>)0x0;
            local_1e8 = ZEXT716(local_1e8._1_7_) << 8;
            local_1d8[0] = (Vector<int>)0x0;
            plVar45 = *(long **)(puVar42 + 2);
            if (*(long **)(puVar42 + 2) != (long *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_238,(CowData *)(puVar42 + 2));
              plVar45 = plStack_230;
            }
            Variant::get_type_name((ClassDoc *)&local_1b8,*puVar42);
            if (plVar45 != local_1b8) {
              CowData<char32_t>::operator=((CowData<char32_t> *)&plStack_230,(CowData *)&local_1b8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            Variant::Variant((Variant *)&local_78,(String *)(puVar42 + 2));
            Variant::get((Variant *)local_58,(bool *)&local_98,(VariantGetError *)&local_78);
            DocData::get_default_value_string((Variant *)&local_1b8);
            if ((long *)CONCAT71(uStack_1ff,CStack_200) != local_1b8) {
              CowData<char32_t>::operator=(&CStack_200,(CowData *)&local_1b8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_1b8,(PropertyDoc *)&local_238);
            Vector<DocData::PropertyDoc>::push_back
                      ((Vector<DocData::PropertyDoc> *)(pCVar38 + 0xb8),(ClassDoc *)&local_1b8);
            DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_1b8);
            DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_238);
            puVar42 = *(undefined4 **)(puVar42 + 0xc);
          } while (puVar42 != (undefined4 *)0x0);
        }
        Vector<DocData::PropertyDoc>::sort_custom<_DefaultComparator<DocData::PropertyDoc>,true>
                  ((Vector<DocData::PropertyDoc> *)(pCVar38 + 0xb8));
        local_320 = (Object *)0x0;
        Variant::get_enums_for_type(local_408,(List<StringName,DefaultAllocator> *)&local_320);
        if ((local_320 != (Object *)0x0) && (plVar45 = *(long **)local_320, plVar45 != (long *)0x0))
        {
          do {
            local_2b8 = (long *)0x0;
            Variant::get_enumerations_for_enum
                      (local_408,plVar45,(List<StringName,DefaultAllocator> *)&local_2b8);
            if ((local_2b8 != (long *)0x0) && (plVar46 = (long *)*local_2b8, plVar46 != (long *)0x0)
               ) {
              do {
                lVar49 = *plVar46;
                local_228 = (String)0x0;
                uStack_210 = uStack_210 & 0xffffff00;
                local_208 = (CowData<char32_t>)0x0;
                uStack_207 = 0;
                CStack_200 = (CowData<char32_t>)0x0;
                local_1f8 = (CowData<char32_t>)0x0;
                uStack_1f7 = 0;
                local_1f0 = (long *)((ulong)local_1f0 & 0xffffffffffffff00);
                local_238 = 0;
                uStack_234 = 0;
                plStack_230 = (long *)0x0;
                SStack_220 = (String)0x0;
                uStack_21f = 0;
                CStack_218 = (CowData<char32_t>)0x0;
                uStack_217 = 0;
                local_1e8 = (undefined1  [16])0x0;
                if (lVar49 == 0) {
LAB_00119bac:
                  local_1b8 = (long *)0x0;
                }
                else {
                  local_1b8 = (long *)0x0;
                  if (*(char **)(lVar49 + 8) == (char *)0x0) {
                    if (*(long *)(lVar49 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
                      goto LAB_00119b82;
                    }
                  }
                  else {
                    String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
LAB_00119b82:
                    if ((long *)CONCAT44(uStack_234,local_238) != local_1b8) {
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
                      local_238 = (uint)local_1b8;
                      uStack_234 = (undefined4)((ulong)local_1b8 >> 0x20);
                      goto LAB_00119bac;
                    }
                  }
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                Variant::get_enum_value(local_408,plVar45,plVar46,0);
                itos((long)&local_1b8);
                if (plStack_230 != local_1b8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&plStack_230);
                  plStack_230 = local_1b8;
                  local_1b8 = (long *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                local_228 = (String)0x1;
                String::parse_latin1(&SStack_220,"int");
                lVar49 = *plVar45;
                if (lVar49 == 0) {
LAB_00119c4e:
                  local_1b8 = (long *)0x0;
                }
                else {
                  local_1b8 = (long *)0x0;
                  if (*(char **)(lVar49 + 8) == (char *)0x0) {
                    if (*(long *)(lVar49 + 0x10) == 0) goto LAB_00119c4e;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
                  }
                  else {
                    String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
                  }
                }
                if ((long *)CONCAT71(uStack_217,CStack_218) != local_1b8) {
                  CowData<char32_t>::_unref(&CStack_218);
                  plVar23 = local_1b8;
                  local_1b8 = (long *)0x0;
                  CStack_218 = SUB81(plVar23,0);
                  uStack_217 = (undefined7)((ulong)plVar23 >> 8);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
                DocData::ConstantDoc::ConstantDoc
                          ((ConstantDoc *)&local_1b8,(ConstantDoc *)&local_238);
                Vector<DocData::ConstantDoc>::push_back
                          ((Vector<DocData::ConstantDoc> *)(pCVar38 + 0x78),(ClassDoc *)&local_1b8);
                DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_1b8);
                DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_238);
                plVar46 = (long *)plVar46[1];
              } while (plVar46 != (long *)0x0);
            }
            List<StringName,DefaultAllocator>::~List
                      ((List<StringName,DefaultAllocator> *)&local_2b8);
            plVar45 = (long *)plVar45[1];
          } while (plVar45 != (long *)0x0);
        }
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_2e8._8_8_;
        local_2e8 = auVar20 << 0x40;
        Variant::get_constants_for_type(local_408,(List<StringName,DefaultAllocator> *)local_2e8);
        if (((long *)local_2e8._0_8_ != (long *)0x0) &&
           (plVar45 = *(long **)local_2e8._0_8_, plVar45 != (long *)0x0)) {
          do {
            lVar49 = *plVar45;
            local_228 = (String)0x0;
            uStack_210 = uStack_210 & 0xffffff00;
            local_208 = (CowData<char32_t>)0x0;
            uStack_207 = 0;
            CStack_200 = (CowData<char32_t>)0x0;
            local_1f8 = (CowData<char32_t>)0x0;
            uStack_1f7 = 0;
            local_1f0 = (long *)((ulong)local_1f0 & 0xffffffffffffff00);
            local_238 = 0;
            uStack_234 = 0;
            plStack_230 = (long *)0x0;
            SStack_220 = (String)0x0;
            uStack_21f = 0;
            CStack_218 = (CowData<char32_t>)0x0;
            uStack_217 = 0;
            local_1e8 = (undefined1  [16])0x0;
            if (lVar49 == 0) {
              local_1b8 = (long *)0x0;
LAB_0011b4ba:
              plVar46 = (long *)0x0;
            }
            else {
              local_1b8 = (long *)0x0;
              if (*(char **)(lVar49 + 8) == (char *)0x0) {
                if (*(long *)(lVar49 + 0x10) == 0) goto LAB_0011b4ba;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
              }
              if (local_1b8 == (long *)0x0) goto LAB_0011b4ba;
              CowData<char32_t>::operator=((CowData<char32_t> *)&local_238,(CowData *)&local_1b8);
              plVar46 = plStack_230;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            Variant::get_constant_value((Variant *)local_58,local_408,plVar45,0);
            if (local_58[0] == 2) {
              Variant::operator_cast_to_long((Variant *)local_58);
              itos((long)&local_1b8);
              if (plVar46 != local_1b8) {
                CowData<char32_t>::operator=
                          ((CowData<char32_t> *)&plStack_230,(CowData *)&local_1b8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            }
            else {
              Variant::get_construct_string();
              String::replace((char *)&local_1b8,(char *)&local_2b8);
              if (plVar46 != local_1b8) {
                CowData<char32_t>::operator=
                          ((CowData<char32_t> *)&plStack_230,(CowData *)&local_1b8);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
            }
            local_228 = (String)0x1;
            Variant::get_type_name((ClassDoc *)&local_1b8,local_58[0]);
            if ((long *)CONCAT71(uStack_21f,SStack_220) != local_1b8) {
              CowData<char32_t>::operator=((CowData<char32_t> *)&SStack_220,(CowData *)&local_1b8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_1b8,(ConstantDoc *)&local_238);
            Vector<DocData::ConstantDoc>::push_back
                      ((Vector<DocData::ConstantDoc> *)(pCVar38 + 0x78),(ClassDoc *)&local_1b8);
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_1b8);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_238);
            plVar45 = (long *)plVar45[1];
          } while (plVar45 != (long *)0x0);
        }
        List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)local_2e8);
        List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_320);
        List<PropertyInfo,DefaultAllocator>::~List
                  ((List<PropertyInfo,DefaultAllocator> *)&local_328);
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_330);
        if (Variant::needs_deinit[(int)local_98] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
      }
      uVar33 = (int)local_408 + 1;
      local_408 = (ulong)uVar33;
    } while (uVar33 != 0x27);
    local_328 = (long *)0x0;
    String::parse_latin1((String *)&local_328,"@GlobalScope");
    pplVar58 = &local_1b8;
    for (lVar49 = 0x23; lVar49 != 0; lVar49 = lVar49 + -1) {
      *pplVar58 = (long *)0x0;
      pplVar58 = pplVar58 + (ulong)bVar66 * -2 + 1;
    }
    DocData::ClassDoc::ClassDoc((ClassDoc *)&local_1b8);
    pCVar34 = (ClassDoc *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[](this_00,(String *)&local_328);
    DocData::ClassDoc::operator=(pCVar34,(ClassDoc *)&local_1b8);
    DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_1b8);
    pCVar38 = (CowData<char32_t> *)
              HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              ::operator[](this_00,(String *)&local_328);
    if (*(long **)pCVar38 != local_328) {
      CowData<char32_t>::_ref(pCVar38,(CowData *)&local_328);
    }
    local_1b8 = (long *)0x0;
    String::parse_latin1((String *)&local_1b8,"");
    pRVar36 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
              HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
              ::operator[](this_01,(String *)&local_1b8);
    RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::insert(pRVar36,(String *)&local_328);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    for (iVar50 = 0; iVar30 = CoreConstants::get_global_constant_count(), iVar50 < iVar30;
        iVar50 = iVar50 + 1) {
      local_228 = (String)0x0;
      local_238 = 0;
      uStack_234 = 0;
      plStack_230 = (long *)0x0;
      SStack_220 = (String)0x0;
      uStack_21f = 0;
      CStack_218 = (CowData<char32_t>)0x0;
      uStack_217 = 0;
      local_1e8 = (undefined1  [16])0x0;
      uStack_210 = uStack_210 & 0xffffff00;
      local_208 = (CowData<char32_t>)0x0;
      uStack_207 = 0;
      CStack_200 = (CowData<char32_t>)0x0;
      local_1f8 = (CowData<char32_t>)0x0;
      uStack_1f7 = 0;
      local_1f0 = (long *)((ulong)local_1f0 & 0xffffffffffffff00);
      pcVar39 = (char *)CoreConstants::get_global_constant_name(iVar50);
      String::parse_latin1((String *)&local_238,pcVar39);
      String::parse_latin1(&SStack_220,"int");
      CoreConstants::get_global_constant_enum((int)&local_2b8);
      if (local_2b8 == (long *)0x0) {
LAB_00119f81:
        local_1b8 = (long *)0x0;
      }
      else {
        local_1b8 = (long *)0x0;
        if ((char *)local_2b8[1] == (char *)0x0) {
          if (local_2b8[2] == 0) goto LAB_00119f81;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(local_2b8 + 2));
        }
        else {
          String::parse_latin1((String *)&local_1b8,(char *)local_2b8[1]);
        }
      }
      if ((long *)CONCAT71(uStack_217,CStack_218) != local_1b8) {
        CowData<char32_t>::operator=(&CStack_218,(CowData *)&local_1b8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
      if ((StringName::configured != '\0') && (local_2b8 != (long *)0x0)) {
        StringName::unref();
      }
      uVar27 = CoreConstants::is_global_constant_bitfield(iVar50);
      uStack_210 = CONCAT31(uStack_210._1_3_,uVar27);
      cVar25 = CoreConstants::get_ignore_value_in_docs(iVar50);
      SVar28 = (String)0x0;
      if (cVar25 == '\0') {
        CoreConstants::get_global_constant_value(iVar50);
        itos((long)&local_1b8);
        if (plStack_230 != local_1b8) {
          CowData<char32_t>::operator=((CowData<char32_t> *)&plStack_230,(CowData *)&local_1b8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        SVar28 = (String)0x1;
      }
      local_228 = SVar28;
      DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_1b8,(ConstantDoc *)&local_238);
      Vector<DocData::ConstantDoc>::push_back
                ((Vector<DocData::ConstantDoc> *)(pCVar38 + 0x78),(ClassDoc *)&local_1b8);
      DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_1b8);
      DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_238);
    }
    local_320 = (Object *)0x0;
    pLVar44 = (List *)Engine::get_singleton();
    Engine::get_singletons(pLVar44);
    if ((local_320 != (Object *)0x0) &&
       (local_400 = *(String **)local_320, local_400 != (String *)0x0)) {
      do {
        local_228 = (String)0x0;
        uStack_227 = 0;
        SStack_220 = (String)0x0;
        local_1f8 = (CowData<char32_t>)0x0;
        local_1f0 = (long *)0x0;
        local_1e8._0_8_ = local_1e8._1_8_ << 8;
        local_1e8._8_8_ = 0;
        local_1d8[0] = (Vector<int>)0x0;
        local_238 = 0;
        uStack_234 = 0;
        plStack_230 = (long *)0x0;
        CStack_218 = (CowData<char32_t>)0x0;
        uStack_217 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        local_208 = (CowData<char32_t>)0x0;
        uStack_207 = 0;
        CStack_200 = (CowData<char32_t>)0x0;
        uStack_1ff = 0;
        local_1d0 = (undefined1  [16])0x0;
        if (*(long *)((long)local_400 + 8) == 0) {
          DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_238);
        }
        else {
          lVar49 = *(long *)local_400;
          if (lVar49 == 0) {
            local_1b8 = (long *)0x0;
          }
          else {
            local_1b8 = (long *)0x0;
            if (*(char **)(lVar49 + 8) == (char *)0x0) {
              if (*(long *)(lVar49 + 0x10) == 0) goto LAB_0011a287;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
            }
            if ((long *)CONCAT44(uStack_234,local_238) != local_1b8) {
              CowData<char32_t>::operator=((CowData<char32_t> *)&local_238,(CowData *)&local_1b8);
            }
          }
LAB_0011a287:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          (**(code **)(**(long **)((long)local_400 + 8) + 0x48))((ClassDoc *)&local_1b8);
          if (plStack_230 != local_1b8) {
            CowData<char32_t>::operator=((CowData<char32_t> *)&plStack_230,(CowData *)&local_1b8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          while( true ) {
            StringName::StringName((StringName *)local_2e8,(String *)&plStack_230,false);
            ClassDB::get_parent_class((StringName *)&local_2b8);
            if (local_2b8 == (long *)0x0) {
              local_1b8 = (long *)0x0;
            }
            else {
              local_1b8 = (long *)0x0;
              if ((char *)local_2b8[1] == (char *)0x0) {
                if (local_2b8[2] != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_1b8,(CowData *)(local_2b8 + 2));
                }
              }
              else {
                String::parse_latin1((String *)&local_1b8,(char *)local_2b8[1]);
              }
            }
            cVar25 = String::operator!=((String *)&local_1b8,"Object");
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if ((StringName::configured != '\0') &&
               (((local_2b8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0'))
                && (local_2e8._0_8_ != 0)))) {
              StringName::unref();
            }
            if (cVar25 == '\0') break;
            StringName::StringName((StringName *)local_2e8,(String *)&plStack_230,false);
            ClassDB::get_parent_class((StringName *)&local_2b8);
            if (local_2b8 == (long *)0x0) {
LAB_0011a46c:
              local_1b8 = (long *)0x0;
            }
            else {
              local_1b8 = (long *)0x0;
              if ((char *)local_2b8[1] == (char *)0x0) {
                if (local_2b8[2] == 0) goto LAB_0011a46c;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(local_2b8 + 2));
              }
              else {
                String::parse_latin1((String *)&local_1b8,(char *)local_2b8[1]);
              }
            }
            if (plStack_230 != local_1b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&plStack_230);
              plStack_230 = local_1b8;
              local_1b8 = (long *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
            if (((StringName::configured != '\0') &&
                ((local_2b8 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0'))
                )) && (local_2e8._0_8_ != 0)) {
              StringName::unref();
            }
          }
          DocData::PropertyDoc::PropertyDoc((PropertyDoc *)&local_1b8,(PropertyDoc *)&local_238);
          Vector<DocData::PropertyDoc>::push_back
                    ((Vector<DocData::PropertyDoc> *)(pCVar38 + 0xb8),(ClassDoc *)&local_1b8);
          DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_1b8);
          DocData::PropertyDoc::~PropertyDoc((PropertyDoc *)&local_238);
        }
        local_400 = *(String **)((long)local_400 + 0x20);
      } while (local_400 != (String *)0x0);
    }
    Vector<DocData::PropertyDoc>::sort_custom<_DefaultComparator<DocData::PropertyDoc>,true>
              ((Vector<DocData::PropertyDoc> *)(pCVar38 + 0xb8));
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_318._8_8_;
    local_318 = auVar16 << 0x40;
    Variant::get_utility_function_list((List *)local_318);
    if (((long *)local_318._0_8_ != (long *)0x0) &&
       (pSVar57 = *(StringName **)local_318._0_8_, pSVar57 != (StringName *)0x0)) {
      do {
        SStack_220 = (String)0x0;
        local_1d0 = (undefined1  [16])0x0;
        lVar49 = *(long *)pSVar57;
        local_228 = (String)0x0;
        uStack_227 = 0;
        local_208 = (CowData<char32_t>)0x0;
        CStack_200 = (CowData<char32_t>)0x0;
        uStack_1ff = 0;
        local_1f8 = (CowData<char32_t>)0x0;
        local_1f0 = (long *)0x0;
        local_1e8._8_8_ = 0;
        local_238 = 0;
        uStack_234 = 0;
        plStack_230 = (long *)0x0;
        CStack_218 = (CowData<char32_t>)0x0;
        uStack_217 = 0;
        uStack_210 = 0;
        uStack_20c = 0;
        if (lVar49 == 0) {
          local_1b8 = (long *)0x0;
        }
        else {
          local_1b8 = (long *)0x0;
          if (*(char **)(lVar49 + 8) == (char *)0x0) {
            if (*(long *)(lVar49 + 0x10) == 0) goto LAB_0011a724;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)(lVar49 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_1b8,*(char **)(lVar49 + 8));
          }
          if ((long *)CONCAT44(uStack_234,local_238) != local_1b8) {
            CowData<char32_t>::operator=((CowData<char32_t> *)&local_238,(CowData *)&local_1b8);
          }
        }
LAB_0011a724:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        cVar25 = Variant::has_utility_function_return_value(pSVar57);
        if (cVar25 == '\0') {
          String::parse_latin1((String *)&plStack_230,"void");
          cVar25 = Variant::is_utility_function_vararg(pSVar57);
          if (cVar25 != '\0') goto LAB_0011a62b;
LAB_0011a75b:
          for (iVar50 = 0; iVar30 = Variant::get_utility_function_argument_count(pSVar57),
              iVar50 < iVar30; iVar50 = iVar50 + 1) {
            local_1b8 = (long *)0x0;
            local_1b0 = 0;
            uStack_1ac = 0;
            lStack_1a8 = 0;
            local_1a0 = 0;
            uStack_19c = 0;
            local_198 = (long *)0x0;
            local_190 = CONCAT44(local_190._4_4_,6);
            uVar31 = Variant::get_utility_function_argument_type(pSVar57,iVar50);
            local_1b8 = (long *)CONCAT44(local_1b8._4_4_,uVar31);
            Variant::get_utility_function_argument_name((StringName *)&local_2b8,(int)pSVar57);
            if ((long *)CONCAT44(uStack_1ac,local_1b0) != local_2b8) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b0);
              plVar45 = local_2b8;
              local_2b8 = (long *)0x0;
              local_1b0 = (int)plVar45;
              uStack_1ac = (undefined4)((ulong)plVar45 >> 0x20);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2b8);
            if ((int)local_1b8 == 0) {
              local_190 = CONCAT44(local_190._4_4_,0x20000);
            }
            local_2d8 = 0;
            local_2e8 = (undefined1  [16])0x0;
            local_2d0 = (CowData<char32_t>)0x0;
            local_2c8[0] = (long *)0x0;
            DocData::argument_doc_from_arginfo((ArgumentDoc *)local_2e8,(PropertyInfo *)&local_1b8);
            DocData::ArgumentDoc::ArgumentDoc((ArgumentDoc *)&local_2b8,(ArgumentDoc *)local_2e8);
            Vector<DocData::ArgumentDoc>::push_back
                      ((Vector<DocData::ArgumentDoc> *)local_1e8,(StringName *)&local_2b8);
            DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)&local_2b8);
            DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)local_2e8);
            PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
          }
        }
        else {
          local_1b8 = (long *)0x0;
          local_1a0 = 0;
          uStack_19c = 0;
          local_198 = (long *)0x0;
          local_190 = CONCAT44(local_190._4_4_,6);
          local_1b0 = 0;
          uStack_1ac = 0;
          lStack_1a8 = 0;
          iVar50 = Variant::get_utility_function_return_type(pSVar57);
          local_1b8 = (long *)CONCAT44(local_1b8._4_4_,iVar50);
          if (iVar50 == 0) {
            local_190 = CONCAT44(local_190._4_4_,0x20000);
          }
          local_2a8 = (CowData<char32_t>)0x0;
          uStack_2a7 = 0;
          local_2a0 = (CowData<char32_t>)0x0;
          lStack_298 = 0;
          local_2b8 = (long *)0x0;
          plStack_2b0 = (long *)0x0;
          DocData::argument_doc_from_arginfo((ArgumentDoc *)&local_2b8,(PropertyInfo *)&local_1b8);
          if (plStack_230 != plStack_2b0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&plStack_230,(CowData *)&plStack_2b0);
          }
          DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)&local_2b8);
          PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
          cVar25 = Variant::is_utility_function_vararg(pSVar57);
          if (cVar25 == '\0') goto LAB_0011a75b;
LAB_0011a62b:
          String::parse_latin1((String *)&CStack_218,"vararg");
        }
        DocData::MethodDoc::MethodDoc((MethodDoc *)&local_1b8,(MethodDoc *)&local_238);
        Vector<DocData::MethodDoc>::push_back
                  ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48),(ClassDoc *)&local_1b8);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_1b8);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
        pSVar57 = *(StringName **)(pSVar57 + 8);
      } while (pSVar57 != (StringName *)0x0);
    }
    Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>
              ((Vector<DocData::MethodDoc> *)(pCVar38 + 0x48));
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)local_318);
    List<Engine::Singleton,DefaultAllocator>::~List
              ((List<Engine::Singleton,DefaultAllocator> *)&local_320);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
    iVar30 = 0;
    if (0 < (int)ScriptServer::_language_count) {
      do {
        plVar45 = (long *)ScriptServer::get_language(iVar30);
        (**(code **)(*plVar45 + 0x150))((ClassDoc *)&local_1b8,plVar45);
        operator+((char *)&local_330,(String *)&_LC245);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        DocData::ClassDoc::ClassDoc((ClassDoc *)&local_1b8);
        if (local_1b8 != local_330) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1b8,(CowData *)&local_330);
        }
        local_238 = 0;
        uStack_234 = 0;
        String::parse_latin1((String *)&local_238,"");
        pRVar36 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                  HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                  ::operator[](this_01,(String *)&local_238);
        RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::insert(pRVar36,(String *)&local_330)
        ;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
        local_328 = (long *)0x0;
        (**(code **)(*plVar45 + 0x2d8))(plVar45,(String *)&local_328);
        if ((local_328 != (long *)0x0) &&
           (pCVar62 = (CowData *)*local_328, pCVar62 != (CowData *)0x0)) {
          do {
            local_2a8 = (CowData<char32_t>)0x0;
            uStack_2a7 = 0;
            local_280 = 0;
            local_270 = 0;
            local_2b8 = (long *)0x0;
            plStack_2b0 = (long *)0x0;
            lStack_298 = 0;
            uStack_290 = 0;
            iStack_28c = 0;
            local_250 = (undefined1  [16])0x0;
            local_2a0 = (CowData<char32_t>)0x0;
            local_288 = local_288 & 0xffffffffffffff00;
            local_278 = local_278 & 0xffffffffffffff00;
            local_268._8_8_ = 0;
            if (*(long *)pCVar62 == 0) {
              if (((byte)pCVar62[0x38] & 0x10) != 0) goto LAB_0011ab07;
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,pCVar62);
              if (((byte)pCVar62[0x38] & 0x10) != 0) {
                if ((lStack_298 != 0) && (1 < *(uint *)(lStack_298 + -8))) {
                  String::operator+=((String *)&lStack_298," ");
                }
LAB_0011ab07:
                String::operator+=((String *)&lStack_298,"vararg");
              }
            }
            DocData::return_doc_from_retinfo((MethodDoc *)&local_2b8,(PropertyInfo *)(pCVar62 + 8));
            if ((*(long **)(pCVar62 + 0x40) != (long *)0x0) &&
               (pPVar54 = (PropertyInfo *)**(long **)(pCVar62 + 0x40),
               pPVar54 != (PropertyInfo *)0x0)) {
              iVar50 = 0;
              do {
                local_2d8 = 0;
                local_2d0 = (CowData<char32_t>)0x0;
                local_2c8[0] = (long *)0x0;
                local_2e8 = (undefined1  [16])0x0;
                DocData::argument_doc_from_arginfo((ArgumentDoc *)local_2e8,pPVar54);
                if (*(long *)(pCVar62 + 0x50) == 0) {
                  lVar61 = *(long *)(pCVar62 + 0x40);
                  if (lVar61 == 0) goto LAB_00118784;
                  lVar49 = 0;
                  iVar32 = 0;
LAB_0011ab58:
                  iVar48 = *(int *)(lVar61 + 0x10);
                }
                else {
                  lVar49 = *(long *)(*(long *)(pCVar62 + 0x50) + -8);
                  lVar61 = *(long *)(pCVar62 + 0x40);
                  iVar48 = 0;
                  iVar32 = (int)lVar49;
                  if (lVar61 != 0) goto LAB_0011ab58;
                }
                uVar33 = (iVar32 + iVar50) - iVar48;
                if (-1 < (int)uVar33) {
                  uVar37 = (ulong)uVar33;
                  if (lVar49 <= (long)uVar37) goto LAB_001187a5;
                  DocData::get_default_value_string((Variant *)&local_238);
                  if (local_2c8[0] != (long *)CONCAT44(uStack_234,local_238)) {
                    CowData<char32_t>::operator=
                              ((CowData<char32_t> *)local_2c8,(CowData *)&local_238);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
                }
                iVar50 = iVar50 + 1;
                DocData::ArgumentDoc::ArgumentDoc
                          ((ArgumentDoc *)&local_238,(ArgumentDoc *)local_2e8);
                Vector<DocData::ArgumentDoc>::push_back
                          ((Vector<DocData::ArgumentDoc> *)local_268,(String *)&local_238);
                DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)&local_238);
                DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)local_2e8);
                pPVar54 = *(PropertyInfo **)(pPVar54 + 0x30);
              } while (pPVar54 != (PropertyInfo *)0x0);
            }
            DocData::MethodDoc::MethodDoc((MethodDoc *)&local_238,(MethodDoc *)&local_2b8);
            Vector<DocData::MethodDoc>::push_back(local_170,(String *)&local_238);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_2b8);
            pCVar62 = *(CowData **)(pCVar62 + 0x70);
          } while (pCVar62 != (CowData *)0x0);
        }
        local_320 = (Object *)0x0;
        (**(code **)(*plVar45 + 0x2e0))
                  (plVar45,(List<Engine::Singleton,DefaultAllocator> *)&local_320);
        if ((local_320 != (Object *)0x0) &&
           (pCVar62 = *(CowData **)local_320, pCVar62 != (CowData *)0x0)) {
          do {
            local_2a8 = (CowData<char32_t>)0x0;
            local_288 = 0;
            local_278 = 0;
            local_2b8 = (long *)0x0;
            plStack_2b0 = (long *)0x0;
            local_2a0 = (CowData<char32_t>)0x0;
            uStack_29f = 0;
            lStack_298 = 0;
            local_268 = (undefined1  [16])0x0;
            uStack_290 = uStack_290 & 0xffffff00;
            local_280 = local_280 & 0xffffffffffffff00;
            local_270 = local_270 & 0xffffffffffffff00;
            plVar46 = *(long **)pCVar62;
            if (*(long **)pCVar62 != (long *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,pCVar62);
              plVar46 = plStack_2b0;
            }
            Variant::operator_cast_to_String((Variant *)&local_238);
            if (plVar46 != (long *)CONCAT44(uStack_234,local_238)) {
              CowData<char32_t>::operator=((CowData<char32_t> *)&plStack_2b0,(CowData *)&local_238);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
            local_2a8 = (CowData<char32_t>)0x1;
            Variant::get_type_name((String *)&local_238,*(undefined4 *)(pCVar62 + 8));
            if (CONCAT71(uStack_29f,local_2a0) != CONCAT44(uStack_234,local_238)) {
              CowData<char32_t>::operator=(&local_2a0,(CowData *)&local_238);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
            DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_238,(ConstantDoc *)&local_2b8);
            Vector<DocData::ConstantDoc>::push_back(local_140,(String *)&local_238);
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_238);
            DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_2b8);
            pCVar62 = *(CowData **)(pCVar62 + 0x20);
          } while (pCVar62 != (CowData *)0x0);
        }
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_318._8_8_;
        local_318 = auVar19 << 0x40;
        (**(code **)(*plVar45 + 0x2e8))(plVar45,(List<MethodInfo,DefaultAllocator> *)local_318);
        if (((long *)local_318._0_8_ != (long *)0x0) &&
           (pCVar62 = *(CowData **)local_318._0_8_, pCVar62 != (CowData *)0x0)) {
          do {
            local_2a8 = (CowData<char32_t>)0x0;
            uStack_2a7 = 0;
            local_280 = 0;
            local_270 = 0;
            local_2b8 = (long *)0x0;
            plStack_2b0 = (long *)0x0;
            lStack_298 = 0;
            uStack_290 = 0;
            iStack_28c = 0;
            local_250 = (undefined1  [16])0x0;
            local_2a0 = (CowData<char32_t>)0x0;
            local_288 = local_288 & 0xffffffffffffff00;
            local_278 = local_278 & 0xffffffffffffff00;
            local_268._8_8_ = 0;
            if (*(long *)pCVar62 == 0) {
              if (((byte)pCVar62[0x38] & 0x10) != 0) goto LAB_0011aeea;
            }
            else {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_2b8,pCVar62);
              if (((byte)pCVar62[0x38] & 0x10) != 0) {
                if ((lStack_298 != 0) && (1 < *(uint *)(lStack_298 + -8))) {
                  String::operator+=((String *)&lStack_298," ");
                }
LAB_0011aeea:
                String::operator+=((String *)&lStack_298,"vararg");
              }
            }
            DocData::return_doc_from_retinfo((MethodDoc *)&local_2b8,(PropertyInfo *)(pCVar62 + 8));
            if ((*(long **)(pCVar62 + 0x40) != (long *)0x0) &&
               (pPVar54 = (PropertyInfo *)**(long **)(pCVar62 + 0x40),
               pPVar54 != (PropertyInfo *)0x0)) {
              iVar50 = 0;
              do {
                local_2d8 = 0;
                local_2d0 = (CowData<char32_t>)0x0;
                local_2c8[0] = (long *)0x0;
                local_2e8 = (undefined1  [16])0x0;
                DocData::argument_doc_from_arginfo((ArgumentDoc *)local_2e8,pPVar54);
                if (*(long *)(pCVar62 + 0x50) == 0) {
                  lVar61 = *(long *)(pCVar62 + 0x40);
                  if (lVar61 == 0) {
                    uVar37 = (ulong)iVar50;
                    lVar49 = 0;
                    goto LAB_001187a5;
                  }
                  lVar49 = 0;
                  iVar32 = 0;
LAB_0011af43:
                  iVar48 = *(int *)(lVar61 + 0x10);
                }
                else {
                  lVar49 = *(long *)(*(long *)(pCVar62 + 0x50) + -8);
                  lVar61 = *(long *)(pCVar62 + 0x40);
                  iVar48 = 0;
                  iVar32 = (int)lVar49;
                  if (lVar61 != 0) goto LAB_0011af43;
                }
                uVar33 = (iVar32 + iVar50) - iVar48;
                if (-1 < (int)uVar33) {
                  uVar37 = (ulong)uVar33;
                  if (lVar49 <= (long)uVar37) goto LAB_001187a5;
                  DocData::get_default_value_string((Variant *)&local_238);
                  if (local_2c8[0] != (long *)CONCAT44(uStack_234,local_238)) {
                    CowData<char32_t>::operator=
                              ((CowData<char32_t> *)local_2c8,(CowData *)&local_238);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
                }
                iVar50 = iVar50 + 1;
                DocData::ArgumentDoc::ArgumentDoc
                          ((ArgumentDoc *)&local_238,(ArgumentDoc *)local_2e8);
                Vector<DocData::ArgumentDoc>::push_back
                          ((Vector<DocData::ArgumentDoc> *)local_268,(String *)&local_238);
                DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)&local_238);
                DocData::ArgumentDoc::~ArgumentDoc((ArgumentDoc *)local_2e8);
                pPVar54 = *(PropertyInfo **)(pPVar54 + 0x30);
              } while (pPVar54 != (PropertyInfo *)0x0);
            }
            DocData::MethodDoc::MethodDoc((MethodDoc *)&local_238,(MethodDoc *)&local_2b8);
            Vector<DocData::MethodDoc>::push_back(local_f0,(String *)&local_238);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_238);
            DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_2b8);
            pCVar62 = *(CowData **)(pCVar62 + 0x70);
          } while (pCVar62 != (CowData *)0x0);
        }
        if (((local_168 != 0) || (local_138 != 0)) || (local_e8 != 0)) {
          Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>(local_170);
          Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>(local_f0);
          pCVar34 = (ClassDoc *)
                    HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
                    ::operator[](this_00,(String *)&local_330);
          DocData::ClassDoc::operator=(pCVar34,(ClassDoc *)&local_1b8);
        }
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)local_318);
        List<Pair<String,Variant>,DefaultAllocator>::~List
                  ((List<Pair<String,Variant>,DefaultAllocator> *)&local_320);
        List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator> *)&local_328);
        DocData::ClassDoc::~ClassDoc((ClassDoc *)&local_1b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_330);
        iVar30 = iVar30 + 1;
      } while (iVar30 < (int)ScriptServer::_language_count);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011b93c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00118784:
  uVar37 = (ulong)iVar50;
  lVar49 = 0;
LAB_001187a5:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar37,lVar49,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_set_color(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*, int) [clone .part.0] */

void RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_set_color
               (Element *param_1,int param_2)

{
  _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                   "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
  return;
}



/* SortArray<List<PropertyInfo, DefaultAllocator>::Element*, List<PropertyInfo,
   DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo> >, true>::introsort(long, long,
   List<PropertyInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<PropertyInfo,DefaultAllocator>::Element*,List<PropertyInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  Element *pEVar2;
  Element *pEVar3;
  char cVar4;
  Element **ppEVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  long lVar9;
  Element **ppEVar10;
  long lVar11;
  long lVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Element **local_50;
  
  lVar9 = param_2 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_78 = param_2;
  if (param_4 != 0) {
    ppEVar8 = param_3 + param_1;
    local_68 = param_2;
    local_60 = param_4;
LAB_0011c291:
    local_60 = local_60 + -1;
    ppEVar1 = param_3 + (lVar9 >> 1) + param_1;
    ppEVar5 = param_3 + local_68 + -1;
    cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar1 + 8));
    if (cVar4 == '\0') {
      cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar5 + 8));
      ppEVar10 = ppEVar8;
      if (cVar4 != '\0') goto LAB_0011c30d;
      cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(*ppEVar5 + 8));
    }
    else {
      cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(*ppEVar5 + 8));
      ppEVar10 = ppEVar1;
      if (cVar4 != '\0') goto LAB_0011c30d;
      cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(*ppEVar5 + 8));
      ppEVar1 = ppEVar8;
    }
    ppEVar10 = ppEVar1;
    if (cVar4 != '\0') {
      ppEVar10 = ppEVar5;
    }
LAB_0011c30d:
    pEVar2 = *ppEVar10;
    lVar9 = local_68;
    local_78 = param_1;
    do {
      cVar4 = String::operator<((String *)(param_3[local_78] + 8),(String *)(pEVar2 + 8));
      if (cVar4 == '\0') {
LAB_0011c358:
        lVar9 = lVar9 + -1;
        ppEVar5 = param_3 + lVar9;
        while (cVar4 = String::operator<((String *)(pEVar2 + 8),(String *)(*ppEVar5 + 8)),
              cVar4 != '\0') {
          if (param_1 == lVar9) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          lVar9 = lVar9 + -1;
          ppEVar5 = ppEVar5 + -1;
        }
        if (lVar9 <= local_78) goto LAB_0011c3d0;
        pEVar3 = param_3[local_78];
        param_3[local_78] = *ppEVar5;
        *ppEVar5 = pEVar3;
      }
      else if (local_68 + -1 == local_78) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_0011c358;
      }
      local_78 = local_78 + 1;
    } while( true );
  }
LAB_0011c4a2:
  lVar6 = lVar9 + -2 >> 1;
  local_50 = param_3 + param_1 + lVar6;
  local_58 = lVar6 * 2 + 2;
  do {
    pEVar2 = *local_50;
    lVar7 = local_58;
    local_70 = lVar6;
    if (local_58 < lVar9) {
      do {
        cVar4 = String::operator<((String *)(param_3[param_1 + lVar7] + 8),
                                  (String *)(param_3[param_1 + lVar7 + -1] + 8));
        ppEVar8 = param_3 + param_1 + lVar7 + -1;
        lVar11 = lVar7;
        lVar12 = lVar7 + -1;
        if (cVar4 == '\0') {
          lVar11 = lVar7 + 1;
          ppEVar8 = param_3 + param_1 + lVar7;
          lVar12 = lVar7;
        }
        lVar7 = lVar11 * 2;
        param_3[local_70 + param_1] = *ppEVar8;
        local_70 = lVar12;
      } while (lVar7 < lVar9);
      ppEVar5 = ppEVar8;
      if (lVar7 == lVar9) {
LAB_0011c7aa:
        lVar12 = lVar7 + -1;
        ppEVar8 = param_3 + param_1 + lVar12;
        *ppEVar5 = *ppEVar8;
      }
      if (lVar12 <= lVar6) goto LAB_0011c7fa;
      lVar7 = lVar12 + -1 >> 1;
      do {
        lVar11 = lVar7;
        ppEVar8 = param_3 + param_1 + lVar11;
        cVar4 = String::operator<((String *)(*ppEVar8 + 8),(String *)(pEVar2 + 8));
        if (cVar4 == '\0') {
          param_3[lVar12 + param_1] = pEVar2;
          goto joined_r0x0011c642;
        }
        param_3[lVar12 + param_1] = *ppEVar8;
        lVar7 = (lVar11 + -1) / 2;
        lVar12 = lVar11;
      } while (lVar6 < lVar11);
      *ppEVar8 = pEVar2;
joined_r0x0011c642:
      if (lVar6 == 0) goto LAB_0011c644;
    }
    else {
      ppEVar5 = local_50;
      ppEVar8 = local_50;
      if (local_58 == lVar9) goto LAB_0011c7aa;
LAB_0011c7fa:
      *ppEVar8 = pEVar2;
    }
    local_50 = local_50 + -1;
    lVar6 = lVar6 + -1;
    local_58 = local_58 + -2;
  } while( true );
LAB_0011c3d0:
  introsort(local_78,local_68,param_3,local_60);
  lVar9 = local_78 - param_1;
  if (lVar9 < 0x11) {
    return;
  }
  local_68 = local_78;
  if (local_60 == 0) goto LAB_0011c4a2;
  goto LAB_0011c291;
LAB_0011c644:
  ppEVar8 = param_3 + param_1;
  local_70 = (local_78 + -1) - param_1;
LAB_0011c670:
  do {
    pEVar2 = ppEVar8[local_70];
    ppEVar8[local_70] = *ppEVar8;
    if (local_70 < 3) {
      if (local_70 != 2) {
        *ppEVar8 = pEVar2;
        return;
      }
      lVar9 = param_1 + 1;
      lVar6 = 0;
      *ppEVar8 = param_3[lVar9];
LAB_0011c72a:
      while( true ) {
        ppEVar1 = param_3 + param_1 + lVar6;
        cVar4 = String::operator<((String *)(*ppEVar1 + 8),(String *)(pEVar2 + 8));
        ppEVar5 = param_3 + lVar9;
        if (cVar4 == '\0') break;
        *ppEVar5 = *ppEVar1;
        if (lVar6 == 0) {
          local_70 = local_70 + -1;
          *ppEVar1 = pEVar2;
          goto LAB_0011c670;
        }
        lVar9 = param_1 + lVar6;
        lVar6 = (lVar6 + -1) / 2;
      }
    }
    else {
      local_78 = 0;
      lVar9 = 2;
      do {
        cVar4 = String::operator<((String *)(param_3[param_1 + lVar9] + 8),
                                  (String *)(param_3[param_1 + lVar9 + -1] + 8));
        lVar7 = lVar9 + -1;
        lVar6 = lVar9;
        ppEVar5 = param_3 + param_1 + lVar9 + -1;
        if (cVar4 == '\0') {
          lVar6 = lVar9 + 1;
          lVar7 = lVar9;
          ppEVar5 = param_3 + param_1 + lVar9;
        }
        lVar9 = lVar6 * 2;
        param_3[local_78 + param_1] = *ppEVar5;
        local_78 = lVar7;
      } while (lVar9 < local_70);
      if (lVar9 == local_70) {
        lVar9 = local_70 + -1 + param_1;
        lVar6 = local_70 + -2 >> 1;
        *ppEVar5 = param_3[lVar9];
        goto LAB_0011c72a;
      }
      lVar9 = param_1 + lVar7;
      lVar6 = (lVar7 + -1) / 2;
      if (0 < lVar7) goto LAB_0011c72a;
    }
    local_70 = local_70 + -1;
    *ppEVar5 = pEVar2;
  } while( true );
}



/* CowData<Error>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Error>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ArgumentDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ArgumentDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::TutorialDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::TutorialDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::MethodDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ConstantDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::PropertyDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ThemeItemDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ThemeItemDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DocTools::merge_from(DocTools const&) [clone .cold] */

void DocTools::merge_from(DocTools *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DocTools::load_compressed(unsigned char const*, int, int) [clone .cold] */

void DocTools::load_compressed(uchar *param_1,int param_2,int param_3)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DocTools::generate(BitField<DocTools::GenerateFlags>) [clone .cold] */

void DocTools::generate(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DocData::ArgumentDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::ArgumentDoc const&) const */

void __thiscall DocData::ArgumentDoc::operator<(ArgumentDoc *this,ArgumentDoc *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==((String *)this,(String *)param_1);
  if (cVar1 != '\0') {
    String::operator<((String *)(this + 8),(String *)(param_1 + 8));
    return;
  }
  String::operator<((String *)this,(String *)param_1);
  return;
}



/* DocData::ClassDoc::ClassDoc() */

void __thiscall DocData::ClassDoc::ClassDoc(ClassDoc *this)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb0) = 2;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xe8] = (ClassDoc)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (ClassDoc)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  this[0x108] = (ClassDoc)0x0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_0011d3f8:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_0011ce0e:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_0011ce1e:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                                 (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0011d33b;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_0011cf45;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0011cf45;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011ce1e;
LAB_0011cf6b:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)&DAT_00000018;
      goto LAB_0011d33b;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_0011cdb4;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_0011d3f8;
      goto LAB_0011ce0e;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_0011cf45:
    if ((float)uVar39 * __LC22 < (float)(iVar44 + 1)) goto LAB_0011cf6b;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  Variant::Variant(local_c8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011d33b:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011cdb4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0011d5ec;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0011d5ec:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_0011da38;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC22) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_0011d915;
LAB_0011da76:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_0011da38;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_0011da76;
LAB_0011d915:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_0011da38:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* List<Engine::Singleton, DefaultAllocator>::~List() */

void __thiscall
List<Engine::Singleton,DefaultAllocator>::~List(List<Engine::Singleton,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (plVar4 == (long *)plVar1[6]) {
      lVar3 = plVar1[4];
      lVar2 = plVar1[5];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar3;
        lVar3 = plVar1[4];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x28) = lVar2;
      }
      if (StringName::configured != '\0') {
        if (plVar1[2] != 0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0011dc2a;
        }
        if (*plVar1 != 0) {
          StringName::unref();
        }
      }
LAB_0011dc2a:
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* DocData::ArgumentDoc::~ArgumentDoc() */

void __thiscall DocData::ArgumentDoc::~ArgumentDoc(ArgumentDoc *this)

{
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* DocData::ConstantDoc::~ConstantDoc() */

void __thiscall DocData::ConstantDoc::~ConstantDoc(ConstantDoc *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x58));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* DocData::PropertyDoc::~PropertyDoc() */

void __thiscall DocData::PropertyDoc::~PropertyDoc(PropertyDoc *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x70));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x58));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* DocData::ThemeItemDoc::~ThemeItemDoc() */

void __thiscall DocData::ThemeItemDoc::~ThemeItemDoc(ThemeItemDoc *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011e078) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* DocData::ArgumentDoc::ArgumentDoc(DocData::ArgumentDoc const&) */

void __thiscall DocData::ArgumentDoc::ArgumentDoc(ArgumentDoc *this,ArgumentDoc *param_1)

{
  ArgumentDoc AVar1;
  long lVar2;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  AVar1 = param_1[0x18];
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  this[0x18] = AVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
    return;
  }
  return;
}



/* DocData::ThemeItemDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::ThemeItemDoc const&) [clone .isra.0] */

void __thiscall DocData::ThemeItemDoc::operator=(ThemeItemDoc *this,ThemeItemDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  if (*(long *)(this + 0x18) != *(long *)(param_1 + 0x18)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  this[0x20] = param_1[0x20];
  if (*(long *)(this + 0x28) != *(long *)(param_1 + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  this[0x30] = param_1[0x30];
  if (*(long *)(this + 0x38) != *(long *)(param_1 + 0x38)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  if (*(long *)(this + 0x48) != *(long *)(param_1 + 0x48)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
    return;
  }
  return;
}



/* DocData::ConstantDoc::TEMPNAMEPLACEHOLDERVALUE(DocData::ConstantDoc const&) [clone .isra.0] */

void __thiscall DocData::ConstantDoc::operator=(ConstantDoc *this,ConstantDoc *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  this[0x10] = param_1[0x10];
  if (*(long *)(this + 0x18) != *(long *)(param_1 + 0x18)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  this[0x28] = param_1[0x28];
  if (*(long *)(this + 0x30) != *(long *)(param_1 + 0x30)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  this[0x38] = param_1[0x38];
  if (*(long *)(this + 0x40) != *(long *)(param_1 + 0x40)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  this[0x48] = param_1[0x48];
  if (*(long *)(this + 0x50) != *(long *)(param_1 + 0x50)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  if (*(long *)(this + 0x58) != *(long *)(param_1 + 0x58)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x58),(CowData *)(param_1 + 0x58));
    return;
  }
  return;
}



/* DocData::ThemeItemDoc::ThemeItemDoc(DocData::ThemeItemDoc const&) */

void __thiscall DocData::ThemeItemDoc::ThemeItemDoc(ThemeItemDoc *this,ThemeItemDoc *param_1)

{
  ThemeItemDoc TVar1;
  long lVar2;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  TVar1 = param_1[0x20];
  *(undefined8 *)(this + 0x28) = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  this[0x20] = TVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  TVar1 = param_1[0x30];
  *(undefined8 *)(this + 0x38) = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  this[0x30] = TVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
    return;
  }
  return;
}



/* DocData::ConstantDoc::ConstantDoc(DocData::ConstantDoc const&) */

void __thiscall DocData::ConstantDoc::ConstantDoc(ConstantDoc *this,ConstantDoc *param_1)

{
  ConstantDoc CVar1;
  long lVar2;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  CVar1 = param_1[0x10];
  *(undefined8 *)(this + 0x18) = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  this[0x10] = CVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  CVar1 = param_1[0x28];
  *(undefined8 *)(this + 0x30) = 0;
  lVar2 = *(long *)(param_1 + 0x30);
  this[0x28] = CVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  CVar1 = param_1[0x38];
  *(undefined8 *)(this + 0x40) = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  this[0x38] = CVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  CVar1 = param_1[0x48];
  *(undefined8 *)(this + 0x50) = 0;
  lVar2 = *(long *)(param_1 + 0x50);
  this[0x48] = CVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x58),(CowData *)(param_1 + 0x58));
    return;
  }
  return;
}



/* DocData::PropertyDoc::PropertyDoc(DocData::PropertyDoc const&) */

void __thiscall DocData::PropertyDoc::PropertyDoc(PropertyDoc *this,PropertyDoc *param_1)

{
  PropertyDoc PVar1;
  long lVar2;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  PVar1 = param_1[0x18];
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  this[0x18] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  *(undefined8 *)(this + 0x38) = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  PVar1 = param_1[0x40];
  *(undefined8 *)(this + 0x48) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  this[0x40] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  PVar1 = param_1[0x50];
  *(undefined8 *)(this + 0x58) = 0;
  lVar2 = *(long *)(param_1 + 0x58);
  this[0x50] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x58),(CowData *)(param_1 + 0x58));
  }
  PVar1 = param_1[0x60];
  *(undefined8 *)(this + 0x68) = 0;
  lVar2 = *(long *)(param_1 + 0x68);
  this[0x60] = PVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x68),(CowData *)(param_1 + 0x68));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)(param_1 + 0x70));
    return;
  }
  return;
}



/* List<Pair<String, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,Variant>,DefaultAllocator>::~List
          (List<Pair<String,Variant>,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*puVar1;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if (*(int *)(puVar1 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(this_00 + 0x30) == puVar1) {
      *puVar1 = *(undefined8 *)(this_00 + 0x20);
      if (this_00 == (CowData<char32_t> *)puVar1[1]) {
        puVar1[1] = *(undefined8 *)(this_00 + 0x28);
      }
      if (*(long *)(this_00 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x28) + 0x20) = *(undefined8 *)(this_00 + 0x20);
      }
      if (*(long *)(this_00 + 0x20) != 0) {
        *(undefined8 *)(*(long *)(this_00 + 0x20) + 0x28) = *(undefined8 *)(this_00 + 0x28);
      }
      if (Variant::needs_deinit[*(int *)(this_00 + 8)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar1 = *(undefined8 **)this;
  } while (*(int *)(puVar1 + 2) != 0);
  Memory::free_static(puVar1,false);
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_cleanup_tree(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_cleanup_tree
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011f31f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011f31f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x48);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (*(long *)((long)pvVar1 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar1 + 0x48);
      }
      if (*(long *)((long)pvVar1 + 0x48) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
             *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x60) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x50);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x58);
      }
      if (*(long *)((long)pvVar1 + 0x58) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x58) + 0x50) =
             *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (*(long *)((long)pvVar1 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x58) =
             *(undefined8 *)((long)pvVar1 + 0x58);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<PropertyInfo,
   DefaultAllocator> const&) */

void __thiscall
List<PropertyInfo,DefaultAllocator>::operator=
          (List<PropertyInfo,DefaultAllocator> *this,List *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  
  plVar7 = *(long **)this;
  if (plVar7 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar7;
      if (pvVar1 == (void *)0x0) goto LAB_0011f820;
      if (*(long **)((long)pvVar1 + 0x40) == plVar7) {
        lVar3 = *(long *)((long)pvVar1 + 0x30);
        lVar2 = *(long *)((long)pvVar1 + 0x38);
        *plVar7 = lVar3;
        if (pvVar1 == (void *)plVar7[1]) {
          plVar7[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x30) = lVar3;
          lVar3 = *(long *)((long)pvVar1 + 0x30);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x38) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
        Memory::free_static(pvVar1,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)this;
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
    *(undefined8 *)this = 0;
  }
  plVar7 = (long *)0x0;
LAB_0011f820:
  if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
     (puVar6 = (undefined4 *)**(undefined8 **)param_1, puVar6 != (undefined4 *)0x0)) {
    if (plVar7 == (long *)0x0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
        lVar3 = *(long *)(puVar6 + 2);
        *puVar5 = 0;
        puVar5[6] = 0;
        puVar5[10] = 6;
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
        *puVar5 = *puVar6;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar6 + 2));
        }
        StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(puVar6 + 4));
        puVar5[6] = puVar6[6];
        if (*(long *)(puVar5 + 8) != *(long *)(puVar6 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(puVar6 + 8));
        }
        puVar5[10] = puVar6[10];
        plVar7 = *(long **)this;
        lVar3 = plVar7[1];
        *(undefined8 *)(puVar5 + 0xc) = 0;
        *(long **)(puVar5 + 0x10) = plVar7;
        *(long *)(puVar5 + 0xe) = lVar3;
        if (lVar3 != 0) {
          *(undefined4 **)(lVar3 + 0x30) = puVar5;
        }
        plVar7[1] = (long)puVar5;
        if (*plVar7 == 0) break;
        puVar6 = *(undefined4 **)(puVar6 + 0xc);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
        if (puVar6 == (undefined4 *)0x0) {
          return;
        }
      }
      puVar6 = *(undefined4 **)(puVar6 + 0xc);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
      *plVar7 = (long)puVar5;
    } while (puVar6 != (undefined4 *)0x0);
  }
  return;
}



/* SortArray<DocData::ConstantDoc, _DefaultComparator<DocData::ConstantDoc>, true>::introsort(long,
   long, DocData::ConstantDoc*, long) const [clone .isra.0] */

void SortArray<DocData::ConstantDoc,_DefaultComparator<DocData::ConstantDoc>,true>::introsort
               (long param_1,long param_2,ConstantDoc *param_3,long param_4)

{
  long *plVar1;
  CowData<char32_t> CVar2;
  CowData<char32_t> CVar3;
  CowData<char32_t> CVar4;
  CowData<char32_t> CVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  char cVar12;
  long lVar13;
  CowData *pCVar14;
  String *this;
  String *pSVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String *pSVar20;
  ConstantDoc *this_00;
  CowData *this_01;
  CowData<char32_t> *pCVar21;
  String *pSVar22;
  long in_FS_OFFSET;
  long local_288;
  CowData<char32_t> *local_280;
  long local_278;
  long local_270;
  ConstantDoc *local_268;
  long local_228;
  ConstantDoc *local_218;
  long local_210;
  long local_1e8;
  long local_168;
  long local_160;
  CowData<char32_t> local_158;
  long local_150;
  long local_148;
  CowData<char32_t> local_140;
  long local_138;
  CowData<char32_t> local_130;
  long local_128;
  CowData<char32_t> local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  CowData<char32_t> local_f8;
  long local_f0;
  long local_e8;
  CowData<char32_t> local_e0;
  long local_d8;
  CowData<char32_t> local_d0;
  long local_c8;
  CowData<char32_t> local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  CowData<char32_t> local_98;
  long local_90;
  long lStack_88;
  CowData<char32_t> local_80;
  long local_78;
  CowData<char32_t> local_70;
  long local_68;
  CowData<char32_t> local_60;
  long local_58;
  long alStack_50 [2];
  long local_40;
  
  local_278 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < local_278) {
    local_288 = param_2;
    if (param_4 != 0) {
      pSVar22 = (String *)(param_3 + param_1 * 0x60);
      local_228 = param_2;
      local_210 = param_4;
LAB_0011fa3f:
      local_210 = local_210 + -1;
      this = (String *)(param_3 + ((local_278 >> 1) + param_1) * 0x60);
      pSVar20 = (String *)(param_3 + local_228 * 0x60 + -0x60);
      cVar12 = String::operator<(pSVar22,this);
      if (cVar12 == '\0') {
        cVar12 = String::operator<(pSVar22,pSVar20);
        pSVar15 = pSVar22;
        if (cVar12 != '\0') goto LAB_0011fab5;
        cVar12 = String::operator<(this,pSVar20);
      }
      else {
        cVar12 = String::operator<(this,pSVar20);
        pSVar15 = this;
        if (cVar12 != '\0') goto LAB_0011fab5;
        cVar12 = String::operator<(pSVar22,pSVar20);
        this = pSVar22;
      }
      pSVar15 = this;
      if (cVar12 != '\0') {
        pSVar15 = pSVar20;
      }
LAB_0011fab5:
      DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_108,(ConstantDoc *)pSVar15);
      lVar16 = local_228;
      this_00 = param_3 + param_1 * 0x60 + 0x50;
      local_288 = param_1;
      do {
        cVar12 = String::operator<((String *)((CowData<char32_t> *)this_00 + -0x50),
                                   (String *)&local_108);
        if (cVar12 == '\0') {
LAB_0011fb0f:
          lVar16 = lVar16 + -1;
          pCVar21 = (CowData<char32_t> *)(param_3 + lVar16 * 0x60);
          while (cVar12 = String::operator<((String *)&local_108,(String *)pCVar21), cVar12 != '\0')
          {
            if (param_1 == lVar16) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar16 = lVar16 + -1;
            pCVar21 = pCVar21 + -0x60;
          }
          if (lVar16 <= local_288) goto LAB_0011ffc0;
          lVar6 = *(long *)((CowData<char32_t> *)this_00 + -0x50);
          lVar19 = *(long *)((CowData<char32_t> *)this_00 + -0x48);
          local_a8 = *(long *)((CowData<char32_t> *)this_00 + -0x50);
          lStack_a0 = *(long *)((CowData<char32_t> *)this_00 + -0x48);
          lVar17 = *(long *)((CowData<char32_t> *)this_00 + -0x30);
          *(undefined1 (*) [16])((CowData<char32_t> *)this_00 + -0x50) = (undefined1  [16])0x0;
          CVar2 = ((CowData<char32_t> *)this_00)[-0x40];
          local_90 = *(long *)((CowData<char32_t> *)this_00 + -0x38);
          lStack_88 = *(long *)((CowData<char32_t> *)this_00 + -0x30);
          lVar7 = *(long *)((CowData<char32_t> *)this_00 + -0x38);
          CVar3 = ((CowData<char32_t> *)this_00)[-0x28];
          lVar8 = *(long *)((CowData<char32_t> *)this_00 + -0x20);
          CVar4 = ((CowData<char32_t> *)this_00)[-0x18];
          *(undefined8 *)((CowData<char32_t> *)this_00 + -0x20) = 0;
          lVar9 = *(long *)((CowData<char32_t> *)this_00 + -0x10);
          *(undefined1 (*) [16])((CowData<char32_t> *)this_00 + -0x38) = (undefined1  [16])0x0;
          CVar5 = ((CowData<char32_t> *)this_00)[-8];
          *(undefined8 *)((CowData<char32_t> *)this_00 + -0x10) = 0;
          lVar18 = *(long *)((CowData<char32_t> *)this_00 + 8);
          lVar10 = *(long *)this_00;
          local_58 = *(long *)this_00;
          alStack_50[0] = *(long *)((CowData<char32_t> *)this_00 + 8);
          *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
          lVar13 = *(long *)pCVar21;
          local_98 = CVar2;
          local_80 = CVar3;
          local_78 = lVar8;
          local_70 = CVar4;
          local_68 = lVar9;
          local_60 = CVar5;
          if (lVar13 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x50);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x50) = *(undefined8 *)pCVar21;
            *(undefined8 *)pCVar21 = 0;
            lVar13 = *(long *)((CowData<char32_t> *)this_00 + -0x48);
          }
          if (lVar13 != *(long *)(pCVar21 + 8)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x48);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x48) = *(undefined8 *)(pCVar21 + 8);
            *(undefined8 *)(pCVar21 + 8) = 0;
          }
          ((CowData<char32_t> *)this_00)[-0x40] = pCVar21[0x10];
          if (*(long *)((CowData<char32_t> *)this_00 + -0x38) != *(long *)(pCVar21 + 0x18)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x38);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x38) = *(undefined8 *)(pCVar21 + 0x18);
            *(undefined8 *)(pCVar21 + 0x18) = 0;
          }
          if (*(long *)((CowData<char32_t> *)this_00 + -0x30) != *(long *)(pCVar21 + 0x20)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x30);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x30) = *(undefined8 *)(pCVar21 + 0x20);
            *(undefined8 *)(pCVar21 + 0x20) = 0;
          }
          ((CowData<char32_t> *)this_00)[-0x28] = pCVar21[0x28];
          if (*(long *)((CowData<char32_t> *)this_00 + -0x20) != *(long *)(pCVar21 + 0x30)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x20);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x20) = *(undefined8 *)(pCVar21 + 0x30);
            *(undefined8 *)(pCVar21 + 0x30) = 0;
          }
          ((CowData<char32_t> *)this_00)[-0x18] = pCVar21[0x38];
          if (*(long *)((CowData<char32_t> *)this_00 + -0x10) != *(long *)(pCVar21 + 0x40)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -0x10);
            *(undefined8 *)((CowData<char32_t> *)this_00 + -0x10) = *(undefined8 *)(pCVar21 + 0x40);
            *(undefined8 *)(pCVar21 + 0x40) = 0;
          }
          ((CowData<char32_t> *)this_00)[-8] = pCVar21[0x48];
          if (*(long *)this_00 != *(long *)(pCVar21 + 0x50)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
            *(undefined8 *)this_00 = *(undefined8 *)(pCVar21 + 0x50);
            *(undefined8 *)(pCVar21 + 0x50) = 0;
          }
          if (*(long *)((CowData<char32_t> *)this_00 + 8) != *(long *)(pCVar21 + 0x58)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + 8);
            *(undefined8 *)((CowData<char32_t> *)this_00 + 8) = *(undefined8 *)(pCVar21 + 0x58);
            *(undefined8 *)(pCVar21 + 0x58) = 0;
          }
          if (lVar6 != *(long *)pCVar21) {
            CowData<char32_t>::_unref(pCVar21);
            local_a8 = 0;
            *(long *)pCVar21 = lVar6;
          }
          if (lVar19 != *(long *)(pCVar21 + 8)) {
            CowData<char32_t>::_unref(pCVar21 + 8);
            lStack_a0 = 0;
            *(long *)(pCVar21 + 8) = lVar19;
          }
          pCVar21[0x10] = CVar2;
          if (lVar7 != *(long *)(pCVar21 + 0x18)) {
            CowData<char32_t>::_unref(pCVar21 + 0x18);
            local_90 = 0;
            *(long *)(pCVar21 + 0x18) = lVar7;
          }
          if (lVar17 != *(long *)(pCVar21 + 0x20)) {
            CowData<char32_t>::_unref(pCVar21 + 0x20);
            lStack_88 = 0;
            *(long *)(pCVar21 + 0x20) = lVar17;
          }
          pCVar21[0x28] = CVar3;
          if (*(long *)(pCVar21 + 0x30) != lVar8) {
            CowData<char32_t>::_unref(pCVar21 + 0x30);
            local_78 = 0;
            *(long *)(pCVar21 + 0x30) = lVar8;
          }
          pCVar21[0x38] = CVar4;
          if (*(long *)(pCVar21 + 0x40) != lVar9) {
            CowData<char32_t>::_unref(pCVar21 + 0x40);
            local_68 = 0;
            *(long *)(pCVar21 + 0x40) = lVar9;
          }
          pCVar21[0x48] = CVar5;
          if (lVar10 != *(long *)(pCVar21 + 0x50)) {
            CowData<char32_t>::_unref(pCVar21 + 0x50);
            local_58 = 0;
            *(long *)(pCVar21 + 0x50) = lVar10;
          }
          if (lVar18 != *(long *)(pCVar21 + 0x58)) {
            CowData<char32_t>::_unref(pCVar21 + 0x58);
            alStack_50[0] = 0;
            *(long *)(pCVar21 + 0x58) = lVar18;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)alStack_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_a0);
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_a8 + -0x10),false);
            }
          }
        }
        else if (local_228 + -1 == local_288) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_0011fb0f;
        }
        local_288 = local_288 + 1;
        this_00 = (ConstantDoc *)((CowData<char32_t> *)this_00 + 0x60);
      } while( true );
    }
LAB_00120cc4:
    local_218 = (ConstantDoc *)&local_108;
    local_270 = local_278 + -2 >> 1;
    local_1e8 = local_270 * 2 + 2;
    local_268 = param_3 + (param_1 + local_270) * 0x60;
    do {
      DocData::ConstantDoc::ConstantDoc(local_218,local_268);
      lVar16 = local_1e8;
      lVar19 = local_270;
      if (local_1e8 < local_278) {
        do {
          cVar12 = String::operator<((String *)(param_3 + (param_1 + lVar16) * 0x60),
                                     (String *)(param_3 + (param_1 + lVar16 + -1) * 0x60));
          lVar18 = lVar16;
          lVar17 = lVar16 + -1;
          pSVar20 = (String *)(param_3 + (param_1 + lVar16 + -1) * 0x60);
          if (cVar12 == '\0') {
            lVar18 = lVar16 + 1;
            lVar17 = lVar16;
            pSVar20 = (String *)(param_3 + (param_1 + lVar16) * 0x60);
          }
          pCVar21 = (CowData<char32_t> *)(param_3 + (lVar19 + param_1) * 0x60);
          if (*(long *)pCVar21 != *(long *)pSVar20) {
            CowData<char32_t>::_ref(pCVar21,(CowData *)pSVar20);
          }
          if (*(long *)(pCVar21 + 8) != *(long *)((CowData *)pSVar20 + 8)) {
            CowData<char32_t>::_ref(pCVar21 + 8,(CowData *)pSVar20 + 8);
          }
          pCVar21[0x10] = *(CowData<char32_t> *)((CowData *)pSVar20 + 0x10);
          if (*(long *)(pCVar21 + 0x18) != *(long *)((CowData *)pSVar20 + 0x18)) {
            CowData<char32_t>::_ref(pCVar21 + 0x18,(CowData *)pSVar20 + 0x18);
          }
          if (*(long *)(pCVar21 + 0x20) != *(long *)((CowData *)pSVar20 + 0x20)) {
            CowData<char32_t>::_ref(pCVar21 + 0x20,(CowData *)pSVar20 + 0x20);
          }
          pCVar21[0x28] = *(CowData<char32_t> *)((CowData *)pSVar20 + 0x28);
          if (*(long *)(pCVar21 + 0x30) != *(long *)((CowData *)pSVar20 + 0x30)) {
            CowData<char32_t>::_ref(pCVar21 + 0x30,(CowData *)pSVar20 + 0x30);
          }
          pCVar21[0x38] = *(CowData<char32_t> *)((CowData *)pSVar20 + 0x38);
          if (*(long *)(pCVar21 + 0x40) != *(long *)((CowData *)pSVar20 + 0x40)) {
            CowData<char32_t>::_ref(pCVar21 + 0x40,(CowData *)pSVar20 + 0x40);
          }
          pCVar21[0x48] = *(CowData<char32_t> *)((CowData *)pSVar20 + 0x48);
          if (*(long *)(pCVar21 + 0x50) != *(long *)((CowData *)pSVar20 + 0x50)) {
            CowData<char32_t>::_ref(pCVar21 + 0x50,(CowData *)pSVar20 + 0x50);
          }
          if (*(long *)(pCVar21 + 0x58) != *(long *)((CowData *)pSVar20 + 0x58)) {
            CowData<char32_t>::_ref(pCVar21 + 0x58,(CowData *)pSVar20 + 0x58);
          }
          lVar16 = lVar18 * 2;
          lVar19 = lVar17;
        } while (lVar16 < local_278);
        pCVar14 = (CowData *)pSVar20;
        if (lVar16 == local_278) {
LAB_001211c7:
          lVar17 = lVar16 + -1;
          pSVar20 = (String *)(param_3 + (param_1 + lVar17) * 0x60);
          DocData::ConstantDoc::operator=((ConstantDoc *)pCVar14,(ConstantDoc *)pSVar20);
        }
        lVar16 = lVar17 + -1;
        DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_a8,local_218);
        while (pSVar22 = pSVar20, local_270 < lVar17) {
          lVar19 = lVar16 >> 1;
          pSVar20 = (String *)(param_3 + (param_1 + lVar19) * 0x60);
          cVar12 = String::operator<(pSVar20,(String *)&local_a8);
          pSVar22 = (String *)(param_3 + (param_1 + lVar17) * 0x60);
          if (cVar12 == '\0') break;
          if (*(long *)pSVar22 != *(long *)pSVar20) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22,(CowData *)pSVar20);
          }
          if (*(long *)((CowData<char32_t> *)pSVar22 + 8) != *(long *)(pSVar20 + 8)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 8,(CowData *)(pSVar20 + 8));
          }
          *(String *)((CowData<char32_t> *)pSVar22 + 0x10) = pSVar20[0x10];
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x18) != *(long *)(pSVar20 + 0x18)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x18,(CowData *)(pSVar20 + 0x18))
            ;
          }
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x20) != *(long *)(pSVar20 + 0x20)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x20,(CowData *)(pSVar20 + 0x20))
            ;
          }
          *(String *)((CowData<char32_t> *)pSVar22 + 0x28) = pSVar20[0x28];
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x30) != *(long *)(pSVar20 + 0x30)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x30,(CowData *)(pSVar20 + 0x30))
            ;
          }
          *(String *)((CowData<char32_t> *)pSVar22 + 0x38) = pSVar20[0x38];
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x40) != *(long *)(pSVar20 + 0x40)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x40,(CowData *)(pSVar20 + 0x40))
            ;
          }
          *(String *)((CowData<char32_t> *)pSVar22 + 0x48) = pSVar20[0x48];
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x50) != *(long *)(pSVar20 + 0x50)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x50,(CowData *)(pSVar20 + 0x50))
            ;
          }
          if (*(long *)((CowData<char32_t> *)pSVar22 + 0x58) != *(long *)(pSVar20 + 0x58)) {
            CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x58,(CowData *)(pSVar20 + 0x58))
            ;
          }
          lVar16 = (lVar19 + -1) - (lVar19 + -1 >> 0x3f);
          lVar17 = lVar19;
        }
      }
      else {
        pCVar14 = (CowData *)local_268;
        if (local_1e8 == local_278) goto LAB_001211c7;
        DocData::ConstantDoc::ConstantDoc((ConstantDoc *)&local_a8,local_218);
        pSVar22 = (String *)local_268;
      }
      DocData::ConstantDoc::operator=((ConstantDoc *)pSVar22,(ConstantDoc *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)alStack_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
      local_268 = local_268 + -0x60;
      local_1e8 = local_1e8 + -2;
      if (local_270 == 0) goto LAB_0012006a;
      local_270 = local_270 + -1;
    } while( true );
  }
LAB_00120c89:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011ffc0:
  DocData::ConstantDoc::~ConstantDoc((ConstantDoc *)&local_108);
  introsort(local_288,local_228,param_3,local_210);
  local_278 = local_288 - param_1;
  if (local_278 < 0x11) goto LAB_00120c89;
  local_228 = local_288;
  if (local_210 == 0) goto LAB_00120cc4;
  goto LAB_0011fa3f;
LAB_0012006a:
  pCVar14 = (CowData *)(param_3 + param_1 * 0x60);
  local_280 = (CowData<char32_t> *)(param_3 + local_288 * 0x60 + -0x60);
  local_278 = (local_288 + -1) - param_1;
  do {
    local_168 = 0;
    if (*(long *)local_280 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)local_280);
    }
    local_160 = 0;
    if (*(long *)(local_280 + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_160,(CowData *)(local_280 + 8));
    }
    local_150 = 0;
    local_158 = local_280[0x10];
    if (*(long *)(local_280 + 0x18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)(local_280 + 0x18));
    }
    local_148 = 0;
    if (*(long *)(local_280 + 0x20) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(local_280 + 0x20));
    }
    local_138 = 0;
    local_140 = local_280[0x28];
    if (*(long *)(local_280 + 0x30) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(local_280 + 0x30));
    }
    local_128 = 0;
    local_130 = local_280[0x38];
    if (*(long *)(local_280 + 0x40) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(local_280 + 0x40));
    }
    local_118 = 0;
    local_120 = local_280[0x48];
    if (*(long *)(local_280 + 0x50) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)(local_280 + 0x50));
    }
    local_110 = 0;
    local_268 = *(ConstantDoc **)(local_280 + 0x58);
    if (local_268 != (ConstantDoc *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)(local_280 + 0x58));
      local_268 = (ConstantDoc *)local_110;
    }
    if (*(long *)local_280 != *(long *)pCVar14) {
      CowData<char32_t>::_ref(local_280,pCVar14);
    }
    if (*(long *)(local_280 + 8) != *(long *)(pCVar14 + 8)) {
      CowData<char32_t>::_ref(local_280 + 8,pCVar14 + 8);
    }
    *(CowData *)(local_280 + 0x10) = pCVar14[0x10];
    if (*(long *)(local_280 + 0x18) != *(long *)(pCVar14 + 0x18)) {
      CowData<char32_t>::_ref(local_280 + 0x18,pCVar14 + 0x18);
    }
    if (*(long *)(local_280 + 0x20) != *(long *)(pCVar14 + 0x20)) {
      CowData<char32_t>::_ref(local_280 + 0x20,pCVar14 + 0x20);
    }
    lVar16 = *(long *)(pCVar14 + 0x30);
    *(CowData *)(local_280 + 0x28) = pCVar14[0x28];
    if (*(long *)(local_280 + 0x30) != lVar16) {
      CowData<char32_t>::_ref(local_280 + 0x30,pCVar14 + 0x30);
    }
    lVar16 = *(long *)(pCVar14 + 0x40);
    *(CowData *)(local_280 + 0x38) = pCVar14[0x38];
    if (*(long *)(local_280 + 0x40) != lVar16) {
      CowData<char32_t>::_ref(local_280 + 0x40,pCVar14 + 0x40);
    }
    lVar16 = *(long *)(pCVar14 + 0x50);
    *(CowData *)(local_280 + 0x48) = pCVar14[0x48];
    if (*(long *)(local_280 + 0x50) != lVar16) {
      CowData<char32_t>::_ref(local_280 + 0x50,pCVar14 + 0x50);
    }
    if (*(long *)(local_280 + 0x58) != *(long *)(pCVar14 + 0x58)) {
      CowData<char32_t>::_ref(local_280 + 0x58,pCVar14 + 0x58);
    }
    local_108 = 0;
    if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_218,(CowData *)&local_168);
    }
    local_100 = 0;
    if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)&local_160);
    }
    local_f0 = 0;
    local_f8 = local_158;
    if (local_150 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_150);
    }
    local_e8 = 0;
    if (local_148 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_148);
    }
    local_d8 = 0;
    local_e0 = local_140;
    if (local_138 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_138);
    }
    local_c8 = 0;
    local_d0 = local_130;
    if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_128);
    }
    local_b8 = 0;
    local_c0 = local_120;
    if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
    }
    local_b0 = 0;
    if (local_268 != (ConstantDoc *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_110);
      local_268 = (ConstantDoc *)local_b0;
    }
    if (local_278 < 3) {
      lVar19 = 0;
      lVar16 = 2;
      this_01 = pCVar14;
    }
    else {
      lVar16 = 2;
      lVar17 = 0;
      do {
        cVar12 = String::operator<((String *)(param_3 + (param_1 + lVar16) * 0x60),
                                   (String *)(param_3 + (param_1 + lVar16 + -1) * 0x60));
        lVar19 = lVar16 + -1;
        lVar18 = lVar16;
        this_01 = (CowData *)(param_3 + (param_1 + lVar16 + -1) * 0x60);
        if (cVar12 == '\0') {
          lVar18 = lVar16 + 1;
          lVar19 = lVar16;
          this_01 = (CowData *)(param_3 + (param_1 + lVar16) * 0x60);
        }
        pCVar21 = (CowData<char32_t> *)(param_3 + (lVar17 + param_1) * 0x60);
        if (*(long *)pCVar21 != *(long *)this_01) {
          CowData<char32_t>::_ref(pCVar21,this_01);
        }
        if (*(long *)(pCVar21 + 8) != *(long *)(this_01 + 8)) {
          CowData<char32_t>::_ref(pCVar21 + 8,this_01 + 8);
        }
        pCVar21[0x10] = *(CowData<char32_t> *)(this_01 + 0x10);
        if (*(long *)(pCVar21 + 0x18) != *(long *)(this_01 + 0x18)) {
          CowData<char32_t>::_ref(pCVar21 + 0x18,this_01 + 0x18);
        }
        if (*(long *)(pCVar21 + 0x20) != *(long *)(this_01 + 0x20)) {
          CowData<char32_t>::_ref(pCVar21 + 0x20,this_01 + 0x20);
        }
        pCVar21[0x28] = *(CowData<char32_t> *)(this_01 + 0x28);
        if (*(long *)(pCVar21 + 0x30) != *(long *)(this_01 + 0x30)) {
          CowData<char32_t>::_ref(pCVar21 + 0x30,this_01 + 0x30);
        }
        pCVar21[0x38] = *(CowData<char32_t> *)(this_01 + 0x38);
        if (*(long *)(pCVar21 + 0x40) != *(long *)(this_01 + 0x40)) {
          CowData<char32_t>::_ref(pCVar21 + 0x40,this_01 + 0x40);
        }
        pCVar21[0x48] = *(CowData<char32_t> *)(this_01 + 0x48);
        if (*(long *)(pCVar21 + 0x50) != *(long *)(this_01 + 0x50)) {
          CowData<char32_t>::_ref(pCVar21 + 0x50,this_01 + 0x50);
        }
        if (*(long *)(pCVar21 + 0x58) != *(long *)(this_01 + 0x58)) {
          CowData<char32_t>::_ref(pCVar21 + 0x58,this_01 + 0x58);
        }
        lVar16 = lVar18 * 2;
        lVar17 = lVar19;
      } while (local_278 != lVar16 && SBORROW8(local_278,lVar16) == local_278 + lVar18 * -2 < 0);
    }
    lVar17 = local_278 + -1;
    pSVar22 = (String *)this_01;
    if (local_278 == lVar16) {
      pSVar22 = (String *)(param_3 + (param_1 + lVar17) * 0x60);
      DocData::ConstantDoc::operator=((ConstantDoc *)this_01,(ConstantDoc *)pSVar22);
      lVar19 = lVar17;
    }
    local_a8 = 0;
    if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_218);
    }
    lStack_a0 = 0;
    if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_a0,(CowData *)&local_100);
    }
    local_90 = 0;
    local_98 = local_f8;
    if (local_f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
    }
    lStack_88 = 0;
    if (local_e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_88,(CowData *)&local_e8);
    }
    local_78 = 0;
    local_80 = local_e0;
    if (local_d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
    }
    local_68 = 0;
    local_70 = local_d0;
    if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
    }
    local_58 = 0;
    local_60 = local_c0;
    if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_b8);
    }
    alStack_50[0] = 0;
    if (local_268 != (ConstantDoc *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)alStack_50,(CowData *)&local_b0);
    }
    lVar16 = (lVar19 + -1) - (lVar19 + -1 >> 0x3f);
    while (lVar19 != 0) {
      lVar18 = lVar16 >> 1;
      pSVar20 = (String *)(param_3 + (param_1 + lVar18) * 0x60);
      cVar12 = String::operator<(pSVar20,(String *)&local_a8);
      pSVar22 = (String *)(param_3 + (param_1 + lVar19) * 0x60);
      if (cVar12 == '\0') break;
      if (*(long *)pSVar22 != *(long *)pSVar20) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22,(CowData *)pSVar20);
      }
      if (*(long *)((CowData<char32_t> *)pSVar22 + 8) != *(long *)(pSVar20 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 8,(CowData *)(pSVar20 + 8));
      }
      *(String *)((CowData<char32_t> *)pSVar22 + 0x10) = pSVar20[0x10];
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x18) != *(long *)(pSVar20 + 0x18)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x18,(CowData *)(pSVar20 + 0x18));
      }
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x20) != *(long *)(pSVar20 + 0x20)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x20,(CowData *)(pSVar20 + 0x20));
      }
      *(String *)((CowData<char32_t> *)pSVar22 + 0x28) = pSVar20[0x28];
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x30) != *(long *)(pSVar20 + 0x30)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x30,(CowData *)(pSVar20 + 0x30));
      }
      *(String *)((CowData<char32_t> *)pSVar22 + 0x38) = pSVar20[0x38];
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x40) != *(long *)(pSVar20 + 0x40)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x40,(CowData *)(pSVar20 + 0x40));
      }
      *(String *)((CowData<char32_t> *)pSVar22 + 0x48) = pSVar20[0x48];
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x50) != *(long *)(pSVar20 + 0x50)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x50,(CowData *)(pSVar20 + 0x50));
      }
      if (*(long *)((CowData<char32_t> *)pSVar22 + 0x58) != *(long *)(pSVar20 + 0x58)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x58,(CowData *)(pSVar20 + 0x58));
      }
      lVar16 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
      lVar19 = lVar18;
      pSVar22 = pSVar20;
    }
    if (*(long *)pSVar22 != local_a8) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22,(CowData *)&local_a8);
    }
    if (*(long *)((CowData<char32_t> *)pSVar22 + 8) != lStack_a0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 8,(CowData *)&lStack_a0);
    }
    ((CowData<char32_t> *)pSVar22)[0x10] = local_98;
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x18) != local_90) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x18,(CowData *)&local_90);
    }
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x20) != lStack_88) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x20,(CowData *)&lStack_88);
    }
    ((CowData<char32_t> *)pSVar22)[0x28] = local_80;
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x30) != local_78) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x30,(CowData *)&local_78);
    }
    ((CowData<char32_t> *)pSVar22)[0x38] = local_70;
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x40) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x40,(CowData *)&local_68);
    }
    ((CowData<char32_t> *)pSVar22)[0x48] = local_60;
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x50) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x50,(CowData *)&local_58);
    }
    if (*(long *)((CowData<char32_t> *)pSVar22 + 0x58) != alStack_50[0]) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pSVar22 + 0x58,(CowData *)alStack_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)alStack_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
    local_280 = local_280 + -0x60;
    bVar11 = 1 < local_278;
    local_278 = lVar17;
  } while (bVar11);
  goto LAB_00120c89;
}



/* SortArray<DocData::ThemeItemDoc, _DefaultComparator<DocData::ThemeItemDoc>,
   true>::adjust_heap(long, long, long, DocData::ThemeItemDoc, DocData::ThemeItemDoc*) const [clone
   .isra.0] */

void SortArray<DocData::ThemeItemDoc,_DefaultComparator<DocData::ThemeItemDoc>,true>::adjust_heap
               (long param_1,long param_2,long param_3,ThemeItemDoc *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  ThemeItemDoc *this;
  long lVar5;
  long lVar6;
  CowData *pCVar7;
  long in_FS_OFFSET;
  ThemeItemDoc *local_c0;
  ThemeItemDoc local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  CowData<char32_t> local_80 [16];
  CowData<char32_t> local_70 [16];
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [16];
  long local_40;
  
  lVar5 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (ThemeItemDoc *)param_2;
  if (lVar5 < param_3) {
    do {
      lVar3 = lVar5 + -1;
      this = (ThemeItemDoc *)((lVar3 + param_1) * 0x50 + param_5);
      pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 0x50);
      cVar2 = String::operator==(pSVar1 + 0x10,(String *)((CowData *)this + 0x10));
      if (cVar2 == '\0') {
        cVar2 = String::operator<(pSVar1 + 0x10,(String *)((CowData *)this + 0x10));
        if (cVar2 == '\0') {
LAB_0012142a:
          lVar3 = lVar5;
          this = (ThemeItemDoc *)pSVar1;
          lVar5 = lVar5 + 1;
        }
      }
      else {
        cVar2 = String::naturalcasecmp_to(pSVar1);
        if (-1 < cVar2) goto LAB_0012142a;
      }
      pCVar4 = (CowData<char32_t> *)(((long)local_c0 + param_1) * 0x50 + param_5);
      if (*(long *)pCVar4 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar4,(CowData *)this);
      }
      if (*(long *)(pCVar4 + 8) != *(long *)((CowData *)this + 8)) {
        CowData<char32_t>::_ref(pCVar4 + 8,(CowData *)this + 8);
      }
      if (*(long *)(pCVar4 + 0x10) != *(long *)((CowData *)this + 0x10)) {
        CowData<char32_t>::_ref(pCVar4 + 0x10,(CowData *)this + 0x10);
      }
      if (*(long *)(pCVar4 + 0x18) != *(long *)((CowData *)this + 0x18)) {
        CowData<char32_t>::_ref(pCVar4 + 0x18,(CowData *)this + 0x18);
      }
      pCVar4[0x20] = *(CowData<char32_t> *)((CowData *)this + 0x20);
      if (*(long *)(pCVar4 + 0x28) != *(long *)((CowData *)this + 0x28)) {
        CowData<char32_t>::_ref(pCVar4 + 0x28,(CowData *)this + 0x28);
      }
      pCVar4[0x30] = *(CowData<char32_t> *)((CowData *)this + 0x30);
      if (*(long *)(pCVar4 + 0x38) != *(long *)((CowData *)this + 0x38)) {
        CowData<char32_t>::_ref(pCVar4 + 0x38,(CowData *)this + 0x38);
      }
      if (*(long *)(pCVar4 + 0x40) != *(long *)((CowData *)this + 0x40)) {
        CowData<char32_t>::_ref(pCVar4 + 0x40,(CowData *)this + 0x40);
      }
      if (*(long *)(pCVar4 + 0x48) != *(long *)((CowData *)this + 0x48)) {
        CowData<char32_t>::_ref(pCVar4 + 0x48,(CowData *)this + 0x48);
      }
      lVar5 = lVar5 * 2;
      local_c0 = (ThemeItemDoc *)lVar3;
    } while (lVar5 < param_3);
    pCVar7 = (CowData *)this;
    if (lVar5 == param_3) goto LAB_00121680;
  }
  else {
    this = (ThemeItemDoc *)(param_5 + (param_2 + param_1) * 0x50);
    if (lVar5 != param_3) {
      DocData::ThemeItemDoc::ThemeItemDoc(local_98,param_4);
      goto LAB_001215d9;
    }
LAB_00121680:
    lVar3 = lVar5 + -1;
    pCVar7 = (CowData *)((param_1 + lVar3) * 0x50 + param_5);
    DocData::ThemeItemDoc::operator=(this,(ThemeItemDoc *)pCVar7);
  }
  DocData::ThemeItemDoc::ThemeItemDoc(local_98,param_4);
  lVar5 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  this = (ThemeItemDoc *)pCVar7;
  while (param_2 < lVar3) {
    lVar6 = lVar5 >> 1;
    this = (ThemeItemDoc *)(param_5 + (param_1 + lVar6) * 0x50);
    pSVar1 = (String *)this + 0x10;
    cVar2 = String::operator==(pSVar1,local_88);
    if (cVar2 == '\0') {
      cVar2 = String::operator<(pSVar1,local_88);
      if (cVar2 == '\0') {
        this = (ThemeItemDoc *)(param_5 + (param_1 + lVar3) * 0x50);
        break;
      }
    }
    else {
      cVar2 = String::naturalcasecmp_to((String *)this);
      if (-1 < cVar2) {
        this = (ThemeItemDoc *)(param_5 + (lVar3 + param_1) * 0x50);
        break;
      }
    }
    pCVar4 = (CowData<char32_t> *)((lVar3 + param_1) * 0x50 + param_5);
    if (*(long *)pCVar4 != *(long *)this) {
      CowData<char32_t>::_ref(pCVar4,(CowData *)this);
    }
    if (*(long *)(pCVar4 + 8) != *(long *)((String *)this + 8)) {
      CowData<char32_t>::_ref(pCVar4 + 8,(CowData *)((String *)this + 8));
    }
    if (*(long *)(pCVar4 + 0x10) != *(long *)((String *)this + 0x10)) {
      CowData<char32_t>::_ref(pCVar4 + 0x10,(CowData *)pSVar1);
    }
    if (*(long *)(pCVar4 + 0x18) != *(long *)((String *)this + 0x18)) {
      CowData<char32_t>::_ref(pCVar4 + 0x18,(CowData *)((String *)this + 0x18));
    }
    *(String *)(pCVar4 + 0x20) = ((String *)this)[0x20];
    if (*(long *)(pCVar4 + 0x28) != *(long *)((String *)this + 0x28)) {
      CowData<char32_t>::_ref(pCVar4 + 0x28,(CowData *)((String *)this + 0x28));
    }
    *(String *)(pCVar4 + 0x30) = ((String *)this)[0x30];
    if (*(long *)(pCVar4 + 0x38) != *(long *)((String *)this + 0x38)) {
      CowData<char32_t>::_ref(pCVar4 + 0x38,(CowData *)((String *)this + 0x38));
    }
    if (*(long *)(pCVar4 + 0x40) != *(long *)((String *)this + 0x40)) {
      CowData<char32_t>::_ref(pCVar4 + 0x40,(CowData *)((String *)this + 0x40));
    }
    if (*(long *)(pCVar4 + 0x48) != *(long *)((String *)this + 0x48)) {
      CowData<char32_t>::_ref(pCVar4 + 0x48,(CowData *)((String *)this + 0x48));
    }
    lVar5 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
    lVar3 = lVar6;
  }
LAB_001215d9:
  local_c0 = local_98;
  DocData::ThemeItemDoc::operator=(this,local_c0);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<DocData::ThemeItemDoc, _DefaultComparator<DocData::ThemeItemDoc>,
   true>::introsort(long, long, DocData::ThemeItemDoc*, long) const [clone .isra.0] */

void SortArray<DocData::ThemeItemDoc,_DefaultComparator<DocData::ThemeItemDoc>,true>::introsort
               (long param_1,long param_2,ThemeItemDoc *param_3,long param_4)

{
  String *pSVar1;
  String *pSVar2;
  CowData<char32_t> CVar3;
  CowData<char32_t> CVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  char cVar11;
  long lVar12;
  CowData *pCVar13;
  ThemeItemDoc *pTVar14;
  String *pSVar15;
  long lVar16;
  long lVar17;
  String *pSVar18;
  long lVar19;
  long lVar20;
  String *pSVar21;
  CowData<char32_t> *pCVar22;
  ThemeItemDoc *pTVar23;
  long in_FS_OFFSET;
  long local_270;
  CowData<char32_t> *local_268;
  long local_250;
  long local_248;
  long local_230;
  long local_208;
  long local_1f8;
  CowData<char32_t> *local_1e8;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  CowData<char32_t> local_118;
  long local_110;
  CowData<char32_t> local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  CowData<char32_t> local_c8;
  long local_c0;
  CowData<char32_t> local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  CowData<char32_t> local_78;
  long local_70;
  CowData<char32_t> local_68;
  long local_60;
  long lStack_58;
  long local_50 [2];
  long local_40;
  
  lVar17 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar17) {
    local_250 = param_2;
    if (param_4 != 0) {
      pSVar15 = (String *)(param_3 + param_1 * 0x50);
      pSVar1 = pSVar15 + 0x10;
      local_208 = param_2;
      local_1f8 = param_4;
LAB_001217a7:
      local_1f8 = local_1f8 + -1;
      pTVar23 = param_3 + local_208 * 0x50 + -0x50;
      pSVar18 = (String *)(param_3 + ((lVar17 >> 1) + param_1) * 0x50);
      pSVar21 = pSVar18 + 0x10;
      cVar11 = String::operator==(pSVar1,pSVar21);
      if (cVar11 == '\0') {
        cVar11 = String::operator<(pSVar1,pSVar21);
        if (cVar11 != '\0') goto LAB_00121811;
LAB_00121e02:
        pSVar2 = (String *)(pTVar23 + 0x10);
        cVar11 = String::operator==(pSVar1,pSVar2);
        pTVar14 = (ThemeItemDoc *)pSVar15;
        if (cVar11 == '\0') {
          cVar11 = String::operator<(pSVar1,pSVar2);
          if (cVar11 != '\0') goto LAB_0012183b;
        }
        else {
          cVar11 = String::naturalcasecmp_to(pSVar15);
          if (cVar11 < '\0') goto LAB_0012183b;
        }
        cVar11 = String::operator==(pSVar21,pSVar2);
        if (cVar11 == '\0') {
          cVar11 = String::operator<(pSVar21,pSVar2);
          goto joined_r0x00121d1c;
        }
        cVar11 = String::naturalcasecmp_to(pSVar18);
joined_r0x0012241b:
        pTVar14 = (ThemeItemDoc *)pSVar18;
        if (-1 < cVar11) goto LAB_0012183b;
      }
      else {
        cVar11 = String::naturalcasecmp_to(pSVar15);
        if (-1 < cVar11) goto LAB_00121e02;
LAB_00121811:
        pSVar2 = (String *)(pTVar23 + 0x10);
        cVar11 = String::operator==(pSVar21,pSVar2);
        pTVar14 = (ThemeItemDoc *)pSVar18;
        if (cVar11 == '\0') {
          cVar11 = String::operator<(pSVar21,pSVar2);
          if (cVar11 != '\0') goto LAB_0012183b;
        }
        else {
          cVar11 = String::naturalcasecmp_to(pSVar18);
          if (cVar11 < '\0') goto LAB_0012183b;
        }
        cVar11 = String::operator==(pSVar1,pSVar2);
        pSVar18 = pSVar15;
        if (cVar11 != '\0') {
          cVar11 = String::naturalcasecmp_to(pSVar15);
          goto joined_r0x0012241b;
        }
        cVar11 = String::operator<(pSVar1,pSVar2);
joined_r0x00121d1c:
        pTVar14 = (ThemeItemDoc *)pSVar18;
        if (cVar11 == '\0') goto LAB_0012183b;
      }
      pTVar14 = pTVar23;
LAB_0012183b:
      DocData::ThemeItemDoc::ThemeItemDoc((ThemeItemDoc *)&local_e8,pTVar14);
      lVar17 = local_208;
      pSVar21 = pSVar15;
      local_270 = param_1;
      do {
        local_250 = local_270;
        pSVar18 = pSVar21 + 0x10;
        cVar11 = String::operator==(pSVar18,(String *)&local_d8);
        if (cVar11 == '\0') {
          cVar11 = String::operator<(pSVar18,(String *)&local_d8);
          if (cVar11 == '\0') goto LAB_001218cd;
LAB_00121879:
          if (local_208 + -1 == local_270) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_001218cd;
          }
        }
        else {
          cVar11 = String::naturalcasecmp_to(pSVar21);
          if (cVar11 < '\0') goto LAB_00121879;
LAB_001218cd:
          lVar17 = lVar17 + -1;
          pTVar23 = param_3 + lVar17 * 0x50;
          while( true ) {
            pCVar22 = (CowData<char32_t> *)pTVar23 + 0x10;
            cVar11 = String::operator==((String *)&local_d8,(String *)pCVar22);
            if (cVar11 == '\0') {
              cVar11 = String::operator<((String *)&local_d8,(String *)pCVar22);
              if (cVar11 == '\0') goto joined_r0x00121941;
            }
            else {
              cVar11 = String::naturalcasecmp_to((String *)&local_e8);
              if (-1 < cVar11) goto joined_r0x00121941;
            }
            if (param_1 == lVar17) break;
            lVar17 = lVar17 + -1;
            pTVar23 = (ThemeItemDoc *)((CowData<char32_t> *)pTVar23 + -0x50);
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
joined_r0x00121941:
          if (lVar17 <= local_270) goto LAB_00121d65;
          lVar5 = *(long *)pSVar21;
          lVar12 = *(long *)(pSVar21 + 8);
          lVar20 = *(long *)(pSVar21 + 0x18);
          local_98 = *(long *)pSVar21;
          lStack_90 = *(long *)(pSVar21 + 8);
          *(undefined1 (*) [16])pSVar21 = (undefined1  [16])0x0;
          local_88 = *(long *)(pSVar21 + 0x10);
          lStack_80 = *(long *)(pSVar21 + 0x18);
          lVar6 = *(long *)(pSVar21 + 0x28);
          lVar7 = *(long *)(pSVar21 + 0x10);
          lVar19 = *(long *)(pSVar21 + 0x40);
          *(undefined8 *)(pSVar21 + 0x28) = 0;
          local_60 = *(long *)(pSVar21 + 0x38);
          lStack_58 = *(long *)(pSVar21 + 0x40);
          CVar3 = *(CowData<char32_t> *)(pSVar21 + 0x20);
          CVar4 = *(CowData<char32_t> *)(pSVar21 + 0x30);
          lVar8 = *(long *)(pSVar21 + 0x38);
          lVar9 = *(long *)(pSVar21 + 0x48);
          *(undefined1 (*) [16])(pSVar21 + 0x10) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pSVar21 + 0x38) = (undefined1  [16])0x0;
          *(undefined8 *)(pSVar21 + 0x48) = 0;
          lVar16 = *(long *)pTVar23;
          local_78 = CVar3;
          local_70 = lVar6;
          local_68 = CVar4;
          local_50[0] = lVar9;
          if (lVar16 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar21);
            *(undefined8 *)pSVar21 = *(undefined8 *)pTVar23;
            *(undefined8 *)pTVar23 = 0;
            lVar16 = *(long *)(pSVar21 + 8);
          }
          if (lVar16 != *(long *)((CowData<char32_t> *)pTVar23 + 8)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 8));
            *(undefined8 *)(pSVar21 + 8) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 8);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 8) = 0;
          }
          if (*(long *)(pSVar21 + 0x10) != *(long *)((CowData<char32_t> *)pTVar23 + 0x10)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar18);
            *(undefined8 *)(pSVar21 + 0x10) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x10);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x10) = 0;
          }
          if (*(long *)(pSVar21 + 0x18) != *(long *)((CowData<char32_t> *)pTVar23 + 0x18)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 0x18));
            *(undefined8 *)(pSVar21 + 0x18) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x18);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x18) = 0;
          }
          lVar16 = *(long *)((CowData<char32_t> *)pTVar23 + 0x28);
          pSVar21[0x20] = *(String *)((CowData<char32_t> *)pTVar23 + 0x20);
          if (*(long *)(pSVar21 + 0x28) != lVar16) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 0x28));
            *(undefined8 *)(pSVar21 + 0x28) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x28);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x28) = 0;
          }
          lVar16 = *(long *)((CowData<char32_t> *)pTVar23 + 0x38);
          pSVar21[0x30] = *(String *)((CowData<char32_t> *)pTVar23 + 0x30);
          if (*(long *)(pSVar21 + 0x38) != lVar16) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 0x38));
            *(undefined8 *)(pSVar21 + 0x38) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x38);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x38) = 0;
          }
          if (*(long *)(pSVar21 + 0x40) != *(long *)((CowData<char32_t> *)pTVar23 + 0x40)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 0x40));
            *(undefined8 *)(pSVar21 + 0x40) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x40);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x40) = 0;
          }
          if (*(long *)(pSVar21 + 0x48) != *(long *)((CowData<char32_t> *)pTVar23 + 0x48)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar21 + 0x48));
            *(undefined8 *)(pSVar21 + 0x48) = *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x48);
            *(undefined8 *)((CowData<char32_t> *)pTVar23 + 0x48) = 0;
          }
          if (lVar5 != *(long *)pTVar23) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23);
            local_98 = 0;
            *(long *)pTVar23 = lVar5;
          }
          if (lVar12 != *(long *)((CowData<char32_t> *)pTVar23 + 8)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 8);
            lStack_90 = 0;
            *(long *)((CowData<char32_t> *)pTVar23 + 8) = lVar12;
          }
          if (lVar7 != *(long *)((CowData<char32_t> *)pTVar23 + 0x10)) {
            CowData<char32_t>::_unref(pCVar22);
            local_88 = 0;
            *(long *)((CowData<char32_t> *)pTVar23 + 0x10) = lVar7;
          }
          if (lVar20 != *(long *)((CowData<char32_t> *)pTVar23 + 0x18)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 0x18);
            *(long *)((CowData<char32_t> *)pTVar23 + 0x18) = lVar20;
            lStack_80 = 0;
          }
          ((CowData<char32_t> *)pTVar23)[0x20] = CVar3;
          if (*(long *)((CowData<char32_t> *)pTVar23 + 0x28) != lVar6) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 0x28);
            *(long *)((CowData<char32_t> *)pTVar23 + 0x28) = lVar6;
            local_70 = 0;
          }
          ((CowData<char32_t> *)pTVar23)[0x30] = CVar4;
          if (lVar8 != *(long *)((CowData<char32_t> *)pTVar23 + 0x38)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 0x38);
            *(long *)((CowData<char32_t> *)pTVar23 + 0x38) = lVar8;
            local_60 = 0;
          }
          if (lVar19 != *(long *)((CowData<char32_t> *)pTVar23 + 0x40)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 0x40);
            *(long *)((CowData<char32_t> *)pTVar23 + 0x40) = lVar19;
            lStack_58 = 0;
          }
          if (*(long *)((CowData<char32_t> *)pTVar23 + 0x48) != lVar9) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pTVar23 + 0x48);
            *(long *)((CowData<char32_t> *)pTVar23 + 0x48) = lVar9;
            local_50[0] = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        local_270 = local_270 + 1;
        pSVar21 = pSVar21 + 0x50;
      } while( true );
    }
LAB_00122458:
    local_1e8 = (CowData<char32_t> *)&local_d8;
    local_268 = (CowData<char32_t> *)&local_e8;
    lVar12 = lVar17 + -2 >> 1;
    pTVar23 = param_3 + (param_1 + lVar12) * 0x50;
    while( true ) {
      DocData::ThemeItemDoc::ThemeItemDoc((ThemeItemDoc *)&local_98,pTVar23);
      adjust_heap(param_1,lVar12,lVar17,(ThemeItemDoc *)&local_98,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      pTVar23 = pTVar23 + -0x50;
    }
    pCVar13 = (CowData *)(param_3 + param_1 * 0x50);
    pTVar23 = param_3 + local_250 * 0x50 + -0x50;
    local_248 = (local_250 + -1) - param_1;
    do {
      local_138 = 0;
      if (*(long *)pTVar23 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)pTVar23);
      }
      local_130 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 8) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_130,(CowData *)((CowData<char32_t> *)pTVar23 + 8));
      }
      local_128 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x10) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_128,(CowData *)((CowData<char32_t> *)pTVar23 + 0x10))
        ;
      }
      local_120 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x18) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_120,(CowData *)((CowData<char32_t> *)pTVar23 + 0x18))
        ;
      }
      local_118 = ((CowData<char32_t> *)pTVar23)[0x20];
      local_110 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x28) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_110,(CowData *)((CowData<char32_t> *)pTVar23 + 0x28))
        ;
      }
      local_108 = ((CowData<char32_t> *)pTVar23)[0x30];
      local_100 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x38) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_100,(CowData *)((CowData<char32_t> *)pTVar23 + 0x38))
        ;
      }
      local_f8 = 0;
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x40) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_f8,(CowData *)((CowData<char32_t> *)pTVar23 + 0x40));
      }
      local_f0 = 0;
      local_230 = *(long *)((CowData<char32_t> *)pTVar23 + 0x48);
      if (local_230 != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_f0,(CowData *)((CowData<char32_t> *)pTVar23 + 0x48));
        local_230 = local_f0;
      }
      if (*(long *)pTVar23 != *(long *)pCVar13) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23,pCVar13);
      }
      if (*(long *)((CowData<char32_t> *)pTVar23 + 8) != *(long *)(pCVar13 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 8,pCVar13 + 8);
      }
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x10) != *(long *)(pCVar13 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x10,pCVar13 + 0x10);
      }
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x18) != *(long *)(pCVar13 + 0x18)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x18,pCVar13 + 0x18);
      }
      *(CowData *)((CowData<char32_t> *)pTVar23 + 0x20) = pCVar13[0x20];
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x28) != *(long *)(pCVar13 + 0x28)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x28,pCVar13 + 0x28);
      }
      *(CowData *)((CowData<char32_t> *)pTVar23 + 0x30) = pCVar13[0x30];
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x38) != *(long *)(pCVar13 + 0x38)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x38,pCVar13 + 0x38);
      }
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x40) != *(long *)(pCVar13 + 0x40)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x40,pCVar13 + 0x40);
      }
      if (*(long *)((CowData<char32_t> *)pTVar23 + 0x48) != *(long *)(pCVar13 + 0x48)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar23 + 0x48,pCVar13 + 0x48);
      }
      local_e8 = 0;
      if (local_138 != 0) {
        CowData<char32_t>::_ref(local_268,(CowData *)&local_138);
      }
      local_e0 = 0;
      if (local_130 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_130);
      }
      local_d8 = 0;
      if (local_128 != 0) {
        CowData<char32_t>::_ref(local_1e8,(CowData *)&local_128);
      }
      local_d0 = 0;
      if (local_120 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_120);
      }
      local_c0 = 0;
      local_c8 = local_118;
      if (local_110 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_110);
      }
      local_b0 = 0;
      local_b8 = local_108;
      if (local_100 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_100);
      }
      local_a8 = 0;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
      }
      local_a0 = 0;
      if (local_230 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_f0);
        local_230 = local_a0;
      }
      if (local_248 < 3) {
        lVar12 = 0;
        lVar17 = 2;
        pSVar15 = (String *)pCVar13;
      }
      else {
        local_250 = 0;
        lVar17 = 2;
        do {
          lVar12 = lVar17 + -1;
          pSVar15 = (String *)(param_3 + (param_1 + lVar12) * 0x50);
          pSVar1 = (String *)(param_3 + (param_1 + lVar17) * 0x50);
          cVar11 = String::operator==(pSVar1 + 0x10,(String *)((ThemeItemDoc *)pSVar15 + 0x10));
          lVar20 = lVar17;
          if (cVar11 == '\0') {
            cVar11 = String::operator<(pSVar1 + 0x10,(String *)((ThemeItemDoc *)pSVar15 + 0x10));
            if (cVar11 == '\0') {
LAB_00122c55:
              lVar12 = lVar17;
              lVar20 = lVar17 + 1;
              pSVar15 = pSVar1;
            }
          }
          else {
            cVar11 = String::naturalcasecmp_to(pSVar1);
            if (-1 < cVar11) goto LAB_00122c55;
          }
          pCVar22 = (CowData<char32_t> *)(param_3 + (local_250 + param_1) * 0x50);
          if (*(long *)pCVar22 != *(long *)pSVar15) {
            CowData<char32_t>::_ref(pCVar22,(CowData *)pSVar15);
          }
          if (*(long *)(pCVar22 + 8) != *(long *)((CowData *)pSVar15 + 8)) {
            CowData<char32_t>::_ref(pCVar22 + 8,(CowData *)pSVar15 + 8);
          }
          if (*(long *)(pCVar22 + 0x10) != *(long *)((CowData *)pSVar15 + 0x10)) {
            CowData<char32_t>::_ref(pCVar22 + 0x10,(CowData *)pSVar15 + 0x10);
          }
          if (*(long *)(pCVar22 + 0x18) != *(long *)((CowData *)pSVar15 + 0x18)) {
            CowData<char32_t>::_ref(pCVar22 + 0x18,(CowData *)pSVar15 + 0x18);
          }
          *(CowData *)(pCVar22 + 0x20) = ((CowData *)pSVar15)[0x20];
          if (*(long *)(pCVar22 + 0x28) != *(long *)((CowData *)pSVar15 + 0x28)) {
            CowData<char32_t>::_ref(pCVar22 + 0x28,(CowData *)pSVar15 + 0x28);
          }
          *(CowData *)(pCVar22 + 0x30) = ((CowData *)pSVar15)[0x30];
          if (*(long *)(pCVar22 + 0x38) != *(long *)((CowData *)pSVar15 + 0x38)) {
            CowData<char32_t>::_ref(pCVar22 + 0x38,(CowData *)pSVar15 + 0x38);
          }
          if (*(long *)(pCVar22 + 0x40) != *(long *)((CowData *)pSVar15 + 0x40)) {
            CowData<char32_t>::_ref(pCVar22 + 0x40,(CowData *)pSVar15 + 0x40);
          }
          if (*(long *)(pCVar22 + 0x48) != *(long *)((CowData *)pSVar15 + 0x48)) {
            CowData<char32_t>::_ref(pCVar22 + 0x48,(CowData *)pSVar15 + 0x48);
          }
          lVar17 = lVar20 * 2;
          local_250 = lVar12;
        } while (local_248 != lVar17 && SBORROW8(local_248,lVar17) == local_248 + lVar20 * -2 < 0);
      }
      lVar20 = local_248 + -1;
      pTVar14 = (ThemeItemDoc *)pSVar15;
      if (local_248 == lVar17) {
        pTVar14 = param_3 + (param_1 + lVar20) * 0x50;
        DocData::ThemeItemDoc::operator=((ThemeItemDoc *)pSVar15,pTVar14);
        lVar12 = lVar20;
      }
      local_98 = 0;
      if (local_e8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)local_268);
      }
      lStack_90 = 0;
      if (local_e0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_90,(CowData *)&local_e0);
      }
      local_88 = 0;
      if (local_d8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)local_1e8);
      }
      lStack_80 = 0;
      if (local_d0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_80,(CowData *)&local_d0);
      }
      local_70 = 0;
      local_78 = local_c8;
      if (local_c0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_c0);
      }
      local_60 = 0;
      local_68 = local_b8;
      if (local_b0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_b0);
      }
      lStack_58 = 0;
      if (local_a8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_58,(CowData *)&local_a8);
      }
      local_50[0] = 0;
      if (local_230 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)&local_a0);
      }
      lVar17 = (lVar12 + -1) - (lVar12 + -1 >> 0x3f);
      while (lVar12 != 0) {
        lVar19 = lVar17 >> 1;
        pTVar14 = param_3 + (param_1 + lVar19) * 0x50;
        pSVar1 = (String *)pTVar14 + 0x10;
        cVar11 = String::operator==(pSVar1,(String *)&local_88);
        if (cVar11 == '\0') {
          cVar11 = String::operator<(pSVar1,(String *)&local_88);
          if (cVar11 == '\0') {
LAB_00122186:
            pTVar14 = param_3 + (lVar12 + param_1) * 0x50;
            break;
          }
        }
        else {
          cVar11 = String::naturalcasecmp_to((String *)pTVar14);
          if (-1 < cVar11) goto LAB_00122186;
        }
        pCVar22 = (CowData<char32_t> *)(param_3 + (lVar12 + param_1) * 0x50);
        if (*(long *)pCVar22 != *(long *)pTVar14) {
          CowData<char32_t>::_ref(pCVar22,(CowData *)pTVar14);
        }
        if (*(long *)(pCVar22 + 8) != *(long *)((String *)pTVar14 + 8)) {
          CowData<char32_t>::_ref(pCVar22 + 8,(CowData *)((String *)pTVar14 + 8));
        }
        if (*(long *)(pCVar22 + 0x10) != *(long *)((String *)pTVar14 + 0x10)) {
          CowData<char32_t>::_ref(pCVar22 + 0x10,(CowData *)pSVar1);
        }
        if (*(long *)(pCVar22 + 0x18) != *(long *)((String *)pTVar14 + 0x18)) {
          CowData<char32_t>::_ref(pCVar22 + 0x18,(CowData *)((String *)pTVar14 + 0x18));
        }
        *(String *)(pCVar22 + 0x20) = ((String *)pTVar14)[0x20];
        if (*(long *)(pCVar22 + 0x28) != *(long *)((String *)pTVar14 + 0x28)) {
          CowData<char32_t>::_ref(pCVar22 + 0x28,(CowData *)((String *)pTVar14 + 0x28));
        }
        *(String *)(pCVar22 + 0x30) = ((String *)pTVar14)[0x30];
        if (*(long *)(pCVar22 + 0x38) != *(long *)((String *)pTVar14 + 0x38)) {
          CowData<char32_t>::_ref(pCVar22 + 0x38,(CowData *)((String *)pTVar14 + 0x38));
        }
        if (*(long *)(pCVar22 + 0x40) != *(long *)((String *)pTVar14 + 0x40)) {
          CowData<char32_t>::_ref(pCVar22 + 0x40,(CowData *)((String *)pTVar14 + 0x40));
        }
        if (*(long *)(pCVar22 + 0x48) != *(long *)((String *)pTVar14 + 0x48)) {
          CowData<char32_t>::_ref(pCVar22 + 0x48,(CowData *)((String *)pTVar14 + 0x48));
        }
        lVar17 = (lVar19 + -1) - (lVar19 + -1 >> 0x3f);
        lVar12 = lVar19;
      }
      if (*(long *)pTVar14 != local_98) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14,(CowData *)&local_98);
      }
      if (*(long *)((CowData<char32_t> *)pTVar14 + 8) != lStack_90) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 8,(CowData *)&lStack_90);
      }
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x10) != local_88) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x10,(CowData *)&local_88);
      }
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x18) != lStack_80) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x18,(CowData *)&lStack_80);
      }
      ((CowData<char32_t> *)pTVar14)[0x20] = local_78;
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x28) != local_70) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x28,(CowData *)&local_70);
      }
      ((CowData<char32_t> *)pTVar14)[0x30] = local_68;
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x38) != local_60) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x38,(CowData *)&local_60);
      }
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x40) != lStack_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x40,(CowData *)&lStack_58);
      }
      if (*(long *)((CowData<char32_t> *)pTVar14 + 0x48) != local_50[0]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pTVar14 + 0x48,(CowData *)local_50);
      }
      pTVar23 = (ThemeItemDoc *)((CowData<char32_t> *)pTVar23 + -0x50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref(local_1e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref(local_268);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      bVar10 = 1 < local_248;
      local_248 = lVar20;
    } while (bVar10);
  }
LAB_001223e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00121d65:
  DocData::ThemeItemDoc::~ThemeItemDoc((ThemeItemDoc *)&local_e8);
  introsort(local_270,local_208,param_3,local_1f8);
  lVar17 = local_270 - param_1;
  if (lVar17 < 0x11) goto LAB_001223e0;
  if (local_1f8 == 0) goto LAB_00122458;
  local_208 = local_270;
  goto LAB_001217a7;
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<String, DocData::ClassDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::ClassDoc> > >::_lookup_pos(String const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
::_lookup_pos(HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
              *this,String *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* void List<PropertyInfo, DefaultAllocator>::sort_custom<Comparator<PropertyInfo> >() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::sort_custom<Comparator<PropertyInfo>>
          (List<PropertyInfo,DefaultAllocator> *this)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  Element *pEVar4;
  Element **__src;
  Element **ppEVar5;
  Element *pEVar6;
  Element **ppEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar4 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar4 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar4;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = __src;
    for (pEVar9 = (Element *)**(long **)this; pEVar9 != (Element *)0x0;
        pEVar9 = *(Element **)(pEVar9 + 0x30)) {
      *ppEVar5 = pEVar9;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar8 = 0;
  pEVar9 = pEVar4;
  do {
    pEVar9 = (Element *)((long)pEVar9 >> 1);
    lVar8 = lVar8 + 1;
  } while (pEVar9 != (Element *)0x1);
  SortArray<List<PropertyInfo,DefaultAllocator>::Element*,List<PropertyInfo,DefaultAllocator>::AuxiliaryComparator<Comparator<PropertyInfo>>,true>
  ::introsort(0,(long)pEVar4,__src,lVar8 * 2);
  if ((long)pEVar4 < 0x11) {
    pEVar9 = (Element *)0x1;
    pEVar6 = *__src;
    do {
      while( true ) {
        pEVar11 = __src[(long)pEVar9];
        ppEVar5 = __src + (long)pEVar9;
        cVar3 = String::operator<((String *)(pEVar11 + 8),(String *)(pEVar6 + 8));
        if (cVar3 != '\0') break;
        while (cVar3 = String::operator<((String *)(pEVar11 + 8),(String *)(ppEVar5[-1] + 8)),
              cVar3 != '\0') {
          if (ppEVar5 == __src + 1) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar11;
        pEVar9 = pEVar9 + 1;
        pEVar11 = *__src;
        pEVar6 = pEVar11;
        if (pEVar4 == pEVar9) goto LAB_00123749;
      }
      __n = (long)pEVar9 * 8;
      pEVar9 = pEVar9 + 1;
      memmove(__src + 1,__src,__n);
      *__src = pEVar11;
      pEVar6 = pEVar11;
    } while (pEVar4 != pEVar9);
  }
  else {
    lVar8 = 1;
    do {
      while( true ) {
        lVar10 = lVar8;
        pEVar9 = __src[lVar10];
        cVar3 = String::operator<((String *)(pEVar9 + 8),(String *)(*__src + 8));
        if (cVar3 != '\0') break;
        ppEVar5 = __src + lVar10;
        while (cVar3 = String::operator<((String *)(pEVar9 + 8),(String *)(ppEVar5[-1] + 8)),
              cVar3 != '\0') {
          if (ppEVar5 + -1 == __src) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          *ppEVar5 = ppEVar5[-1];
          ppEVar5 = ppEVar5 + -1;
        }
        *ppEVar5 = pEVar9;
        lVar8 = lVar10 + 1;
        if (lVar10 + 1 == 0x10) goto LAB_001235be;
      }
      memmove(__src + 1,__src,lVar10 * 8);
      *__src = pEVar9;
      lVar8 = lVar10 + 1;
    } while (lVar10 + 1 != 0x10);
LAB_001235be:
    pEVar9 = (Element *)(lVar10 + 1);
    do {
      pEVar6 = __src[(long)pEVar9];
      ppEVar5 = __src + (long)pEVar9;
      pEVar11 = pEVar9;
      while( true ) {
        pEVar11 = pEVar11 + -1;
        cVar3 = String::operator<((String *)(pEVar6 + 8),(String *)(ppEVar5[-1] + 8));
        if (cVar3 == '\0') break;
        if (pEVar11 == (Element *)0x0) {
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          break;
        }
        *ppEVar5 = ppEVar5[-1];
        ppEVar5 = ppEVar5 + -1;
      }
      *ppEVar5 = pEVar6;
      pEVar9 = pEVar9 + 1;
    } while (pEVar4 != pEVar9);
    pEVar11 = *__src;
  }
LAB_00123749:
  puVar2 = *(undefined8 **)this;
  *puVar2 = pEVar11;
  *(undefined8 *)(pEVar11 + 0x38) = 0;
  *(Element **)(*__src + 0x30) = __src[1];
  pEVar9 = __src[(long)(pEVar4 + -1)];
  puVar2[1] = pEVar9;
  *(Element **)(pEVar9 + 0x38) = __src[(long)(pEVar4 + -2)];
  *(undefined8 *)(__src[(long)(pEVar4 + -1)] + 0x30) = 0;
  if (iVar1 != 2) {
    ppEVar5 = __src;
    do {
      ppEVar7 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x38) = *ppEVar5;
      *(Element **)(*ppEVar7 + 0x30) = ppEVar5[2];
      ppEVar5 = ppEVar7;
    } while (__src + (iVar1 - 2) != ppEVar7);
  }
  Memory::free_static(__src,true);
  return;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar4;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x80) == plVar4) {
      lVar3 = *(long *)(this_00 + 0x70);
      lVar2 = *(long *)(this_00 + 0x78);
      *plVar4 = lVar3;
      if (this_00 == (CowData<char32_t> *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x70) = lVar3;
        lVar3 = *(long *)(this_00 + 0x70);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x78) = lVar2;
      }
      if (*(long *)(this_00 + 0x68) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(this_00 + 0x68) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(this_00 + 0x68);
          *(undefined8 *)(this_00 + 0x68) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      CowData<Variant>::_unref((CowData<Variant> *)(this_00 + 0x50));
      List<PropertyInfo,DefaultAllocator>::~List
                ((List<PropertyInfo,DefaultAllocator> *)(this_00 + 0x40));
      CowData<char32_t>::_unref(this_00 + 0x28);
      if ((StringName::configured != '\0') && (*(long *)(this_00 + 0x18) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00123de0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_00123de0;
  if (param_1 <= lVar9) {
    puVar5 = *(undefined8 **)this;
    if (uVar4 + 1 != lVar3) {
      puVar5 = puVar5 + -2;
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5,uVar4 + 0x11,false);
      if (puVar6 != (undefined8 *)0x0) {
        puVar5 = puVar6 + 2;
        *puVar6 = 1;
        *(undefined8 **)this = puVar5;
        goto LAB_00123cce;
      }
      uVar7 = _realloc((long)puVar5);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      puVar5 = *(undefined8 **)this;
    }
    if (puVar5 != (undefined8 *)0x0) {
LAB_00123cce:
      puVar5[-1] = param_1;
      return 0;
    }
    goto LAB_00123d31;
  }
  if (uVar4 + 1 == lVar3) {
LAB_00123d28:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00123d31:
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    if (lVar9 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      pvVar8 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar8,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar7 = _realloc((long)pvVar8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        goto LAB_00123d28;
      }
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Error>::resize<false>(long) */

undefined8 __thiscall CowData<Error>::resize<false>(CowData<Error> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  
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
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_001240a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  if (uVar4 == 0xffffffffffffffff) goto LAB_001240a0;
  if (param_1 <= lVar9) {
    puVar5 = *(undefined8 **)this;
    if (uVar4 + 1 != lVar3) {
      puVar5 = puVar5 + -2;
      puVar6 = (undefined8 *)Memory::realloc_static(puVar5,uVar4 + 0x11,false);
      if (puVar6 != (undefined8 *)0x0) {
        puVar5 = puVar6 + 2;
        *puVar6 = 1;
        *(undefined8 **)this = puVar5;
        goto LAB_00123f8e;
      }
      uVar7 = CowData<int>::_realloc((long)puVar5);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      puVar5 = *(undefined8 **)this;
    }
    if (puVar5 != (undefined8 *)0x0) {
LAB_00123f8e:
      puVar5[-1] = param_1;
      return 0;
    }
    goto LAB_00123ff1;
  }
  if (uVar4 + 1 == lVar3) {
LAB_00123fe8:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00123ff1:
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    if (lVar9 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      *puVar5 = 1;
      puVar5[1] = 0;
    }
    else {
      pvVar8 = (void *)(*(long *)this + -0x10);
      puVar5 = (undefined8 *)Memory::realloc_static(pvVar8,uVar4 + 0x11,false);
      if (puVar5 == (undefined8 *)0x0) {
        uVar7 = CowData<int>::_realloc((long)pvVar8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        goto LAB_00123fe8;
      }
      *puVar5 = 1;
    }
    puVar5 = puVar5 + 2;
    *(undefined8 **)this = puVar5;
  }
  puVar5[-1] = param_1;
  return 0;
}



/* CowData<DocData::ArgumentDoc>::_unref() */

void __thiscall CowData<DocData::ArgumentDoc>::_unref(CowData<DocData::ArgumentDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* DocData::MethodDoc::~MethodDoc() */

void __thiscall DocData::MethodDoc::~MethodDoc(MethodDoc *this)

{
  long *plVar1;
  long lVar2;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x70));
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this + 0x58));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* DocData::MethodDoc::MethodDoc(DocData::MethodDoc const&) */

void __thiscall DocData::MethodDoc::MethodDoc(MethodDoc *this,MethodDoc *param_1)

{
  MethodDoc MVar1;
  long lVar2;
  
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  MVar1 = param_1[0x18];
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  this[0x18] = MVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x28),(CowData *)(param_1 + 0x28));
  }
  MVar1 = param_1[0x30];
  *(undefined8 *)(this + 0x38) = 0;
  lVar2 = *(long *)(param_1 + 0x38);
  this[0x30] = MVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x38),(CowData *)(param_1 + 0x38));
  }
  MVar1 = param_1[0x40];
  *(undefined8 *)(this + 0x48) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  this[0x40] = MVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x48),(CowData *)(param_1 + 0x48));
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    CowData<DocData::ArgumentDoc>::_ref
              ((CowData<DocData::ArgumentDoc> *)(this + 0x58),(CowData *)(param_1 + 0x58));
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    CowData<int>::_ref((CowData<int> *)(this + 0x68),(CowData *)(param_1 + 0x68));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)(param_1 + 0x70));
    return;
  }
  return;
}



/* SortArray<DocData::MethodDoc, MethodCompare, true>::introsort(long, long, DocData::MethodDoc*,
   long) const [clone .isra.0] */

void SortArray<DocData::MethodDoc,MethodCompare,true>::introsort
               (long param_1,long param_2,MethodDoc *param_3,long param_4)

{
  long *plVar1;
  String *pSVar2;
  CowData<char32_t> *this;
  CowData<char32_t> CVar3;
  CowData<char32_t> CVar4;
  CowData<char32_t> CVar5;
  char cVar6;
  CowData<char32_t> *pCVar7;
  String *pSVar8;
  long lVar9;
  String *pSVar10;
  MethodDoc *pMVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  CowData *pCVar15;
  long in_FS_OFFSET;
  long local_300;
  long local_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  MethodDoc *local_2d8;
  long local_2d0;
  long local_2c0;
  long local_2b8;
  long local_298;
  MethodDoc *local_290;
  long local_288;
  MethodDoc local_1b8 [8];
  CowData<char32_t> local_1b0 [8];
  CowData<char32_t> local_1a8 [16];
  CowData<char32_t> local_198 [8];
  CowData<char32_t> local_190 [16];
  CowData<char32_t> local_180 [16];
  CowData<char32_t> local_170 [16];
  CowData<DocData::ArgumentDoc> local_160 [16];
  long local_150;
  CowData<char32_t> local_148 [16];
  MethodDoc local_138 [8];
  CowData<char32_t> local_130 [8];
  CowData<char32_t> local_128 [16];
  CowData<char32_t> local_118 [8];
  CowData<char32_t> local_110 [16];
  CowData<char32_t> local_100 [16];
  CowData<char32_t> local_f0 [16];
  CowData<DocData::ArgumentDoc> local_e0 [16];
  long local_d0;
  CowData<char32_t> local_c8 [16];
  long local_b8;
  long lStack_b0;
  long local_a8;
  CowData<char32_t> local_a0;
  long local_98;
  long lStack_90;
  CowData<char32_t> local_88;
  long local_80;
  CowData<char32_t> local_78;
  long local_70 [2];
  long local_60 [2];
  long local_50;
  long lStack_48;
  long local_40;
  
  local_2f8 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < local_2f8) {
    if (param_4 != 0) {
      pSVar2 = (String *)(param_3 + param_1 * 0x78);
      local_298 = param_2;
      local_288 = param_4;
LAB_001244b5:
      local_288 = local_288 + -1;
      pSVar10 = (String *)(param_3 + ((local_2f8 >> 1) + param_1) * 0x78);
      cVar6 = String::naturalcasecmp_to(pSVar2);
      if (cVar6 < '\0') {
        cVar6 = String::naturalcasecmp_to(pSVar10);
        pSVar8 = pSVar10;
        if (cVar6 < '\0') goto LAB_00124531;
        cVar6 = String::naturalcasecmp_to(pSVar2);
        pSVar10 = pSVar2;
      }
      else {
        cVar6 = String::naturalcasecmp_to(pSVar2);
        pSVar8 = pSVar2;
        if (cVar6 < '\0') goto LAB_00124531;
        cVar6 = String::naturalcasecmp_to(pSVar10);
      }
      pSVar8 = pSVar10;
      if (cVar6 < '\0') {
        pSVar8 = (String *)(param_3 + local_298 * 0x78 + -0x78);
      }
LAB_00124531:
      DocData::MethodDoc::MethodDoc(local_138,(MethodDoc *)pSVar8);
      pSVar10 = pSVar2;
      lVar12 = local_298;
      local_300 = param_1;
      do {
        cVar6 = String::naturalcasecmp_to(pSVar10);
        if (cVar6 < '\0') {
          if (local_298 + -1 == local_300) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00124568;
          }
        }
        else {
LAB_00124568:
          lVar12 = lVar12 + -1;
          pCVar7 = (CowData<char32_t> *)(param_3 + lVar12 * 0x78);
          while (cVar6 = String::naturalcasecmp_to((String *)local_138), cVar6 < '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pCVar7 = pCVar7 + -0x78;
          }
          if (lVar12 <= local_300) goto LAB_00124c00;
          local_2f0 = *(long *)pSVar10;
          local_2d0 = *(long *)(pSVar10 + 8);
          local_b8 = *(long *)pSVar10;
          lStack_b0 = *(long *)(pSVar10 + 8);
          lVar13 = *(long *)(pSVar10 + 0x38);
          *(undefined1 (*) [16])pSVar10 = (undefined1  [16])0x0;
          local_2e8 = *(long *)(pSVar10 + 0x10);
          local_2d8 = *(MethodDoc **)(pSVar10 + 0x28);
          local_98 = *(long *)(pSVar10 + 0x20);
          lStack_90 = *(long *)(pSVar10 + 0x28);
          *(undefined8 *)(pSVar10 + 0x10) = 0;
          CVar3 = *(CowData<char32_t> *)(pSVar10 + 0x18);
          local_2e0 = *(long *)(pSVar10 + 0x20);
          *(undefined8 *)(pSVar10 + 0x38) = 0;
          CVar4 = *(CowData<char32_t> *)(pSVar10 + 0x30);
          CVar5 = *(CowData<char32_t> *)(pSVar10 + 0x40);
          local_2c0 = *(long *)(pSVar10 + 0x48);
          *(undefined1 (*) [16])(pSVar10 + 0x20) = (undefined1  [16])0x0;
          local_2b8 = *(long *)(pSVar10 + 0x58);
          *(undefined8 *)(pSVar10 + 0x48) = 0;
          local_50 = *(long *)(pSVar10 + 0x68);
          lStack_48 = *(long *)(pSVar10 + 0x70);
          local_2f8 = *(long *)(pSVar10 + 0x68);
          *(undefined1 (*) [16])(pSVar10 + 0x68) = (undefined1  [16])0x0;
          lVar9 = *(long *)pCVar7;
          *(undefined8 *)(pSVar10 + 0x58) = 0;
          local_a8 = local_2e8;
          local_a0 = CVar3;
          local_88 = CVar4;
          local_80 = lVar13;
          local_78 = CVar5;
          local_70[0] = local_2c0;
          local_60[0] = local_2b8;
          if (lVar9 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar10);
            *(undefined8 *)pSVar10 = *(undefined8 *)pCVar7;
            *(undefined8 *)pCVar7 = 0;
            lVar9 = *(long *)(pSVar10 + 8);
          }
          if (lVar9 != *(long *)(pCVar7 + 8)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 8));
            *(undefined8 *)(pSVar10 + 8) = *(undefined8 *)(pCVar7 + 8);
            *(undefined8 *)(pCVar7 + 8) = 0;
          }
          if (*(long *)(pSVar10 + 0x10) != *(long *)(pCVar7 + 0x10)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x10));
            *(undefined8 *)(pSVar10 + 0x10) = *(undefined8 *)(pCVar7 + 0x10);
            *(undefined8 *)(pCVar7 + 0x10) = 0;
          }
          *(CowData<char32_t> *)(pSVar10 + 0x18) = pCVar7[0x18];
          if (*(long *)(pSVar10 + 0x20) != *(long *)(pCVar7 + 0x20)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x20));
            *(undefined8 *)(pSVar10 + 0x20) = *(undefined8 *)(pCVar7 + 0x20);
            *(undefined8 *)(pCVar7 + 0x20) = 0;
          }
          if (*(long *)(pSVar10 + 0x28) != *(long *)(pCVar7 + 0x28)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x28));
            *(undefined8 *)(pSVar10 + 0x28) = *(undefined8 *)(pCVar7 + 0x28);
            *(undefined8 *)(pCVar7 + 0x28) = 0;
          }
          *(CowData<char32_t> *)(pSVar10 + 0x30) = pCVar7[0x30];
          if (*(long *)(pSVar10 + 0x38) != *(long *)(pCVar7 + 0x38)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x38));
            *(undefined8 *)(pSVar10 + 0x38) = *(undefined8 *)(pCVar7 + 0x38);
            *(undefined8 *)(pCVar7 + 0x38) = 0;
          }
          *(CowData<char32_t> *)(pSVar10 + 0x40) = pCVar7[0x40];
          if (*(long *)(pSVar10 + 0x48) != *(long *)(pCVar7 + 0x48)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x48));
            *(undefined8 *)(pSVar10 + 0x48) = *(undefined8 *)(pCVar7 + 0x48);
            *(undefined8 *)(pCVar7 + 0x48) = 0;
          }
          if (*(long *)(pSVar10 + 0x58) != *(long *)(pCVar7 + 0x58)) {
            CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(pSVar10 + 0x58))
            ;
            *(undefined8 *)(pSVar10 + 0x58) = *(undefined8 *)(pCVar7 + 0x58);
            *(undefined8 *)(pCVar7 + 0x58) = 0;
          }
          lVar9 = *(long *)(pSVar10 + 0x68);
          lVar14 = *(long *)(pCVar7 + 0x68);
          if (lVar9 != lVar14) {
            if (lVar9 != 0) {
              LOCK();
              plVar1 = (long *)(lVar9 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar13 = *(long *)(pSVar10 + 0x68);
                *(undefined8 *)(pSVar10 + 0x68) = 0;
                Memory::free_static((void *)(lVar13 + -0x10),false);
              }
              else {
                *(undefined8 *)(pSVar10 + 0x68) = 0;
              }
              lVar14 = *(long *)(pCVar7 + 0x68);
              local_2f8 = local_50;
              local_2b8 = local_60[0];
              local_2c0 = local_70[0];
              local_2d8 = (MethodDoc *)lStack_90;
              local_2e0 = local_98;
              local_2e8 = local_a8;
              local_2d0 = lStack_b0;
              local_2f0 = local_b8;
              lVar13 = local_80;
              CVar3 = local_a0;
              CVar4 = local_88;
              CVar5 = local_78;
            }
            *(long *)(pSVar10 + 0x68) = lVar14;
            *(undefined8 *)(pCVar7 + 0x68) = 0;
          }
          if (*(long *)(pSVar10 + 0x70) != *(long *)(pCVar7 + 0x70)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar10 + 0x70));
            *(undefined8 *)(pSVar10 + 0x70) = *(undefined8 *)(pCVar7 + 0x70);
            *(undefined8 *)(pCVar7 + 0x70) = 0;
          }
          if (local_2f0 != *(long *)pCVar7) {
            CowData<char32_t>::_unref(pCVar7);
            local_b8 = 0;
            *(long *)pCVar7 = local_2f0;
          }
          if (*(long *)(pCVar7 + 8) != local_2d0) {
            CowData<char32_t>::_unref(pCVar7 + 8);
            lStack_b0 = 0;
            *(long *)(pCVar7 + 8) = local_2d0;
          }
          if (local_2e8 != *(long *)(pCVar7 + 0x10)) {
            CowData<char32_t>::_unref(pCVar7 + 0x10);
            local_a8 = 0;
            *(long *)(pCVar7 + 0x10) = local_2e8;
          }
          pCVar7[0x18] = CVar3;
          if (local_2e0 != *(long *)(pCVar7 + 0x20)) {
            CowData<char32_t>::_unref(pCVar7 + 0x20);
            local_98 = 0;
            *(long *)(pCVar7 + 0x20) = local_2e0;
          }
          if (local_2d8 != (MethodDoc *)*(long *)(pCVar7 + 0x28)) {
            CowData<char32_t>::_unref(pCVar7 + 0x28);
            lStack_90 = 0;
            *(MethodDoc **)(pCVar7 + 0x28) = local_2d8;
          }
          pCVar7[0x30] = CVar4;
          if (*(long *)(pCVar7 + 0x38) != lVar13) {
            CowData<char32_t>::_unref(pCVar7 + 0x38);
            *(long *)(pCVar7 + 0x38) = lVar13;
            local_80 = 0;
          }
          pCVar7[0x40] = CVar5;
          if (local_2c0 != *(long *)(pCVar7 + 0x48)) {
            CowData<char32_t>::_unref(pCVar7 + 0x48);
            *(long *)(pCVar7 + 0x48) = local_2c0;
            local_70[0] = 0;
          }
          if (local_2b8 != *(long *)(pCVar7 + 0x58)) {
            CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(pCVar7 + 0x58));
            *(long *)(pCVar7 + 0x58) = local_2b8;
            local_60[0] = 0;
          }
          lVar13 = *(long *)(pCVar7 + 0x68);
          if (local_2f8 != lVar13) {
            if (lVar13 != 0) {
              LOCK();
              plVar1 = (long *)(lVar13 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar13 = *(long *)(pCVar7 + 0x68);
                *(undefined8 *)(pCVar7 + 0x68) = 0;
                Memory::free_static((void *)(lVar13 + -0x10),false);
              }
              local_2f8 = local_50;
            }
            local_50 = 0;
            *(long *)(pCVar7 + 0x68) = local_2f8;
          }
          lVar13 = lStack_48;
          if (*(long *)(pCVar7 + 0x70) != lStack_48) {
            CowData<char32_t>::_unref(pCVar7 + 0x70);
            *(long *)(pCVar7 + 0x70) = lVar13;
            lStack_48 = 0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_48);
          if (local_50 != 0) {
            LOCK();
            plVar1 = (long *)(local_50 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_50 + -0x10),false);
            }
          }
          CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        local_300 = local_300 + 1;
        pSVar10 = pSVar10 + 0x78;
      } while( true );
    }
LAB_00125704:
    local_290 = local_138;
    local_2e8 = local_2f8 + -2 >> 1;
    local_2d8 = param_3 + (param_1 + local_2e8) * 0x78;
    local_2e0 = local_2e8 * 2 + 2;
    do {
      DocData::MethodDoc::MethodDoc(local_290,local_2d8);
      lVar12 = local_2e0;
      if (local_2e0 < local_2f8) {
        local_300 = local_2e8;
        do {
          cVar6 = String::naturalcasecmp_to((String *)(param_3 + (param_1 + lVar12) * 0x78));
          lVar9 = lVar12;
          lVar13 = lVar12 + -1;
          pMVar11 = param_3 + (param_1 + lVar12 + -1) * 0x78;
          if (-1 < cVar6) {
            lVar9 = lVar12 + 1;
            lVar13 = lVar12;
            pMVar11 = param_3 + (param_1 + lVar12) * 0x78;
          }
          pCVar7 = (CowData<char32_t> *)(param_3 + (local_300 + param_1) * 0x78);
          if (*(long *)pCVar7 != *(long *)pMVar11) {
            CowData<char32_t>::_ref(pCVar7,(CowData *)pMVar11);
          }
          if (*(long *)(pCVar7 + 8) != *(long *)((CowData *)pMVar11 + 8)) {
            CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)pMVar11 + 8);
          }
          if (*(long *)(pCVar7 + 0x10) != *(long *)((CowData *)pMVar11 + 0x10)) {
            CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)pMVar11 + 0x10);
          }
          pCVar7[0x18] = *(CowData<char32_t> *)((CowData *)pMVar11 + 0x18);
          if (*(long *)(pCVar7 + 0x20) != *(long *)((CowData *)pMVar11 + 0x20)) {
            CowData<char32_t>::_ref(pCVar7 + 0x20,(CowData *)pMVar11 + 0x20);
          }
          if (*(long *)(pCVar7 + 0x28) != *(long *)((CowData *)pMVar11 + 0x28)) {
            CowData<char32_t>::_ref(pCVar7 + 0x28,(CowData *)pMVar11 + 0x28);
          }
          pCVar7[0x30] = *(CowData<char32_t> *)((CowData *)pMVar11 + 0x30);
          if (*(long *)(pCVar7 + 0x38) != *(long *)((CowData *)pMVar11 + 0x38)) {
            CowData<char32_t>::_ref(pCVar7 + 0x38,(CowData *)pMVar11 + 0x38);
          }
          pCVar7[0x40] = *(CowData<char32_t> *)((CowData *)pMVar11 + 0x40);
          if (*(long *)(pCVar7 + 0x48) != *(long *)((CowData *)pMVar11 + 0x48)) {
            CowData<char32_t>::_ref(pCVar7 + 0x48,(CowData *)pMVar11 + 0x48);
          }
          if (*(long *)(pCVar7 + 0x58) != *(long *)((CowData *)pMVar11 + 0x58)) {
            CowData<DocData::ArgumentDoc>::_ref
                      ((CowData<DocData::ArgumentDoc> *)(pCVar7 + 0x58),(CowData *)pMVar11 + 0x58);
          }
          if (*(long *)(pCVar7 + 0x68) != *(long *)((CowData *)pMVar11 + 0x68)) {
            CowData<int>::_ref((CowData<int> *)(pCVar7 + 0x68),(CowData *)pMVar11 + 0x68);
          }
          if (*(long *)(pCVar7 + 0x70) != *(long *)((CowData *)pMVar11 + 0x70)) {
            CowData<char32_t>::_ref(pCVar7 + 0x70,(CowData *)pMVar11 + 0x70);
          }
          lVar12 = lVar9 * 2;
          local_300 = lVar13;
        } while (lVar12 < local_2f8);
        pCVar15 = (CowData *)pMVar11;
        if (lVar12 == local_2f8) {
LAB_00125ad8:
          lVar13 = lVar12 + -1;
          pMVar11 = param_3 + (param_1 + lVar13) * 0x78;
          DocData::MethodDoc::operator=((MethodDoc *)pCVar15,pMVar11);
        }
        lVar12 = lVar13 + -1;
        DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_290);
        if (lVar13 <= local_2e8) goto LAB_00125ba7;
        do {
          lVar9 = lVar12 >> 1;
          pSVar2 = (String *)(param_3 + (param_1 + lVar9) * 0x78);
          cVar6 = String::naturalcasecmp_to(pSVar2);
          pCVar7 = (CowData<char32_t> *)(param_3 + (param_1 + lVar13) * 0x78);
          if (-1 < cVar6) break;
          if (*(long *)pCVar7 != *(long *)pSVar2) {
            CowData<char32_t>::_ref(pCVar7,(CowData *)pSVar2);
          }
          if (*(long *)(pCVar7 + 8) != *(long *)(pSVar2 + 8)) {
            CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)(pSVar2 + 8));
          }
          if (*(long *)(pCVar7 + 0x10) != *(long *)(pSVar2 + 0x10)) {
            CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)(pSVar2 + 0x10));
          }
          *(String *)(pCVar7 + 0x18) = pSVar2[0x18];
          if (*(long *)(pCVar7 + 0x20) != *(long *)(pSVar2 + 0x20)) {
            CowData<char32_t>::_ref(pCVar7 + 0x20,(CowData *)(pSVar2 + 0x20));
          }
          if (*(long *)(pCVar7 + 0x28) != *(long *)(pSVar2 + 0x28)) {
            CowData<char32_t>::_ref(pCVar7 + 0x28,(CowData *)(pSVar2 + 0x28));
          }
          *(String *)(pCVar7 + 0x30) = pSVar2[0x30];
          if (*(long *)(pCVar7 + 0x38) != *(long *)(pSVar2 + 0x38)) {
            CowData<char32_t>::_ref(pCVar7 + 0x38,(CowData *)(pSVar2 + 0x38));
          }
          *(String *)(pCVar7 + 0x40) = pSVar2[0x40];
          if (*(long *)(pCVar7 + 0x48) != *(long *)(pSVar2 + 0x48)) {
            CowData<char32_t>::_ref(pCVar7 + 0x48,(CowData *)(pSVar2 + 0x48));
          }
          if (*(long *)(pCVar7 + 0x58) != *(long *)(pSVar2 + 0x58)) {
            CowData<DocData::ArgumentDoc>::_ref
                      ((CowData<DocData::ArgumentDoc> *)(pCVar7 + 0x58),(CowData *)(pSVar2 + 0x58));
          }
          if (*(long *)(pCVar7 + 0x68) != *(long *)(pSVar2 + 0x68)) {
            CowData<int>::_ref((CowData<int> *)(pCVar7 + 0x68),(CowData *)(pSVar2 + 0x68));
          }
          if (*(long *)(pCVar7 + 0x70) != *(long *)(pSVar2 + 0x70)) {
            CowData<char32_t>::_ref(pCVar7 + 0x70,(CowData *)(pSVar2 + 0x70));
          }
          lVar12 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
          pCVar7 = (CowData<char32_t> *)pSVar2;
          lVar13 = lVar9;
        } while (local_2e8 < lVar9);
        DocData::MethodDoc::operator=((MethodDoc *)pCVar7,(MethodDoc *)&local_b8);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
        DocData::MethodDoc::~MethodDoc(local_290);
        if (local_2e8 == 0) goto LAB_00124c85;
      }
      else {
        pCVar15 = (CowData *)local_2d8;
        if (local_2e0 == local_2f8) goto LAB_00125ad8;
        DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_290);
        pMVar11 = local_2d8;
LAB_00125ba7:
        DocData::MethodDoc::operator=(pMVar11,(MethodDoc *)&local_b8);
        DocData::MethodDoc::~MethodDoc((MethodDoc *)&local_b8);
        DocData::MethodDoc::~MethodDoc(local_290);
      }
      local_2e8 = local_2e8 + -1;
      local_2d8 = local_2d8 + -0x78;
      local_2e0 = local_2e0 + -2;
    } while( true );
  }
  goto LAB_001256c6;
LAB_00124c00:
  DocData::MethodDoc::~MethodDoc(local_138);
  introsort(local_300,local_298,param_3,local_288);
  local_2f8 = local_300 - param_1;
  if (local_2f8 < 0x11) goto LAB_001256c6;
  param_2 = local_300;
  if (local_288 == 0) goto LAB_00125704;
  local_298 = local_300;
  goto LAB_001244b5;
LAB_00124c85:
  pCVar15 = (CowData *)(param_3 + param_1 * 0x78);
  pMVar11 = param_3 + param_2 * 0x78 + -0x78;
  local_2f8 = (param_2 + -1) - param_1;
  do {
    lVar12 = local_2f8;
    DocData::MethodDoc::MethodDoc(local_1b8,pMVar11);
    if (*(long *)pMVar11 != *(long *)pCVar15) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11,pCVar15);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 8) != *(long *)(pCVar15 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 8,pCVar15 + 8);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x10) != *(long *)(pCVar15 + 0x10)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x10,pCVar15 + 0x10);
    }
    *(CowData *)((CowData<char32_t> *)pMVar11 + 0x18) = pCVar15[0x18];
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x20) != *(long *)(pCVar15 + 0x20)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x20,pCVar15 + 0x20);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x28) != *(long *)(pCVar15 + 0x28)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x28,pCVar15 + 0x28);
    }
    *(CowData *)((CowData<char32_t> *)pMVar11 + 0x30) = pCVar15[0x30];
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x38) != *(long *)(pCVar15 + 0x38)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x38,pCVar15 + 0x38);
    }
    *(CowData *)((CowData<char32_t> *)pMVar11 + 0x40) = pCVar15[0x40];
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x48) != *(long *)(pCVar15 + 0x48)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x48,pCVar15 + 0x48);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x58) != *(long *)(pCVar15 + 0x58)) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)pMVar11 + 0x58),
                 pCVar15 + 0x58);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x68) != *(long *)(pCVar15 + 0x68)) {
      CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)pMVar11 + 0x68),pCVar15 + 0x68);
    }
    if (*(long *)((CowData<char32_t> *)pMVar11 + 0x70) != *(long *)(pCVar15 + 0x70)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)pMVar11 + 0x70,pCVar15 + 0x70);
    }
    DocData::MethodDoc::MethodDoc(local_290,local_1b8);
    if (local_2f8 < 3) {
      local_300 = 0;
      lVar13 = 2;
      pCVar7 = (CowData<char32_t> *)pCVar15;
    }
    else {
      lVar13 = 2;
      local_300 = 0;
      do {
        cVar6 = String::naturalcasecmp_to((String *)(param_3 + (param_1 + lVar13) * 0x78));
        lVar9 = lVar13 + -1;
        pCVar7 = (CowData<char32_t> *)(param_3 + (param_1 + lVar13 + -1) * 0x78);
        lVar14 = lVar13;
        if (-1 < cVar6) {
          lVar14 = lVar13 + 1;
          lVar9 = lVar13;
          pCVar7 = (CowData<char32_t> *)(param_3 + (param_1 + lVar13) * 0x78);
        }
        this = (CowData<char32_t> *)(param_3 + (local_300 + param_1) * 0x78);
        if (*(long *)this != *(long *)pCVar7) {
          CowData<char32_t>::_ref(this,(CowData *)pCVar7);
        }
        if (*(long *)(this + 8) != *(long *)((CowData *)pCVar7 + 8)) {
          CowData<char32_t>::_ref(this + 8,(CowData *)pCVar7 + 8);
        }
        if (*(long *)(this + 0x10) != *(long *)((CowData *)pCVar7 + 0x10)) {
          CowData<char32_t>::_ref(this + 0x10,(CowData *)pCVar7 + 0x10);
        }
        this[0x18] = *(CowData<char32_t> *)((CowData *)pCVar7 + 0x18);
        if (*(long *)(this + 0x20) != *(long *)((CowData *)pCVar7 + 0x20)) {
          CowData<char32_t>::_ref(this + 0x20,(CowData *)pCVar7 + 0x20);
        }
        if (*(long *)(this + 0x28) != *(long *)((CowData *)pCVar7 + 0x28)) {
          CowData<char32_t>::_ref(this + 0x28,(CowData *)pCVar7 + 0x28);
        }
        this[0x30] = *(CowData<char32_t> *)((CowData *)pCVar7 + 0x30);
        if (*(long *)(this + 0x38) != *(long *)((CowData *)pCVar7 + 0x38)) {
          CowData<char32_t>::_ref(this + 0x38,(CowData *)pCVar7 + 0x38);
        }
        this[0x40] = *(CowData<char32_t> *)((CowData *)pCVar7 + 0x40);
        if (*(long *)(this + 0x48) != *(long *)((CowData *)pCVar7 + 0x48)) {
          CowData<char32_t>::_ref(this + 0x48,(CowData *)pCVar7 + 0x48);
        }
        if (*(long *)(this + 0x58) != *(long *)((CowData *)pCVar7 + 0x58)) {
          CowData<DocData::ArgumentDoc>::_ref
                    ((CowData<DocData::ArgumentDoc> *)(this + 0x58),(CowData *)pCVar7 + 0x58);
        }
        if (*(long *)(this + 0x68) != *(long *)((CowData *)pCVar7 + 0x68)) {
          CowData<int>::_ref((CowData<int> *)(this + 0x68),(CowData *)pCVar7 + 0x68);
        }
        if (*(long *)(this + 0x70) != *(long *)((CowData *)pCVar7 + 0x70)) {
          CowData<char32_t>::_ref(this + 0x70,(CowData *)pCVar7 + 0x70);
        }
        lVar13 = lVar14 * 2;
        local_300 = lVar9;
      } while (local_2f8 != lVar13 && SBORROW8(local_2f8,lVar13) == local_2f8 + lVar14 * -2 < 0);
    }
    if (local_2f8 == lVar13) {
      lVar13 = param_1 + local_2f8 + -1;
      lVar9 = local_2f8 + -2 >> 1;
      DocData::MethodDoc::operator=((MethodDoc *)pCVar7,param_3 + lVar13 * 0x78);
      DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_290);
LAB_00125375:
      while( true ) {
        pSVar2 = (String *)(param_3 + (param_1 + lVar9) * 0x78);
        cVar6 = String::naturalcasecmp_to(pSVar2);
        pCVar7 = (CowData<char32_t> *)(param_3 + lVar13 * 0x78);
        if (-1 < cVar6) break;
        if (*(long *)pCVar7 != *(long *)pSVar2) {
          CowData<char32_t>::_ref(pCVar7,(CowData *)pSVar2);
        }
        if (*(long *)(pCVar7 + 8) != *(long *)(pSVar2 + 8)) {
          CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)(pSVar2 + 8));
        }
        if (*(long *)(pCVar7 + 0x10) != *(long *)(pSVar2 + 0x10)) {
          CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)(pSVar2 + 0x10));
        }
        *(String *)(pCVar7 + 0x18) = pSVar2[0x18];
        if (*(long *)(pCVar7 + 0x20) != *(long *)(pSVar2 + 0x20)) {
          CowData<char32_t>::_ref(pCVar7 + 0x20,(CowData *)(pSVar2 + 0x20));
        }
        if (*(long *)(pCVar7 + 0x28) != *(long *)(pSVar2 + 0x28)) {
          CowData<char32_t>::_ref(pCVar7 + 0x28,(CowData *)(pSVar2 + 0x28));
        }
        *(String *)(pCVar7 + 0x30) = pSVar2[0x30];
        if (*(long *)(pCVar7 + 0x38) != *(long *)(pSVar2 + 0x38)) {
          CowData<char32_t>::_ref(pCVar7 + 0x38,(CowData *)(pSVar2 + 0x38));
        }
        *(String *)(pCVar7 + 0x40) = pSVar2[0x40];
        if (*(long *)(pCVar7 + 0x48) != *(long *)(pSVar2 + 0x48)) {
          CowData<char32_t>::_ref(pCVar7 + 0x48,(CowData *)(pSVar2 + 0x48));
        }
        if (*(long *)(pCVar7 + 0x58) != *(long *)(pSVar2 + 0x58)) {
          CowData<DocData::ArgumentDoc>::_ref
                    ((CowData<DocData::ArgumentDoc> *)(pCVar7 + 0x58),(CowData *)(pSVar2 + 0x58));
        }
        if (*(long *)(pCVar7 + 0x68) != *(long *)(pSVar2 + 0x68)) {
          CowData<int>::_ref((CowData<int> *)(pCVar7 + 0x68),(CowData *)(pSVar2 + 0x68));
        }
        if (*(long *)(pCVar7 + 0x70) != *(long *)(pSVar2 + 0x70)) {
          CowData<char32_t>::_ref(pCVar7 + 0x70,(CowData *)(pSVar2 + 0x70));
        }
        pCVar7 = (CowData<char32_t> *)pSVar2;
        if (lVar9 == 0) break;
        lVar13 = param_1 + lVar9;
        lVar9 = (lVar9 + -1) / 2;
      }
    }
    else {
      DocData::MethodDoc::MethodDoc((MethodDoc *)&local_b8,local_290);
      if (local_300 != 0) {
        lVar13 = param_1 + local_300;
        lVar9 = (local_300 + -1) / 2;
        goto LAB_00125375;
      }
    }
    local_300 = local_2f8 + -1;
    if (*(long *)pCVar7 != local_b8) {
      CowData<char32_t>::_ref(pCVar7,(CowData *)&local_b8);
    }
    if (*(long *)(pCVar7 + 8) != lStack_b0) {
      CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)&lStack_b0);
    }
    if (*(long *)(pCVar7 + 0x10) != local_a8) {
      CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)&local_a8);
    }
    pCVar7[0x18] = local_a0;
    if (*(long *)(pCVar7 + 0x20) != local_98) {
      CowData<char32_t>::_ref(pCVar7 + 0x20,(CowData *)&local_98);
    }
    if (*(long *)(pCVar7 + 0x28) != lStack_90) {
      CowData<char32_t>::_ref(pCVar7 + 0x28,(CowData *)&lStack_90);
    }
    pCVar7[0x30] = local_88;
    if (*(long *)(pCVar7 + 0x38) != local_80) {
      CowData<char32_t>::_ref(pCVar7 + 0x38,(CowData *)&local_80);
    }
    pCVar7[0x40] = local_78;
    if (*(long *)(pCVar7 + 0x48) != local_70[0]) {
      CowData<char32_t>::_ref(pCVar7 + 0x48,(CowData *)local_70);
    }
    if (*(long *)(pCVar7 + 0x58) != local_60[0]) {
      CowData<DocData::ArgumentDoc>::_ref
                ((CowData<DocData::ArgumentDoc> *)(pCVar7 + 0x58),(CowData *)local_60);
    }
    if (*(long *)(pCVar7 + 0x68) != local_50) {
      CowData<int>::_ref((CowData<int> *)(pCVar7 + 0x68),(CowData *)&local_50);
    }
    if (*(long *)(pCVar7 + 0x70) != lStack_48) {
      CowData<char32_t>::_ref(pCVar7 + 0x70,(CowData *)&lStack_48);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_48);
    lVar13 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar13 + -0x10),false);
      }
    }
    CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref(local_c8);
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_d0 + -0x10),false);
      }
    }
    CowData<DocData::ArgumentDoc>::_unref(local_e0);
    CowData<char32_t>::_unref(local_f0);
    CowData<char32_t>::_unref(local_100);
    CowData<char32_t>::_unref(local_110);
    CowData<char32_t>::_unref(local_118);
    CowData<char32_t>::_unref(local_128);
    CowData<char32_t>::_unref(local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_290);
    CowData<char32_t>::_unref(local_148);
    if (local_150 != 0) {
      LOCK();
      plVar1 = (long *)(local_150 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_150 + -0x10),false);
      }
    }
    pMVar11 = (MethodDoc *)((CowData<char32_t> *)pMVar11 + -0x78);
    CowData<DocData::ArgumentDoc>::_unref(local_160);
    CowData<char32_t>::_unref(local_170);
    CowData<char32_t>::_unref(local_180);
    CowData<char32_t>::_unref(local_190);
    CowData<char32_t>::_unref(local_198);
    CowData<char32_t>::_unref(local_1a8);
    CowData<char32_t>::_unref(local_1b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
    local_2f8 = local_300;
  } while (1 < lVar12);
LAB_001256c6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::ArgumentDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ArgumentDoc>::resize<false>(CowData<DocData::ArgumentDoc> *this,long param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x28;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00125ed0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x28 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00125ed0;
  uVar9 = param_1;
  if (param_1 <= lVar10) {
    while (puVar6 = *(undefined8 **)this, puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar9) {
        if (uVar8 + 1 != lVar7) {
          puVar6 = puVar6 + -2;
          puVar3 = (undefined8 *)Memory::realloc_static(puVar6,uVar8 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar6 = *(undefined8 **)this;
            if (puVar6 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar6 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 **)this = puVar6;
          }
        }
        puVar6[-1] = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(puVar6 + uVar9 * 5);
      CowData<char32_t>::_unref(this_00 + 0x20);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar9 = uVar9 + 1;
    }
LAB_00125f79:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar8 + 1 == lVar7) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00125f79;
    lVar10 = puVar6[-1];
LAB_00125e28:
    if (param_1 <= lVar10) goto LAB_00125d61;
  }
  else {
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar8 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar6;
      lVar10 = puVar3[1];
      goto LAB_00125e28;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar6 + lVar10 * 5);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 2;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1][8] = 0;
    *(undefined8 *)pauVar4[2] = 0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(*pauVar2 + 8) != (undefined1 (*) [16])(puVar6 + param_1 * 5));
LAB_00125d61:
  puVar6[-1] = param_1;
  return 0;
}



/* CowData<DocData::TutorialDoc>::_unref() */

void __thiscall CowData<DocData::TutorialDoc>::_unref(CowData<DocData::TutorialDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 2;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<DocData::MethodDoc>::_unref() */

void __thiscall CowData<DocData::MethodDoc>::_unref(CowData<DocData::MethodDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(plVar6 + 0xb));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 9));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 7));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 5));
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 2));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 0xf;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Vector<DocData::MethodDoc>::sort_custom<MethodCompare, true>() */

void __thiscall
Vector<DocData::MethodDoc>::sort_custom<MethodCompare,true>(Vector<DocData::MethodDoc> *this)

{
  CowData *pCVar1;
  MethodDoc *pMVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  CowData *pCVar6;
  MethodDoc *pMVar7;
  CowData<char32_t> *pCVar8;
  MethodDoc *pMVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_158;
  MethodDoc local_138 [128];
  MethodDoc local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar3 = *(long *)(*(long *)(this + 8) + -8), lVar3 != 0)) {
    CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(this + 8));
    pMVar9 = *(MethodDoc **)(this + 8);
    if (lVar3 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<DocData::MethodDoc,MethodCompare,true>::introsort(0,1,pMVar9,0);
        return;
      }
      goto LAB_00126aa6;
    }
    lVar5 = 0;
    lVar10 = lVar3;
    do {
      lVar10 = lVar10 >> 1;
      lVar5 = lVar5 + 1;
    } while (lVar10 != 1);
    pMVar2 = pMVar9 + 0x78;
    SortArray<DocData::MethodDoc,MethodCompare,true>::introsort(0,lVar3,pMVar9,lVar5 * 2);
    if (lVar3 < 0x11) {
      lVar10 = 1;
      pMVar7 = pMVar2;
      do {
        DocData::MethodDoc::MethodDoc(local_b8,pMVar7);
        cVar4 = String::naturalcasecmp_to((String *)local_b8);
        pCVar6 = (CowData *)pMVar7;
        if (cVar4 < '\0') {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar6 + -0x78);
            if (*(long *)pCVar6 != *(long *)((CowData<char32_t> *)pCVar6 + -0x78)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar6,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x70)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x70));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x68)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x68));
            }
            ((CowData<char32_t> *)pCVar6)[0x18] = ((CowData<char32_t> *)pCVar6)[-0x60];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x20) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x58)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x20,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x58));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x28) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x50)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x28,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x50));
            }
            ((CowData<char32_t> *)pCVar6)[0x30] = ((CowData<char32_t> *)pCVar6)[-0x48];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x38) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x38,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x40));
            }
            ((CowData<char32_t> *)pCVar6)[0x40] = ((CowData<char32_t> *)pCVar6)[-0x38];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x48) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x30)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x48,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x30));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x58) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x20)) {
              CowData<DocData::ArgumentDoc>::_ref
                        ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)pCVar6 + 0x58),
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x20));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x68) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x10)) {
              CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)pCVar6 + 0x68),
                                 (CowData *)((CowData<char32_t> *)pCVar6 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x70) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x70,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -8));
            }
            pCVar6 = pCVar1;
          } while (pCVar1 != (CowData *)pMVar9);
          DocData::MethodDoc::operator=(pMVar9,local_b8);
        }
        else {
          DocData::MethodDoc::MethodDoc(local_138,local_b8);
          while( true ) {
            pCVar8 = (CowData<char32_t> *)pCVar6;
            pCVar6 = (CowData *)(pCVar8 + -0x78);
            cVar4 = String::naturalcasecmp_to((String *)local_138);
            if (-1 < cVar4) break;
            if (pCVar8 == (CowData<char32_t> *)pMVar2) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            if (*(long *)pCVar8 != *(long *)(pCVar8 + -0x78)) {
              CowData<char32_t>::_ref(pCVar8,pCVar6);
            }
            if (*(long *)(pCVar8 + 8) != *(long *)(pCVar8 + -0x70)) {
              CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)(pCVar8 + -0x70));
            }
            if (*(long *)(pCVar8 + 0x10) != *(long *)(pCVar8 + -0x68)) {
              CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)(pCVar8 + -0x68));
            }
            pCVar8[0x18] = pCVar8[-0x60];
            if (*(long *)(pCVar8 + 0x20) != *(long *)(pCVar8 + -0x58)) {
              CowData<char32_t>::_ref(pCVar8 + 0x20,(CowData *)(pCVar8 + -0x58));
            }
            if (*(long *)(pCVar8 + 0x28) != *(long *)(pCVar8 + -0x50)) {
              CowData<char32_t>::_ref(pCVar8 + 0x28,(CowData *)(pCVar8 + -0x50));
            }
            pCVar8[0x30] = pCVar8[-0x48];
            if (*(long *)(pCVar8 + 0x38) != *(long *)(pCVar8 + -0x40)) {
              CowData<char32_t>::_ref(pCVar8 + 0x38,(CowData *)(pCVar8 + -0x40));
            }
            pCVar8[0x40] = pCVar8[-0x38];
            if (*(long *)(pCVar8 + 0x48) != *(long *)(pCVar8 + -0x30)) {
              CowData<char32_t>::_ref(pCVar8 + 0x48,(CowData *)(pCVar8 + -0x30));
            }
            if (*(long *)(pCVar8 + 0x58) != *(long *)(pCVar8 + -0x20)) {
              CowData<DocData::ArgumentDoc>::_ref
                        ((CowData<DocData::ArgumentDoc> *)(pCVar8 + 0x58),
                         (CowData *)(pCVar8 + -0x20));
            }
            if (*(long *)(pCVar8 + 0x68) != *(long *)(pCVar8 + -0x10)) {
              CowData<int>::_ref((CowData<int> *)(pCVar8 + 0x68),(CowData *)(pCVar8 + -0x10));
            }
            if (*(long *)(pCVar8 + 0x70) != *(long *)(pCVar8 + -8)) {
              CowData<char32_t>::_ref(pCVar8 + 0x70,(CowData *)(pCVar8 + -8));
            }
          }
          DocData::MethodDoc::operator=((MethodDoc *)pCVar8,local_138);
          DocData::MethodDoc::~MethodDoc(local_138);
        }
        lVar10 = lVar10 + 1;
        pMVar7 = pMVar7 + 0x78;
        DocData::MethodDoc::~MethodDoc(local_b8);
      } while (lVar3 != lVar10);
    }
    else {
      local_158 = 1;
      pMVar7 = pMVar2;
      do {
        DocData::MethodDoc::MethodDoc(local_b8,pMVar7);
        cVar4 = String::naturalcasecmp_to((String *)local_b8);
        pCVar6 = (CowData *)pMVar7;
        if (cVar4 < '\0') {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar6 + -0x78);
            if (*(long *)pCVar6 != *(long *)((CowData<char32_t> *)pCVar6 + -0x78)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar6,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x70)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x70));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x68)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x68));
            }
            ((CowData<char32_t> *)pCVar6)[0x18] = ((CowData<char32_t> *)pCVar6)[-0x60];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x20) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x58)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x20,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x58));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x28) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x50)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x28,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x50));
            }
            ((CowData<char32_t> *)pCVar6)[0x30] = ((CowData<char32_t> *)pCVar6)[-0x48];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x38) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x38,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x40));
            }
            ((CowData<char32_t> *)pCVar6)[0x40] = ((CowData<char32_t> *)pCVar6)[-0x38];
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x48) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x30)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x48,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x30));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x58) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x20)) {
              CowData<DocData::ArgumentDoc>::_ref
                        ((CowData<DocData::ArgumentDoc> *)((CowData<char32_t> *)pCVar6 + 0x58),
                         (CowData *)((CowData<char32_t> *)pCVar6 + -0x20));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x68) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -0x10)) {
              CowData<int>::_ref((CowData<int> *)((CowData<char32_t> *)pCVar6 + 0x68),
                                 (CowData *)((CowData<char32_t> *)pCVar6 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar6 + 0x70) !=
                *(long *)((CowData<char32_t> *)pCVar6 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar6 + 0x70,
                         (CowData *)((CowData<char32_t> *)pCVar6 + -8));
            }
            pCVar6 = pCVar1;
          } while (pCVar1 != (CowData *)pMVar9);
          DocData::MethodDoc::operator=(pMVar9,local_b8);
        }
        else {
          DocData::MethodDoc::MethodDoc(local_138,local_b8);
          while( true ) {
            pCVar8 = (CowData<char32_t> *)pCVar6;
            pCVar6 = (CowData *)(pCVar8 + -0x78);
            cVar4 = String::naturalcasecmp_to((String *)local_138);
            if (-1 < cVar4) break;
            if (pCVar8 == (CowData<char32_t> *)pMVar2) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            if (*(long *)pCVar8 != *(long *)(pCVar8 + -0x78)) {
              CowData<char32_t>::_ref(pCVar8,pCVar6);
            }
            if (*(long *)(pCVar8 + 8) != *(long *)(pCVar8 + -0x70)) {
              CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)(pCVar8 + -0x70));
            }
            if (*(long *)(pCVar8 + 0x10) != *(long *)(pCVar8 + -0x68)) {
              CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)(pCVar8 + -0x68));
            }
            pCVar8[0x18] = pCVar8[-0x60];
            if (*(long *)(pCVar8 + 0x20) != *(long *)(pCVar8 + -0x58)) {
              CowData<char32_t>::_ref(pCVar8 + 0x20,(CowData *)(pCVar8 + -0x58));
            }
            if (*(long *)(pCVar8 + 0x28) != *(long *)(pCVar8 + -0x50)) {
              CowData<char32_t>::_ref(pCVar8 + 0x28,(CowData *)(pCVar8 + -0x50));
            }
            pCVar8[0x30] = pCVar8[-0x48];
            if (*(long *)(pCVar8 + 0x38) != *(long *)(pCVar8 + -0x40)) {
              CowData<char32_t>::_ref(pCVar8 + 0x38,(CowData *)(pCVar8 + -0x40));
            }
            pCVar8[0x40] = pCVar8[-0x38];
            if (*(long *)(pCVar8 + 0x48) != *(long *)(pCVar8 + -0x30)) {
              CowData<char32_t>::_ref(pCVar8 + 0x48,(CowData *)(pCVar8 + -0x30));
            }
            if (*(long *)(pCVar8 + 0x58) != *(long *)(pCVar8 + -0x20)) {
              CowData<DocData::ArgumentDoc>::_ref
                        ((CowData<DocData::ArgumentDoc> *)(pCVar8 + 0x58),
                         (CowData *)(pCVar8 + -0x20));
            }
            if (*(long *)(pCVar8 + 0x68) != *(long *)(pCVar8 + -0x10)) {
              CowData<int>::_ref((CowData<int> *)(pCVar8 + 0x68),(CowData *)(pCVar8 + -0x10));
            }
            if (*(long *)(pCVar8 + 0x70) != *(long *)(pCVar8 + -8)) {
              CowData<char32_t>::_ref(pCVar8 + 0x70,(CowData *)(pCVar8 + -8));
            }
          }
          DocData::MethodDoc::operator=((MethodDoc *)pCVar8,local_138);
          DocData::MethodDoc::~MethodDoc(local_138);
        }
        pMVar7 = pMVar7 + 0x78;
        DocData::MethodDoc::~MethodDoc(local_b8);
        local_158 = local_158 + 1;
      } while (local_158 != 0x10);
      pMVar9 = pMVar9 + 0x780;
      local_158 = 0x10;
      do {
        DocData::MethodDoc::MethodDoc(local_b8,pMVar9);
        pCVar6 = (CowData *)pMVar9;
        while( true ) {
          pCVar8 = (CowData<char32_t> *)pCVar6;
          pCVar6 = (CowData *)(pCVar8 + -0x78);
          cVar4 = String::naturalcasecmp_to((String *)local_b8);
          if (-1 < cVar4) break;
          if (pCVar8 == (CowData<char32_t> *)pMVar2) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          if (*(long *)pCVar8 != *(long *)(pCVar8 + -0x78)) {
            CowData<char32_t>::_ref(pCVar8,pCVar6);
          }
          if (*(long *)(pCVar8 + 8) != *(long *)(pCVar8 + -0x70)) {
            CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)(pCVar8 + -0x70));
          }
          if (*(long *)(pCVar8 + 0x10) != *(long *)(pCVar8 + -0x68)) {
            CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)(pCVar8 + -0x68));
          }
          pCVar8[0x18] = pCVar8[-0x60];
          if (*(long *)(pCVar8 + 0x20) != *(long *)(pCVar8 + -0x58)) {
            CowData<char32_t>::_ref(pCVar8 + 0x20,(CowData *)(pCVar8 + -0x58));
          }
          if (*(long *)(pCVar8 + 0x28) != *(long *)(pCVar8 + -0x50)) {
            CowData<char32_t>::_ref(pCVar8 + 0x28,(CowData *)(pCVar8 + -0x50));
          }
          pCVar8[0x30] = pCVar8[-0x48];
          if (*(long *)(pCVar8 + 0x38) != *(long *)(pCVar8 + -0x40)) {
            CowData<char32_t>::_ref(pCVar8 + 0x38,(CowData *)(pCVar8 + -0x40));
          }
          pCVar8[0x40] = pCVar8[-0x38];
          if (*(long *)(pCVar8 + 0x48) != *(long *)(pCVar8 + -0x30)) {
            CowData<char32_t>::_ref(pCVar8 + 0x48,(CowData *)(pCVar8 + -0x30));
          }
          if (*(long *)(pCVar8 + 0x58) != *(long *)(pCVar8 + -0x20)) {
            CowData<DocData::ArgumentDoc>::_ref
                      ((CowData<DocData::ArgumentDoc> *)(pCVar8 + 0x58),(CowData *)(pCVar8 + -0x20))
            ;
          }
          if (*(long *)(pCVar8 + 0x68) != *(long *)(pCVar8 + -0x10)) {
            CowData<int>::_ref((CowData<int> *)(pCVar8 + 0x68),(CowData *)(pCVar8 + -0x10));
          }
          if (*(long *)(pCVar8 + 0x70) != *(long *)(pCVar8 + -8)) {
            CowData<char32_t>::_ref(pCVar8 + 0x70,(CowData *)(pCVar8 + -8));
          }
        }
        pMVar9 = pMVar9 + 0x78;
        DocData::MethodDoc::operator=((MethodDoc *)pCVar8,local_b8);
        DocData::MethodDoc::~MethodDoc(local_b8);
        local_158 = local_158 + 1;
      } while (lVar3 != local_158);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00126aa6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::ConstantDoc>::_unref() */

void __thiscall CowData<DocData::ConstantDoc>::_unref(CowData<DocData::ConstantDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 0xb));
          if (plVar6[10] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[10] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[10];
              plVar6[10] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 4));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 3));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 0xc;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Vector<DocData::ConstantDoc>::sort_custom<_DefaultComparator<DocData::ConstantDoc>, true>()
    */

void __thiscall
Vector<DocData::ConstantDoc>::sort_custom<_DefaultComparator<DocData::ConstantDoc>,true>
          (Vector<DocData::ConstantDoc> *this)

{
  CowData *pCVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ConstantDoc *pCVar5;
  ConstantDoc *pCVar6;
  ConstantDoc *pCVar7;
  ConstantDoc *pCVar8;
  CowData<char32_t> *this_00;
  CowData *pCVar9;
  long lVar10;
  long in_FS_OFFSET;
  ConstantDoc *local_148;
  ConstantDoc local_108 [96];
  ConstantDoc local_a8 [8];
  CowData<char32_t> local_a0 [16];
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [16];
  CowData<char32_t> local_78 [16];
  CowData<char32_t> local_68 [16];
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar2 = *(long *)(*(long *)(this + 8) + -8), lVar2 != 0)) {
    CowData<DocData::ConstantDoc>::_copy_on_write((CowData<DocData::ConstantDoc> *)(this + 8));
    local_148 = *(ConstantDoc **)(this + 8);
    if (lVar2 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<DocData::ConstantDoc,_DefaultComparator<DocData::ConstantDoc>,true>::introsort
                  (0,1,local_148,0);
        return;
      }
      goto LAB_0012735f;
    }
    lVar4 = 0;
    lVar10 = lVar2;
    do {
      lVar10 = lVar10 >> 1;
      lVar4 = lVar4 + 1;
    } while (lVar10 != 1);
    SortArray<DocData::ConstantDoc,_DefaultComparator<DocData::ConstantDoc>,true>::introsort
              (0,lVar2,local_148,lVar4 * 2);
    pCVar7 = local_148 + 0x60;
    if (lVar2 < 0x11) {
      lVar10 = 1;
      do {
        DocData::ConstantDoc::ConstantDoc(local_a8,pCVar7);
        cVar3 = String::operator<((String *)local_a8,(String *)local_148);
        pCVar9 = (CowData *)pCVar7;
        if (cVar3 == '\0') {
          DocData::ConstantDoc::ConstantDoc(local_108,local_a8);
          pCVar8 = pCVar7;
          while( true ) {
            pCVar6 = pCVar8 + -0x60;
            cVar3 = String::operator<((String *)local_108,(String *)pCVar6);
            if (cVar3 == '\0') break;
            if (pCVar6 == local_148) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            DocData::ConstantDoc::operator=(pCVar8,pCVar6);
            pCVar8 = pCVar6;
          }
          DocData::ConstantDoc::operator=(pCVar8,local_108);
          DocData::ConstantDoc::~ConstantDoc(local_108);
        }
        else {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar9 + -0x60);
            if (*(long *)pCVar9 != *(long *)((CowData<char32_t> *)pCVar9 + -0x60)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar9,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x58)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x58));
            }
            ((CowData<char32_t> *)pCVar9)[0x10] = ((CowData<char32_t> *)pCVar9)[-0x50];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x18) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x18,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x48));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x20) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x20,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x40));
            }
            ((CowData<char32_t> *)pCVar9)[0x28] = ((CowData<char32_t> *)pCVar9)[-0x38];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x30) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x30)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x30,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x30));
            }
            ((CowData<char32_t> *)pCVar9)[0x38] = ((CowData<char32_t> *)pCVar9)[-0x28];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x40) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x20)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x40,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x20));
            }
            ((CowData<char32_t> *)pCVar9)[0x48] = ((CowData<char32_t> *)pCVar9)[-0x18];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x50) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x50,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x58) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x58,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -8));
            }
            pCVar9 = pCVar1;
          } while (pCVar1 != (CowData *)local_148);
          DocData::ConstantDoc::operator=(local_148,local_a8);
        }
        lVar10 = lVar10 + 1;
        pCVar7 = pCVar7 + 0x60;
        DocData::ConstantDoc::~ConstantDoc(local_a8);
      } while (lVar2 != lVar10);
    }
    else {
      lVar10 = 1;
      pCVar8 = pCVar7;
      do {
        DocData::ConstantDoc::ConstantDoc(local_a8,pCVar8);
        cVar3 = String::operator<((String *)local_a8,(String *)local_148);
        pCVar9 = (CowData *)pCVar8;
        if (cVar3 == '\0') {
          DocData::ConstantDoc::ConstantDoc(local_108,local_a8);
          pCVar6 = pCVar8;
          while( true ) {
            pCVar5 = pCVar6 + -0x60;
            cVar3 = String::operator<((String *)local_108,(String *)pCVar5);
            if (cVar3 == '\0') break;
            if (pCVar5 == local_148) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            DocData::ConstantDoc::operator=(pCVar6,pCVar5);
            pCVar6 = pCVar5;
          }
          DocData::ConstantDoc::operator=(pCVar6,local_108);
          DocData::ConstantDoc::~ConstantDoc(local_108);
        }
        else {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar9 + -0x60);
            if (*(long *)pCVar9 != *(long *)((CowData<char32_t> *)pCVar9 + -0x60)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar9,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x58)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x58));
            }
            ((CowData<char32_t> *)pCVar9)[0x10] = ((CowData<char32_t> *)pCVar9)[-0x50];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x18) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x18,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x48));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x20) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x20,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x40));
            }
            ((CowData<char32_t> *)pCVar9)[0x28] = ((CowData<char32_t> *)pCVar9)[-0x38];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x30) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x30)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x30,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x30));
            }
            ((CowData<char32_t> *)pCVar9)[0x38] = ((CowData<char32_t> *)pCVar9)[-0x28];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x40) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x20)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x40,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x20));
            }
            ((CowData<char32_t> *)pCVar9)[0x48] = ((CowData<char32_t> *)pCVar9)[-0x18];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x50) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x50,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x58) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x58,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -8));
            }
            pCVar9 = pCVar1;
          } while (pCVar1 != (CowData *)local_148);
          DocData::ConstantDoc::operator=(local_148,local_a8);
        }
        lVar10 = lVar10 + 1;
        pCVar8 = pCVar8 + 0x60;
        DocData::ConstantDoc::~ConstantDoc(local_a8);
      } while (lVar10 != 0x10);
      local_148 = local_148 + 0x600;
      lVar10 = 0x10;
      do {
        DocData::ConstantDoc::ConstantDoc(local_a8,local_148);
        pCVar9 = (CowData *)local_148;
        while( true ) {
          this_00 = (CowData<char32_t> *)pCVar9;
          pCVar9 = (CowData *)(this_00 + -0x60);
          cVar3 = String::operator<((String *)local_a8,(String *)pCVar9);
          if (cVar3 == '\0') break;
          if (this_00 == (CowData<char32_t> *)pCVar7) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          if (*(long *)this_00 != *(long *)(this_00 + -0x60)) {
            CowData<char32_t>::_ref(this_00,pCVar9);
          }
          if (*(long *)(this_00 + 8) != *(long *)(this_00 + -0x58)) {
            CowData<char32_t>::_ref(this_00 + 8,(CowData *)(this_00 + -0x58));
          }
          this_00[0x10] = this_00[-0x50];
          if (*(long *)(this_00 + 0x18) != *(long *)(this_00 + -0x48)) {
            CowData<char32_t>::_ref(this_00 + 0x18,(CowData *)(this_00 + -0x48));
          }
          if (*(long *)(this_00 + 0x20) != *(long *)(this_00 + -0x40)) {
            CowData<char32_t>::_ref(this_00 + 0x20,(CowData *)(this_00 + -0x40));
          }
          this_00[0x28] = this_00[-0x38];
          if (*(long *)(this_00 + 0x30) != *(long *)(this_00 + -0x30)) {
            CowData<char32_t>::_ref(this_00 + 0x30,(CowData *)(this_00 + -0x30));
          }
          this_00[0x38] = this_00[-0x28];
          if (*(long *)(this_00 + 0x40) != *(long *)(this_00 + -0x20)) {
            CowData<char32_t>::_ref(this_00 + 0x40,(CowData *)(this_00 + -0x20));
          }
          this_00[0x48] = this_00[-0x18];
          if (*(long *)(this_00 + 0x50) != *(long *)(this_00 + -0x10)) {
            CowData<char32_t>::_ref(this_00 + 0x50,(CowData *)(this_00 + -0x10));
          }
          if (*(long *)(this_00 + 0x58) != *(long *)(this_00 + -8)) {
            CowData<char32_t>::_ref(this_00 + 0x58,(CowData *)(this_00 + -8));
          }
        }
        lVar10 = lVar10 + 1;
        DocData::ConstantDoc::operator=((ConstantDoc *)this_00,local_a8);
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_58);
        CowData<char32_t>::_unref(local_68);
        CowData<char32_t>::_unref(local_78);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        local_148 = local_148 + 0x60;
      } while (lVar2 != lVar10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0012735f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::PropertyDoc>::_unref() */

void __thiscall CowData<DocData::PropertyDoc>::_unref(CowData<DocData::PropertyDoc> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        this_00 = pCVar2;
        do {
          if (*(long *)(this_00 + 0x70) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x70) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x70);
              *(undefined8 *)(this_00 + 0x70) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(this_00 + 0x68) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x68) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x68);
              *(undefined8 *)(this_00 + 0x68) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref(this_00 + 0x58);
          CowData<char32_t>::_unref(this_00 + 0x48);
          if (*(long *)(this_00 + 0x38) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x38) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x38);
              *(undefined8 *)(this_00 + 0x38) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref(this_00 + 0x30);
          CowData<char32_t>::_unref(this_00 + 0x28);
          if (*(long *)(this_00 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x20);
              *(undefined8 *)(this_00 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          CowData<char32_t>::_unref(this_00 + 0x10);
          CowData<char32_t>::_unref(this_00 + 8);
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x78;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Vector<DocData::PropertyDoc>::sort_custom<_DefaultComparator<DocData::PropertyDoc>, true>()
    */

void __thiscall
Vector<DocData::PropertyDoc>::sort_custom<_DefaultComparator<DocData::PropertyDoc>,true>
          (Vector<DocData::PropertyDoc> *this)

{
  long lVar1;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(this + 8) + -8);
  if (lVar1 == 0) {
    return;
  }
  CowData<DocData::PropertyDoc>::_copy_on_write((CowData<DocData::PropertyDoc> *)(this + 8));
  SortArray<DocData::PropertyDoc,_DefaultComparator<DocData::PropertyDoc>,true>::sort
            (*(PropertyDoc **)(this + 8),lVar1);
  return;
}



/* CowData<DocData::ThemeItemDoc>::_unref() */

void __thiscall CowData<DocData::ThemeItemDoc>::_unref(CowData<DocData::ThemeItemDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 8));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 7));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 5));
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* DocData::ClassDoc::~ClassDoc() */

void __thiscall DocData::ClassDoc::~ClassDoc(ClassDoc *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x110));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x100));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xf0));
  CowData<DocData::ThemeItemDoc>::_unref((CowData<DocData::ThemeItemDoc> *)(this + 0xe0));
  CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0xd0));
  CowData<DocData::PropertyDoc>::_unref((CowData<DocData::PropertyDoc> *)(this + 0xc0));
  pvVar3 = *(void **)(this + 0x90);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xb4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x98) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x98) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x90);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001277d2;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x98),false);
  }
LAB_001277d2:
  CowData<DocData::ConstantDoc>::_unref((CowData<DocData::ConstantDoc> *)(this + 0x80));
  CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x70));
  CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x60));
  CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x50));
  CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x40));
  CowData<DocData::TutorialDoc>::_unref((CowData<DocData::TutorialDoc> *)(this + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* void Vector<DocData::ThemeItemDoc>::sort_custom<_DefaultComparator<DocData::ThemeItemDoc>,
   true>() */

void __thiscall
Vector<DocData::ThemeItemDoc>::sort_custom<_DefaultComparator<DocData::ThemeItemDoc>,true>
          (Vector<DocData::ThemeItemDoc> *this)

{
  long lVar1;
  ThemeItemDoc *this_00;
  CowData<char32_t> *this_01;
  ThemeItemDoc *pTVar2;
  char cVar3;
  long lVar4;
  CowData *pCVar5;
  ThemeItemDoc *pTVar6;
  long lVar7;
  ThemeItemDoc *pTVar8;
  CowData *pCVar9;
  long in_FS_OFFSET;
  ThemeItemDoc *local_150;
  ThemeItemDoc local_e8 [16];
  String local_d8 [64];
  ThemeItemDoc local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  CowData<char32_t> local_80 [16];
  CowData<char32_t> local_70 [16];
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar1 = *(long *)(*(long *)(this + 8) + -8), lVar1 != 0)) {
    CowData<DocData::ThemeItemDoc>::_copy_on_write((CowData<DocData::ThemeItemDoc> *)(this + 8));
    this_00 = *(ThemeItemDoc **)(this + 8);
    if (lVar1 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<DocData::ThemeItemDoc,_DefaultComparator<DocData::ThemeItemDoc>,true>::introsort
                  (0,1,this_00,0);
        return;
      }
      goto LAB_001281d4;
    }
    lVar4 = 0;
    lVar7 = lVar1;
    do {
      lVar7 = lVar7 >> 1;
      lVar4 = lVar4 + 1;
    } while (lVar7 != 1);
    SortArray<DocData::ThemeItemDoc,_DefaultComparator<DocData::ThemeItemDoc>,true>::introsort
              (0,lVar1,this_00,lVar4 * 2);
    pTVar6 = this_00 + 0x50;
    if (lVar1 < 0x11) {
      local_150 = (ThemeItemDoc *)0x1;
      do {
        DocData::ThemeItemDoc::ThemeItemDoc(local_98,pTVar6);
        cVar3 = String::operator==(local_88,(String *)(this_00 + 0x10));
        pCVar9 = (CowData *)pTVar6;
        if (cVar3 == '\0') {
          cVar3 = String::operator<(local_88,(String *)(this_00 + 0x10));
          if (cVar3 == '\0') goto LAB_001280b7;
LAB_00127f50:
          do {
            pCVar5 = (CowData *)((CowData<char32_t> *)pCVar9 + -0x50);
            if (*(long *)pCVar9 != *(long *)((CowData<char32_t> *)pCVar9 + -0x50)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar9,pCVar5);
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x48));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x40));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x18) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x38)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x18,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x38));
            }
            ((CowData<char32_t> *)pCVar9)[0x20] = ((CowData<char32_t> *)pCVar9)[-0x30];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x28) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x28)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x28,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x28));
            }
            ((CowData<char32_t> *)pCVar9)[0x30] = ((CowData<char32_t> *)pCVar9)[-0x20];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x38) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x18)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x38,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x18));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x40) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x40,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x48) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x48,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -8));
            }
            pCVar9 = pCVar5;
          } while (pCVar5 != (CowData *)this_00);
          DocData::ThemeItemDoc::operator=(this_00,local_98);
        }
        else {
          cVar3 = String::naturalcasecmp_to((String *)local_98);
          if (cVar3 < '\0') goto LAB_00127f50;
LAB_001280b7:
          DocData::ThemeItemDoc::ThemeItemDoc(local_e8,local_98);
          pTVar8 = local_150;
          pTVar2 = pTVar6;
          while( true ) {
            cVar3 = String::operator==(local_d8,(String *)(pTVar2 + -0x40));
            if (cVar3 == '\0') {
              cVar3 = String::operator<(local_d8,(String *)(pTVar2 + -0x40));
              if (cVar3 == '\0') goto LAB_0012813e;
            }
            else {
              cVar3 = String::naturalcasecmp_to((String *)local_e8);
              if (-1 < cVar3) goto LAB_0012813e;
            }
            pTVar8 = (ThemeItemDoc *)((long)pTVar8 + -1);
            if (pTVar8 == (ThemeItemDoc *)0x0) break;
            DocData::ThemeItemDoc::operator=(pTVar2,pTVar2 + -0x50);
            pTVar2 = pTVar2 + -0x50;
          }
          pTVar8 = (ThemeItemDoc *)0x1;
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
LAB_0012813e:
          DocData::ThemeItemDoc::operator=(this_00 + (long)pTVar8 * 0x50,local_e8);
          DocData::ThemeItemDoc::~ThemeItemDoc(local_e8);
        }
        pTVar6 = pTVar6 + 0x50;
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_58);
        CowData<char32_t>::_unref(local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        local_150 = (ThemeItemDoc *)((long)local_150 + 1);
      } while ((ThemeItemDoc *)lVar1 != local_150);
    }
    else {
      local_150 = (ThemeItemDoc *)0x1;
      do {
        DocData::ThemeItemDoc::ThemeItemDoc(local_98,pTVar6);
        cVar3 = String::operator==(local_88,(String *)(this_00 + 0x10));
        pCVar9 = (CowData *)pTVar6;
        if (cVar3 == '\0') {
          cVar3 = String::operator<(local_88,(String *)(this_00 + 0x10));
          if (cVar3 == '\0') goto LAB_00127d75;
LAB_00127a10:
          do {
            pCVar5 = (CowData *)((CowData<char32_t> *)pCVar9 + -0x50);
            if (*(long *)pCVar9 != *(long *)((CowData<char32_t> *)pCVar9 + -0x50)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar9,pCVar5);
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x48)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x48));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x40)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x40));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x18) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x38)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x18,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x38));
            }
            ((CowData<char32_t> *)pCVar9)[0x20] = ((CowData<char32_t> *)pCVar9)[-0x30];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x28) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x28)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x28,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x28));
            }
            ((CowData<char32_t> *)pCVar9)[0x30] = ((CowData<char32_t> *)pCVar9)[-0x20];
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x38) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x18)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x38,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x18));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x40) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x40,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar9 + 0x48) !=
                *(long *)((CowData<char32_t> *)pCVar9 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar9 + 0x48,
                         (CowData *)((CowData<char32_t> *)pCVar9 + -8));
            }
            pCVar9 = pCVar5;
          } while (pCVar5 != (CowData *)this_00);
          DocData::ThemeItemDoc::operator=(this_00,local_98);
        }
        else {
          cVar3 = String::naturalcasecmp_to((String *)local_98);
          if (cVar3 < '\0') goto LAB_00127a10;
LAB_00127d75:
          DocData::ThemeItemDoc::ThemeItemDoc(local_e8,local_98);
          pTVar8 = local_150;
          pTVar2 = pTVar6;
          while( true ) {
            cVar3 = String::operator==(local_d8,(String *)(pTVar2 + -0x40));
            if (cVar3 == '\0') {
              cVar3 = String::operator<(local_d8,(String *)(pTVar2 + -0x40));
              if (cVar3 == '\0') goto LAB_00127e35;
            }
            else {
              cVar3 = String::naturalcasecmp_to((String *)local_e8);
              if (-1 < cVar3) goto LAB_00127e35;
            }
            pTVar8 = (ThemeItemDoc *)((long)pTVar8 + -1);
            if (pTVar8 == (ThemeItemDoc *)0x0) break;
            DocData::ThemeItemDoc::operator=(pTVar2,pTVar2 + -0x50);
            pTVar2 = pTVar2 + -0x50;
          }
          pTVar8 = (ThemeItemDoc *)0x1;
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
LAB_00127e35:
          DocData::ThemeItemDoc::operator=(this_00 + (long)pTVar8 * 0x50,local_e8);
          DocData::ThemeItemDoc::~ThemeItemDoc(local_e8);
        }
        pTVar6 = pTVar6 + 0x50;
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_58);
        CowData<char32_t>::_unref(local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        local_150 = (ThemeItemDoc *)((long)local_150 + 1);
      } while (local_150 != (ThemeItemDoc *)0x10);
      local_150 = this_00 + 0x500;
      lVar7 = 0x10;
      do {
        DocData::ThemeItemDoc::ThemeItemDoc(local_98,local_150);
        lVar4 = lVar7;
        this_01 = (CowData<char32_t> *)local_150;
        while( true ) {
          pCVar5 = (CowData *)(this_01 + -0x50);
          pCVar9 = (CowData *)(this_01 + -0x40);
          cVar3 = String::operator==(local_88,(String *)pCVar9);
          if (cVar3 == '\0') {
            cVar3 = String::operator<(local_88,(String *)pCVar9);
            if (cVar3 == '\0') goto LAB_00127ce0;
          }
          else {
            cVar3 = String::naturalcasecmp_to((String *)local_98);
            if (-1 < cVar3) goto LAB_00127ce0;
          }
          if (lVar4 == 1) break;
          if (*(long *)this_01 != *(long *)pCVar5) {
            CowData<char32_t>::_ref(this_01,pCVar5);
          }
          if (*(long *)(this_01 + 8) != *(long *)(this_01 + -0x48)) {
            CowData<char32_t>::_ref(this_01 + 8,(CowData *)(this_01 + -0x48));
          }
          if (*(long *)(this_01 + 0x10) != *(long *)(this_01 + -0x40)) {
            CowData<char32_t>::_ref(this_01 + 0x10,pCVar9);
          }
          if (*(long *)(this_01 + 0x18) != *(long *)(this_01 + -0x38)) {
            CowData<char32_t>::_ref(this_01 + 0x18,(CowData *)(this_01 + -0x38));
          }
          this_01[0x20] = this_01[-0x30];
          if (*(long *)(this_01 + 0x28) != *(long *)(this_01 + -0x28)) {
            CowData<char32_t>::_ref(this_01 + 0x28,(CowData *)(this_01 + -0x28));
          }
          this_01[0x30] = this_01[-0x20];
          if (*(long *)(this_01 + 0x38) != *(long *)(this_01 + -0x18)) {
            CowData<char32_t>::_ref(this_01 + 0x38,(CowData *)(this_01 + -0x18));
          }
          if (*(long *)(this_01 + 0x40) != *(long *)(this_01 + -0x10)) {
            CowData<char32_t>::_ref(this_01 + 0x40,(CowData *)(this_01 + -0x10));
          }
          if (*(long *)(this_01 + 0x48) != *(long *)(this_01 + -8)) {
            CowData<char32_t>::_ref(this_01 + 0x48,(CowData *)(this_01 + -8));
          }
          lVar4 = lVar4 + -1;
          this_01 = (CowData<char32_t> *)pCVar5;
        }
        _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                         "bad comparison function; sorting will be broken",0,0);
LAB_00127ce0:
        lVar7 = lVar7 + 1;
        DocData::ThemeItemDoc::operator=(this_00 + lVar4 * 0x50,local_98);
        CowData<char32_t>::_unref(local_50);
        CowData<char32_t>::_unref(local_58);
        CowData<char32_t>::_unref(local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref(local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref(local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        local_150 = local_150 + 0x50;
      } while (lVar1 != lVar7);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001281d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::TutorialDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::TutorialDoc>::resize<false>(CowData<DocData::TutorialDoc> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar6 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar10 * 0x10;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00128498:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x10 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  if (uVar7 == 0xffffffffffffffff) goto LAB_00128498;
  uVar9 = param_1;
  if (param_1 <= lVar10) {
    while (puVar2 = *(undefined8 **)this, puVar2 != (undefined8 *)0x0) {
      if ((ulong)puVar2[-1] <= uVar9) {
        if (uVar7 + 1 != lVar6) {
          puVar2 = puVar2 + -2;
          puVar4 = (undefined8 *)Memory::realloc_static(puVar2,uVar7 + 0x11,false);
          if (puVar4 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar2);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar2 = *(undefined8 **)this;
            if (puVar2 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar2 = puVar4 + 2;
            *puVar4 = 1;
            *(undefined8 **)this = puVar2;
          }
        }
        puVar2[-1] = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + uVar9 * 2) + 8);
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + uVar9 * 2));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00128517;
  }
  if (uVar7 + 1 == lVar6) {
LAB_001283e0:
    puVar4 = *(undefined8 **)this;
    if (puVar4 == (undefined8 *)0x0) {
LAB_00128517:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar10 = puVar4[-1];
LAB_001283f1:
    if (param_1 <= lVar10) goto LAB_0012833c;
  }
  else {
    if (lVar10 != 0) {
      pvVar8 = (void *)(*(long *)this + -0x10);
      puVar2 = (undefined8 *)Memory::realloc_static(pvVar8,uVar7 + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
        uVar5 = CowData<int>::_realloc((long)pvVar8);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        goto LAB_001283e0;
      }
      puVar4 = puVar2 + 2;
      *puVar2 = 1;
      *(undefined8 **)this = puVar4;
      lVar10 = puVar2[1];
      goto LAB_001283f1;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar4 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar4;
    lVar10 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar4 + lVar10 * 2);
  do {
    *pauVar3 = (undefined1  [16])0x0;
    pauVar3 = pauVar3 + 1;
  } while ((undefined1 (*) [16])(puVar4 + param_1 * 2) != pauVar3);
LAB_0012833c:
  puVar4[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::MethodDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::MethodDoc>::resize<false>(CowData<DocData::MethodDoc> *this,long param_1)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x78;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x78 == 0) {
LAB_00128828:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x78 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  if (uVar8 == 0xffffffffffffffff) goto LAB_00128828;
  uVar9 = param_1;
  if (param_1 <= lVar10) {
    while (puVar6 = *(undefined8 **)this, puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar9) {
        if (uVar8 + 1 != lVar7) {
          puVar6 = puVar6 + -2;
          puVar3 = (undefined8 *)Memory::realloc_static(puVar6,uVar8 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar6 = *(undefined8 **)this;
            if (puVar6 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar6 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 **)this = puVar6;
          }
        }
        puVar6[-1] = param_1;
        return 0;
      }
      DocData::MethodDoc::~MethodDoc((MethodDoc *)(puVar6 + uVar9 * 0xf));
      uVar9 = uVar9 + 1;
    }
LAB_001288d1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar8 + 1 == lVar7) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_001288d1;
    lVar10 = puVar6[-1];
LAB_00128781:
    if (param_1 <= lVar10) goto LAB_001286d9;
  }
  else {
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar8 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar6;
      lVar10 = puVar3[1];
      goto LAB_00128781;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar6 + lVar10 * 0xf);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 7;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1][8] = 0;
    pauVar4[2] = (undefined1  [16])0x0;
    pauVar4[3][0] = 0;
    *(undefined8 *)(pauVar4[3] + 8) = 0;
    pauVar4[4][0] = 0;
    *(undefined8 *)(pauVar4[4] + 8) = 0;
    *(undefined8 *)(pauVar4[5] + 8) = 0;
    *(undefined1 (*) [16])(pauVar4[6] + 8) = (undefined1  [16])0x0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(puVar6 + param_1 * 0xf) != (undefined1 (*) [16])(*pauVar2 + 8));
LAB_001286d9:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::ConstantDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ConstantDoc>::resize<false>(CowData<DocData::ConstantDoc> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 0x60;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x60 == 0) {
LAB_00128bf0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x60 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  if (uVar9 == 0xffffffffffffffff) goto LAB_00128bf0;
  uVar10 = param_1;
  if (param_1 <= lVar7) {
    while (puVar6 = *(undefined8 **)this, puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar10) {
        if (uVar9 + 1 != lVar8) {
          puVar6 = puVar6 + -2;
          puVar2 = (undefined8 *)Memory::realloc_static(puVar6,uVar9 + 0x11,false);
          if (puVar2 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar6 = *(undefined8 **)this;
            if (puVar6 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar6 = puVar2 + 2;
            *puVar2 = 1;
            *(undefined8 **)this = puVar6;
          }
        }
        puVar6[-1] = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(puVar6 + uVar10 * 0xc);
      CowData<char32_t>::_unref(this_00 + 0x58);
      CowData<char32_t>::_unref(this_00 + 0x50);
      CowData<char32_t>::_unref(this_00 + 0x40);
      CowData<char32_t>::_unref(this_00 + 0x30);
      CowData<char32_t>::_unref(this_00 + 0x20);
      CowData<char32_t>::_unref(this_00 + 0x18);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
LAB_00128c99:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar9 + 1 == lVar8) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00128c99;
    lVar7 = puVar6[-1];
LAB_00128b51:
    if (param_1 <= lVar7) goto LAB_00128a6d;
  }
  else {
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar9 + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar2 + 2;
      *puVar2 = 1;
      *(undefined8 **)this = puVar6;
      lVar7 = puVar2[1];
      goto LAB_00128b51;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar7 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar6 + lVar7 * 0xc);
  do {
    pauVar3[1][0] = 0;
    pauVar4 = pauVar3 + 6;
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar3[1] + 8) = (undefined1  [16])0x0;
    pauVar3[2][8] = 0;
    *(undefined8 *)pauVar3[3] = 0;
    pauVar3[3][8] = 0;
    *(undefined8 *)pauVar3[4] = 0;
    pauVar3[4][8] = 0;
    pauVar3[5] = (undefined1  [16])0x0;
    pauVar3 = pauVar4;
  } while ((undefined1 (*) [16])(puVar6 + param_1 * 0xc) != pauVar4);
LAB_00128a6d:
  puVar6[-1] = param_1;
  return 0;
}



/* HashMap<String, DocData::EnumDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::EnumDoc> > >::_resize_and_rehash(unsigned
   int) */

void __thiscall
HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
::_resize_and_rehash
          (HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, DocData::EnumDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::EnumDoc> > >::insert(String const&,
   DocData::EnumDoc const&, bool) */

String * HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
         ::insert(String *param_1,EnumDoc *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plVar19;
  CowData CVar20;
  char cVar21;
  uint uVar22;
  undefined8 uVar23;
  void *__s_00;
  ulong uVar24;
  CowData *in_RCX;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined7 in_register_00000011;
  String *pSVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  char in_R8B;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  long *plVar38;
  long in_FS_OFFSET;
  uint local_c8;
  long *local_b0;
  long local_78;
  long local_70;
  CowData local_68;
  long local_60;
  CowData local_58;
  long local_50 [2];
  long local_40;
  
  pSVar29 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar33 = (ulong)uVar25;
    uVar24 = uVar33 * 4;
    uVar36 = uVar33 * 8;
    uVar23 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar23;
    __s_00 = (void *)Memory::alloc_static(uVar36,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar25 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar36)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar33 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar36);
      }
      goto LAB_00128f45;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00128f54;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00129298;
LAB_00128f76:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_00129241;
    }
    _resize_and_rehash((HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00128f45:
    iVar26 = *(int *)(param_2 + 0x2c);
    if (iVar26 != 0) {
LAB_00129298:
      uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar35 = String::hash();
      uVar24 = CONCAT44(0,uVar22);
      lVar34 = *(long *)(param_2 + 0x10);
      uVar27 = 1;
      if (uVar35 != 0) {
        uVar27 = uVar35;
      }
      uVar37 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar27 * lVar32;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24;
      lVar31 = SUB168(auVar7 * auVar15,8);
      uVar35 = *(uint *)(lVar34 + lVar31 * 4);
      uVar28 = SUB164(auVar7 * auVar15,8);
      if (uVar35 != 0) {
        do {
          if (uVar35 == uVar27) {
            cVar21 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar31 * 8) + 0x10),
                                        pSVar29);
            if (cVar21 != '\0') {
              lVar32 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar32 + 0x18),in_RCX);
              *(CowData *)(lVar32 + 0x20) = in_RCX[8];
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar32 + 0x28),in_RCX + 0x10);
              *(CowData *)(lVar32 + 0x30) = in_RCX[0x18];
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar32 + 0x38),in_RCX + 0x20);
              local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar28 * 8);
              goto LAB_00129241;
            }
            lVar34 = *(long *)(param_2 + 0x10);
          }
          uVar37 = uVar37 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar28 + 1) * lVar32;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar24;
          lVar31 = SUB168(auVar8 * auVar16,8);
          uVar35 = *(uint *)(lVar34 + lVar31 * 4);
          uVar28 = SUB164(auVar8 * auVar16,8);
        } while ((uVar35 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar35 * lVar32, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar24, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar22 + uVar28) - SUB164(auVar9 * auVar17,8)) * lVar32,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar24, uVar37 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar26 = *(int *)(param_2 + 0x2c);
    }
LAB_00128f54:
    if ((float)uVar25 * __LC22 < (float)(iVar26 + 1)) goto LAB_00128f76;
  }
  local_78 = 0;
  if (*(long *)pSVar29 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pSVar29);
  }
  local_70 = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,in_RCX);
  }
  local_68 = in_RCX[8];
  local_60 = 0;
  if (*(long *)(in_RCX + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,in_RCX + 0x10);
  }
  local_58 = in_RCX[0x18];
  local_50[0] = 0;
  lVar32 = *(long *)(in_RCX + 0x20);
  if (*(long *)(in_RCX + 0x20) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX + 0x20);
    lVar32 = local_50[0];
  }
  CVar20 = local_58;
  local_b0 = (long *)operator_new(0x40,"");
  local_b0[2] = 0;
  *local_b0 = 0;
  local_b0[1] = 0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 2),(CowData *)&local_78);
  }
  local_b0[3] = 0;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 3),(CowData *)&local_70);
  }
  *(CowData *)(local_b0 + 4) = local_68;
  local_b0[5] = 0;
  if (local_60 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 5),(CowData *)&local_60);
  }
  *(CowData *)(local_b0 + 6) = CVar20;
  local_b0[7] = 0;
  if (lVar32 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 7),(CowData *)local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
  }
  else if (in_R8B == '\0') {
    *puVar2 = local_b0;
    local_b0[1] = (long)puVar2;
    *(long **)(param_2 + 0x20) = local_b0;
  }
  else {
    lVar32 = *(long *)(param_2 + 0x18);
    *(long **)(lVar32 + 8) = local_b0;
    *local_b0 = lVar32;
    *(long **)(param_2 + 0x18) = local_b0;
  }
  uVar22 = String::hash();
  lVar32 = *(long *)(param_2 + 0x10);
  uVar25 = 1;
  if (uVar22 != 0) {
    uVar25 = uVar22;
  }
  uVar35 = 0;
  uVar24 = (ulong)uVar25;
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar22);
  lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar24 * lVar34;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar36;
  lVar30 = SUB168(auVar3 * auVar11,8);
  lVar31 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar32 + lVar30 * 4);
  iVar26 = SUB164(auVar3 * auVar11,8);
  uVar27 = *puVar1;
  plVar19 = local_b0;
  while (uVar27 != 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar27 * lVar34;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar36;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)((iVar26 + uVar22) - SUB164(auVar4 * auVar12,8)) * lVar34;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar36;
    local_c8 = SUB164(auVar5 * auVar13,8);
    plVar38 = plVar19;
    if (local_c8 < uVar35) {
      *puVar1 = (uint)uVar24;
      uVar24 = (ulong)uVar27;
      puVar2 = (undefined8 *)(lVar31 + lVar30 * 8);
      plVar38 = (long *)*puVar2;
      *puVar2 = plVar19;
      uVar35 = local_c8;
    }
    uVar25 = (uint)uVar24;
    uVar35 = uVar35 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)(iVar26 + 1) * lVar34;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar36;
    lVar30 = SUB168(auVar6 * auVar14,8);
    puVar1 = (uint *)(lVar32 + lVar30 * 4);
    iVar26 = SUB164(auVar6 * auVar14,8);
    plVar19 = plVar38;
    uVar27 = *puVar1;
  }
  *(long **)(lVar31 + lVar30 * 8) = plVar19;
  *puVar1 = uVar25;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00129241:
  *(long **)param_1 = local_b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, DocData::EnumDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::EnumDoc> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, DocData::EnumDoc, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, DocData::EnumDoc>
   > > const&) */

void __thiscall
HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
::operator=(HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
            *this,HashMap *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  long local_40;
  ulong uVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
               *)param_1) {
    uVar5 = *(uint *)(this + 0x28);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar5 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar2 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x38));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar3 << 2 != lVar6);
        uVar5 = *(uint *)(this + 0x28);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar5 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar3 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar5 != 0x1c) {
        uVar4 = (ulong)uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar4 * 4)) {
            if (uVar3 != uVar5) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar3;
              }
              else {
                _resize_and_rehash(this,uVar3);
              }
            }
            goto LAB_00129659;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00129659:
    if (*(long *)(param_1 + 8) != 0) {
      for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        insert(aSStack_48,(EnumDoc *)this,(bool)((char)puVar1 + '\x10'));
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::PropertyDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::PropertyDoc>::resize<false>(CowData<DocData::PropertyDoc> *this,long param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 0x78;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x78 == 0) {
LAB_00129ad0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x78 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  if (uVar9 == 0xffffffffffffffff) goto LAB_00129ad0;
  uVar10 = param_1;
  if (param_1 <= lVar7) {
    while (puVar6 = *(undefined8 **)this, puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar10) {
        if (uVar9 + 1 != lVar8) {
          puVar6 = puVar6 + -2;
          puVar3 = (undefined8 *)Memory::realloc_static(puVar6,uVar9 + 0x11,false);
          if (puVar3 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar6 = *(undefined8 **)this;
            if (puVar6 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar6 = puVar3 + 2;
            *puVar3 = 1;
            *(undefined8 **)this = puVar6;
          }
        }
        puVar6[-1] = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(puVar6 + uVar10 * 0xf);
      CowData<char32_t>::_unref(this_00 + 0x70);
      CowData<char32_t>::_unref(this_00 + 0x68);
      CowData<char32_t>::_unref(this_00 + 0x58);
      CowData<char32_t>::_unref(this_00 + 0x48);
      CowData<char32_t>::_unref(this_00 + 0x38);
      CowData<char32_t>::_unref(this_00 + 0x30);
      CowData<char32_t>::_unref(this_00 + 0x28);
      CowData<char32_t>::_unref(this_00 + 0x20);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
LAB_00129b79:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar9 + 1 == lVar8) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00129b79;
    lVar7 = puVar6[-1];
LAB_00129a30:
    if (param_1 <= lVar7) goto LAB_00129921;
  }
  else {
    if (lVar7 != 0) {
      puVar3 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar9 + 0x11,false);
      if (puVar3 == (undefined8 *)0x0) {
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      *(undefined8 **)this = puVar6;
      lVar7 = puVar3[1];
      goto LAB_00129a30;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar7 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar6 + lVar7 * 0xf);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 7;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1][8] = 0;
    pauVar4[2] = (undefined1  [16])0x0;
    pauVar4[3] = (undefined1  [16])0x0;
    pauVar4[4][0] = 0;
    *(undefined8 *)(pauVar4[4] + 8) = 0;
    pauVar4[5][0] = 0;
    *(undefined8 *)(pauVar4[5] + 8) = 0;
    pauVar4[6][0] = 0;
    *(undefined1 (*) [16])(pauVar4[6] + 8) = (undefined1  [16])0x0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(puVar6 + param_1 * 0xf) != (undefined1 (*) [16])(*pauVar2 + 8));
LAB_00129921:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::ThemeItemDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::ThemeItemDoc>::resize<false>(CowData<DocData::ThemeItemDoc> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 0x50;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x50 == 0) {
LAB_00129ea0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x50 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  if (uVar9 == 0xffffffffffffffff) goto LAB_00129ea0;
  uVar10 = param_1;
  if (param_1 <= lVar7) {
    while (puVar6 = *(undefined8 **)this, puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar10) {
        if (uVar9 + 1 != lVar8) {
          puVar6 = puVar6 + -2;
          puVar2 = (undefined8 *)Memory::realloc_static(puVar6,uVar9 + 0x11,false);
          if (puVar2 == (undefined8 *)0x0) {
            uVar5 = CowData<int>::_realloc((long)puVar6);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            puVar6 = *(undefined8 **)this;
            if (puVar6 == (undefined8 *)0x0) {
              _DAT_00000000 = 0;
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            puVar6 = puVar2 + 2;
            *puVar2 = 1;
            *(undefined8 **)this = puVar6;
          }
        }
        puVar6[-1] = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(puVar6 + uVar10 * 10);
      CowData<char32_t>::_unref(this_00 + 0x48);
      CowData<char32_t>::_unref(this_00 + 0x40);
      CowData<char32_t>::_unref(this_00 + 0x38);
      CowData<char32_t>::_unref(this_00 + 0x28);
      CowData<char32_t>::_unref(this_00 + 0x18);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
LAB_00129f49:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar9 + 1 == lVar8) {
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00129f49;
    lVar7 = puVar6[-1];
LAB_00129e01:
    if (param_1 <= lVar7) goto LAB_00129d15;
  }
  else {
    if (lVar7 != 0) {
      puVar2 = (undefined8 *)
               Memory::realloc_static((void *)(*(long *)this + -0x10),uVar9 + 0x11,false);
      if (puVar2 == (undefined8 *)0x0) {
        _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,
                         "Parameter \"mem_new\" is null.",0,0);
        return 6;
      }
      puVar6 = puVar2 + 2;
      *puVar2 = 1;
      *(undefined8 **)this = puVar6;
      lVar7 = puVar2[1];
      goto LAB_00129e01;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar7 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar6 + lVar7 * 10);
  do {
    pauVar3[2][0] = 0;
    pauVar4 = pauVar3 + 5;
    *pauVar3 = (undefined1  [16])0x0;
    pauVar3[1] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar3[2] + 8) = 0;
    pauVar3[3][0] = 0;
    *(undefined1 (*) [16])(pauVar3[3] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar3[4] + 8) = 0;
    pauVar3 = pauVar4;
  } while (pauVar4 != (undefined1 (*) [16])(puVar6 + param_1 * 10));
LAB_00129d15:
  puVar6[-1] = param_1;
  return 0;
}



/* CowData<bool>::_unref() */

void __thiscall CowData<bool>::_unref(CowData<bool> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::clear() */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  void *pvVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar5 = *(void **)this;
  if (pvVar5 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar5 + 0x10);
    pEVar3 = *(Element **)(this + 8);
    if (pEVar1 != pEVar3) {
      pEVar4 = *(Element **)(pEVar1 + 0x10);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar4 + 0x10);
        if (pEVar3 != pEVar7) {
          pEVar6 = *(Element **)(pEVar7 + 0x10);
          if (pEVar3 != pEVar6) {
            _cleanup_tree(this,pEVar6);
            pEVar6 = *(Element **)(this + 8);
          }
          pEVar3 = *(Element **)(pEVar7 + 8);
          if (pEVar6 != pEVar3) {
            pEVar2 = *(Element **)(pEVar3 + 0x10);
            if (pEVar6 != pEVar2) {
              _cleanup_tree(this,pEVar2);
              pEVar2 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar3 + 8) != pEVar2) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
            Memory::free_static(pEVar3,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
          Memory::free_static(pEVar7,false);
          pEVar7 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar4 + 8);
        if (pEVar3 != pEVar7) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar7 = *(Element **)(this + 8);
          }
          pEVar6 = *(Element **)(pEVar3 + 8);
          if (pEVar6 != pEVar7) {
            if (*(Element **)(pEVar6 + 0x10) != pEVar7) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
              pEVar7 = *(Element **)(this + 8);
            }
            if (pEVar7 != *(Element **)(pEVar6 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar6 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
            Memory::free_static(pEVar6,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar4 + 0x30));
        Memory::free_static(pEVar4,false);
        pEVar4 = *(Element **)(this + 8);
      }
      pEVar3 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar4) {
        pEVar7 = *(Element **)(pEVar3 + 0x10);
        if (pEVar7 != pEVar4) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
          Memory::free_static(pEVar7,false);
          pEVar4 = *(Element **)(this + 8);
        }
        pEVar7 = *(Element **)(pEVar3 + 8);
        if (pEVar7 != pEVar4) {
          if (*(Element **)(pEVar7 + 0x10) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar7 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar7 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
          Memory::free_static(pEVar7,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
        Memory::free_static(pEVar3,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
      Memory::free_static(pEVar1,false);
      pvVar5 = *(void **)this;
      pEVar3 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar5 + 0x10) = pEVar3;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x30));
    Memory::free_static(pvVar5,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, RBSet<String, NaturalNoCaseComparator, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator> > > >::operator[](String const&) */

RBSet<String,NaturalNoCaseComparator,DefaultAllocator> * __thiscall
HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
::operator[](HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
             *this,String *param_1)

{
  void *pvVar1;
  void *__s;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char cVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  long lVar41;
  undefined4 *puVar42;
  void *pvVar43;
  int iVar44;
  long lVar45;
  ulong uVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  uint uVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  uint uVar53;
  uint *puVar54;
  uint uVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  uint local_e8;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *local_d0;
  long local_c8;
  void *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  long local_68;
  undefined4 *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0012aaa0:
    local_88 = 0;
    local_90 = &_GlobalNilClass::_nil;
    local_98 = (void *)0x0;
    uVar46 = (ulong)uVar55;
    uVar38 = uVar46 * 4;
    uVar52 = uVar46 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar43 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar1 = *(void **)(this + 0x10);
      if ((pvVar1 < (void *)((long)pvVar43 + uVar52)) && (pvVar43 < (void *)((long)pvVar1 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar1 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar46 != uVar38);
      }
      else {
        memset(pvVar1,0,uVar38);
        memset(pvVar43,0,uVar52);
      }
      goto LAB_0012a271;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0012a458;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0012a284;
LAB_0012a47e:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_d0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&DAT_00000018;
      goto LAB_0012a9eb;
    }
    uVar38 = (ulong)(uVar55 + 1);
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar43 = *(void **)(this + 8);
    uVar46 = (ulong)uVar55;
    uVar38 = uVar46 * 4;
    pvVar1 = *(void **)(this + 0x10);
    uVar52 = uVar46 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar46);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar52);
      }
    }
    uVar38 = 0;
    if (uVar37 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar1 + uVar38 * 4);
        if (uVar55 != 0) {
          uVar49 = 0;
          lVar41 = *(long *)(this + 0x10);
          uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar36);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar55 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar52;
          lVar45 = SUB168(auVar10 * auVar26,8);
          puVar54 = (uint *)(lVar41 + lVar45 * 4);
          iVar44 = SUB164(auVar10 * auVar26,8);
          uVar35 = *puVar54;
          uVar39 = *(undefined8 *)((long)pvVar43 + uVar38 * 8);
          while (uVar35 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar35 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar52;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar36 + iVar44) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar52;
            local_e8 = SUB164(auVar12 * auVar28,8);
            uVar47 = uVar39;
            if (local_e8 < uVar49) {
              *puVar54 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar35;
              uVar49 = local_e8;
            }
            uVar49 = uVar49 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar44 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar52;
            lVar45 = SUB168(auVar13 * auVar29,8);
            puVar54 = (uint *)(lVar41 + lVar45 * 4);
            iVar44 = SUB164(auVar13 * auVar29,8);
            uVar39 = uVar47;
            uVar35 = *puVar54;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar39;
          *puVar54 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar37 != uVar38);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar1,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = CONCAT44(0,uVar55);
      uVar36 = String::hash();
      lVar51 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar36 != 0) {
        uVar37 = uVar36;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar37 * lVar41;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar38;
      lVar45 = SUB168(auVar6 * auVar22,8);
      uVar36 = *(uint *)(lVar51 + lVar45 * 4);
      uVar35 = SUB164(auVar6 * auVar22,8);
      if (uVar36 == 0) {
        lVar50 = *(long *)(this + 8);
      }
      else {
        uVar49 = 0;
        lVar50 = *(long *)(this + 8);
        do {
          if (uVar37 == uVar36) {
            cVar34 = String::operator==((String *)(*(long *)(lVar50 + lVar45 * 8) + 0x10),param_1);
            if (cVar34 != '\0') {
              local_d0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar35 * 8) + 0x18);
              goto LAB_0012aa17;
            }
            lVar51 = *(long *)(this + 0x10);
            lVar50 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar35 + 1) * lVar41;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar38;
          lVar45 = SUB168(auVar7 * auVar23,8);
          uVar36 = *(uint *)(lVar51 + lVar45 * 4);
          uVar35 = SUB164(auVar7 * auVar23,8);
        } while ((uVar36 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar36 * lVar41, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar38, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar35 + uVar55) - SUB164(auVar8 * auVar24,8)) * lVar41,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar38, uVar49 <= SUB164(auVar9 * auVar25,8)));
      }
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar50 == 0) goto LAB_0012aaa0;
    }
LAB_0012a271:
    uVar46 = (ulong)uVar55;
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
LAB_0012a284:
      uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar35 = String::hash();
      uVar38 = CONCAT44(0,uVar37);
      lVar51 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar35 != 0) {
        uVar36 = uVar35;
      }
      uVar53 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar36 * lVar41;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar45 = SUB168(auVar2 * auVar18,8);
      uVar35 = *(uint *)(lVar51 + lVar45 * 4);
      uVar49 = SUB164(auVar2 * auVar18,8);
      if (uVar35 != 0) {
        do {
          if (uVar36 == uVar35) {
            cVar34 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar34 != '\0') {
              lVar41 = *(long *)(*(long *)(this + 8) + (ulong)uVar49 * 8);
              RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
                        ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)(lVar41 + 0x18));
              if ((local_98 != (void *)0x0) &&
                 (puVar40 = *(undefined8 **)((long)local_98 + 0x10),
                 *(undefined8 **)((long)local_98 + 0x10) != local_90)) {
                do {
                  puVar48 = puVar40;
                  puVar40 = (undefined8 *)puVar48[2];
                } while (local_90 != (undefined8 *)puVar48[2]);
                do {
                  if (*(long *)(lVar41 + 0x18) == 0) {
                    puVar42 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
                    *(undefined1 (*) [16])(puVar42 + 8) = (undefined1  [16])0x0;
                    uVar39 = *(undefined8 *)(lVar41 + 0x20);
                    *(undefined8 *)(puVar42 + 0xc) = 0;
                    *(undefined4 **)(lVar41 + 0x18) = puVar42;
                    *puVar42 = 1;
                    *(undefined8 *)(puVar42 + 2) = uVar39;
                    *(undefined8 *)(puVar42 + 4) = uVar39;
                    *(undefined8 *)(puVar42 + 6) = uVar39;
                  }
                  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert
                            ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                             (lVar41 + 0x18),(String *)(puVar48 + 6));
                  puVar48 = (undefined8 *)puVar48[4];
                } while (puVar48 != (undefined8 *)0x0);
              }
              local_d0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar49 * 8) + 0x18);
              goto LAB_0012a9eb;
            }
            lVar51 = *(long *)(this + 0x10);
          }
          uVar53 = uVar53 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(uVar49 + 1) * lVar41;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar38;
          lVar45 = SUB168(auVar3 * auVar19,8);
          uVar35 = *(uint *)(lVar51 + lVar45 * 4);
          uVar49 = SUB164(auVar3 * auVar19,8);
        } while ((uVar35 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar35 * lVar41, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar38, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((uVar37 + uVar49) - SUB164(auVar4 * auVar20,8)) * lVar41,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar38, uVar53 <= SUB164(auVar5 * auVar21,8)));
      }
      uVar46 = (ulong)uVar55;
      iVar44 = *(int *)(this + 0x2c);
    }
LAB_0012a458:
    if ((float)uVar46 * __LC22 < (float)(iVar44 + 1)) goto LAB_0012a47e;
  }
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  local_50 = 0;
  local_60 = (undefined4 *)0x0;
  local_58 = &_GlobalNilClass::_nil;
  if ((local_98 != (void *)0x0) &&
     (puVar40 = *(undefined8 **)((long)local_98 + 0x10),
     *(undefined8 **)((long)local_98 + 0x10) != local_90)) {
    do {
      puVar48 = puVar40;
      puVar40 = (undefined8 *)puVar48[2];
    } while (local_90 != (undefined8 *)puVar48[2]);
    do {
      if (local_60 == (undefined4 *)0x0) {
        local_60 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(local_60 + 8) = (undefined1  [16])0x0;
        *(undefined8 *)(local_60 + 0xc) = 0;
        *local_60 = 1;
        *(undefined8 **)(local_60 + 2) = local_58;
        *(undefined8 **)(local_60 + 4) = local_58;
        *(undefined8 **)(local_60 + 6) = local_58;
      }
      RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert
                ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_60,
                 (String *)(puVar48 + 6));
      puVar48 = (undefined8 *)puVar48[4];
    } while (puVar48 != (undefined8 *)0x0);
  }
  puVar40 = (undefined8 *)operator_new(0x30,"");
  puVar40[2] = 0;
  *puVar40 = local_78._0_8_;
  puVar40[1] = local_78._8_8_;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar40 + 2),(CowData *)&local_68);
  }
  local_d0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)(puVar40 + 3);
  puVar40[3] = 0;
  *(undefined4 *)(puVar40 + 5) = 0;
  puVar40[4] = &_GlobalNilClass::_nil;
  if ((local_60 != (undefined4 *)0x0) &&
     (puVar48 = *(undefined8 **)(local_60 + 4), *(undefined8 **)(local_60 + 4) != local_58)) {
    do {
      puVar56 = puVar48;
      puVar48 = (undefined8 *)puVar56[2];
    } while (local_58 != (undefined8 *)puVar56[2]);
    lVar41 = 0;
    while( true ) {
      if (lVar41 == 0) {
        puVar42 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(puVar42 + 8) = (undefined1  [16])0x0;
        uVar39 = puVar40[4];
        *(undefined8 *)(puVar42 + 0xc) = 0;
        puVar40[3] = puVar42;
        *puVar42 = 1;
        *(undefined8 *)(puVar42 + 2) = uVar39;
        *(undefined8 *)(puVar42 + 4) = uVar39;
        *(undefined8 *)(puVar42 + 6) = uVar39;
      }
      RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert
                (local_d0,(String *)(puVar56 + 6));
      puVar56 = (undefined8 *)puVar56[4];
      if (puVar56 == (undefined8 *)0x0) break;
      lVar41 = puVar40[3];
    }
  }
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
            ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_60);
  puVar42 = local_60;
  if (local_60 != (undefined4 *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(local_60 + 0xc));
    Memory::free_static(puVar42,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  puVar48 = *(undefined8 **)(this + 0x20);
  if (puVar48 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar40;
  }
  else {
    *puVar48 = puVar40;
    puVar40[1] = puVar48;
  }
  *(undefined8 **)(this + 0x20) = puVar40;
  uVar37 = String::hash();
  lVar41 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar37);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)uVar55 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar38;
  lVar45 = SUB168(auVar14 * auVar30,8);
  puVar54 = (uint *)(lVar41 + lVar45 * 4);
  iVar44 = SUB164(auVar14 * auVar30,8);
  uVar36 = *puVar54;
  if (uVar36 == 0) {
    local_c8 = *(long *)(this + 8);
  }
  else {
    local_c8 = *(long *)(this + 8);
    uVar35 = 0;
    puVar48 = puVar40;
    do {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar36 * lVar51;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar38;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)((iVar44 + uVar37) - SUB164(auVar15 * auVar31,8)) * lVar51;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar38;
      local_e8 = SUB164(auVar16 * auVar32,8);
      puVar40 = puVar48;
      if (local_e8 < uVar35) {
        puVar56 = (undefined8 *)(local_c8 + lVar45 * 8);
        *puVar54 = uVar55;
        puVar40 = (undefined8 *)*puVar56;
        *puVar56 = puVar48;
        uVar35 = local_e8;
        uVar55 = uVar36;
      }
      uVar35 = uVar35 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)(iVar44 + 1) * lVar51;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar38;
      lVar45 = SUB168(auVar17 * auVar33,8);
      puVar54 = (uint *)(lVar41 + lVar45 * 4);
      iVar44 = SUB164(auVar17 * auVar33,8);
      uVar36 = *puVar54;
      puVar48 = puVar40;
    } while (uVar36 != 0);
  }
  *(undefined8 **)(local_c8 + lVar45 * 8) = puVar40;
  *puVar54 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0012a9eb:
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
            ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_98);
  pvVar43 = local_98;
  if (local_98 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)local_98 + 0x30));
    Memory::free_static(pvVar43,false);
  }
LAB_0012aa17:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_erase_fix_rb(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_erase_fix_rb
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  Element *pEVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  Element *pEVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  
  pEVar8 = *(Element **)(this + 8);
  pEVar2 = *(Element **)(*(long *)this + 0x10);
  pEVar9 = *(Element **)(param_1 + 0x18);
  pcVar12 = (char *)this;
  pcVar11 = (char *)param_1;
  pEVar7 = pEVar8;
  do {
    pEVar6 = pEVar9;
    if (pEVar2 == pEVar7) {
LAB_0012ae50:
      iVar10 = *(int *)pEVar8;
joined_r0x0012af13:
      if (iVar10 != 1) {
        _err_print_error("_erase_fix_rb","./core/templates/rb_set.h",0x1e3,
                         "Condition \"_data._nil->color != BLACK\" is true.",0,0);
        return;
      }
      return;
    }
    pEVar9 = param_1;
    if (*(int *)param_1 != 0) {
LAB_0012adf9:
      iVar10 = (int)pcVar11;
      pEVar7 = *(Element **)(pEVar9 + 0x10);
      if (*(int *)pEVar7 == 1) goto LAB_0012ae06;
LAB_0012aeb0:
      if (pEVar9 != *(Element **)(pEVar6 + 8)) {
        iVar1 = *(int *)pEVar6;
        pEVar7 = pEVar9;
        goto joined_r0x0012aebf;
      }
      if (**(int **)(pEVar9 + 8) == 1) {
        *(int *)pEVar7 = 1;
        if (pEVar9 == pEVar8) {
          _set_color((Element *)pcVar12,iVar10);
          pEVar8 = *(Element **)(this + 8);
          pEVar7 = *(Element **)(pEVar9 + 0x10);
        }
        else {
          *(int *)pEVar9 = 0;
        }
        pEVar2 = *(Element **)(pEVar7 + 8);
        *(Element **)(pEVar9 + 0x10) = pEVar2;
        if (pEVar2 != pEVar8) {
          *(Element **)(pEVar2 + 0x18) = pEVar9;
        }
        lVar3 = *(long *)(pEVar9 + 0x18);
        *(long *)(pEVar7 + 0x18) = lVar3;
        if (pEVar9 == *(Element **)(lVar3 + 8)) {
          *(Element **)(lVar3 + 8) = pEVar7;
        }
        else {
          *(Element **)(lVar3 + 0x10) = pEVar7;
        }
        *(Element **)(pEVar7 + 8) = pEVar9;
        *(Element **)(pEVar9 + 0x18) = pEVar7;
        pEVar9 = pEVar7;
      }
LAB_0012b0a1:
      if ((pEVar9 == pEVar8) && (*(int *)pEVar6 == 0)) {
        _set_color((Element *)pcVar12,iVar10);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar9 = *(int *)pEVar6;
      }
      puVar5 = *(undefined4 **)(pEVar9 + 8);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 8);
      pEVar2 = *(Element **)(lVar3 + 0x10);
      *(Element **)(pEVar6 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 0x10)) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      else {
        *(long *)(lVar4 + 8) = lVar3;
      }
      *(Element **)(lVar3 + 0x10) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_0012ae50;
    }
    *(int *)param_1 = 1;
    if (pEVar6 == pEVar8) {
      pcVar11 = "./core/templates/rb_set.h";
      pcVar12 = "_set_color";
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar6 = 0;
    }
    iVar10 = (int)pcVar11;
    if (*(Element **)(pEVar6 + 8) != param_1) {
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar9 = *(Element **)(param_1 + 8);
      pEVar7 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar7;
      if (pEVar7 != pEVar8) {
        *(Element **)(pEVar7 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto LAB_0012adf9;
    }
    pEVar9 = *(Element **)(param_1 + 0x10);
    *(Element **)(pEVar6 + 8) = pEVar9;
    if (pEVar9 != pEVar8) {
      *(Element **)(pEVar9 + 0x18) = pEVar6;
    }
    lVar3 = *(long *)(pEVar6 + 0x18);
    *(long *)(param_1 + 0x18) = lVar3;
    if (pEVar6 == *(Element **)(lVar3 + 0x10)) {
      *(Element **)(lVar3 + 0x10) = param_1;
    }
    else {
      *(Element **)(lVar3 + 8) = param_1;
    }
    *(Element **)(param_1 + 0x10) = pEVar6;
    *(Element **)(pEVar6 + 0x18) = param_1;
    pEVar7 = *(Element **)(pEVar9 + 0x10);
    if (*(int *)pEVar7 != 1) goto LAB_0012aeb0;
LAB_0012ae06:
    iVar10 = (int)pcVar11;
    pEVar7 = *(Element **)(pEVar9 + 8);
    if (*(int *)pEVar7 != 1) {
      if (*(Element **)(pEVar6 + 8) == pEVar9) goto LAB_0012b0a1;
      *(int *)pEVar7 = 1;
      if (pEVar9 == pEVar8) {
        _set_color((Element *)pcVar12,iVar10);
        pEVar8 = *(Element **)(this + 8);
        pEVar7 = *(Element **)(pEVar9 + 8);
      }
      else {
        *(int *)pEVar9 = 0;
      }
      pEVar2 = *(Element **)(pEVar7 + 0x10);
      *(Element **)(pEVar9 + 8) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar9;
      }
      lVar3 = *(long *)(pEVar9 + 0x18);
      *(long *)(pEVar7 + 0x18) = lVar3;
      if (pEVar9 == *(Element **)(lVar3 + 0x10)) {
        *(Element **)(lVar3 + 0x10) = pEVar7;
      }
      else {
        *(Element **)(lVar3 + 8) = pEVar7;
      }
      *(Element **)(pEVar7 + 0x10) = pEVar9;
      *(Element **)(pEVar9 + 0x18) = pEVar7;
      iVar1 = *(int *)pEVar6;
joined_r0x0012aebf:
      if ((iVar1 == 0) && (pEVar7 == pEVar8)) {
        _set_color((Element *)pcVar12,iVar10);
        pEVar8 = *(Element **)(this + 8);
      }
      else {
        *(int *)pEVar7 = iVar1;
      }
      puVar5 = *(undefined4 **)(pEVar7 + 0x10);
      *(int *)pEVar6 = 1;
      *puVar5 = 1;
      lVar3 = *(long *)(pEVar6 + 0x10);
      pEVar2 = *(Element **)(lVar3 + 8);
      *(Element **)(pEVar6 + 0x10) = pEVar2;
      if (pEVar2 != pEVar8) {
        *(Element **)(pEVar2 + 0x18) = pEVar6;
      }
      lVar4 = *(long *)(pEVar6 + 0x18);
      *(long *)(lVar3 + 0x18) = lVar4;
      if (pEVar6 == *(Element **)(lVar4 + 8)) {
        *(long *)(lVar4 + 8) = lVar3;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      iVar10 = *(int *)pEVar8;
      *(Element **)(lVar3 + 8) = pEVar6;
      *(long *)(pEVar6 + 0x18) = lVar3;
      goto joined_r0x0012af13;
    }
    if (pEVar9 == pEVar8) {
      pcVar11 = "./core/templates/rb_set.h";
      pcVar12 = "_set_color";
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      iVar10 = *(int *)pEVar6;
      pEVar8 = *(Element **)(this + 8);
    }
    else {
      *(int *)pEVar9 = 0;
      iVar10 = *(int *)pEVar6;
    }
    if (iVar10 == 0) {
      *(int *)pEVar6 = 1;
      goto LAB_0012ae50;
    }
    pEVar9 = *(Element **)(pEVar6 + 0x18);
    param_1 = *(Element **)(pEVar9 + 0x10);
    pEVar7 = pEVar6;
    if (param_1 == pEVar6) {
      param_1 = *(Element **)(pEVar9 + 8);
    }
  } while( true );
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_erase(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_erase
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,Element *param_1)

{
  int *piVar1;
  Element *pEVar2;
  Element *pEVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  Element *pEVar8;
  Element *pEVar9;
  
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(this + 8);
  pEVar8 = param_1;
  if (piVar4 == piVar1) {
LAB_0012b2f0:
    lVar6 = *(long *)(pEVar8 + 0x18);
    piVar4 = *(int **)(pEVar8 + 8);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 == pEVar8) goto LAB_0012b305;
LAB_0012b20d:
    *(int **)(lVar6 + 8) = piVar4;
  }
  else {
    if (piVar1 != *(int **)(param_1 + 8)) {
      pEVar8 = *(Element **)(param_1 + 0x20);
      piVar4 = *(int **)(pEVar8 + 0x10);
      if (piVar1 == piVar4) goto LAB_0012b2f0;
    }
    lVar6 = *(long *)(pEVar8 + 0x18);
    pEVar9 = *(Element **)(lVar6 + 0x10);
    if (pEVar9 != pEVar8) goto LAB_0012b20d;
LAB_0012b305:
    *(int **)(lVar6 + 0x10) = piVar4;
    pEVar9 = *(Element **)(lVar6 + 8);
  }
  if (*piVar4 == 0) {
    *(long *)(piVar4 + 6) = lVar6;
    *piVar4 = 1;
  }
  else if ((*(int *)pEVar8 == 1) && (lVar6 != *(long *)this)) {
    _erase_fix_rb(this,pEVar9);
  }
  if (pEVar8 != param_1) {
    pEVar9 = *(Element **)(this + 8);
    if (pEVar9 == pEVar8) {
      uVar7 = 0x1fb;
      pcVar5 = "Condition \"rp == _data._nil\" is true.";
      goto LAB_0012b33a;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = *(Element **)(param_1 + 0x10);
    pEVar3 = *(Element **)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(pEVar8 + 0x10) = uVar7;
    *(undefined8 *)(pEVar8 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(int *)pEVar8 = *(int *)param_1;
    if (pEVar9 != pEVar2) {
      *(Element **)(pEVar2 + 0x18) = pEVar8;
    }
    if (pEVar9 != pEVar3) {
      *(Element **)(pEVar3 + 0x18) = pEVar8;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (*(Element **)(lVar6 + 0x10) == param_1) {
      *(Element **)(lVar6 + 0x10) = pEVar8;
    }
    else {
      *(Element **)(lVar6 + 8) = pEVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar6;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  if (**(int **)(this + 8) != 0) {
    return;
  }
  uVar7 = 0x218;
  pcVar5 = "Condition \"_data._nil->color == RED\" is true.";
LAB_0012b33a:
  _err_print_error("_erase","./core/templates/rb_set.h",uVar7,pcVar5,0,0);
  return;
}



/* DocData::ClassDoc::ClassDoc(DocData::ClassDoc const&) */

void __thiscall DocData::ClassDoc::ClassDoc(ClassDoc *this,ClassDoc *param_1)

{
  ClassDoc CVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long in_FS_OFFSET;
  String aSStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
  }
  *(undefined8 *)(this + 0x20) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined8 *)(this + 0x30) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    CowData<DocData::TutorialDoc>::_ref
              ((CowData<DocData::TutorialDoc> *)(this + 0x30),(CowData *)(param_1 + 0x30));
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x40),(CowData *)(param_1 + 0x40));
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x50),(CowData *)(param_1 + 0x50));
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x60),(CowData *)(param_1 + 0x60));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0x70),(CowData *)(param_1 + 0x70));
  }
  *(undefined8 *)(this + 0x80) = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    CowData<DocData::ConstantDoc>::_ref
              ((CowData<DocData::ConstantDoc> *)(this + 0x80),(CowData *)(param_1 + 0x80));
  }
  uVar2 = *(uint *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)uVar2 * 4);
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  lVar3 = 1;
  if (5 < uVar2) {
    do {
      if (uVar2 <= *(uint *)(hash_table_size_primes + lVar3 * 4)) {
        *(int *)(this + 0xb0) = (int)lVar3;
        goto LAB_0012b548;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0012b548:
  if ((*(int *)(param_1 + 0xb4) != 0) &&
     (plVar4 = *(long **)(param_1 + 0xa0), plVar4 != (long *)0x0)) {
    do {
      HashMap<String,DocData::EnumDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::EnumDoc>>>
      ::insert(aSStack_38,(EnumDoc *)(this + 0x88),(bool)((char)plVar4 + '\x10'));
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  *(undefined8 *)(this + 0xc0) = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    CowData<DocData::PropertyDoc>::_ref
              ((CowData<DocData::PropertyDoc> *)(this + 0xc0),(CowData *)(param_1 + 0xc0));
  }
  *(undefined8 *)(this + 0xd0) = 0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    CowData<DocData::MethodDoc>::_ref
              ((CowData<DocData::MethodDoc> *)(this + 0xd0),(CowData *)(param_1 + 0xd0));
  }
  *(undefined8 *)(this + 0xe0) = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    CowData<DocData::ThemeItemDoc>::_ref
              ((CowData<DocData::ThemeItemDoc> *)(this + 0xe0),(CowData *)(param_1 + 0xe0));
  }
  CVar1 = param_1[0xe8];
  *(undefined8 *)(this + 0xf0) = 0;
  lVar3 = *(long *)(param_1 + 0xf0);
  this[0xe8] = CVar1;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xf0),(CowData *)(param_1 + 0xf0));
  }
  CVar1 = param_1[0xf8];
  *(undefined8 *)(this + 0x100) = 0;
  lVar3 = *(long *)(param_1 + 0x100);
  this[0xf8] = CVar1;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x100),(CowData *)(param_1 + 0x100));
  }
  CVar1 = param_1[0x108];
  *(undefined8 *)(this + 0x110) = 0;
  lVar3 = *(long *)(param_1 + 0x110);
  this[0x108] = CVar1;
  if (lVar3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x110),(CowData *)(param_1 + 0x110));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, DocData::ClassDoc, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, DocData::ClassDoc> > >::operator[](String const&) */

ClassDoc * __thiscall
HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
::operator[](HashMap<String,DocData::ClassDoc,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,DocData::ClassDoc>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined8 *puVar27;
  void *pvVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  ClassDoc *pCVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 *puVar40;
  long in_FS_OFFSET;
  byte bVar41;
  ClassDoc *local_2e0;
  uint local_2a0;
  uint local_29c;
  ClassDoc local_298 [176];
  undefined8 local_1e8;
  undefined1 local_178 [16];
  long local_168;
  ClassDoc local_160 [288];
  long local_40;
  
  bVar41 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2a0 = 0;
  cVar22 = _lookup_pos(this,param_1,&local_2a0);
  if (cVar22 != '\0') {
    local_2e0 = (ClassDoc *)(*(long *)(*(long *)(this + 8) + (ulong)local_2a0 * 8) + 0x18);
    goto LAB_0012b754;
  }
  lVar5 = *(long *)(this + 8);
  pCVar36 = local_298;
  for (lVar29 = 0x23; lVar29 != 0; lVar29 = lVar29 + -1) {
    *(undefined8 *)pCVar36 = 0;
    pCVar36 = pCVar36 + (ulong)bVar41 * -0x10 + 8;
  }
  local_1e8 = 2;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar5 == 0) {
    uVar34 = (ulong)uVar33;
    uVar25 = uVar34 * 4;
    uVar39 = uVar34 * 8;
    uVar26 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(this + 0x10) = uVar26;
    pvVar28 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = pvVar28;
    if (uVar33 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar28 + uVar39)) && (pvVar28 < (void *)((long)pvVar4 + uVar25))
         ) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar25 * 4) = 0;
          *(undefined8 *)((long)pvVar28 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar34 != uVar25);
      }
      else {
        memset(pvVar4,0,uVar25);
        memset(pvVar28,0,uVar39);
      }
    }
  }
  local_29c = 0;
  cVar22 = _lookup_pos(this,param_1,&local_29c);
  if (cVar22 == '\0') {
    if ((float)uVar33 * __LC22 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar33 = *(uint *)(this + 0x28);
      if (uVar33 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_2e0 = (ClassDoc *)&DAT_00000018;
        goto LAB_0012bba3;
      }
      uVar25 = (ulong)(uVar33 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar24 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
      if (uVar33 + 1 < 2) {
        uVar25 = 2;
      }
      uVar33 = *(uint *)(hash_table_size_primes + uVar25 * 4);
      uVar34 = (ulong)uVar33;
      *(int *)(this + 0x28) = (int)uVar25;
      pvVar28 = *(void **)(this + 8);
      uVar25 = uVar34 * 4;
      uVar39 = uVar34 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      __s_00 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = __s_00;
      if (uVar33 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar25))) {
          uVar25 = 0;
          do {
            *(undefined4 *)((long)__s + uVar25 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while (uVar34 != uVar25);
        }
        else {
          memset(__s,0,uVar25);
          memset(__s_00,0,uVar39);
        }
      }
      if (uVar24 != 0) {
        uVar25 = 0;
        do {
          uVar33 = *(uint *)((long)pvVar4 + uVar25 * 4);
          if (uVar33 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar37 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar39 = CONCAT44(0,uVar3);
            lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar33 * lVar29;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar39;
            lVar31 = SUB168(auVar6 * auVar14,8);
            puVar1 = (uint *)(lVar5 + lVar31 * 4);
            iVar30 = SUB164(auVar6 * auVar14,8);
            uVar38 = *puVar1;
            uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
            while (uVar38 != 0) {
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar38 * lVar29;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)((iVar30 + uVar3) - SUB164(auVar7 * auVar15,8)) * lVar29;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar39;
              uVar23 = SUB164(auVar8 * auVar16,8);
              uVar35 = uVar26;
              if (uVar23 < uVar37) {
                *puVar1 = uVar33;
                puVar27 = (undefined8 *)((long)__s_00 + lVar31 * 8);
                uVar35 = *puVar27;
                *puVar27 = uVar26;
                uVar33 = uVar38;
                uVar37 = uVar23;
              }
              uVar37 = uVar37 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)(iVar30 + 1) * lVar29;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar39;
              lVar31 = SUB168(auVar9 * auVar17,8);
              puVar1 = (uint *)(lVar5 + lVar31 * 4);
              iVar30 = SUB164(auVar9 * auVar17,8);
              uVar26 = uVar35;
              uVar38 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar31 * 8) = uVar26;
            *puVar1 = uVar33;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar24 != uVar25);
        Memory::free_static(pvVar28,false);
        Memory::free_static(pvVar4,false);
      }
    }
    local_168 = 0;
    local_178 = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,(CowData *)param_1);
    }
    DocData::ClassDoc::ClassDoc(local_160,local_298);
    puVar27 = (undefined8 *)operator_new(0x130,"");
    puVar27[2] = 0;
    *puVar27 = local_178._0_8_;
    puVar27[1] = local_178._8_8_;
    if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar27 + 2),(CowData *)&local_168);
    }
    local_2e0 = (ClassDoc *)(puVar27 + 3);
    DocData::ClassDoc::ClassDoc(local_2e0,local_160);
    DocData::ClassDoc::~ClassDoc(local_160);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar27;
    }
    else {
      *puVar40 = puVar27;
      puVar27[1] = puVar40;
    }
    *(undefined8 **)(this + 0x20) = puVar27;
    uVar24 = String::hash();
    lVar5 = *(long *)(this + 0x10);
    uVar33 = 1;
    if (uVar24 != 0) {
      uVar33 = uVar24;
    }
    uVar38 = 0;
    uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar25 = CONCAT44(0,uVar24);
    lVar29 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar33 * lVar29;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar25;
    lVar32 = SUB168(auVar10 * auVar18,8);
    lVar31 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar32 * 4);
    iVar30 = SUB164(auVar10 * auVar18,8);
    uVar3 = *puVar1;
    while (uVar3 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar3 * lVar29;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)((uVar24 + iVar30) - SUB164(auVar11 * auVar19,8)) * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar25;
      uVar37 = SUB164(auVar12 * auVar20,8);
      puVar40 = puVar27;
      if (uVar37 < uVar38) {
        *puVar1 = uVar33;
        puVar2 = (undefined8 *)(lVar31 + lVar32 * 8);
        puVar40 = (undefined8 *)*puVar2;
        *puVar2 = puVar27;
        uVar38 = uVar37;
        uVar33 = uVar3;
      }
      uVar38 = uVar38 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)(iVar30 + 1) * lVar29;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar25;
      lVar32 = SUB168(auVar13 * auVar21,8);
      puVar1 = (uint *)(lVar5 + lVar32 * 4);
      iVar30 = SUB164(auVar13 * auVar21,8);
      puVar27 = puVar40;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar31 + lVar32 * 8) = puVar27;
    *puVar1 = uVar33;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar25 = (ulong)local_29c;
    DocData::ClassDoc::operator=
              ((ClassDoc *)(*(long *)(*(long *)(this + 8) + uVar25 * 8) + 0x18),local_298);
    local_2e0 = (ClassDoc *)(*(long *)(*(long *)(this + 8) + uVar25 * 8) + 0x18);
  }
LAB_0012bba3:
  DocData::ClassDoc::~ClassDoc(local_298);
LAB_0012b754:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete_allocator<List<ThemeDB::ThemeItemBind, DefaultAllocator>::Element,
   DefaultAllocator>(List<ThemeDB::ThemeItemBind, DefaultAllocator>::Element*) */

void memdelete_allocator<List<ThemeDB::ThemeItemBind,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_1 + 0x28,param_1 + 0x28,3);
  }
  if (StringName::configured != '\0') {
    if (*(long *)(param_1 + 0x18) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0012bd8a;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0012bd8a;
    }
    if (*(long *)(param_1 + 8) != 0) {
      StringName::unref();
    }
  }
LAB_0012bd8a:
  Memory::free_static(param_1,false);
  return;
}



/* DocTools::merge_from(DocTools const&) */

void DocTools::_GLOBAL__sub_I_merge_from(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ClassDoc::ClassDoc(DocData::ClassDoc const&) */

void __thiscall DocData::ClassDoc::ClassDoc(ClassDoc *this,ClassDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ClassDoc::~ClassDoc() */

void __thiscall DocData::ClassDoc::~ClassDoc(ClassDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::MethodDoc::MethodDoc(DocData::MethodDoc const&) */

void __thiscall DocData::MethodDoc::MethodDoc(MethodDoc *this,MethodDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::MethodDoc::~MethodDoc() */

void __thiscall DocData::MethodDoc::~MethodDoc(MethodDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<MethodInfo, DefaultAllocator>::~List() */

void __thiscall List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Pair<String, Variant>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,Variant>,DefaultAllocator>::~List
          (List<Pair<String,Variant>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::PropertyDoc::PropertyDoc(DocData::PropertyDoc const&) */

void __thiscall DocData::PropertyDoc::PropertyDoc(PropertyDoc *this,PropertyDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ConstantDoc::ConstantDoc(DocData::ConstantDoc const&) */

void __thiscall DocData::ConstantDoc::ConstantDoc(ConstantDoc *this,ConstantDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ThemeItemDoc::ThemeItemDoc(DocData::ThemeItemDoc const&) */

void __thiscall DocData::ThemeItemDoc::ThemeItemDoc(ThemeItemDoc *this,ThemeItemDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ArgumentDoc::ArgumentDoc(DocData::ArgumentDoc const&) */

void __thiscall DocData::ArgumentDoc::ArgumentDoc(ArgumentDoc *this,ArgumentDoc *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ThemeItemDoc::~ThemeItemDoc() */

void __thiscall DocData::ThemeItemDoc::~ThemeItemDoc(ThemeItemDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::PropertyDoc::~PropertyDoc() */

void __thiscall DocData::PropertyDoc::~PropertyDoc(PropertyDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ConstantDoc::~ConstantDoc() */

void __thiscall DocData::ConstantDoc::~ConstantDoc(ConstantDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ArgumentDoc::~ArgumentDoc() */

void __thiscall DocData::ArgumentDoc::~ArgumentDoc(ArgumentDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Engine::Singleton, DefaultAllocator>::~List() */

void __thiscall
List<Engine::Singleton,DefaultAllocator>::~List(List<Engine::Singleton,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ClassDoc::ClassDoc() */

void __thiscall DocData::ClassDoc::ClassDoc(ClassDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


