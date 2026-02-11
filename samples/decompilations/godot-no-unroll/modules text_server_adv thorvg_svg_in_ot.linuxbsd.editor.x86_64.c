
/* tvg_svg_in_ot_init(void**) */

undefined8 tvg_svg_in_ot_init(void **param_1)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  
  pauVar2 = (undefined1 (*) [16])operator_new(0x88,"");
  uVar1 = _LC1;
  pauVar2[1] = (undefined1  [16])0x0;
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[2] = 0;
  *(undefined4 *)pauVar2[1] = 1;
  *(undefined8 *)pauVar2[5] = uVar1;
  *(undefined8 *)pauVar2[8] = uVar1;
  pauVar2[3] = (undefined1  [16])0x0;
  pauVar2[4] = (undefined1  [16])0x0;
  pauVar2[6] = (undefined1  [16])0x0;
  pauVar2[7] = (undefined1  [16])0x0;
  *param_1 = pauVar2;
  return 0;
}



/* CowData<TVG_NodeCache>::_ref(CowData<TVG_NodeCache> const&) [clone .part.0] */

void __thiscall CowData<TVG_NodeCache>::_ref(CowData<TVG_NodeCache> *this,CowData *param_1)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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



/* CowData<TVG_NodeCache>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<TVG_NodeCache>::_copy_on_write(CowData<TVG_NodeCache> *this)

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
  __n = lVar2 * 0x10;
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
  _err_print_error(0x102730,0x102715,0x13a,0x1026f8,0,0);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_tvg_svg_in_ot_hooks() */

undefined1 * get_tvg_svg_in_ot_hooks(void)

{
  return tvg_svg_in_ot_hooks;
}



/* tvg_svg_in_ot_free(void**) */

void tvg_svg_in_ot_free(void **param_1)

{
  memdelete<TVG_State>((TVG_State *)*param_1);
  return;
}



/* construct_xml(Ref<XMLParser>&, double&, double&, String*, long&) */

void construct_xml(Ref *param_1,double *param_2,double *param_3,String *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long in_FS_OFFSET;
  bool bVar12;
  double dVar13;
  long local_80;
  long *local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = XMLParser::get_node_type();
  if (iVar6 == 1) {
    XMLParser::get_node_name();
    local_60 = (long *)0x0;
    local_58 = 0x10273f;
    local_50 = (long *)0x3;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String>((String *)&local_58,(StrRange *)&local_60,&local_68);
    String::operator+=(param_4,(String *)&local_58);
    lVar10 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar11 = (long *)(local_58 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    plVar11 = local_60;
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar9 = local_60 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_60 = (long *)0x0;
        Memory::free_static(plVar11 + -2,false);
      }
    }
    lVar10 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar11 = (long *)(local_68 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    XMLParser::get_node_name();
    cVar4 = String::operator==((String *)&local_58,"svg");
    lVar10 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar11 = (long *)(local_58 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    for (iVar6 = 0; iVar7 = XMLParser::get_attribute_count(), iVar6 < iVar7; iVar6 = iVar6 + 1) {
      XMLParser::get_attribute_name((int)(String *)&local_80);
      XMLParser::get_attribute_value((int)&local_78);
      if (cVar4 == '\0') {
LAB_00100470:
        local_60 = (long *)0x0;
        plVar11 = local_78 + -2;
        if (local_78 != (long *)0x0) {
          do {
            lVar10 = *plVar11;
            if (lVar10 == 0) goto LAB_001004aa;
            LOCK();
            lVar8 = *plVar11;
            bVar12 = lVar10 == lVar8;
            if (bVar12) {
              *plVar11 = lVar10 + 1;
              lVar8 = lVar10;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar8 != -1) {
            local_60 = local_78;
          }
        }
LAB_001004aa:
        local_68 = 0;
        plVar11 = (long *)(local_80 + -0x10);
        if (local_80 != 0) {
          do {
            lVar10 = *plVar11;
            if (lVar10 == 0) goto LAB_001004e4;
            LOCK();
            lVar8 = *plVar11;
            bVar12 = lVar10 == lVar8;
            if (bVar12) {
              *plVar11 = lVar10 + 1;
              lVar8 = lVar10;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar8 != -1) {
            local_68 = local_80;
          }
        }
LAB_001004e4:
        local_70 = 0;
        local_58 = 0x102771;
        local_50 = (long *)0x8;
        String::parse_latin1((StrRange *)&local_70);
        vformat<String,String>
                  ((String *)&local_58,(StrRange *)&local_70,&local_68,(StrRange *)&local_60);
        String::operator+=(param_4,(String *)&local_58);
        lVar10 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar11 = (long *)(local_58 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar11 = (long *)(local_70 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        lVar10 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar11 = (long *)(local_68 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        plVar9 = local_60;
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar11 = local_60 + -2;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_60 = (long *)0x0;
LAB_001005d4:
            Memory::free_static(plVar9 + -2,false);
          }
        }
      }
      else {
        cVar5 = String::operator==((String *)&local_80,"viewBox");
        if (cVar5 == '\0') {
          cVar5 = String::operator==((String *)&local_80,"width");
          if (cVar5 == '\0') {
            cVar5 = String::operator==((String *)&local_80,"height");
            if (cVar5 == '\0') goto LAB_00100470;
            dVar13 = (double)String::to_float();
            *param_3 = dVar13;
          }
          else {
            dVar13 = (double)String::to_float();
            *param_2 = dVar13;
          }
        }
        else {
          String::split((char *)&local_58,SUB81(&local_78,0),0x10274f);
          if (local_50 != (long *)0x0) {
            if (local_50[-1] == 4) {
              dVar13 = (double)String::to_float();
              *param_2 = dVar13;
              if (local_50 == (long *)0x0) {
                lVar10 = 0;
LAB_00100a0c:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,3,lVar10,"p_index","size()","",
                           false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar10 = local_50[-1];
              if (lVar10 < 4) goto LAB_00100a0c;
              dVar13 = (double)String::to_float();
              *param_3 = dVar13;
              if (local_50 == (long *)0x0) goto LAB_001005df;
            }
            plVar9 = local_50;
            LOCK();
            plVar11 = local_50 + -2;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
              if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar10 = local_50[-1];
              lVar8 = 0;
              local_50 = (long *)0x0;
              plVar11 = plVar9;
              if (lVar10 != 0) {
                do {
                  if (*plVar11 != 0) {
                    LOCK();
                    plVar1 = (long *)(*plVar11 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      lVar2 = *plVar11;
                      *plVar11 = 0;
                      Memory::free_static((void *)(lVar2 + -0x10),false);
                    }
                  }
                  lVar8 = lVar8 + 1;
                  plVar11 = plVar11 + 1;
                } while (lVar10 != lVar8);
              }
              goto LAB_001005d4;
            }
          }
        }
      }
LAB_001005df:
      plVar11 = local_78;
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar9 = local_78 + -2;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_78 = (long *)0x0;
          Memory::free_static(plVar11 + -2,false);
        }
      }
      lVar10 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar11 = (long *)(local_80 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    cVar4 = XMLParser::is_empty();
    if (cVar4 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        String::operator+=(param_4,"/>");
        return;
      }
      goto LAB_00100a4f;
    }
    String::operator+=(param_4,">");
    if (-1 < *param_5) {
      *param_5 = *param_5 + 1;
    }
  }
  else {
    iVar6 = XMLParser::get_node_type();
    if (iVar6 == 3) {
      XMLParser::get_node_data();
      String::operator+=(param_4,(String *)&local_58);
      lVar10 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      iVar6 = XMLParser::get_node_type();
      if (iVar6 == 2) {
        XMLParser::get_node_name();
        local_58 = 0x10277f;
        local_60 = (long *)0x0;
        local_50 = (long *)0x5;
        String::parse_latin1((StrRange *)&local_60);
        vformat<String>((String *)&local_58,(StrRange *)&local_60,&local_68);
        String::operator+=(param_4,(String *)&local_58);
        lVar10 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar11 = (long *)(local_58 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        plVar11 = local_60;
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar9 = local_60 + -2;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (*plVar9 == 0) {
            local_60 = (long *)0x0;
            Memory::free_static(plVar11 + -2,false);
          }
        }
        lVar10 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar11 = (long *)(local_68 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar10 + -0x10),false);
          }
        }
        if (0 < *param_5) {
          *param_5 = *param_5 + -1;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a4f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x001027fb) overlaps instruction at (ram,0x001027f9)
    */
/* WARNING: Removing unreachable block (ram,0x001027ee) */
/* WARNING: Removing unreachable block (ram,0x00102865) */
/* WARNING: Removing unreachable block (ram,0x001027ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* tvg_svg_in_ot_preset_slot(FT_GlyphSlotRec_*, unsigned char, void**) */

uint * tvg_svg_in_ot_preset_slot(FT_GlyphSlotRec_ *param_1,uchar param_2,void **param_3)

{
  Matrix *pMVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  uchar **ppuVar9;
  long lVar10;
  uchar *puVar11;
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
  float fVar48;
  undefined1 auVar49 [16];
  double dVar50;
  pthread_mutex_t *ppVar51;
  Matrix *pMVar52;
  double dVar53;
  double dVar54;
  char cVar55;
  byte bVar56;
  uint uVar57;
  int iVar58;
  char *pcVar59;
  RefCounted *this;
  String *this_00;
  undefined8 uVar60;
  ulong uVar61;
  byte bVar63;
  char *in_RCX;
  long lVar62;
  byte bVar64;
  undefined2 uVar65;
  ulong uVar66;
  long *plVar67;
  long lVar69;
  undefined8 *puVar70;
  ulong uVar71;
  pthread_mutex_t *ppVar72;
  undefined8 *puVar73;
  uint *puVar74;
  uint *puVar75;
  undefined1 **ppuVar76;
  undefined1 **ppuVar77;
  uint uVar78;
  long *unaff_RBP;
  uint *puVar79;
  undefined7 in_register_00000031;
  long lVar80;
  ulong uVar81;
  undefined4 *puVar82;
  undefined4 *puVar83;
  int *piVar84;
  long *plVar85;
  wchar32 wVar86;
  RefCounted *pRVar87;
  undefined1 *puVar88;
  pthread_mutex_t *ppVar89;
  pthread_mutex_t *ppVar90;
  uint uVar91;
  ulong uVar92;
  uint uVar93;
  uint uVar94;
  long in_R11;
  byte bVar95;
  string *psVar96;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  byte bVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  double dVar105;
  double dVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  double dVar110;
  double dVar111;
  undefined1 auVar112 [16];
  undefined8 uStack_1f8;
  undefined1 *puStack_1f0;
  pthread_mutex_t *ppStack_1e8;
  pthread_mutex_t *in_stack_fffffffffffffe20;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  Matrix *pMStack_1c8;
  SwCanvas *pSStack_1c0;
  Matrix *pMStack_1b8;
  undefined4 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long lStack_188;
  StrRange *local_138;
  uint local_100;
  long local_d8;
  RefCounted *local_c0;
  ulong local_b8;
  double local_b0;
  double dStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  Matrix *local_80;
  ulong local_78 [2];
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_40;
  byte bVar68;
  
  plVar67 = (long *)CONCAT71(in_register_00000031,param_2);
  bVar101 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar72 = (pthread_mutex_t *)*param_3;
  if (ppVar72 == (pthread_mutex_t *)0x0) {
    _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x78,
                     "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                     "SVG in OT state not initialized.",0);
    local_100 = 0x18;
    goto LAB_00100cab;
  }
  uVar57 = pthread_mutex_lock(ppVar72);
  if (uVar57 == 0) {
    ppuVar9 = *(uchar ***)(param_1 + 0x120);
    uVar7 = *(ushort *)(ppuVar9 + 2);
    uVar8 = *(ushort *)((long)ppuVar9 + 0x12);
    pcVar59 = (char *)HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                      ::operator[]((HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                                    *)&ppVar72[1].__data,(uint *)(param_1 + 0x18));
    fVar109 = _LC60;
    uVar57 = _LC61;
    if (*pcVar59 == '\0') {
      local_c0 = (RefCounted *)0x0;
      this = (RefCounted *)operator_new(0x1d0,"");
      pRVar87 = this;
      for (lVar62 = 0x3a; lVar62 != 0; lVar62 = lVar62 + -1) {
        *(undefined8 *)pRVar87 = 0;
        pRVar87 = pRVar87 + (ulong)bVar101 * -0x10 + 8;
      }
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
      cVar55 = RefCounted::init_ref();
      pRVar87 = (RefCounted *)(String *)0x0;
      if (cVar55 != '\0') {
        local_c0 = this;
        cVar55 = RefCounted::reference();
        if (cVar55 == '\0') {
          local_c0 = (RefCounted *)0x0;
        }
        cVar55 = RefCounted::unreference();
        pRVar87 = local_c0;
        if ((cVar55 != '\0') &&
           (cVar55 = predelete_handler((Object *)this), pRVar87 = local_c0, cVar55 != '\0')) {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
      XMLParser::_open_buffer((uchar *)pRVar87,(ulong)*ppuVar9);
      local_b8 = 0;
      local_b0 = (double)*(ushort *)(ppuVar9 + 9);
      dStack_a8 = local_b0;
      this_00 = (String *)
                HashMap<unsigned_char*,TVG_DocumentCache,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char*>,DefaultTypedAllocator<HashMapElement<unsigned_char*,TVG_DocumentCache>>>
                ::operator[]((HashMap<unsigned_char*,TVG_DocumentCache,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char*>,DefaultTypedAllocator<HashMapElement<unsigned_char*,TVG_DocumentCache>>>
                              *)((long)ppVar72 + 0x58),ppuVar9);
      uVar61 = *(ulong *)this_00;
      if ((uVar61 == 0) || (*(uint *)(uVar61 - 8) < 2)) {
        local_a0 = 0;
        local_98 = 0;
        local_90 = -1;
        local_138 = (StrRange *)&local_98;
LAB_00100ef8:
        iVar58 = XMLParser::read();
        if (iVar58 == 0) {
          do {
            local_80 = (Matrix *)0x0;
            local_78[0] = 0x10279f;
            local_78[1] = 2;
            String::parse_latin1((StrRange *)&local_80);
            cVar55 = XMLParser::has_attribute((String *)pRVar87);
            pMVar52 = local_80;
            if (local_80 != (Matrix *)0x0) {
              LOCK();
              pMVar1 = local_80 + -0x10;
              *(long *)pMVar1 = *(long *)pMVar1 + -1;
              UNLOCK();
              if (*(long *)pMVar1 == 0) {
                local_80 = (Matrix *)0x0;
                Memory::free_static(pMVar52 + -0x10,false);
              }
            }
            if (cVar55 != '\0') {
              local_80 = (Matrix *)0x0;
              local_78[0] = 0x10279f;
              local_78[1] = 2;
              String::parse_latin1((StrRange *)&local_80);
              XMLParser::get_named_attribute_value((String *)&local_88);
              pMVar52 = local_80;
              if (local_80 != (Matrix *)0x0) {
                LOCK();
                pMVar1 = local_80 + -0x10;
                *(long *)pMVar1 = *(long *)pMVar1 + -1;
                UNLOCK();
                if (*(long *)pMVar1 == 0) {
                  local_80 = (Matrix *)0x0;
                  Memory::free_static(pMVar52 + -0x10,false);
                }
              }
              cVar55 = String::begins_with((char *)&local_88);
              if (cVar55 != '\0') {
                wVar86 = (wchar32)(String *)&local_88;
                String::find_char(wVar86,0x2e);
                String::substr((int)local_78,wVar86);
                local_80 = (Matrix *)String::to_int();
                uVar61 = local_78[0];
                if (local_78[0] != 0) {
                  LOCK();
                  plVar67 = (long *)(local_78[0] - 0x10);
                  *plVar67 = *plVar67 + -1;
                  UNLOCK();
                  if (*plVar67 == 0) {
                    local_78[0] = 0;
                    Memory::free_static((void *)(uVar61 - 0x10),false);
                  }
                }
                pMVar52 = local_80;
                uVar60 = XMLParser::get_node_offset();
                if (*(long *)this_00 == 0) {
                  local_d8 = 0;
                }
                else {
                  iVar58 = (int)*(undefined8 *)(*(long *)this_00 + -8);
                  local_d8 = 0;
                  if (iVar58 != 0) {
                    local_d8 = (long)(iVar58 + -1);
                  }
                }
                lVar62 = HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                         ::operator[]((HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                                       *)(this_00 + 0x18),(long *)&local_80);
                if (*(long *)(lVar62 + 8) == 0) {
                  lVar80 = 1;
                }
                else {
                  lVar80 = *(long *)(*(long *)(lVar62 + 8) + -8) + 1;
                }
                iVar58 = CowData<TVG_NodeCache>::resize<false>
                                   ((CowData<TVG_NodeCache> *)(lVar62 + 8),lVar80);
                if (iVar58 == 0) {
                  if (*(long *)(lVar62 + 8) == 0) {
                    lVar69 = -1;
                    lVar80 = 0;
                  }
                  else {
                    lVar80 = *(long *)(*(long *)(lVar62 + 8) + -8);
                    lVar69 = lVar80 + -1;
                    if (-1 < lVar69) {
                      CowData<TVG_NodeCache>::_copy_on_write((CowData<TVG_NodeCache> *)(lVar62 + 8))
                      ;
                      puVar70 = (undefined8 *)(lVar69 * 0x10 + *(long *)(lVar62 + 8));
                      *puVar70 = uVar60;
                      puVar70[1] = local_d8;
                      goto LAB_0010115b;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar69,lVar80,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error(0x1027c2,0x1027a8,0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_0010115b:
                if ((Matrix *)(ulong)*(uint *)(param_1 + 0x18) != pMVar52) {
                  XMLParser::skip_section();
                  lVar62 = local_88;
                  if (local_88 != 0) {
                    LOCK();
                    plVar67 = (long *)(local_88 + -0x10);
                    *plVar67 = *plVar67 + -1;
                    UNLOCK();
                    if (*plVar67 == 0) {
                      local_88 = 0;
                      Memory::free_static((void *)(lVar62 + -0x10),false);
                    }
                  }
                  goto LAB_00100ef8;
                }
                local_138 = (StrRange *)&local_a0;
                local_90 = 0;
                local_78[0] = 0x1026f7;
                local_78[1] = 0;
                String::parse_latin1(local_138);
              }
              lVar62 = local_88;
              if (local_88 != 0) {
                LOCK();
                plVar67 = (long *)(local_88 + -0x10);
                *plVar67 = *plVar67 + -1;
                UNLOCK();
                if (*plVar67 == 0) {
                  local_88 = 0;
                  Memory::free_static((void *)(lVar62 + -0x10),false);
                }
              }
            }
            local_78[1] = 0;
            local_78[0] = 0x1026f7;
            String::parse_latin1((StrRange *)&local_98);
            construct_xml((Ref *)&local_c0,&local_b0,&dStack_a8,(String *)local_138,&local_90);
            if ((local_98 != 0) && (1 < *(int *)(local_98 + -8))) {
              String::operator+=((String *)&local_b8,(String *)&local_98);
              String::operator+=(this_00,(String *)&local_98);
              goto LAB_00100ef8;
            }
            if (local_90 != 0) goto LAB_00100ef8;
            local_90 = -1;
            String::operator+=((String *)&local_b8,(String *)&local_a0);
            iVar58 = XMLParser::read();
            local_138 = (StrRange *)&local_98;
            if (iVar58 != 0) break;
          } while( true );
        }
        lVar62 = local_98;
        *(double *)(this_00 + 8) = local_b0;
        *(double *)(this_00 + 0x10) = dStack_a8;
        if (local_98 != 0) {
          LOCK();
          plVar67 = (long *)(local_98 + -0x10);
          *plVar67 = *plVar67 + -1;
          UNLOCK();
          if (*plVar67 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar62 + -0x10),false);
          }
        }
        lVar62 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar67 = (long *)(local_a0 + -0x10);
          *plVar67 = *plVar67 + -1;
          UNLOCK();
          if (*plVar67 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar62 + -0x10),false);
          }
        }
LAB_00101740:
        tvg::Picture::gen();
        String::utf8();
        uVar71 = local_78[0];
        uVar61 = *(ulong *)(pcVar59 + 0x18);
        if (uVar61 == local_78[0]) {
          if (uVar61 != 0) {
            LOCK();
            plVar67 = (long *)(uVar61 - 0x10);
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (*plVar67 == 0) {
              local_78[0] = 0;
              Memory::free_static((void *)(uVar71 - 0x10),false);
            }
          }
        }
        else {
          if (uVar61 != 0) {
            LOCK();
            plVar67 = (long *)(uVar61 - 0x10);
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (*plVar67 == 0) {
              lVar62 = *(long *)(pcVar59 + 0x18);
              pcVar59[0x18] = '\0';
              pcVar59[0x19] = '\0';
              pcVar59[0x1a] = '\0';
              pcVar59[0x1b] = '\0';
              pcVar59[0x1c] = '\0';
              pcVar59[0x1d] = '\0';
              pcVar59[0x1e] = '\0';
              pcVar59[0x1f] = '\0';
              Memory::free_static((void *)(lVar62 + -0x10),false);
            }
          }
          *(ulong *)(pcVar59 + 0x18) = local_78[0];
        }
        pMVar52 = local_80;
        local_58 = 0x2b677673;
        uStack_54 = 0x6c6d78;
        local_60 = 7;
        if (*(long *)(pcVar59 + 0x18) == 0) {
          psVar96 = (string *)0x0;
        }
        else {
          iVar58 = (int)*(undefined8 *)(*(long *)(pcVar59 + 0x18) + -8);
          uVar57 = 0;
          if (iVar58 != 0) {
            uVar57 = iVar58 - 1;
          }
          psVar96 = (string *)(ulong)uVar57;
        }
        local_68 = &local_58;
        uVar57 = CharString::get_data();
        iVar58 = tvg::Picture::load((char *)pMVar52,uVar57,psVar96,SUB81(&local_68,0));
        if (local_68 != &local_58) {
          operator_delete(local_68,CONCAT44(uStack_54,local_58) + 1);
        }
        if (iVar58 == 0) {
          tvg::Picture::size((float *)local_80,(float *)&local_88);
          dVar54 = dStack_a8;
          dVar53 = local_b0;
          dVar105 = (double)((float)local_88 / (float)local_78[0]) * local_b0;
          iVar58 = tvg::Picture::size((float)dVar105,(float)dStack_a8);
          uVar61 = _LC56;
          dVar50 = _LC57;
          if (iVar58 == 0) {
            dVar106 = (double)(long)ppuVar9[0xe] * _LC57;
            dVar111 = (double)((ulong)(double)(long)ppuVar9[0xc] ^ _LC56) * _LC55;
            dVar110 = (double)(long)ppuVar9[0xd] * _LC55;
            puVar11 = ppuVar9[0xf];
            *(ulong *)(pcVar59 + 0x20) =
                 CONCAT44((float)((double)((ulong)(double)(long)ppuVar9[0xb] ^ _LC56) * _LC55),
                          (float)((double)(long)ppuVar9[10] * _LC55));
            *(ulong *)(pcVar59 + 0x28) =
                 CONCAT44((float)dVar111,(float)((dVar106 * dVar53) / (double)uVar7));
            pcVar59[0x38] = '\0';
            pcVar59[0x39] = '\0';
            pcVar59[0x3a] = '\0';
            pcVar59[0x3b] = '\0';
            pcVar59[0x3c] = '\0';
            pcVar59[0x3d] = '\0';
            pcVar59[0x3e] = '\0';
            pcVar59[0x3f] = '\0';
            pcVar59[0x40] = '\0';
            pcVar59[0x41] = '\0';
            pcVar59[0x42] = -0x80;
            pcVar59[0x43] = '?';
            *(ulong *)(pcVar59 + 0x30) =
                 CONCAT44((float)(((double)((ulong)(double)(long)puVar11 ^ uVar61) * dVar50 * dVar54
                                  ) / (double)uVar8),(float)dVar110);
            iVar58 = tvg::Picture::size((float)(((double)uVar7 / dVar53) * dVar105),
                                        (float)(((double)uVar8 / dVar54) * dVar54));
            if (iVar58 == 0) {
              iVar58 = tvg::Paint::transform(local_80);
              if (iVar58 == 0) {
                tvg::Picture::size((float *)local_80,(float *)(pcVar59 + 0xc));
                uVar57 = _LC61;
                fVar109 = _LC60;
                *pcVar59 = '\x01';
                *(ulong *)(pcVar59 + 4) =
                     CONCAT44((uint)*(float *)(pcVar59 + 0x10) ^ uVar57,
                              (*(float *)(pcVar59 + 0x10) - *(float *)(pcVar59 + 0xc)) * fVar109);
                if (local_80 != (Matrix *)0x0) {
                  tvg::Picture::~Picture((Picture *)local_80);
                }
                uVar61 = local_b8;
                if (local_b8 != 0) {
                  LOCK();
                  plVar67 = (long *)(local_b8 - 0x10);
                  *plVar67 = *plVar67 + -1;
                  UNLOCK();
                  if (*plVar67 == 0) {
                    local_b8 = 0;
                    Memory::free_static((void *)(uVar61 - 0x10),false);
                  }
                }
                pRVar87 = local_c0;
                if (((local_c0 != (RefCounted *)0x0) &&
                    (cVar55 = RefCounted::unreference(), cVar55 != '\0')) &&
                   (cVar55 = predelete_handler((Object *)pRVar87), cVar55 != '\0')) {
                  (**(code **)(*(long *)pRVar87 + 0x140))(pRVar87);
                  Memory::free_static(pRVar87,false);
                }
                goto LAB_00100afe;
              }
              _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x101,
                               "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                               "Failed to apply transform to SVG document.",0);
            }
            else {
              _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0xfc,
                               "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                               "Failed to resize SVG document.",0);
            }
          }
          else {
            _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0xea,
                             "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                             "Failed to resize SVG document.",0);
          }
        }
        else {
          _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0xe1,
                           "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                           "Failed to load SVG document (glyph metrics).",0);
        }
        if (local_80 != (Matrix *)0x0) {
          tvg::Picture::~Picture((Picture *)local_80);
        }
      }
      else {
        if (uVar61 != local_b8) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)this_00);
        }
        local_b0 = *(double *)(this_00 + 8);
        dStack_a8 = *(double *)(this_00 + 0x10);
        if ((*(long *)(this_00 + 0x20) != 0) && (*(int *)(this_00 + 0x44) != 0)) {
          uVar81 = (ulong)*(uint *)(param_1 + 0x18);
          uVar92 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this_00 + 0x40)]);
          lVar62 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this_00 + 0x40) * 8);
          uVar61 = uVar81 * 0x3ffff - 1;
          uVar61 = (uVar61 ^ uVar61 >> 0x1f) * 0x15;
          uVar61 = (uVar61 ^ uVar61 >> 0xb) * 0x41;
          uVar61 = uVar61 >> 0x16 ^ uVar61;
          uVar71 = uVar61 & 0xffffffff;
          if ((int)uVar61 == 0) {
            uVar71 = 1;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar71 * lVar62;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar92;
          lVar80 = SUB168(auVar12 * auVar30,8);
          uVar57 = *(uint *)(*(long *)(this_00 + 0x28) + lVar80 * 4);
          iVar58 = SUB164(auVar12 * auVar30,8);
          if (uVar57 != 0) {
            uVar93 = 0;
            do {
              if ((uVar57 == (uint)uVar71) &&
                 (uVar81 == *(ulong *)(*(long *)(*(long *)(this_00 + 0x20) + lVar80 * 8) + 0x10))) {
                local_78[0] = uVar81;
                lVar80 = HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                         ::operator[]((HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                                       *)(this_00 + 0x18),(long *)local_78);
                CowData<TVG_NodeCache>::_copy_on_write((CowData<TVG_NodeCache> *)(lVar80 + 8));
                lVar62 = *(long *)(lVar80 + 8);
                CowData<TVG_NodeCache>::_copy_on_write((CowData<TVG_NodeCache> *)(lVar80 + 8));
                lVar80 = *(long *)(lVar80 + 8);
                if (lVar80 != 0) {
                  lVar80 = lVar80 + *(long *)(lVar80 + -8) * 0x10;
                }
                if (lVar62 != lVar80) {
                  do {
                    iVar58 = XMLParser::seek((ulong)pRVar87);
                    if (iVar58 == 0) {
                      local_88 = 0;
                      local_80 = (Matrix *)0x0;
                      do {
                        construct_xml((Ref *)&local_c0,&local_b0,&dStack_a8,(String *)&local_80,
                                      &local_88);
                        if (local_88 == 0) break;
                        iVar58 = XMLParser::read();
                      } while (iVar58 == 0);
                      String::insert((int)local_78,(String *)&local_b8);
                      uVar71 = local_78[0];
                      uVar61 = local_b8;
                      if (local_b8 == local_78[0]) {
                        if (local_b8 != 0) {
                          LOCK();
                          plVar67 = (long *)(local_b8 - 0x10);
                          *plVar67 = *plVar67 + -1;
                          UNLOCK();
                          if (*plVar67 == 0) {
                            local_78[0] = 0;
                            Memory::free_static((void *)(uVar71 - 0x10),false);
                          }
                        }
                      }
                      else {
                        if (local_b8 != 0) {
                          LOCK();
                          plVar67 = (long *)(local_b8 - 0x10);
                          *plVar67 = *plVar67 + -1;
                          UNLOCK();
                          if (*plVar67 == 0) {
                            local_b8 = 0;
                            Memory::free_static((void *)(uVar61 - 0x10),false);
                          }
                        }
                        local_b8 = local_78[0];
                      }
                      pMVar52 = local_80;
                      if (local_80 != (Matrix *)0x0) {
                        LOCK();
                        pMVar1 = local_80 + -0x10;
                        *(long *)pMVar1 = *(long *)pMVar1 + -1;
                        UNLOCK();
                        if (*(long *)pMVar1 == 0) {
                          local_80 = (Matrix *)0x0;
                          Memory::free_static(pMVar52 + -0x10,false);
                        }
                      }
                    }
                    lVar62 = lVar62 + 0x10;
                  } while (lVar80 != lVar62);
                }
                goto LAB_00101740;
              }
              uVar93 = uVar93 + 1;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)(iVar58 + 1) * lVar62;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = uVar92;
              lVar80 = SUB168(auVar13 * auVar31,8);
              uVar57 = *(uint *)(*(long *)(this_00 + 0x28) + lVar80 * 4);
              iVar58 = SUB164(auVar13 * auVar31,8);
            } while ((uVar57 != 0) &&
                    (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar57 * lVar62, auVar32._8_8_ = 0,
                    auVar32._0_8_ = uVar92, auVar15._8_8_ = 0,
                    auVar15._0_8_ =
                         (ulong)(uint)(((&hash_table_size_primes)[*(uint *)(this_00 + 0x40)] +
                                       iVar58) - SUB164(auVar14 * auVar32,8)) * lVar62,
                    auVar33._8_8_ = 0, auVar33._0_8_ = uVar92, uVar93 <= SUB164(auVar15 * auVar33,8)
                    ));
          }
        }
        _err_print_error(0x102785,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x94,
                         "Condition \"!cache.node_caches.has(p_slot->glyph_index)\" is true. Returning: FT_Err_Invalid_SVG_Document"
                         ,0,0);
      }
      uVar61 = local_b8;
      if (local_b8 != 0) {
        LOCK();
        plVar67 = (long *)(local_b8 - 0x10);
        *plVar67 = *plVar67 + -1;
        UNLOCK();
        if (*plVar67 == 0) {
          local_b8 = 0;
          Memory::free_static((void *)(uVar61 - 0x10),false);
        }
      }
      pRVar87 = local_c0;
      if (((local_c0 != (RefCounted *)0x0) && (cVar55 = RefCounted::unreference(), cVar55 != '\0'))
         && (cVar55 = predelete_handler((Object *)pRVar87), cVar55 != '\0')) {
        (**(code **)(*(long *)pRVar87 + 0x140))(pRVar87);
        Memory::free_static(pRVar87,false);
      }
      local_100 = 0x18;
    }
    else {
LAB_00100afe:
      uVar78 = _LC63;
      fVar102 = _LC62;
      fVar108 = *(float *)(pcVar59 + 4);
      uVar93 = *(uint *)(pcVar59 + 8);
      fVar5 = *(float *)(pcVar59 + 0x10);
      *(ulong *)(param_1 + 0xc0) = CONCAT44((int)(float)(uVar93 ^ uVar57),(int)fVar108);
      fVar48 = fVar5;
      if ((float)((uint)fVar5 & uVar78) < fVar102) {
        fVar48 = (float)((uint)((float)(-(uint)((float)(int)fVar5 < fVar5) & _LC58) +
                               (float)(int)fVar5) | ~uVar78 & (uint)fVar5);
      }
      fVar103 = *(float *)(pcVar59 + 0xc);
      *(int *)(param_1 + 0x98) = (int)(long)fVar48;
      fVar48 = _LC64;
      fVar104 = fVar103;
      if ((float)((uint)fVar103 & uVar78) < fVar102) {
        fVar104 = (float)((uint)((float)(int)fVar103 +
                                (float)(-(uint)((float)(int)fVar103 < fVar103) & _LC58)) |
                         ~uVar78 & (uint)fVar103);
      }
      lVar62 = *(long *)(param_1 + 0x68);
      lVar80 = *(long *)(param_1 + 0x50);
      lVar69 = *(long *)(param_1 + 0x40);
      param_1[0xb2] = (FT_GlyphSlotRec_)0x7;
      *(int *)(param_1 + 0x9c) = (int)(long)fVar104;
      *(int *)(param_1 + 0xa0) = (int)(long)fVar104 << 2;
      lVar10 = *(long *)(param_1 + 0x38);
      fVar102 = roundf(fVar103 * _LC65);
      fVar103 = fVar5 * _LC65;
      *(long *)(param_1 + 0x30) = (long)fVar102;
      fVar103 = roundf(fVar103);
      fVar102 = _LC65;
      fVar108 = fVar108 * _LC65;
      fVar107 = (float)(uVar93 ^ uVar57) * _LC65;
      fVar104 = ((float)lVar69 * fVar48 - (float)lVar80 * fVar48 * fVar109) * _LC65;
      *(long *)(param_1 + 0x38) = (long)fVar103;
      *(long *)(param_1 + 0x40) = (long)fVar108;
      *(long *)(param_1 + 0x48) = (long)fVar107;
      *(long *)(param_1 + 0x58) = (long)fVar104;
      *(long *)(param_1 + 0x60) =
           (long)(((float)lVar62 * fVar48 - fVar48 * (float)lVar10) * fVar109 * fVar102);
      local_100 = 0;
      if (lVar62 == 0) {
        *(long *)(param_1 + 0x68) = (long)(fVar5 * __LC66 * fVar102);
      }
    }
    pthread_mutex_unlock(ppVar72);
LAB_00100cab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (uint *)(ulong)local_100;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar88 = (undefined1 *)(ulong)uVar57;
  std::__throw_system_error(uVar57);
  ppuVar76 = &puStack_1f0;
  ppuVar77 = &puStack_1f0;
  ppVar72 = (pthread_mutex_t *)*plVar67;
  lStack_188 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_1f0 = puVar88;
  if (ppVar72 == (pthread_mutex_t *)0x0) {
    puVar79 = (uint *)0x18;
    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x133,
                     "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                     "SVG in OT state not initialized.",0,0);
LAB_00102458:
    if (lStack_188 == *(long *)(in_FS_OFFSET + 0x28)) {
      return puVar79;
    }
                    /* WARNING: Subroutine does not return */
    uStack_1f8 = 0x1026f0;
    __stack_chk_fail();
  }
  uStack_1f8 = 0x101eea;
  uVar57 = pthread_mutex_lock(ppVar72);
  if (uVar57 == 0) {
    uVar57 = *(uint *)(puStack_1f0 + 0x18);
    if ((*(long *)((long)ppVar72 + 0x30) != 0) && (*(int *)((long)ppVar72 + 0x54) != 0)) {
      uVar61 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)ppVar72[2].__data.__lock * 8);
      uVar93 = (uVar57 >> 0x10 ^ uVar57) * -0x7a143595;
      uVar93 = (uVar93 ^ uVar93 >> 0xd) * -0x3d4d51cb;
      uVar78 = uVar93 ^ uVar93 >> 0x10;
      if (uVar93 == uVar93 >> 0x10) {
        uVar78 = 1;
        uVar71 = uVar61;
      }
      else {
        uVar71 = uVar78 * uVar61;
      }
      uVar81 = CONCAT44(0,(&hash_table_size_primes)[(uint)ppVar72[2].__data.__lock]);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar81;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar71;
      lVar62 = SUB168(auVar16 * auVar34,8);
      uVar93 = *(uint *)(*(long *)((long)ppVar72 + 0x38) + lVar62 * 4);
      iVar58 = SUB164(auVar16 * auVar34,8);
      if (uVar93 != 0) {
        uVar94 = 0;
        do {
          if ((uVar78 == uVar93) &&
             (uVar57 == *(uint *)(*(long *)(*(long *)((long)ppVar72 + 0x30) + lVar62 * 8) + 0x10)))
          {
            uStack_1f8 = 0x101ff0;
            pcVar59 = (char *)HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                              ::operator[]((HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                                            *)&ppVar72[1].__data,(uint *)(puStack_1f0 + 0x18));
            if (*pcVar59 == '\0') {
              _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x13c,
                               "Condition \"!gl_state.ready\" is true. Returning: FT_Err_Invalid_SVG_Document"
                               ,0x1027fb,0,0);
              goto LAB_00102442;
            }
            uStack_1f8 = 0x10200b;
            tvg::Picture::gen();
            pMVar52 = pMStack_1c8;
            uStack_1a0 = 0x2b677673;
            uStack_1a8 = 7;
            uStack_19c = 0x6c6d78;
            if (*(long *)(pcVar59 + 0x18) == 0) {
              psVar96 = (string *)0x0;
            }
            else {
              iVar58 = (int)*(undefined8 *)(*(long *)(pcVar59 + 0x18) + -8);
              psVar96 = (string *)(ulong)(iVar58 - 1);
              if (iVar58 == 0) {
                psVar96 = (string *)0x0;
              }
            }
            uStack_1f8 = 0x10205c;
            puStack_1b0 = &uStack_1a0;
            uVar57 = CharString::get_data();
            uStack_1f8 = 0x102072;
            iVar58 = tvg::Picture::load((char *)pMVar52,uVar57,psVar96,SUB81(&puStack_1b0,0));
            if (puStack_1b0 != &uStack_1a0) {
              uStack_1f8 = 0x10208d;
              operator_delete(puStack_1b0,CONCAT44(uStack_19c,uStack_1a0) + 1);
            }
            if (iVar58 == 0) {
              uStack_1f8 = 0x1020aa;
              iVar58 = tvg::Picture::size(*(float *)(pcVar59 + 0xc),*(float *)(pcVar59 + 0x10));
              if (iVar58 == 0) {
                uStack_1f8 = 0x1020c0;
                iVar58 = tvg::Paint::transform(pMStack_1c8);
                if (iVar58 == 0) {
                  uStack_1f8 = 0x1020d2;
                  tvg::SwCanvas::gen();
                  uStack_1f8 = 0x1020fc;
                  iVar58 = tvg::SwCanvas::target
                                     (pSStack_1c0,*(undefined8 *)(puStack_1f0 + 0xa8),
                                      *(undefined4 *)(puStack_1f0 + 0x9c),
                                      *(undefined4 *)(puStack_1f0 + 0x9c),
                                      *(undefined4 *)(puStack_1f0 + 0x98),3);
                  pMVar52 = pMStack_1c8;
                  if (iVar58 == 0) {
                    pMStack_1c8 = (Matrix *)0x0;
                    pMStack_1b8 = pMVar52;
                    uStack_1f8 = 0x102126;
                    iVar58 = tvg::Canvas::push(pSStack_1c0);
                    if (pMStack_1b8 != (Matrix *)0x0) {
                      uStack_1f8 = 0x102138;
                      (**(code **)(*(long *)pMStack_1b8 + 8))();
                    }
                    if (iVar58 == 0) {
                      uStack_1f8 = 0x10214a;
                      iVar58 = tvg::Canvas::draw();
                      if (iVar58 == 0) {
                        uStack_1f8 = 0x10215c;
                        iVar58 = tvg::Canvas::sync();
                        if (iVar58 == 0) {
                          ppStack_1e8 = *(pthread_mutex_t **)((long)ppVar72 + 0x30);
                          if ((ppStack_1e8 == (pthread_mutex_t *)0x0) ||
                             (*(int *)((long)ppVar72 + 0x54) == 0)) goto LAB_001023d6;
                          uVar57 = *(uint *)(puStack_1f0 + 0x18);
                          uStack_1d8 = (&hash_table_size_primes)[(uint)ppVar72[2].__data.__lock];
                          uVar61 = *(ulong *)(hash_table_size_primes_inv +
                                             (ulong)(uint)ppVar72[2].__data.__lock * 8);
                          uVar93 = (uVar57 >> 0x10 ^ uVar57) * -0x7a143595;
                          uVar93 = (uVar93 ^ uVar93 >> 0xd) * -0x3d4d51cb;
                          uVar78 = uVar93 ^ uVar93 >> 0x10;
                          if (uVar93 == uVar93 >> 0x10) {
                            uVar78 = 1;
                            uVar71 = uVar61;
                          }
                          else {
                            uVar71 = uVar78 * uVar61;
                          }
                          uVar81 = CONCAT44(0,uStack_1d8);
                          lVar62 = *(long *)((long)ppVar72 + 0x38);
                          auVar20._8_8_ = 0;
                          auVar20._0_8_ = uVar81;
                          auVar38._8_8_ = 0;
                          auVar38._0_8_ = uVar71;
                          lVar80 = SUB168(auVar20 * auVar38,8);
                          uVar93 = *(uint *)(lVar62 + lVar80 * 4);
                          uVar94 = SUB164(auVar20 * auVar38,8);
                          if (uVar93 == 0) goto LAB_001023d6;
                          uVar91 = 0;
                          goto LAB_00102259;
                        }
                        _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",
                                         0x15b,
                                         "Method/function failed. Returning: FT_Err_Invalid_Outline"
                                         ,0x10284b,0,0);
                      }
                      else {
                        _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",
                                         0x157,
                                         "Method/function failed. Returning: FT_Err_Invalid_Outline"
                                         ,0x10282d,0,0);
                      }
                    }
                    else {
                      _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x153
                                       ,"Method/function failed. Returning: FT_Err_Invalid_Outline",
                                       "Failed to set SVG canvas source.",0,0);
                    }
                  }
                  else {
                    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x14f,
                                     "Method/function failed. Returning: FT_Err_Invalid_Outline",
                                     &_LC73,0,0);
                  }
                  puVar79 = (uint *)0x14;
                  goto LAB_001023f7;
                }
                _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x149,
                                 "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                                 "Failed to apply transform to SVG document.",0,0);
              }
              else {
                _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x145,
                                 "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                                 "Failed to resize SVG document.",0,0);
              }
            }
            else {
              _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x141,
                               "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                               "Failed to load SVG document (glyph rendering).",0,0);
            }
            puVar79 = (uint *)0x18;
            goto LAB_001024b8;
          }
          uVar94 = uVar94 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (iVar58 + 1) * uVar61;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = uVar81;
          lVar62 = SUB168(auVar17 * auVar35,8);
          uVar93 = *(uint *)(*(long *)((long)ppVar72 + 0x38) + lVar62 * 4);
          iVar58 = SUB164(auVar17 * auVar35,8);
        } while ((uVar93 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar93 * uVar61, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar81, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (uint)(((&hash_table_size_primes)[(uint)ppVar72[2].__data.__lock] + iVar58) -
                           SUB164(auVar18 * auVar36,8)) * uVar61, auVar37._8_8_ = 0,
                auVar37._0_8_ = uVar81, uVar94 <= SUB164(auVar19 * auVar37,8)));
      }
    }
    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x138,
                     "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",0x1027e5,0,0);
LAB_00102442:
    puVar79 = (uint *)0x18;
LAB_00102450:
    uStack_1f8 = 0x102458;
    pthread_mutex_unlock(ppVar72);
    goto LAB_00102458;
  }
  ppVar89 = (pthread_mutex_t *)(ulong)uVar57;
  uStack_1f8 = 0x1026f7;
  auVar112 = std::__throw_system_error(uVar57);
  ppVar51 = ppStack_1e8;
  puVar70 = auVar112._8_8_;
  puVar79 = auVar112._0_8_;
  pbVar2 = (byte *)((long)puVar79 + 0x61);
  bVar64 = auVar112[8];
  bVar97 = CARRY1(*pbVar2,bVar64);
  *pbVar2 = *pbVar2 + bVar64;
  bVar100 = (char)*pbVar2 < '\0';
  bVar99 = *pbVar2 == 0;
  bVar98 = (POPCOUNT(*pbVar2) & 1U) == 0;
  bVar68 = auVar112[9];
  uVar65 = auVar112._8_2_;
  bVar56 = auVar112[0];
  bVar95 = (byte)param_1;
  if (bVar97) {
_LC21:
    if (bVar97) {
LAB_00102765:
      if (bVar98) {
        if (bVar97) goto _LC68;
        ppVar89->__size[(long)unaff_RBP * 2 + 0x20] =
             ppVar89->__size[(long)unaff_RBP * 2 + 0x20] & bVar68;
        pcVar59 = (char *)((long)plVar67 + 0x61);
        *pcVar59 = *pcVar59 + bVar56;
        uVar61 = (long)*(int *)((long)unaff_RBP + 100) * 0x206f7420;
        unaff_RBP = (long *)(uVar61 & 0xffffffff);
        bVar97 = (long)(int)uVar61 == uVar61;
        if (!bVar97) goto LAB_0010289b;
        plVar85 = plVar67;
        if (bVar97 && *pcVar59 != '\0') goto LAB_0010285c;
        if (*pcVar59 == '\0') {
          auVar49._8_8_ = puVar70;
          auVar49._0_8_ = (uint *)*puVar70;
          bVar97 = puVar79 == (uint *)*puVar70;
          if (!bVar97) goto code_r0x001028b1;
          *puVar70 = in_RCX;
          auVar49 = auVar112;
          goto code_r0x001028b1;
        }
        *(byte *)((long)ppVar72 + 0x56) = *(byte *)((long)ppVar72 + 0x56) & bVar64;
        pbVar2 = (byte *)(in_R11 + 0x61);
        bVar97 = false;
        *pbVar2 = *pbVar2 & bVar95;
        out((char)*plVar67,uVar65);
        plVar67 = (long *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
        if (*pbVar2 == 0) goto code_r0x001028a8;
        goto LAB_00102848;
      }
      cVar55 = (char)((ulong)in_RCX >> 8);
      *in_RCX = *in_RCX - cVar55;
      *(byte *)((long)puVar79 + 0x65) = *(byte *)((long)puVar79 + 0x65) + cVar55;
      uVar61 = (long)*(int *)((long)ppVar89 + 0x68) * 0x25200074;
      puVar73 = (undefined8 *)(uVar61 & 0xffffffff);
      bVar97 = (long)(int)uVar61 != uVar61;
      if (bVar97) {
        bVar63 = auVar112[1] & DAT_2f1049ee;
        cVar55 = (char)((ulong)ppVar72 >> 8);
        *(char *)plVar67 = (char)*plVar67 + cVar55;
        ppVar89->__size[(long)unaff_RBP] = ppVar89->__size[(long)unaff_RBP] + cVar55;
        bVar97 = false;
        bVar100 = false;
        bVar99 = (CONCAT62(auVar112._2_6_,CONCAT11(bVar63,bVar56)) & 0x74003e73) == 0;
        if (bVar99) {
          pcVar59 = (char *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
          out((char)*plVar67,uVar65);
          out(*(undefined4 *)pcVar59,uVar65);
          if (!bVar99) {
            cVar55 = in(uVar65);
            ppVar89->__size[0] = cVar55;
            out(*(undefined4 *)(pcVar59 + (ulong)bVar101 * -8 + 4),uVar65);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          cVar55 = in(uVar65);
          ppVar89->__size[0] = cVar55;
          ppVar89->__size[in_FS_OFFSET + (long)unaff_RBP * 2 + (ulong)bVar101 * -2 + 0x21] =
               ppVar89->__size[in_FS_OFFSET + (long)unaff_RBP * 2 + (ulong)bVar101 * -2 + 0x21] &
               bVar68;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ppVar90 = (pthread_mutex_t *)*puVar73;
        ppuVar76 = (undefined1 **)(puVar73 + 1);
        goto LAB_00102789;
      }
      if (!bVar97) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)((long)ppVar72 + 0x56) = *(byte *)((long)ppVar72 + 0x56) & bVar64;
      pbVar2 = (byte *)(in_R11 + 0x61);
      *pbVar2 = *pbVar2 & bVar95;
      plVar85 = (long *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
      out((char)*plVar67,uVar65);
      if (*pbVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0010285a:
      *(pthread_mutex_t **)((long)puVar73 + -8) = ppVar72;
      *(long **)((long)puVar73 + -0x10) = plVar85;
    }
    else {
_LC68:
      if (bVar99) {
LAB_00102848:
        if (!bVar97) goto LAB_00102878;
        *(char *)((long)plVar67 + 0x61) = *(char *)((long)plVar67 + 0x61) + (char)puVar79;
        uVar61 = (long)*(int *)((long)unaff_RBP + 100) * 0x206f7420;
        unaff_RBP = (long *)(uVar61 & 0xffffffff);
        if ((long)(int)uVar61 != uVar61) {
          plVar85 = (long *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
          out((char)*plVar67,uVar65);
          puVar73 = (undefined8 *)(ulong)*puVar79;
          goto LAB_0010285a;
        }
        goto LAB_001028d0;
      }
      if (!bVar97) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_stack_fffffffffffffe20 = (pthread_mutex_t *)ppuVar77[1];
      unaff_RBP = (long *)((long)*(int *)((long)plVar67 + 0x5f) * 0x725f746f & 0xffffffff);
      plVar85 = (long *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
      out((char)*plVar67,uVar65);
      ppuVar77[1] = (undefined1 *)ppVar72;
      *ppuVar77 = (undefined1 *)plVar85;
      pbVar2 = (byte *)(unaff_R15 + 0x6c);
      *pbVar2 = *pbVar2 & bVar95;
      if ((char)*pbVar2 < '\0') {
        puVar75 = (uint *)(ppuVar77 + -1);
        ppuVar77[-1] = (undefined1 *)0x746f6e20;
code_r0x001027f2:
        in_stack_fffffffffffffe20->__size[(long)unaff_RBP * 2 + 0x61] =
             in_stack_fffffffffffffe20->__size[(long)unaff_RBP * 2 + 0x61] &
             (byte)((ulong)in_RCX >> 8);
        *(char *)((long)ppVar72 + 0x56) = *(char *)((long)ppVar72 + 0x56) + bVar64;
        ppuVar76 = (undefined1 **)puVar75;
LAB_001027fd:
        pbVar2 = (byte *)(unaff_R15 + 0x6c);
        *pbVar2 = *pbVar2 & bVar95;
        bVar100 = (char)*pbVar2 < '\0';
        plVar85 = unaff_RBP;
        goto LAB_00102801;
      }
      *(byte *)((long)ppVar72 + 0x61) =
           *(byte *)((long)ppVar72 + 0x61) & (byte)((ulong)puVar79 >> 8);
    }
LAB_0010285c:
    pbVar2 = (byte *)(in_R11 + 0x61);
    *pbVar2 = *pbVar2 & bVar95;
    out((char)*plVar85,uVar65);
    if (*pbVar2 == 0) {
      return puVar79;
    }
  }
  else {
    ppVar90 = (pthread_mutex_t *)(ppVar89->__size + (ulong)bVar101 * -8 + 4);
    iVar58 = in(uVar65);
    (ppVar89->__data).__lock = iVar58;
    ppuVar77 = &puStack_1f0;
    ppVar89 = ppVar90;
    if (bVar99) goto LAB_00102765;
    if (bVar97) {
      if (!bVar99) {
        if (bVar97) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ppuVar77 = (undefined1 **)&uStack_1f8;
        uStack_1f8 = 0x695f7000;
        out((char)*plVar67,uVar65);
        plVar67 = (long *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
        goto _LC21;
      }
LAB_00102789:
      plVar85 = unaff_RBP;
      in_stack_fffffffffffffe20 = ppVar90;
      if (bVar97) {
        in_stack_fffffffffffffe20 = (pthread_mutex_t *)*ppuVar76;
        puVar74 = (uint *)(ppuVar76 + 1);
        uVar61 = (long)*(int *)((long)plVar67 + 0x5f) * 0x705f746f;
        unaff_RBP = (long *)(uVar61 & 0xffffffff);
        bVar97 = (long)(int)uVar61 != uVar61;
        if (bVar97) {
          *ppuVar76 = (undefined1 *)ppVar72;
          ppuVar76[-1] = (undefined1 *)plVar67;
          ppuVar76 = ppuVar76 + -1;
        }
        else {
          ppuVar76 = ppuVar76 + 1;
          plVar85 = plVar67;
          if (bVar97) {
code_r0x00102798:
            if (!bVar99) {
              if (bVar97) {
                piVar84 = (int *)((long)plVar85 + ((ulong)bVar101 * -2 + 1) * 4);
                out((int)*plVar85,uVar65);
                *(char *)piVar84 = (char)*piVar84 + (char)((ulong)in_RCX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto LAB_00102808;
            }
            *(char *)((long)ppVar72 + 0x56) = *(char *)((long)ppVar72 + 0x56) + bVar64;
            ppuVar76 = (undefined1 **)puVar74;
          }
        }
        goto LAB_001027fd;
      }
LAB_00102801:
      if (bVar100) {
        *(undefined8 *)((long)ppuVar76 + -8) = 0x746f6e20;
LAB_00102808:
        *(byte *)((long)puVar70 + 0x65) = *(byte *)((long)puVar70 + 0x65) & bVar68;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar63 = (byte)((ulong)in_RCX >> 8) & *(byte *)((long)unaff_RBP + 0x65);
      in_RCX = (char *)CONCAT62((int6)((ulong)in_RCX >> 0x10),CONCAT11(bVar63,(char)in_RCX));
      bVar99 = bVar63 == 0;
      iVar58 = in(uVar65);
      (ppVar90->__data).__lock = iVar58;
      pcVar59 = (char *)((long)plVar67 + (ulong)bVar101 * -2 + 1);
      out((char)*plVar67,uVar65);
      if (bVar99) {
        in_RCX[0x73] = '\0';
        pcVar59[0x75] = '\0';
        uVar6 = in(uVar65);
        *puStack_1f0 = uVar6;
        uVar6 = in(uVar65);
        puStack_1f0[(ulong)bVar101 * -2 + 1] = uVar6;
        *pcVar59 = *pcVar59;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puStack_1f0 = (undefined1 *)0x6f635f00;
      out(*(undefined4 *)pcVar59,uVar65);
      out(pcVar59[(ulong)bVar101 * -8 + 4],uVar65);
      ppuVar77 = (undefined1 **)&stack0xfffffffffffffe20;
      if (!bVar99) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar61 = (long)(int)*unaff_RBP * 0x73253c;
      puVar82 = (undefined4 *)(uVar61 & 0xffffffff);
      if ((long)(int)uVar61 == uVar61) {
        plVar67 = (long *)(ulong)*(uint *)((long)ppStack_1e8 + (long)unaff_RBP * 2 + 0x72);
        ppStack_1e8 = (pthread_mutex_t *)0x73757000;
code_r0x001027c5:
        ppStack_1e8 = (pthread_mutex_t *)0x73757000;
        ppuVar77 = &puStack_1f0;
        puStack_1f0 = (undefined1 *)0x6361625f;
        uVar61 = (long)(int)*puVar79 * 0x73;
        puVar79 = (uint *)(uVar61 & 0xffffffff);
        bVar97 = (long)(int)uVar61 != uVar61;
        ppVar89 = ppVar51;
        goto _LC68;
      }
      pbVar2 = (byte *)(long)((int)uVar61 + 0x69);
      bVar97 = CARRY1(*pbVar2,bVar68);
      bVar63 = *pbVar2;
      *pbVar2 = *pbVar2 + bVar68;
      bVar99 = *pbVar2 == 0;
      if (bVar97 || bVar99) {
        plVar67 = (long *)(puVar82 + (ulong)bVar101 * -2 + 1);
        out(*puVar82,uVar65);
        *(byte *)puVar79 = (byte)*puVar79 & bVar56;
        bVar99 = (byte)*puVar79 == 0;
        if (bVar99) {
          if (!bVar99) {
            pbVar2 = (byte *)((long)puVar79 + 0x5f);
            *pbVar2 = *pbVar2 + bVar68;
            bVar99 = *pbVar2 == 0;
            bVar98 = (POPCOUNT(*pbVar2) & 1U) == 0;
            uVar61 = (long)*(int *)((long)plVar67 + 100) * 0x67007865;
            unaff_RBP = (long *)(uVar61 & 0xffffffff);
            bVar97 = (long)(int)uVar61 != uVar61;
            ppVar89 = ppStack_1e8;
            goto _LC21;
          }
        }
        else if (bVar99) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ppStack_1e8 = (pthread_mutex_t *)0x73757000;
        goto code_r0x001027c5;
      }
      puVar83 = (undefined4 *)((long)puVar82 + (ulong)bVar101 * -2 + 1);
      out(*(undefined1 *)puVar82,uVar65);
      puVar75 = &uStack_1d8;
      puVar74 = &uStack_1d8;
      ppuVar76 = (undefined1 **)&uStack_1d8;
      plVar85 = (long *)(puVar83 + (ulong)bVar101 * -2 + 1);
      out(*puVar83,uVar65);
      if (bVar99) goto code_r0x001027f2;
      if (!SCARRY1(bVar63,bVar68)) {
        if (bVar97) goto code_r0x00102798;
        goto LAB_001027fd;
      }
      if (bVar99) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar97) {
        halt_baddata();
      }
      ppuVar76 = (undefined1 **)&stack0xfffffffffffffe20;
    }
    ppuVar77 = (undefined1 **)((long)ppuVar76 + -8);
    *(pthread_mutex_t **)((long)ppuVar76 + -8) = ppVar72;
    ppVar72 = in_stack_fffffffffffffe20;
    unaff_RBP = plVar85;
    ppVar89 = in_stack_fffffffffffffe20;
LAB_00102878:
    ppuVar77 = (undefined1 **)((long)ppuVar77 + -8);
    if (ppVar89->__align != 0) {
      LOCK();
      plVar67 = (long *)(ppVar89->__align + -0x10);
      *plVar67 = *plVar67 + -1;
      UNLOCK();
      if (*plVar67 == 0) {
LAB_001028d0:
        lVar62 = ppVar89->__align;
        ppVar72->__align = 0;
        *(undefined8 *)((long)ppuVar77 + -8) = 0x1028e5;
        Memory::free_static((void *)(lVar62 + -0x10),false);
      }
      else {
        ppVar89->__align = 0;
      }
    }
  }
  auVar112._8_8_ = *unaff_RBP + -0x10;
  auVar112._0_8_ = *unaff_RBP;
LAB_0010289b:
  plVar67 = auVar112._8_8_;
  puVar79 = auVar112._0_8_;
  if (puVar79 != (uint *)0x0) {
    do {
      auVar112._8_8_ = plVar67;
      auVar112._0_8_ = *plVar67;
      if (*plVar67 == 0) {
        return (uint *)0x0;
      }
code_r0x001028a8:
      plVar67 = auVar112._8_8_;
      lVar80 = auVar112._0_8_;
      LOCK();
      lVar62 = *plVar67;
      bVar97 = lVar80 == lVar62;
      if (bVar97) {
        *plVar67 = lVar80 + 1;
        lVar62 = lVar80;
      }
      auVar49._8_8_ = plVar67;
      auVar49._0_8_ = lVar62;
      UNLOCK();
code_r0x001028b1:
      plVar67 = auVar49._8_8_;
      puVar79 = auVar49._0_8_;
    } while (!bVar97);
    if (puVar79 != (uint *)0xffffffffffffffff) {
      puVar79 = (uint *)*unaff_RBP;
      ppVar72->__align = (long)puVar79;
    }
  }
  return puVar79;
LAB_00102259:
  uVar71 = (ulong)uVar94;
  if ((uVar93 != uVar78) || (uVar57 != *(uint *)(*(long *)((long)ppStack_1e8 + lVar80 * 8) + 0x10)))
  goto LAB_00102210;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (uVar94 + 1) * uVar61;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar81;
  uVar66 = SUB168(auVar24 * auVar42,8);
  puVar79 = (uint *)(lVar62 + uVar66 * 4);
  uVar93 = SUB164(auVar24 * auVar42,8);
  uVar92 = (ulong)uVar93;
  uVar57 = *puVar79;
  if ((uVar57 != 0) &&
     (auVar25._8_8_ = 0, auVar25._0_8_ = uVar57 * uVar61, auVar43._8_8_ = 0, auVar43._0_8_ = uVar81,
     auVar26._8_8_ = 0,
     auVar26._0_8_ = ((uVar93 + uStack_1d8) - SUB164(auVar25 * auVar43,8)) * uVar61,
     auVar44._8_8_ = 0, auVar44._0_8_ = uVar81, SUB164(auVar26 * auVar44,8) != 0)) {
    while( true ) {
      puVar3 = (uint *)(lVar62 + uVar71 * 4);
      *puVar79 = *puVar3;
      puVar70 = (undefined8 *)((long)ppStack_1e8 + uVar66 * 8);
      *puVar3 = uVar57;
      puVar4 = (undefined8 *)((long)ppStack_1e8 + uVar71 * 8);
      uVar60 = *puVar70;
      *puVar70 = *puVar4;
      *puVar4 = uVar60;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = ((int)uVar92 + 1) * uVar61;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = uVar81;
      uVar66 = SUB168(auVar29 * auVar47,8);
      puVar79 = (uint *)(lVar62 + uVar66 * 4);
      uVar57 = *puVar79;
      uVar71 = uVar92;
      if ((uVar57 == 0) ||
         (auVar27._8_8_ = 0, auVar27._0_8_ = uVar57 * uVar61, auVar45._8_8_ = 0,
         auVar45._0_8_ = uVar81, auVar28._8_8_ = 0,
         auVar28._0_8_ =
              ((SUB164(auVar29 * auVar47,8) + uStack_1d8) - SUB164(auVar27 * auVar45,8)) * uVar61,
         auVar46._8_8_ = 0, auVar46._0_8_ = uVar81, SUB164(auVar28 * auVar46,8) == 0)) break;
      uVar92 = uVar66 & 0xffffffff;
    }
    uStack_1d4 = 0;
  }
  *(undefined4 *)(lVar62 + uVar71 * 4) = 0;
  plVar67 = (long *)((long)ppStack_1e8 + uVar71 * 8);
  plVar85 = (long *)*plVar67;
  if (*(long **)((long)ppVar72 + 0x40) == plVar85) {
    *(long *)((long)ppVar72 + 0x40) = *plVar85;
    plVar85 = (long *)*plVar67;
  }
  if (*(long **)((long)ppVar72 + 0x48) == plVar85) {
    *(long *)((long)ppVar72 + 0x48) = plVar85[1];
    plVar85 = (long *)*plVar67;
  }
  if ((long *)plVar85[1] != (long *)0x0) {
    *(long *)plVar85[1] = *plVar85;
    plVar85 = (long *)*plVar67;
  }
  if (*plVar85 != 0) {
    *(long *)(*plVar85 + 8) = plVar85[1];
    plVar85 = (long *)*plVar67;
  }
  if (plVar85[6] != 0) {
    LOCK();
    plVar67 = (long *)(plVar85[6] + -0x10);
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (*plVar67 == 0) {
      lVar62 = plVar85[6];
      plVar85[6] = 0;
      uStack_1f8 = 0x1023bc;
      Memory::free_static((void *)(lVar62 + -0x10),false);
    }
  }
  uStack_1f8 = 0x1023c6;
  Memory::free_static(plVar85,false);
  *(undefined8 *)(*(long *)((long)ppVar72 + 0x30) + uVar71 * 8) = 0;
  *(int *)((long)ppVar72 + 0x54) = *(int *)((long)ppVar72 + 0x54) + -1;
LAB_001023d6:
  puVar79 = (uint *)0x0;
  puStack_1f0[0xb2] = 7;
  *(undefined2 *)(puStack_1f0 + 0xb0) = 0x100;
  *(undefined4 *)(puStack_1f0 + 0x90) = 0x62697473;
LAB_001023f7:
  if (pSStack_1c0 != (SwCanvas *)0x0) {
    uStack_1f8 = 0x10240a;
    tvg::SwCanvas::~SwCanvas(pSStack_1c0);
  }
LAB_001024b8:
  if (pMStack_1c8 != (Matrix *)0x0) {
    uStack_1f8 = 0x1024c7;
    tvg::Picture::~Picture((Picture *)pMStack_1c8);
  }
  goto LAB_00102450;
LAB_00102210:
  uVar91 = uVar91 + 1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = (uVar94 + 1) * uVar61;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar81;
  lVar80 = SUB168(auVar21 * auVar39,8);
  uVar93 = *(uint *)(lVar62 + lVar80 * 4);
  uVar94 = SUB164(auVar21 * auVar39,8);
  if ((uVar93 == 0) ||
     (auVar22._8_8_ = 0, auVar22._0_8_ = uVar93 * uVar61, auVar40._8_8_ = 0, auVar40._0_8_ = uVar81,
     auVar23._8_8_ = 0,
     auVar23._0_8_ = ((uStack_1d8 + uVar94) - SUB164(auVar22 * auVar40,8)) * uVar61,
     auVar41._8_8_ = 0, auVar41._0_8_ = uVar81, SUB164(auVar23 * auVar41,8) < uVar91))
  goto LAB_001023d6;
  goto LAB_00102259;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x001027fb) overlaps instruction at (ram,0x001027f9)
    */
/* WARNING: Removing unreachable block (ram,0x001027ee) */
/* WARNING: Removing unreachable block (ram,0x00102865) */
/* WARNING: Removing unreachable block (ram,0x001027ae) */
/* tvg_svg_in_ot_render(FT_GlyphSlotRec_*, void**) */

uint * tvg_svg_in_ot_render(FT_GlyphSlotRec_ *param_1,void **param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  FT_GlyphSlotRec_ FVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  pthread_mutex_t *ppVar36;
  Matrix *pMVar37;
  byte bVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  char *pcVar42;
  byte bVar43;
  char cVar44;
  char *in_RCX;
  byte bVar45;
  undefined2 uVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  long *plVar52;
  pthread_mutex_t *__mutex;
  undefined8 *puVar54;
  uint *puVar55;
  uint *puVar56;
  FT_GlyphSlotRec_ **ppFVar57;
  FT_GlyphSlotRec_ **ppFVar58;
  uint uVar59;
  void **unaff_RBP;
  uint *puVar60;
  undefined4 *puVar61;
  undefined4 *puVar62;
  void **ppvVar63;
  pthread_mutex_t *ppVar64;
  pthread_mutex_t *ppVar65;
  uint uVar66;
  ulong uVar67;
  uint uVar68;
  long in_R11;
  byte unaff_R12B;
  long *plVar69;
  ulong uVar70;
  string *psVar71;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  byte bVar76;
  undefined1 auVar77 [16];
  undefined8 uStack_b0;
  FT_GlyphSlotRec_ *local_a8;
  pthread_mutex_t *local_a0;
  pthread_mutex_t *in_stack_ffffffffffffff68;
  uint local_90;
  undefined4 local_8c;
  Matrix *local_80;
  SwCanvas *local_78;
  Matrix *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_40;
  undefined8 *puVar51;
  byte bVar53;
  
  bVar76 = 0;
  ppFVar57 = &local_a8;
  ppFVar58 = &local_a8;
  __mutex = (pthread_mutex_t *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = param_1;
  if (__mutex == (pthread_mutex_t *)0x0) {
    puVar60 = (uint *)0x18;
    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x133,
                     "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                     "SVG in OT state not initialized.",0,0);
LAB_00102458:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      uStack_b0 = 0x1026f0;
      __stack_chk_fail();
    }
    return puVar60;
  }
  uStack_b0 = 0x101eea;
  uVar39 = pthread_mutex_lock(__mutex);
  if (uVar39 == 0) {
    uVar39 = *(uint *)(local_a8 + 0x18);
    if ((*(long *)((long)__mutex + 0x30) != 0) && (*(int *)((long)__mutex + 0x54) != 0)) {
      uVar5 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)__mutex[2].__data.__lock * 8);
      uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
      uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
      uVar59 = uVar40 ^ uVar40 >> 0x10;
      if (uVar40 == uVar40 >> 0x10) {
        uVar59 = 1;
        uVar48 = uVar5;
      }
      else {
        uVar48 = uVar59 * uVar5;
      }
      uVar67 = CONCAT44(0,(&hash_table_size_primes)[(uint)__mutex[2].__data.__lock]);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar67;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar48;
      lVar47 = SUB168(auVar7 * auVar21,8);
      uVar40 = *(uint *)(*(long *)((long)__mutex + 0x38) + lVar47 * 4);
      iVar41 = SUB164(auVar7 * auVar21,8);
      if (uVar40 != 0) {
        uVar68 = 0;
        do {
          if ((uVar59 == uVar40) &&
             (uVar39 == *(uint *)(*(long *)(*(long *)((long)__mutex + 0x30) + lVar47 * 8) + 0x10)))
          {
            uStack_b0 = 0x101ff0;
            pcVar42 = (char *)HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                              ::operator[]((HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
                                            *)&__mutex[1].__data,(uint *)(local_a8 + 0x18));
            if (*pcVar42 == '\0') {
              _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x13c,
                               "Condition \"!gl_state.ready\" is true. Returning: FT_Err_Invalid_SVG_Document"
                               ,0x1027fb,0,0);
              goto LAB_00102442;
            }
            uStack_b0 = 0x10200b;
            tvg::Picture::gen();
            pMVar37 = local_80;
            local_58 = 0x2b677673;
            local_60 = 7;
            uStack_54 = 0x6c6d78;
            if (*(long *)(pcVar42 + 0x18) == 0) {
              psVar71 = (string *)0x0;
            }
            else {
              iVar41 = (int)*(undefined8 *)(*(long *)(pcVar42 + 0x18) + -8);
              psVar71 = (string *)(ulong)(iVar41 - 1);
              if (iVar41 == 0) {
                psVar71 = (string *)0x0;
              }
            }
            uStack_b0 = 0x10205c;
            local_68 = &local_58;
            uVar39 = CharString::get_data();
            uStack_b0 = 0x102072;
            iVar41 = tvg::Picture::load((char *)pMVar37,uVar39,psVar71,SUB81(&local_68,0));
            if (local_68 != &local_58) {
              uStack_b0 = 0x10208d;
              operator_delete(local_68,CONCAT44(uStack_54,local_58) + 1);
            }
            if (iVar41 == 0) {
              uStack_b0 = 0x1020aa;
              iVar41 = tvg::Picture::size(*(float *)(pcVar42 + 0xc),*(float *)(pcVar42 + 0x10));
              if (iVar41 == 0) {
                uStack_b0 = 0x1020c0;
                iVar41 = tvg::Paint::transform(local_80);
                if (iVar41 == 0) {
                  uStack_b0 = 0x1020d2;
                  tvg::SwCanvas::gen();
                  uStack_b0 = 0x1020fc;
                  iVar41 = tvg::SwCanvas::target
                                     (local_78,*(undefined8 *)(local_a8 + 0xa8),
                                      *(undefined4 *)(local_a8 + 0x9c),
                                      *(undefined4 *)(local_a8 + 0x9c),
                                      *(undefined4 *)(local_a8 + 0x98),3);
                  pMVar37 = local_80;
                  if (iVar41 == 0) {
                    local_80 = (Matrix *)0x0;
                    local_70 = pMVar37;
                    uStack_b0 = 0x102126;
                    iVar41 = tvg::Canvas::push(local_78);
                    if (local_70 != (Matrix *)0x0) {
                      uStack_b0 = 0x102138;
                      (**(code **)(*(long *)local_70 + 8))();
                    }
                    if (iVar41 == 0) {
                      uStack_b0 = 0x10214a;
                      iVar41 = tvg::Canvas::draw();
                      if (iVar41 == 0) {
                        uStack_b0 = 0x10215c;
                        iVar41 = tvg::Canvas::sync();
                        if (iVar41 == 0) {
                          local_a0 = *(pthread_mutex_t **)((long)__mutex + 0x30);
                          if ((local_a0 == (pthread_mutex_t *)0x0) ||
                             (*(int *)((long)__mutex + 0x54) == 0)) goto LAB_001023d6;
                          uVar39 = *(uint *)(local_a8 + 0x18);
                          local_90 = (&hash_table_size_primes)[(uint)__mutex[2].__data.__lock];
                          uVar5 = *(ulong *)(hash_table_size_primes_inv +
                                            (ulong)(uint)__mutex[2].__data.__lock * 8);
                          uVar40 = (uVar39 >> 0x10 ^ uVar39) * -0x7a143595;
                          uVar40 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
                          uVar59 = uVar40 ^ uVar40 >> 0x10;
                          if (uVar40 == uVar40 >> 0x10) {
                            uVar59 = 1;
                            uVar48 = uVar5;
                          }
                          else {
                            uVar48 = uVar59 * uVar5;
                          }
                          uVar67 = CONCAT44(0,local_90);
                          lVar47 = *(long *)((long)__mutex + 0x38);
                          auVar11._8_8_ = 0;
                          auVar11._0_8_ = uVar67;
                          auVar25._8_8_ = 0;
                          auVar25._0_8_ = uVar48;
                          lVar49 = SUB168(auVar11 * auVar25,8);
                          uVar40 = *(uint *)(lVar47 + lVar49 * 4);
                          uVar68 = SUB164(auVar11 * auVar25,8);
                          if (uVar40 == 0) goto LAB_001023d6;
                          uVar66 = 0;
                          goto LAB_00102259;
                        }
                        _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",
                                         0x15b,
                                         "Method/function failed. Returning: FT_Err_Invalid_Outline"
                                         ,0x10284b,0,0);
                      }
                      else {
                        _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",
                                         0x157,
                                         "Method/function failed. Returning: FT_Err_Invalid_Outline"
                                         ,0x10282d,0,0);
                      }
                    }
                    else {
                      _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x153
                                       ,"Method/function failed. Returning: FT_Err_Invalid_Outline",
                                       "Failed to set SVG canvas source.",0,0);
                    }
                  }
                  else {
                    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x14f,
                                     "Method/function failed. Returning: FT_Err_Invalid_Outline",
                                     &_LC73,0,0);
                  }
                  puVar60 = (uint *)0x14;
                  goto LAB_001023f7;
                }
                _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x149,
                                 "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                                 "Failed to apply transform to SVG document.",0,0);
              }
              else {
                _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x145,
                                 "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                                 "Failed to resize SVG document.",0,0);
              }
            }
            else {
              _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x141,
                               "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",
                               "Failed to load SVG document (glyph rendering).",0,0);
            }
            puVar60 = (uint *)0x18;
            goto LAB_001024b8;
          }
          uVar68 = uVar68 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (iVar41 + 1) * uVar5;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar67;
          lVar47 = SUB168(auVar8 * auVar22,8);
          uVar40 = *(uint *)(*(long *)((long)__mutex + 0x38) + lVar47 * 4);
          iVar41 = SUB164(auVar8 * auVar22,8);
        } while ((uVar40 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar40 * uVar5, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar67, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (uint)(((&hash_table_size_primes)[(uint)__mutex[2].__data.__lock] + iVar41) -
                           SUB164(auVar9 * auVar23,8)) * uVar5, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar67, uVar68 <= SUB164(auVar10 * auVar24,8)));
      }
    }
    _err_print_error(0x1027d0,"modules/text_server_adv/thorvg_svg_in_ot.cpp",0x138,
                     "Method/function failed. Returning: FT_Err_Invalid_SVG_Document",0x1027e5,0,0);
LAB_00102442:
    puVar60 = (uint *)0x18;
LAB_00102450:
    uStack_b0 = 0x102458;
    pthread_mutex_unlock(__mutex);
    goto LAB_00102458;
  }
  ppVar64 = (pthread_mutex_t *)(ulong)uVar39;
  uStack_b0 = 0x1026f7;
  auVar77 = std::__throw_system_error(uVar39);
  ppVar36 = local_a0;
  puVar51 = auVar77._8_8_;
  puVar60 = auVar77._0_8_;
  pbVar1 = (byte *)((long)puVar60 + 0x61);
  bVar45 = auVar77[8];
  bVar72 = CARRY1(*pbVar1,bVar45);
  *pbVar1 = *pbVar1 + bVar45;
  bVar75 = (char)*pbVar1 < '\0';
  bVar74 = *pbVar1 == 0;
  bVar73 = (POPCOUNT(*pbVar1) & 1U) == 0;
  bVar53 = auVar77[9];
  uVar46 = auVar77._8_2_;
  bVar38 = auVar77[0];
  if (bVar72) {
_LC21:
    if (bVar72) {
LAB_00102765:
      if (bVar73) {
        if (bVar72) goto _LC68;
        ppVar64->__size[(long)unaff_RBP * 2 + 0x20] =
             ppVar64->__size[(long)unaff_RBP * 2 + 0x20] & bVar53;
        pcVar42 = (char *)((long)param_2 + 0x61);
        *pcVar42 = *pcVar42 + bVar38;
        uVar5 = (long)*(int *)((long)unaff_RBP + 100) * 0x206f7420;
        unaff_RBP = (void **)(uVar5 & 0xffffffff);
        bVar72 = (long)(int)uVar5 == uVar5;
        if (!bVar72) goto LAB_0010289b;
        ppvVar63 = param_2;
        if (bVar72 && *pcVar42 != '\0') goto LAB_0010285c;
        if (*pcVar42 == '\0') {
          auVar35._8_8_ = puVar51;
          auVar35._0_8_ = (uint *)*puVar51;
          bVar72 = puVar60 == (uint *)*puVar51;
          if (!bVar72) goto code_r0x001028b1;
          *puVar51 = in_RCX;
          auVar35 = auVar77;
          goto code_r0x001028b1;
        }
        *(byte *)((long)__mutex + 0x56) = *(byte *)((long)__mutex + 0x56) & bVar45;
        pbVar1 = (byte *)(in_R11 + 0x61);
        bVar72 = false;
        *pbVar1 = *pbVar1 & unaff_R12B;
        out(*(char *)param_2,uVar46);
        param_2 = (void **)((long)param_2 + (ulong)bVar76 * -2 + 1);
        if (*pbVar1 == 0) goto code_r0x001028a8;
        goto LAB_00102848;
      }
      cVar44 = (char)((ulong)in_RCX >> 8);
      *in_RCX = *in_RCX - cVar44;
      *(byte *)((long)puVar60 + 0x65) = *(byte *)((long)puVar60 + 0x65) + cVar44;
      uVar5 = (long)*(int *)((long)ppVar64 + 0x68) * 0x25200074;
      puVar54 = (undefined8 *)(uVar5 & 0xffffffff);
      bVar72 = (long)(int)uVar5 != uVar5;
      if (bVar72) {
        bVar43 = auVar77[1] & DAT_2f1049ee;
        cVar44 = (char)((ulong)__mutex >> 8);
        *(char *)param_2 = *(char *)param_2 + cVar44;
        ppVar64->__size[(long)unaff_RBP] = ppVar64->__size[(long)unaff_RBP] + cVar44;
        bVar72 = false;
        bVar75 = false;
        bVar74 = (CONCAT62(auVar77._2_6_,CONCAT11(bVar43,bVar38)) & 0x74003e73) == 0;
        if (bVar74) {
          pcVar42 = (char *)((long)param_2 + (ulong)bVar76 * -2 + 1);
          out(*(char *)param_2,uVar46);
          out(*(undefined4 *)pcVar42,uVar46);
          if (bVar74) {
            cVar44 = in(uVar46);
            ppVar64->__size[0] = cVar44;
            ppVar64->__size[in_FS_OFFSET + (long)unaff_RBP * 2 + (ulong)bVar76 * -2 + 0x21] =
                 ppVar64->__size[in_FS_OFFSET + (long)unaff_RBP * 2 + (ulong)bVar76 * -2 + 0x21] &
                 bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          cVar44 = in(uVar46);
          ppVar64->__size[0] = cVar44;
          out(*(undefined4 *)(pcVar42 + (ulong)bVar76 * -8 + 4),uVar46);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ppVar65 = (pthread_mutex_t *)*puVar54;
        ppFVar57 = (FT_GlyphSlotRec_ **)(puVar54 + 1);
        goto LAB_00102789;
      }
      if (!bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)((long)__mutex + 0x56) = *(byte *)((long)__mutex + 0x56) & bVar45;
      pbVar1 = (byte *)(in_R11 + 0x61);
      *pbVar1 = *pbVar1 & unaff_R12B;
      ppvVar63 = (void **)((long)param_2 + (ulong)bVar76 * -2 + 1);
      out(*(char *)param_2,uVar46);
      if (*pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0010285a:
      *(pthread_mutex_t **)((long)puVar54 + -8) = __mutex;
      *(void ***)((long)puVar54 + -0x10) = ppvVar63;
    }
    else {
_LC68:
      if (bVar74) {
LAB_00102848:
        if (!bVar72) goto LAB_00102878;
        *(char *)((long)param_2 + 0x61) = *(char *)((long)param_2 + 0x61) + (char)puVar60;
        uVar5 = (long)*(int *)((long)unaff_RBP + 100) * 0x206f7420;
        unaff_RBP = (void **)(uVar5 & 0xffffffff);
        if ((long)(int)uVar5 != uVar5) {
          ppvVar63 = (void **)((long)param_2 + (ulong)bVar76 * -2 + 1);
          out(*(char *)param_2,uVar46);
          puVar54 = (undefined8 *)(ulong)*puVar60;
          goto LAB_0010285a;
        }
        goto LAB_001028d0;
      }
      if (!bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      in_stack_ffffffffffffff68 = (pthread_mutex_t *)ppFVar58[1];
      unaff_RBP = (void **)((long)*(int *)((long)param_2 + 0x5f) * 0x725f746f & 0xffffffff);
      ppvVar63 = (void **)((long)param_2 + (ulong)bVar76 * -2 + 1);
      out(*(char *)param_2,uVar46);
      ppFVar58[1] = (FT_GlyphSlotRec_ *)__mutex;
      *ppFVar58 = (FT_GlyphSlotRec_ *)ppvVar63;
      pbVar1 = (byte *)(unaff_R15 + 0x6c);
      *pbVar1 = *pbVar1 & unaff_R12B;
      if ((char)*pbVar1 < '\0') {
        puVar56 = (uint *)(ppFVar58 + -1);
        ppFVar58[-1] = (FT_GlyphSlotRec_ *)0x746f6e20;
code_r0x001027f2:
        in_stack_ffffffffffffff68->__size[(long)unaff_RBP * 2 + 0x61] =
             in_stack_ffffffffffffff68->__size[(long)unaff_RBP * 2 + 0x61] &
             (byte)((ulong)in_RCX >> 8);
        *(char *)((long)__mutex + 0x56) = *(char *)((long)__mutex + 0x56) + bVar45;
        ppFVar57 = (FT_GlyphSlotRec_ **)puVar56;
LAB_001027fd:
        pbVar1 = (byte *)(unaff_R15 + 0x6c);
        *pbVar1 = *pbVar1 & unaff_R12B;
        bVar75 = (char)*pbVar1 < '\0';
        ppvVar63 = unaff_RBP;
        goto LAB_00102801;
      }
      *(byte *)((long)__mutex + 0x61) =
           *(byte *)((long)__mutex + 0x61) & (byte)((ulong)puVar60 >> 8);
    }
LAB_0010285c:
    pbVar1 = (byte *)(in_R11 + 0x61);
    *pbVar1 = *pbVar1 & unaff_R12B;
    out(*(char *)ppvVar63,uVar46);
    if (*pbVar1 == 0) {
      return puVar60;
    }
  }
  else {
    ppVar65 = (pthread_mutex_t *)(ppVar64->__size + (ulong)bVar76 * -8 + 4);
    iVar41 = in(uVar46);
    (ppVar64->__data).__lock = iVar41;
    ppFVar58 = &local_a8;
    ppVar64 = ppVar65;
    if (bVar74) goto LAB_00102765;
    if (bVar72) {
      if (!bVar74) {
        if (bVar72) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        ppFVar58 = (FT_GlyphSlotRec_ **)&uStack_b0;
        uStack_b0 = 0x695f7000;
        out(*(char *)param_2,uVar46);
        param_2 = (void **)((long)param_2 + (ulong)bVar76 * -2 + 1);
        goto _LC21;
      }
LAB_00102789:
      ppvVar63 = unaff_RBP;
      in_stack_ffffffffffffff68 = ppVar65;
      if (bVar72) {
        in_stack_ffffffffffffff68 = (pthread_mutex_t *)*ppFVar57;
        puVar55 = (uint *)(ppFVar57 + 1);
        uVar5 = (long)*(int *)((long)param_2 + 0x5f) * 0x705f746f;
        unaff_RBP = (void **)(uVar5 & 0xffffffff);
        bVar72 = (long)(int)uVar5 != uVar5;
        if (bVar72) {
          *ppFVar57 = (FT_GlyphSlotRec_ *)__mutex;
          ppFVar57[-1] = (FT_GlyphSlotRec_ *)param_2;
          ppFVar57 = ppFVar57 + -1;
        }
        else {
          ppFVar57 = ppFVar57 + 1;
          ppvVar63 = param_2;
          if (bVar72) {
code_r0x00102798:
            if (!bVar74) {
              if (bVar72) {
                pcVar42 = (char *)((long)ppvVar63 + (ulong)bVar76 * -8 + 4);
                out(*(int *)ppvVar63,uVar46);
                *pcVar42 = *pcVar42 + (char)((ulong)in_RCX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto LAB_00102808;
            }
            *(char *)((long)__mutex + 0x56) = *(char *)((long)__mutex + 0x56) + bVar45;
            ppFVar57 = (FT_GlyphSlotRec_ **)puVar55;
          }
        }
        goto LAB_001027fd;
      }
LAB_00102801:
      if (bVar75) {
        *(undefined8 *)((long)ppFVar57 + -8) = 0x746f6e20;
LAB_00102808:
        *(byte *)((long)puVar51 + 0x65) = *(byte *)((long)puVar51 + 0x65) & bVar53;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar43 = (byte)((ulong)in_RCX >> 8) & *(byte *)((long)unaff_RBP + 0x65);
      in_RCX = (char *)CONCAT62((int6)((ulong)in_RCX >> 0x10),CONCAT11(bVar43,(char)in_RCX));
      bVar74 = bVar43 == 0;
      iVar41 = in(uVar46);
      (ppVar65->__data).__lock = iVar41;
      pcVar42 = (char *)((long)param_2 + (ulong)bVar76 * -2 + 1);
      out(*(char *)param_2,uVar46);
      if (bVar74) {
        in_RCX[0x73] = '\0';
        pcVar42[0x75] = '\0';
        FVar4 = (FT_GlyphSlotRec_)in(uVar46);
        *local_a8 = FVar4;
        FVar4 = (FT_GlyphSlotRec_)in(uVar46);
        local_a8[(ulong)bVar76 * -2 + 1] = FVar4;
        *pcVar42 = *pcVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_a8 = (FT_GlyphSlotRec_ *)0x6f635f00;
      out(*(undefined4 *)pcVar42,uVar46);
      out(pcVar42[(ulong)bVar76 * -8 + 4],uVar46);
      ppFVar58 = (FT_GlyphSlotRec_ **)&stack0xffffffffffffff68;
      if (!bVar74) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = (long)*(int *)unaff_RBP * 0x73253c;
      puVar61 = (undefined4 *)(uVar5 & 0xffffffff);
      if ((long)(int)uVar5 == uVar5) {
        param_2 = (void **)(ulong)*(uint *)((long)local_a0 + (long)unaff_RBP * 2 + 0x72);
        local_a0 = (pthread_mutex_t *)0x73757000;
code_r0x001027c5:
        local_a0 = (pthread_mutex_t *)0x73757000;
        ppFVar58 = &local_a8;
        local_a8 = (FT_GlyphSlotRec_ *)0x6361625f;
        uVar5 = (long)(int)*puVar60 * 0x73;
        puVar60 = (uint *)(uVar5 & 0xffffffff);
        bVar72 = (long)(int)uVar5 != uVar5;
        ppVar64 = ppVar36;
        goto _LC68;
      }
      pbVar1 = (byte *)(long)((int)uVar5 + 0x69);
      bVar72 = CARRY1(*pbVar1,bVar53);
      bVar43 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar53;
      bVar74 = *pbVar1 == 0;
      if (bVar72 || bVar74) {
        param_2 = (void **)(puVar61 + (ulong)bVar76 * -2 + 1);
        out(*puVar61,uVar46);
        *(byte *)puVar60 = (byte)*puVar60 & bVar38;
        bVar74 = (byte)*puVar60 == 0;
        if (bVar74) {
          if (!bVar74) {
            pbVar1 = (byte *)((long)puVar60 + 0x5f);
            *pbVar1 = *pbVar1 + bVar53;
            bVar74 = *pbVar1 == 0;
            bVar73 = (POPCOUNT(*pbVar1) & 1U) == 0;
            uVar5 = (long)*(int *)((long)param_2 + 100) * 0x67007865;
            unaff_RBP = (void **)(uVar5 & 0xffffffff);
            bVar72 = (long)(int)uVar5 != uVar5;
            ppVar64 = local_a0;
            goto _LC21;
          }
        }
        else if (bVar74) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        local_a0 = (pthread_mutex_t *)0x73757000;
        goto code_r0x001027c5;
      }
      puVar62 = (undefined4 *)((long)puVar61 + (ulong)bVar76 * -2 + 1);
      out(*(undefined1 *)puVar61,uVar46);
      puVar56 = &local_90;
      puVar55 = &local_90;
      ppFVar57 = (FT_GlyphSlotRec_ **)&local_90;
      ppvVar63 = (void **)(puVar62 + (ulong)bVar76 * -2 + 1);
      out(*puVar62,uVar46);
      if (bVar74) goto code_r0x001027f2;
      if (!SCARRY1(bVar43,bVar53)) {
        if (bVar72) goto code_r0x00102798;
        goto LAB_001027fd;
      }
      if (bVar74) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (!bVar72) {
        halt_baddata();
      }
      ppFVar57 = (FT_GlyphSlotRec_ **)&stack0xffffffffffffff68;
    }
    ppFVar58 = (FT_GlyphSlotRec_ **)((long)ppFVar57 + -8);
    *(pthread_mutex_t **)((long)ppFVar57 + -8) = __mutex;
    __mutex = in_stack_ffffffffffffff68;
    unaff_RBP = ppvVar63;
    ppVar64 = in_stack_ffffffffffffff68;
LAB_00102878:
    ppFVar58 = (FT_GlyphSlotRec_ **)((long)ppFVar58 + -8);
    if (ppVar64->__align != 0) {
      LOCK();
      plVar52 = (long *)(ppVar64->__align + -0x10);
      *plVar52 = *plVar52 + -1;
      UNLOCK();
      if (*plVar52 == 0) {
LAB_001028d0:
        lVar47 = ppVar64->__align;
        __mutex->__align = 0;
        *(undefined8 *)((long)ppFVar58 + -8) = 0x1028e5;
        Memory::free_static((void *)(lVar47 + -0x10),false);
      }
      else {
        ppVar64->__align = 0;
      }
    }
  }
  auVar77._8_8_ = (long)*unaff_RBP + -0x10;
  auVar77._0_8_ = *unaff_RBP;
LAB_0010289b:
  plVar52 = auVar77._8_8_;
  puVar60 = auVar77._0_8_;
  if (puVar60 != (uint *)0x0) {
    do {
      auVar77._8_8_ = plVar52;
      auVar77._0_8_ = *plVar52;
      if (*plVar52 == 0) {
        return (uint *)0x0;
      }
code_r0x001028a8:
      plVar52 = auVar77._8_8_;
      lVar49 = auVar77._0_8_;
      LOCK();
      lVar47 = *plVar52;
      bVar72 = lVar49 == lVar47;
      if (bVar72) {
        *plVar52 = lVar49 + 1;
        lVar47 = lVar49;
      }
      auVar35._8_8_ = plVar52;
      auVar35._0_8_ = lVar47;
      UNLOCK();
code_r0x001028b1:
      plVar52 = auVar35._8_8_;
      puVar60 = auVar35._0_8_;
    } while (!bVar72);
    if (puVar60 != (uint *)0xffffffffffffffff) {
      puVar60 = (uint *)*unaff_RBP;
      __mutex->__align = (long)puVar60;
    }
  }
  return puVar60;
LAB_00102259:
  uVar48 = (ulong)uVar68;
  if ((uVar40 != uVar59) || (uVar39 != *(uint *)(*(long *)((long)local_a0 + lVar49 * 8) + 0x10)))
  goto LAB_00102210;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (uVar68 + 1) * uVar5;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar67;
  uVar50 = SUB168(auVar15 * auVar29,8);
  puVar60 = (uint *)(lVar47 + uVar50 * 4);
  uVar40 = SUB164(auVar15 * auVar29,8);
  uVar70 = (ulong)uVar40;
  uVar39 = *puVar60;
  if ((uVar39 != 0) &&
     (auVar16._8_8_ = 0, auVar16._0_8_ = uVar39 * uVar5, auVar30._8_8_ = 0, auVar30._0_8_ = uVar67,
     auVar17._8_8_ = 0, auVar17._0_8_ = ((uVar40 + local_90) - SUB164(auVar16 * auVar30,8)) * uVar5,
     auVar31._8_8_ = 0, auVar31._0_8_ = uVar67, SUB164(auVar17 * auVar31,8) != 0)) {
    while( true ) {
      puVar2 = (uint *)(lVar47 + uVar48 * 4);
      *puVar60 = *puVar2;
      puVar51 = (undefined8 *)((long)local_a0 + uVar50 * 8);
      *puVar2 = uVar39;
      puVar3 = (undefined8 *)((long)local_a0 + uVar48 * 8);
      uVar6 = *puVar51;
      *puVar51 = *puVar3;
      *puVar3 = uVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ((int)uVar70 + 1) * uVar5;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar67;
      uVar50 = SUB168(auVar20 * auVar34,8);
      puVar60 = (uint *)(lVar47 + uVar50 * 4);
      uVar39 = *puVar60;
      uVar48 = uVar70;
      if ((uVar39 == 0) ||
         (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar5, auVar32._8_8_ = 0,
         auVar32._0_8_ = uVar67, auVar19._8_8_ = 0,
         auVar19._0_8_ =
              ((SUB164(auVar20 * auVar34,8) + local_90) - SUB164(auVar18 * auVar32,8)) * uVar5,
         auVar33._8_8_ = 0, auVar33._0_8_ = uVar67, SUB164(auVar19 * auVar33,8) == 0)) break;
      uVar70 = uVar50 & 0xffffffff;
    }
    local_8c = 0;
  }
  *(undefined4 *)(lVar47 + uVar48 * 4) = 0;
  plVar52 = (long *)((long)local_a0 + uVar48 * 8);
  plVar69 = (long *)*plVar52;
  if (*(long **)((long)__mutex + 0x40) == plVar69) {
    *(long *)((long)__mutex + 0x40) = *plVar69;
    plVar69 = (long *)*plVar52;
  }
  if (*(long **)((long)__mutex + 0x48) == plVar69) {
    *(long *)((long)__mutex + 0x48) = plVar69[1];
    plVar69 = (long *)*plVar52;
  }
  if ((long *)plVar69[1] != (long *)0x0) {
    *(long *)plVar69[1] = *plVar69;
    plVar69 = (long *)*plVar52;
  }
  if (*plVar69 != 0) {
    *(long *)(*plVar69 + 8) = plVar69[1];
    plVar69 = (long *)*plVar52;
  }
  if (plVar69[6] != 0) {
    LOCK();
    plVar52 = (long *)(plVar69[6] + -0x10);
    *plVar52 = *plVar52 + -1;
    UNLOCK();
    if (*plVar52 == 0) {
      lVar47 = plVar69[6];
      plVar69[6] = 0;
      uStack_b0 = 0x1023bc;
      Memory::free_static((void *)(lVar47 + -0x10),false);
    }
  }
  uStack_b0 = 0x1023c6;
  Memory::free_static(plVar69,false);
  *(undefined8 *)(*(long *)((long)__mutex + 0x30) + uVar48 * 8) = 0;
  *(int *)((long)__mutex + 0x54) = *(int *)((long)__mutex + 0x54) + -1;
LAB_001023d6:
  puVar60 = (uint *)0x0;
  local_a8[0xb2] = (FT_GlyphSlotRec_)0x7;
  *(undefined2 *)(local_a8 + 0xb0) = 0x100;
  *(undefined4 *)(local_a8 + 0x90) = 0x62697473;
LAB_001023f7:
  if (local_78 != (SwCanvas *)0x0) {
    uStack_b0 = 0x10240a;
    tvg::SwCanvas::~SwCanvas(local_78);
  }
LAB_001024b8:
  if (local_80 != (Matrix *)0x0) {
    uStack_b0 = 0x1024c7;
    tvg::Picture::~Picture((Picture *)local_80);
  }
  goto LAB_00102450;
LAB_00102210:
  uVar66 = uVar66 + 1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (uVar68 + 1) * uVar5;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar67;
  lVar49 = SUB168(auVar12 * auVar26,8);
  uVar40 = *(uint *)(lVar47 + lVar49 * 4);
  uVar68 = SUB164(auVar12 * auVar26,8);
  if ((uVar40 == 0) ||
     (auVar13._8_8_ = 0, auVar13._0_8_ = uVar40 * uVar5, auVar27._8_8_ = 0, auVar27._0_8_ = uVar67,
     auVar14._8_8_ = 0, auVar14._0_8_ = ((local_90 + uVar68) - SUB164(auVar13 * auVar27,8)) * uVar5,
     auVar28._8_8_ = 0, auVar28._0_8_ = uVar67, SUB164(auVar14 * auVar28,8) < uVar66))
  goto LAB_001023d6;
  goto LAB_00102259;
}



/* CowData<char>::_ref(CowData<char> const&) [clone .part.0] */

void __thiscall CowData<char>::_ref(CowData<char> *this,CowData *param_1)

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



/* CowData<TVG_NodeCache>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<TVG_NodeCache>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* construct_xml(Ref<XMLParser>&, double&, double&, String*, long&) [clone .cold] */

void construct_xml(Ref *param_1,double *param_2,double *param_3,String *param_4,long *param_5)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* void memdelete<TVG_State>(TVG_State*) */

void memdelete<TVG_State>(TVG_State *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  pvVar8 = *(void **)(param_1 + 0x60);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_1 + 0x80)];
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x68) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(param_1 + 0x68) + lVar6) = 0;
            pvVar7 = *(void **)((long)pvVar8 + 0x38);
            if (pvVar7 != (void *)0x0) {
              if (*(int *)((long)pvVar8 + 0x5c) != 0) {
                uVar3 = (&hash_table_size_primes)[*(uint *)((long)pvVar8 + 0x58)];
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar8 + 0x5c) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x48) = (undefined1  [16])0x0;
                }
                else {
                  lVar9 = 0;
                  do {
                    piVar5 = (int *)(*(long *)((long)pvVar8 + 0x40) + lVar9);
                    if (*piVar5 != 0) {
                      pvVar7 = *(void **)((long)pvVar7 + lVar9 * 2);
                      *piVar5 = 0;
                      if (*(long *)((long)pvVar7 + 0x20) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)((long)pvVar7 + 0x20) + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                          lVar4 = *(long *)((long)pvVar7 + 0x20);
                          *(undefined8 *)((long)pvVar7 + 0x20) = 0;
                          Memory::free_static((void *)(lVar4 + -0x10),false);
                        }
                      }
                      Memory::free_static(pvVar7,false);
                      pvVar7 = *(void **)((long)pvVar8 + 0x38);
                      *(undefined8 *)((long)pvVar7 + lVar9 * 2) = 0;
                    }
                    lVar9 = lVar9 + 4;
                  } while ((ulong)uVar3 << 2 != lVar9);
                  *(undefined4 *)((long)pvVar8 + 0x5c) = 0;
                  *(undefined1 (*) [16])((long)pvVar8 + 0x48) = (undefined1  [16])0x0;
                  if (pvVar7 == (void *)0x0) goto LAB_00102a46;
                }
              }
              Memory::free_static(pvVar7,false);
              Memory::free_static(*(void **)((long)pvVar8 + 0x40),false);
            }
LAB_00102a46:
            if (*(long *)((long)pvVar8 + 0x18) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x18) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x18);
                *(undefined8 *)((long)pvVar8 + 0x18) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(param_1 + 0x60);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 != lVar6);
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00102ab3;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(param_1 + 0x68),false);
  }
LAB_00102ab3:
  pvVar8 = *(void **)(param_1 + 0x30);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_1 + 0x50)];
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x38) + lVar6) != 0) {
            pvVar8 = *(void **)((long)pvVar8 + lVar6 * 2);
            *(int *)(*(long *)(param_1 + 0x38) + lVar6) = 0;
            if (*(long *)((long)pvVar8 + 0x30) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar8 + 0x30) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar9 = *(long *)((long)pvVar8 + 0x30);
                *(undefined8 *)((long)pvVar8 + 0x30) = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            Memory::free_static(pvVar8,false);
            pvVar8 = *(void **)(param_1 + 0x30);
            *(undefined8 *)((long)pvVar8 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
        if (pvVar8 == (void *)0x0) goto LAB_00102b67;
      }
    }
    Memory::free_static(pvVar8,false);
    Memory::free_static(*(void **)(param_1 + 0x38),false);
  }
LAB_00102b67:
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00102d98) */
/* WARNING: Removing unreachable block (ram,0x00102ec8) */
/* WARNING: Removing unreachable block (ram,0x00103090) */
/* WARNING: Removing unreachable block (ram,0x00102ed4) */
/* WARNING: Removing unreachable block (ram,0x00102ede) */
/* WARNING: Removing unreachable block (ram,0x00103070) */
/* WARNING: Removing unreachable block (ram,0x00102eea) */
/* WARNING: Removing unreachable block (ram,0x00102ef4) */
/* WARNING: Removing unreachable block (ram,0x00103050) */
/* WARNING: Removing unreachable block (ram,0x00102f00) */
/* WARNING: Removing unreachable block (ram,0x00102f0a) */
/* WARNING: Removing unreachable block (ram,0x00103030) */
/* WARNING: Removing unreachable block (ram,0x00102f16) */
/* WARNING: Removing unreachable block (ram,0x00102f20) */
/* WARNING: Removing unreachable block (ram,0x00103010) */
/* WARNING: Removing unreachable block (ram,0x00102f2c) */
/* WARNING: Removing unreachable block (ram,0x00102f36) */
/* WARNING: Removing unreachable block (ram,0x00102ff0) */
/* WARNING: Removing unreachable block (ram,0x00102f42) */
/* WARNING: Removing unreachable block (ram,0x00102f4c) */
/* WARNING: Removing unreachable block (ram,0x00102fd0) */
/* WARNING: Removing unreachable block (ram,0x00102f54) */
/* WARNING: Removing unreachable block (ram,0x00102f6a) */
/* WARNING: Removing unreachable block (ram,0x00102f76) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
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



/* WARNING: Removing unreachable block (ram,0x00103210) */
/* WARNING: Removing unreachable block (ram,0x00103340) */
/* WARNING: Removing unreachable block (ram,0x001034b9) */
/* WARNING: Removing unreachable block (ram,0x0010334c) */
/* WARNING: Removing unreachable block (ram,0x00103356) */
/* WARNING: Removing unreachable block (ram,0x0010349b) */
/* WARNING: Removing unreachable block (ram,0x00103362) */
/* WARNING: Removing unreachable block (ram,0x0010336c) */
/* WARNING: Removing unreachable block (ram,0x0010347d) */
/* WARNING: Removing unreachable block (ram,0x00103378) */
/* WARNING: Removing unreachable block (ram,0x00103382) */
/* WARNING: Removing unreachable block (ram,0x0010345f) */
/* WARNING: Removing unreachable block (ram,0x0010338e) */
/* WARNING: Removing unreachable block (ram,0x00103398) */
/* WARNING: Removing unreachable block (ram,0x00103441) */
/* WARNING: Removing unreachable block (ram,0x001033a4) */
/* WARNING: Removing unreachable block (ram,0x001033ae) */
/* WARNING: Removing unreachable block (ram,0x00103423) */
/* WARNING: Removing unreachable block (ram,0x001033b6) */
/* WARNING: Removing unreachable block (ram,0x001033c0) */
/* WARNING: Removing unreachable block (ram,0x00103408) */
/* WARNING: Removing unreachable block (ram,0x001033c8) */
/* WARNING: Removing unreachable block (ram,0x001033de) */
/* WARNING: Removing unreachable block (ram,0x001033ea) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned int, GL_State, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, GL_State> > >::operator[](unsigned int const&)
    */

undefined1 * __thiscall
HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
::operator[](HashMap<unsigned_int,GL_State,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GL_State>>>
             *this,uint *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 (*pauVar4) [16];
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_128;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_40;
  
  local_128 = *(void **)(this + 8);
  uVar38 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar39 = (&hash_table_size_primes)[uVar40];
  uVar50 = CONCAT44(0,uVar39);
  if (local_128 == (void *)0x0) {
    local_b8 = 0;
    uVar40 = uVar50 * 4;
    uVar49 = uVar50 * 8;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_128 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = local_128;
    if (uVar39 == 0) {
      uVar38 = *param_1;
      iVar44 = *(int *)(this + 0x2c);
      if (local_128 == (void *)0x0) goto LAB_00103741;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_128 + uVar49)) &&
         (local_128 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_128 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar50 != uVar40);
        uVar38 = *param_1;
        iVar44 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(local_128,0,uVar49);
        uVar38 = *param_1;
        iVar44 = *(int *)(this + 0x2c);
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar53 = *(long *)(this + 0x10);
      goto LAB_00103c2a;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 == 0) {
      local_b8 = 0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
    }
    else {
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar54 = 1;
        uVar45 = uVar49;
      }
      else {
        uVar45 = uVar54 * uVar49;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar50;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar45;
      lVar46 = SUB168(auVar5 * auVar21,8);
      lVar53 = *(long *)(this + 0x10);
      uVar55 = SUB164(auVar5 * auVar21,8);
      uVar37 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar37 != 0) {
        uVar52 = 0;
        do {
          if ((uVar37 == uVar54) &&
             (uVar38 == *(uint *)(*(long *)((long)local_128 + lVar46 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_128 + (ulong)uVar55 * 8);
            goto LAB_001036eb;
          }
          uVar52 = uVar52 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar55 + 1) * uVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar50;
          lVar46 = SUB168(auVar6 * auVar22,8);
          uVar37 = *(uint *)(lVar53 + lVar46 * 4);
          uVar55 = SUB164(auVar6 * auVar22,8);
        } while ((uVar37 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar37 * uVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar50, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar55 + uVar39) - SUB164(auVar7 * auVar23,8)) * uVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar50, uVar52 <= SUB164(auVar8 * auVar24,8)));
      }
      local_b8 = 0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
LAB_00103c2a:
      uVar45 = CONCAT44(0,(&hash_table_size_primes)[uVar40]);
      uVar49 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar49;
      }
      else {
        uVar43 = uVar37 * uVar49;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar45;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar43;
      lVar46 = SUB168(auVar17 * auVar33,8);
      uVar39 = *(uint *)(lVar53 + lVar46 * 4);
      uVar54 = SUB164(auVar17 * auVar33,8);
      if (uVar39 != 0) {
        uVar55 = 0;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_128 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar4 = *(undefined1 (**) [16])((long)local_128 + (ulong)uVar54 * 8);
            lVar53 = *(long *)pauVar4[3];
            pauVar4[1][8] = 0;
            *(undefined1 (*) [16])(pauVar4[1] + 0xc) = (undefined1  [16])0x0;
            pauVar42 = pauVar4;
            if (lVar53 != 0) {
              CowData<char>::_ref((CowData<char> *)(pauVar4 + 3),(CowData *)(local_e8 + 8));
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar54 * 8);
            }
            *(undefined4 *)(pauVar4[5] + 8) = (undefined4)local_b8;
            *(undefined8 *)(pauVar4[3] + 8) = local_d8._0_8_;
            *(undefined8 *)pauVar4[4] = local_d8._8_8_;
            *(undefined8 *)(pauVar4[4] + 8) = local_c8._0_8_;
            *(undefined8 *)pauVar4[5] = local_c8._8_8_;
            goto LAB_001036eb;
          }
          uVar55 = uVar55 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (uVar54 + 1) * uVar49;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar45;
          lVar46 = SUB168(auVar18 * auVar34,8);
          uVar39 = *(uint *)(lVar53 + lVar46 * 4);
          uVar54 = SUB164(auVar18 * auVar34,8);
        } while ((uVar39 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = uVar39 * uVar49, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (((&hash_table_size_primes)[uVar40] + uVar54) - SUB164(auVar19 * auVar35,8)) *
                     uVar49, auVar36._8_8_ = 0, auVar36._0_8_ = uVar45,
                uVar55 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00103741:
  if ((float)uVar50 * __LC28 < (float)(iVar44 + 1)) {
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001036eb;
    }
    uVar40 = (ulong)(uVar39 + 1);
    uVar38 = (&hash_table_size_primes)[uVar39];
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar39 + 1 < 2) {
      uVar40 = 2;
    }
    uVar39 = (&hash_table_size_primes)[uVar40];
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar49 = (ulong)uVar39;
    uVar40 = uVar49 * 4;
    uVar50 = uVar49 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar50)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar49 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar50);
      }
    }
    if (uVar38 == 0) {
      uVar38 = *param_1;
    }
    else {
      uVar40 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar39 != 0) {
          uVar55 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar50 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar39 * lVar46;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar50;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar53 + lVar47 * 4);
          iVar44 = SUB164(auVar9 * auVar25,8);
          uVar54 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_128 + uVar40 * 8);
          while (uVar54 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar54 * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar50;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar10 * auVar26,8)) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar50;
            uVar52 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar52 < uVar55) {
              *puVar1 = uVar39;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar41;
              uVar39 = uVar54;
              uVar55 = uVar52;
            }
            uVar55 = uVar55 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar50;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar53 + lVar47 * 4);
            iVar44 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar38);
      Memory::free_static(local_128,false);
      Memory::free_static(pvVar3,false);
      uVar38 = *param_1;
    }
  }
  local_50 = (undefined4)local_b8;
  local_70 = local_d8._0_8_;
  uStack_68 = local_d8._8_8_;
  local_60 = local_c8._0_8_;
  uStack_58 = local_c8._8_8_;
  pauVar42 = (undefined1 (*) [16])operator_new(0x60,"");
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar42[1] + 0xc) = (undefined1  [16])0x0;
  *(uint *)pauVar42[1] = uVar38;
  pauVar42[1][8] = 0;
  *(undefined8 *)pauVar42[3] = 0;
  *(undefined8 *)(pauVar42[3] + 8) = local_70;
  *(undefined8 *)pauVar42[4] = uStack_68;
  *(undefined8 *)(pauVar42[4] + 8) = local_60;
  *(undefined8 *)pauVar42[5] = uStack_58;
  *(undefined4 *)(pauVar42[5] + 8) = local_50;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar39 = (*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar38 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
  uVar39 = uVar38 ^ uVar38 >> 0x10;
  if (uVar38 == uVar38 >> 0x10) {
    uVar40 = 1;
    uVar39 = 1;
  }
  else {
    uVar40 = (ulong)uVar39;
  }
  uVar54 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar50 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar46;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar50;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar48 * 4);
  iVar44 = SUB164(auVar13 * auVar29,8);
  uVar37 = *puVar1;
  pauVar4 = pauVar42;
  while (uVar37 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar37 * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar50;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar14 * auVar30,8)) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar50;
    uVar55 = SUB164(auVar15 * auVar31,8);
    pauVar56 = pauVar4;
    if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar4;
      uVar39 = uVar37;
      uVar54 = uVar55;
    }
    uVar54 = uVar54 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar50;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar53 + lVar48 * 4);
    iVar44 = SUB164(auVar16 * auVar32,8);
    pauVar4 = pauVar56;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar4;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001036eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar42[1] + 8;
}



/* HashMap<long, Vector<TVG_NodeCache>, HashMapHasherDefault, HashMapComparatorDefault<long>,
   DefaultTypedAllocator<HashMapElement<long, Vector<TVG_NodeCache> > >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
::_resize_and_rehash
          (HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
/* HashMap<long, Vector<TVG_NodeCache>, HashMapHasherDefault, HashMapComparatorDefault<long>,
   DefaultTypedAllocator<HashMapElement<long, Vector<TVG_NodeCache> > > >::operator[](long const&)
    */

undefined1 * __thiscall
HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
::operator[](HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
             *this,long *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  void *__s_00;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  undefined1 (*pauVar43) [16];
  long lVar44;
  long in_FS_OFFSET;
  uint local_88;
  undefined8 local_50 [2];
  long local_40;
  
  __s_00 = *(void **)(this + 8);
  lVar44 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar31 = (ulong)*(uint *)(this + 0x28);
  uVar37 = (&hash_table_size_primes)[uVar31];
  uVar35 = CONCAT44(0,uVar37);
  if (__s_00 == (void *)0x0) {
    local_50[0] = 0;
    uVar31 = uVar35 * 4;
    uVar29 = uVar35 * 8;
    uVar32 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(this + 0x10) = uVar32;
    __s_00 = (void *)Memory::alloc_static(uVar29,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar29)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar35 != uVar31);
        lVar44 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar31);
        memset(__s_00,0,uVar29);
        lVar44 = *param_1;
        iVar36 = *(int *)(this + 0x2c);
      }
LAB_001045be:
      if (iVar36 == 0) goto LAB_00104524;
      uVar31 = (ulong)*(uint *)(this + 0x28);
      lVar41 = *(long *)(this + 0x10);
      goto LAB_0010423d;
    }
    lVar44 = *param_1;
    iVar36 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_001045be;
  }
  else {
    iVar36 = *(int *)(this + 0x2c);
    if (iVar36 == 0) {
      local_50[0] = 0;
LAB_00104524:
      iVar36 = 0;
    }
    else {
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar44 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar40 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar40 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar40 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar34 = SUB168(auVar4 * auVar16,8);
      lVar41 = *(long *)(this + 0x10);
      uVar39 = SUB164(auVar4 * auVar16,8);
      uVar33 = *(uint *)(lVar41 + lVar34 * 4);
      if (uVar33 != 0) {
        uVar38 = 0;
        do {
          if (((uint)uVar40 == uVar33) &&
             (lVar44 == *(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            pauVar30 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar39 * 8);
            goto LAB_0010420b;
          }
          uVar38 = uVar38 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar39 + 1) * lVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar35;
          lVar34 = SUB168(auVar5 * auVar17,8);
          uVar33 = *(uint *)(lVar41 + lVar34 * 4);
          uVar39 = SUB164(auVar5 * auVar17,8);
        } while ((uVar33 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar33 * lVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar35, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar39 + uVar37) - SUB164(auVar6 * auVar18,8)) * lVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar35, uVar38 <= SUB164(auVar7 * auVar19,8)));
      }
      local_50[0] = 0;
LAB_0010423d:
      uVar40 = CONCAT44(0,(&hash_table_size_primes)[uVar31]);
      lVar2 = *(long *)(hash_table_size_primes_inv + uVar31 * 8);
      uVar29 = lVar44 * 0x3ffff - 1;
      uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
      uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar42 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
        uVar42 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar34 = SUB168(auVar8 * auVar20,8);
      uVar37 = *(uint *)(lVar41 + lVar34 * 4);
      uVar33 = SUB164(auVar8 * auVar20,8);
      if (uVar37 != 0) {
        uVar39 = 0;
        do {
          if ((uVar37 == (uint)uVar42) &&
             (lVar44 == *(long *)(*(long *)((long)__s_00 + lVar34 * 8) + 0x10))) {
            lVar44 = *(long *)((long)__s_00 + (ulong)uVar33 * 8);
            if (*(long *)(lVar44 + 0x20) != 0) {
              CowData<TVG_NodeCache>::_ref
                        ((CowData<TVG_NodeCache> *)(lVar44 + 0x20),(CowData *)local_50);
            }
            pauVar30 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar33 * 8);
            goto LAB_0010420b;
          }
          uVar39 = uVar39 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar34 = SUB168(auVar9 * auVar21,8);
          uVar37 = *(uint *)(lVar41 + lVar34 * 4);
          uVar33 = SUB164(auVar9 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)(((&hash_table_size_primes)[uVar31] + uVar33) -
                            SUB164(auVar10 * auVar22,8)) * lVar2, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, uVar39 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar35 * __LC28 < (float)(iVar36 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar30 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010420b;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  lVar44 = *param_1;
  pauVar30 = (undefined1 (*) [16])operator_new(0x28,"");
  *(undefined8 *)pauVar30[2] = 0;
  *(long *)pauVar30[1] = lVar44;
  *pauVar30 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar30;
  }
  else {
    *puVar3 = pauVar30;
    *(undefined8 **)(*pauVar30 + 8) = puVar3;
  }
  lVar44 = *param_1;
  lVar41 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar30;
  uVar31 = lVar44 * 0x3ffff - 1;
  uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
  uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
  uVar31 = uVar31 >> 0x16 ^ uVar31;
  uVar35 = uVar31 & 0xffffffff;
  if ((int)uVar31 == 0) {
    uVar35 = 1;
  }
  uVar38 = 0;
  lVar44 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = (uint)uVar35;
  uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar31 = CONCAT44(0,uVar37);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar35 * lVar44;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar31;
  lVar34 = SUB168(auVar12 * auVar24,8);
  lVar2 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar41 + lVar34 * 4);
  iVar36 = SUB164(auVar12 * auVar24,8);
  uVar33 = *puVar1;
  pauVar28 = pauVar30;
  while (uVar33 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar33 * lVar44;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar31;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar37 + iVar36) - SUB164(auVar13 * auVar25,8)) * lVar44;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar31;
    local_88 = SUB164(auVar14 * auVar26,8);
    pauVar43 = pauVar28;
    if (local_88 < uVar38) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar33;
      puVar3 = (undefined8 *)(lVar2 + lVar34 * 8);
      pauVar43 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
    }
    uVar39 = (uint)uVar35;
    uVar38 = uVar38 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar36 + 1) * lVar44;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar31;
    lVar34 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar41 + lVar34 * 4);
    iVar36 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar43;
    uVar33 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar2 + lVar34 * 8) = pauVar28;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010420b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar30[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<long, Vector<TVG_NodeCache>, HashMapHasherDefault, HashMapComparatorDefault<long>,
   DefaultTypedAllocator<HashMapElement<long, Vector<TVG_NodeCache> > > >::insert(long const&,
   Vector<TVG_NodeCache> const&, bool) */

long * HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
       ::insert(long *param_1,Vector *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  void *__s;
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
  undefined1 (*pauVar21) [16];
  uint uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  void *__s_00;
  long in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  long *plVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  char in_R8B;
  ulong uVar32;
  uint uVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  long in_FS_OFFSET;
  undefined1 (*local_90) [16];
  undefined1 (*pauStack_70) [16];
  long local_48;
  long local_40;
  
  plVar27 = (long *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (__s_00 == (void *)0x0) {
    uVar32 = (ulong)uVar3;
    uVar23 = uVar32 * 4;
    uVar30 = uVar32 * 8;
    uVar25 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar30,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar3 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar30)) && (__s_00 < (void *)((long)__s + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)__s + uVar23 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar32 != uVar23);
        goto LAB_001046d9;
      }
      memset(__s,0,uVar23);
      memset(__s_00,0,uVar30);
      iVar26 = *(int *)(param_2 + 0x2c);
      lVar34 = *plVar27;
      goto LAB_001046e4;
    }
    iVar26 = *(int *)(param_2 + 0x2c);
    lVar34 = *plVar27;
    if (__s_00 != (void *)0x0) goto LAB_001046e4;
  }
  else {
LAB_001046d9:
    iVar26 = *(int *)(param_2 + 0x2c);
    lVar34 = *plVar27;
LAB_001046e4:
    if (iVar26 != 0) {
      uVar32 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 0x28)]);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar23 = lVar34 * 0x3ffff - 1;
      uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
      uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
      uVar23 = uVar23 >> 0x16 ^ uVar23;
      uVar30 = uVar23 & 0xffffffff;
      if ((int)uVar23 == 0) {
        uVar30 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar30 * lVar4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar28 = SUB168(auVar5 * auVar13,8);
      uVar31 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
      uVar22 = SUB164(auVar5 * auVar13,8);
      if (uVar31 != 0) {
        uVar33 = 0;
        do {
          if ((uVar31 == (uint)uVar30) &&
             (*(long *)(*(long *)((long)__s_00 + lVar28 * 8) + 0x10) == lVar34)) {
            lVar34 = *(long *)((long)__s_00 + (ulong)uVar22 * 8);
            if (*(long *)(lVar34 + 0x20) != *(long *)(in_RCX + 8)) {
              CowData<TVG_NodeCache>::_ref
                        ((CowData<TVG_NodeCache> *)(lVar34 + 0x20),(CowData *)(in_RCX + 8));
            }
            local_90 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)uVar22 * 8);
            goto LAB_00104a43;
          }
          uVar33 = uVar33 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar22 + 1) * lVar4;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar28 = SUB168(auVar6 * auVar14,8);
          uVar31 = *(uint *)(*(long *)(param_2 + 0x10) + lVar28 * 4);
          uVar22 = SUB164(auVar6 * auVar14,8);
        } while ((uVar31 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar31 * lVar4, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)(((&hash_table_size_primes)[*(uint *)(param_2 + 0x28)] +
                                       uVar22) - SUB164(auVar7 * auVar15,8)) * lVar4,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar33 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar3 * __LC28 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined1 (*) [16])0x0;
      goto LAB_00104a43;
    }
    _resize_and_rehash((HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_48 = 0;
  lVar34 = *plVar27;
  if (*(long *)(in_RCX + 8) == 0) {
    pauStack_70 = (undefined1 (*) [16])operator_new(0x28,"");
    *(long *)pauStack_70[1] = lVar34;
    *(undefined8 *)pauStack_70[2] = 0;
    *pauStack_70 = (undefined1  [16])0x0;
LAB_00104900:
    puVar24 = *(undefined8 **)(param_2 + 0x20);
    local_90 = pauStack_70;
    if (puVar24 != (undefined8 *)0x0) goto LAB_0010490d;
LAB_00104abd:
    *(undefined1 (**) [16])(param_2 + 0x18) = pauStack_70;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauStack_70;
    local_90 = pauStack_70;
  }
  else {
    CowData<TVG_NodeCache>::_ref((CowData<TVG_NodeCache> *)&local_48,(CowData *)(in_RCX + 8));
    lVar4 = local_48;
    local_90 = (undefined1 (*) [16])operator_new(0x28,"");
    *(long *)local_90[1] = lVar34;
    *(undefined8 *)local_90[2] = 0;
    *(undefined8 *)*local_90 = 0;
    *(undefined8 *)(*local_90 + 8) = 0;
    pauStack_70 = local_90;
    if (lVar4 == 0) goto LAB_00104900;
    CowData<TVG_NodeCache>::_ref((CowData<TVG_NodeCache> *)(local_90 + 2),(CowData *)&local_48);
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00104900;
    Memory::free_static((void *)(local_48 + -0x10),false);
    puVar24 = *(undefined8 **)(param_2 + 0x20);
    if (puVar24 == (undefined8 *)0x0) goto LAB_00104abd;
LAB_0010490d:
    if (in_R8B == '\0') {
      *puVar24 = local_90;
      *(undefined8 **)(*local_90 + 8) = puVar24;
      *(undefined1 (**) [16])(param_2 + 0x20) = local_90;
    }
    else {
      lVar34 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar34 + 8) = local_90;
      *(long *)*local_90 = lVar34;
      *(undefined1 (**) [16])(param_2 + 0x18) = local_90;
    }
  }
  lVar34 = *(long *)(param_2 + 0x10);
  uVar23 = *plVar27 * 0x3ffff - 1;
  uVar23 = (uVar23 ^ uVar23 >> 0x1f) * 0x15;
  uVar23 = (uVar23 ^ uVar23 >> 0xb) * 0x41;
  uVar23 = uVar23 >> 0x16 ^ uVar23;
  uVar30 = uVar23 & 0xffffffff;
  if ((int)uVar23 == 0) {
    uVar30 = 1;
  }
  uVar33 = 0;
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar22 = (uint)uVar30;
  uVar3 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar23 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar30 * lVar4;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar23;
  lVar29 = SUB168(auVar9 * auVar17,8);
  lVar28 = *(long *)(param_2 + 8);
  puVar2 = (uint *)(lVar34 + lVar29 * 4);
  iVar26 = SUB164(auVar9 * auVar17,8);
  uVar31 = *puVar2;
  pauVar21 = local_90;
  while (uVar31 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar31 * lVar4;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar23;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar26 + uVar3) - SUB164(auVar10 * auVar18,8)) * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar23;
    uVar22 = SUB164(auVar11 * auVar19,8);
    pauVar35 = pauVar21;
    if (uVar22 < uVar33) {
      *puVar2 = (uint)uVar30;
      uVar30 = (ulong)uVar31;
      puVar24 = (undefined8 *)(lVar28 + lVar29 * 8);
      pauVar35 = (undefined1 (*) [16])*puVar24;
      *puVar24 = pauVar21;
      uVar33 = uVar22;
    }
    uVar22 = (uint)uVar30;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar26 + 1) * lVar4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar23;
    lVar29 = SUB168(auVar12 * auVar20,8);
    puVar2 = (uint *)(lVar34 + lVar29 * 4);
    iVar26 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar35;
    uVar31 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar28 + lVar29 * 8) = pauVar21;
  *puVar2 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00104a43:
  *param_1 = (long)local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<unsigned char*, TVG_DocumentCache, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned char*>, DefaultTypedAllocator<HashMapElement<unsigned char*,
   TVG_DocumentCache> > >::operator[](unsigned char* const&) */

undefined1 * __thiscall
HashMap<unsigned_char*,TVG_DocumentCache,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char*>,DefaultTypedAllocator<HashMapElement<unsigned_char*,TVG_DocumentCache>>>
::operator[](HashMap<unsigned_char*,TVG_DocumentCache,HashMapHasherDefault,HashMapComparatorDefault<unsigned_char*>,DefaultTypedAllocator<HashMapElement<unsigned_char*,TVG_DocumentCache>>>
             *this,uchar **param_1)

{
  long *plVar1;
  uint *puVar2;
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
  undefined1 (*pauVar35) [16];
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *pvVar41;
  undefined1 (*pauVar42) [16];
  int *piVar43;
  uint uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  undefined1 *puVar48;
  void *pvVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  ulong uVar55;
  ulong uVar56;
  undefined8 *puVar57;
  ulong uVar58;
  uchar *puVar59;
  uint uVar60;
  undefined1 (*pauVar61) [16];
  long in_FS_OFFSET;
  bool bVar62;
  void *local_d8;
  long local_a8;
  long local_90;
  long local_88;
  undefined1 local_80 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_d8 = *(void **)(this + 8);
  puVar59 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  uVar36 = (&hash_table_size_primes)[uVar39];
  uVar58 = CONCAT44(0,uVar36);
  if (local_d8 == (void *)0x0) {
    local_88 = 0;
    uVar39 = uVar58 * 4;
    local_80 = (undefined1  [16])0x0;
    uVar38 = uVar58 * 8;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = 2;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    local_d8 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_d8;
    if (uVar36 != 0) {
      pvVar49 = *(void **)(this + 0x10);
      if ((pvVar49 < (void *)((long)local_d8 + uVar38)) &&
         (local_d8 < (void *)((long)pvVar49 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar49 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_d8 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar58 != uVar39);
        puVar59 = *param_1;
        iVar45 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar49,0,uVar39);
        memset(local_d8,0,uVar38);
        puVar59 = *param_1;
        iVar45 = *(int *)(this + 0x2c);
      }
LAB_001056f8:
      if (iVar45 == 0) goto LAB_001055b4;
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar51 = *(long *)(this + 0x10);
      goto LAB_00104e15;
    }
    puVar59 = *param_1;
    iVar45 = *(int *)(this + 0x2c);
    if (local_d8 != (void *)0x0) goto LAB_001056f8;
    local_a8 = 0;
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    if (iVar45 == 0) {
      local_88 = 0;
      local_48 = 2;
      local_80 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
LAB_001055b4:
      local_a8 = local_88;
      iVar45 = 0;
    }
    else {
      lVar51 = *(long *)(this + 0x10);
      lVar50 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = (long)puVar59 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar56 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar56 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar56 * lVar50;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar58;
      lVar46 = SUB168(auVar3 * auVar19,8);
      uVar44 = *(uint *)(lVar51 + lVar46 * 4);
      uVar60 = SUB164(auVar3 * auVar19,8);
      if (uVar44 != 0) {
        uVar54 = 0;
        do {
          if ((uVar44 == (uint)uVar56) &&
             (puVar59 == *(uchar **)(*(long *)((long)local_d8 + lVar46 * 8) + 0x10))) {
            puVar48 = (undefined1 *)(*(long *)((long)local_d8 + (ulong)uVar60 * 8) + 0x18);
            goto LAB_00104db3;
          }
          uVar54 = uVar54 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar60 + 1) * lVar50;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar58;
          lVar46 = SUB168(auVar4 * auVar20,8);
          uVar44 = *(uint *)(lVar51 + lVar46 * 4);
          uVar60 = SUB164(auVar4 * auVar20,8);
        } while ((uVar44 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar44 * lVar50, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar58, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar60 + uVar36) - SUB164(auVar5 * auVar21,8)) * lVar50,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar58, uVar54 <= SUB164(auVar6 * auVar22,8)));
      }
      local_88 = 0;
      local_48 = 2;
      local_80 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
LAB_00104e15:
      uVar55 = CONCAT44(0,(&hash_table_size_primes)[uVar39]);
      lVar50 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = (long)puVar59 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar56 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar56 = 1;
      }
      uVar60 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar56 * lVar50;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar55;
      lVar46 = SUB168(auVar7 * auVar23,8);
      uVar36 = *(uint *)(lVar51 + lVar46 * 4);
      uVar44 = SUB164(auVar7 * auVar23,8);
      if (uVar36 != 0) {
        while ((uVar38 = (ulong)uVar44, (uint)uVar56 != uVar36 ||
               (*(uchar **)(*(long *)((long)local_d8 + lVar46 * 8) + 0x10) != puVar59))) {
          uVar60 = uVar60 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar44 + 1) * lVar50;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar55;
          lVar46 = SUB168(auVar8 * auVar24,8);
          uVar36 = *(uint *)(lVar51 + lVar46 * 4);
          uVar44 = SUB164(auVar8 * auVar24,8);
          if ((uVar36 == 0) ||
             (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar36 * lVar50, auVar25._8_8_ = 0,
             auVar25._0_8_ = uVar55, auVar10._8_8_ = 0,
             auVar10._0_8_ =
                  (ulong)(((&hash_table_size_primes)[uVar39] + uVar44) - SUB164(auVar9 * auVar25,8))
                  * lVar50, auVar26._8_8_ = 0, auVar26._0_8_ = uVar55,
             SUB164(auVar10 * auVar26,8) < uVar60)) goto LAB_0010511b;
        }
        lVar51 = *(long *)((long)local_d8 + uVar38 * 8);
        if (*(long *)(lVar51 + 0x18) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(lVar51 + 0x18),(CowData *)&local_88);
        }
        uVar39 = (ulong)*(uint *)(lVar51 + 0x58);
        *(undefined1 (*) [16])(lVar51 + 0x20) = (undefined1  [16])0x0;
        uVar36 = (&hash_table_size_primes)[uVar39];
        if ((*(int *)(lVar51 + 0x5c) != 0) && (*(long *)(lVar51 + 0x38) != 0)) {
          if (uVar36 != 0) {
            lVar50 = 0;
            do {
              piVar43 = (int *)(*(long *)(lVar51 + 0x40) + lVar50);
              if (*piVar43 != 0) {
                *piVar43 = 0;
                pvVar49 = *(void **)(*(long *)(lVar51 + 0x38) + lVar50 * 2);
                if (*(long *)((long)pvVar49 + 0x20) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)((long)pvVar49 + 0x20) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar46 = *(long *)((long)pvVar49 + 0x20);
                    *(undefined8 *)((long)pvVar49 + 0x20) = 0;
                    Memory::free_static((void *)(lVar46 + -0x10),false);
                  }
                }
                Memory::free_static(pvVar49,false);
                *(undefined8 *)(*(long *)(lVar51 + 0x38) + lVar50 * 2) = 0;
              }
              lVar50 = lVar50 + 4;
            } while ((ulong)uVar36 << 2 != lVar50);
            uVar39 = (ulong)*(uint *)(lVar51 + 0x58);
            uVar36 = (&hash_table_size_primes)[uVar39];
          }
          *(undefined4 *)(lVar51 + 0x5c) = 0;
          *(undefined1 (*) [16])(lVar51 + 0x48) = (undefined1  [16])0x0;
        }
        uVar44 = (&hash_table_size_primes)[local_48 & 0xffffffff];
        if (uVar36 < uVar44) {
          uVar60 = (uint)uVar39;
          uVar36 = uVar60;
          do {
            if (uVar36 == 0x1c) {
              _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                               "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                               ,0,0,0);
              goto LAB_00104fa3;
            }
            uVar36 = (int)uVar39 + 1;
            uVar39 = (ulong)uVar36;
          } while ((uint)(&hash_table_size_primes)[uVar39] < uVar44);
          if (uVar36 != uVar60) {
            if (*(long *)(lVar51 + 0x38) == 0) {
              *(uint *)(lVar51 + 0x58) = uVar36;
            }
            else {
              HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
              ::_resize_and_rehash
                        ((HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
                          *)(lVar51 + 0x30),uVar36);
            }
          }
        }
LAB_00104fa3:
        pvVar49 = (void *)local_68._0_8_;
        if ((void *)local_68._0_8_ == (void *)0x0) {
          local_a8 = local_88;
          puVar48 = (undefined1 *)(*(long *)(*(long *)(this + 8) + uVar38 * 8) + 0x18);
        }
        else {
          for (puVar57 = (undefined8 *)local_58._0_8_; puVar57 != (undefined8 *)0x0;
              puVar57 = (undefined8 *)*puVar57) {
            HashMap<long,Vector<TVG_NodeCache>,HashMapHasherDefault,HashMapComparatorDefault<long>,DefaultTypedAllocator<HashMapElement<long,Vector<TVG_NodeCache>>>>
            ::insert(&local_90,(Vector *)(lVar51 + 0x30),(bool)((char)puVar57 + '\x10'));
          }
          local_48._4_4_ = (int)(local_48 >> 0x20);
          puVar48 = (undefined1 *)(*(long *)(*(long *)(this + 8) + uVar38 * 8) + 0x18);
          bVar62 = local_48._4_4_ != 0;
          if ((bVar62) && (uVar44 != 0)) {
            lVar51 = 0;
            do {
              if (*(int *)(local_68._8_8_ + lVar51) != 0) {
                *(int *)(local_68._8_8_ + lVar51) = 0;
                puVar57 = (undefined8 *)((long)pvVar49 + lVar51 * 2);
                pvVar41 = (void *)*puVar57;
                if (*(long *)((long)pvVar41 + 0x20) != 0) {
                  LOCK();
                  plVar1 = (long *)(*(long *)((long)pvVar41 + 0x20) + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    Memory::free_static((void *)(*(long *)((long)pvVar41 + 0x20) + -0x10),false);
                  }
                  puVar57 = (undefined8 *)(local_68._0_8_ + lVar51 * 2);
                  pvVar49 = (void *)local_68._0_8_;
                }
                Memory::free_static(pvVar41,false);
                *puVar57 = 0;
              }
              lVar51 = lVar51 + 4;
            } while (lVar51 != (ulong)uVar44 << 2);
            local_48 = local_48 & 0xffffffff;
            local_58 = (undefined1  [16])0x0;
            local_a8 = local_88;
            if (pvVar49 == (void *)0x0) goto LAB_001050e3;
          }
          Memory::free_static(pvVar49,false);
          Memory::free_static((void *)local_68._8_8_,false);
          local_a8 = local_88;
        }
        goto LAB_001050e3;
      }
LAB_0010511b:
      local_a8 = local_88;
    }
  }
  if ((float)uVar58 * __LC28 < (float)(iVar45 + 1)) {
    uVar36 = *(uint *)(this + 0x28);
    if (uVar36 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105576;
    }
    uVar39 = (ulong)(uVar36 + 1);
    uVar44 = (&hash_table_size_primes)[uVar36];
    pvVar49 = *(void **)(this + 0x10);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar36 + 1 < 2) {
      uVar39 = 2;
    }
    uVar36 = (&hash_table_size_primes)[uVar39];
    *(int *)(this + 0x28) = (int)uVar39;
    uVar38 = (ulong)uVar36;
    uVar39 = uVar38 * 4;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    uVar58 = uVar38 * 8;
    pvVar41 = (void *)Memory::alloc_static(uVar58,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar36 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)pvVar41 + uVar58)) && (pvVar41 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(pvVar41,0,uVar58);
      }
    }
    if (uVar44 != 0) {
      uVar39 = 0;
      do {
        uVar36 = *(uint *)((long)pvVar49 + uVar39 * 4);
        if (uVar36 != 0) {
          uVar53 = 0;
          lVar51 = *(long *)(this + 0x10);
          lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          uVar60 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar58 = CONCAT44(0,uVar60);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar36 * lVar50;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar58;
          lVar46 = SUB168(auVar11 * auVar27,8);
          puVar2 = (uint *)(lVar51 + lVar46 * 4);
          iVar45 = SUB164(auVar11 * auVar27,8);
          uVar54 = *puVar2;
          uVar40 = *(undefined8 *)((long)local_d8 + uVar39 * 8);
          while (uVar54 != 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar54 * lVar50;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar58;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)((uVar60 + iVar45) - SUB164(auVar12 * auVar28,8)) * lVar50;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar58;
            uVar37 = SUB164(auVar13 * auVar29,8);
            uVar52 = uVar40;
            if (uVar37 < uVar53) {
              *puVar2 = uVar36;
              puVar57 = (undefined8 *)((long)pvVar41 + lVar46 * 8);
              uVar52 = *puVar57;
              *puVar57 = uVar40;
              uVar36 = uVar54;
              uVar53 = uVar37;
            }
            uVar53 = uVar53 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar45 + 1) * lVar50;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar58;
            lVar46 = SUB168(auVar14 * auVar30,8);
            puVar2 = (uint *)(lVar51 + lVar46 * 4);
            iVar45 = SUB164(auVar14 * auVar30,8);
            uVar40 = uVar52;
            uVar54 = *puVar2;
          }
          *(undefined8 *)((long)pvVar41 + lVar46 * 8) = uVar40;
          *puVar2 = uVar36;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar44);
      Memory::free_static(local_d8,false);
      Memory::free_static(pvVar49,false);
    }
  }
  uVar39 = 1;
  puVar59 = *param_1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) goto LAB_0010539a;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  uVar39 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010539a:
  pauVar42 = (undefined1 (*) [16])operator_new(0x60,"");
  uVar36 = (&hash_table_size_primes)[uVar39 & 0xffffffff];
  *(uchar **)pauVar42[1] = puVar59;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *(undefined8 *)(pauVar42[5] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  pauVar42[2] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar42[3] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar42[4] + 8) = (undefined1  [16])0x0;
  lVar51 = 1;
  if (5 < uVar36) {
    do {
      if (uVar36 <= (uint)(&hash_table_size_primes)[lVar51]) {
        *(int *)(pauVar42[5] + 8) = (int)lVar51;
        puVar57 = *(undefined8 **)(this + 0x20);
        goto joined_r0x001055d7;
      }
      lVar51 = lVar51 + 1;
    } while (lVar51 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar57 = *(undefined8 **)(this + 0x20);
joined_r0x001055d7:
  if (puVar57 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar57 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar57;
  }
  puVar59 = *param_1;
  lVar51 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar39 = (long)puVar59 * 0x3ffff - 1;
  uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
  uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
  uVar39 = uVar39 >> 0x16 ^ uVar39;
  uVar58 = uVar39 & 0xffffffff;
  if ((int)uVar39 == 0) {
    uVar58 = 1;
  }
  uVar54 = 0;
  lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar60 = (uint)uVar58;
  uVar36 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar39 = CONCAT44(0,uVar36);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar58 * lVar50;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar39;
  lVar47 = SUB168(auVar15 * auVar31,8);
  lVar46 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar51 + lVar47 * 4);
  iVar45 = SUB164(auVar15 * auVar31,8);
  uVar44 = *puVar2;
  pauVar35 = pauVar42;
  while (uVar44 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar44 * lVar50;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar39;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((iVar45 + uVar36) - SUB164(auVar16 * auVar32,8)) * lVar50;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar39;
    uVar60 = SUB164(auVar17 * auVar33,8);
    pauVar61 = pauVar35;
    if (uVar60 < uVar54) {
      *puVar2 = (uint)uVar58;
      uVar58 = (ulong)uVar44;
      puVar57 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar61 = (undefined1 (*) [16])*puVar57;
      *puVar57 = pauVar35;
      uVar54 = uVar60;
    }
    uVar60 = (uint)uVar58;
    uVar54 = uVar54 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar45 + 1) * lVar50;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar39;
    lVar47 = SUB168(auVar18 * auVar34,8);
    puVar2 = (uint *)(lVar51 + lVar47 * 4);
    iVar45 = SUB164(auVar18 * auVar34,8);
    pauVar35 = pauVar61;
    uVar44 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar35;
  *puVar2 = uVar60;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105576:
  puVar48 = pauVar42[1] + 8;
LAB_001050e3:
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_88 + -0x10),false);
    }
  }
LAB_00104db3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<TVG_NodeCache>::_realloc(long) */

undefined8 __thiscall CowData<TVG_NodeCache>::_realloc(CowData<TVG_NodeCache> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc",0x102715,0x1a9,0x1026f8,0,0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<TVG_NodeCache>::resize<false>(long) */

undefined8 __thiscall
CowData<TVG_NodeCache>::resize<false>(CowData<TVG_NodeCache> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize",0x102715,0x157,
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
    lVar3 = lVar9 * 0x10;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00105bf0:
    _err_print_error("resize",0x102715,0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x10 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00105bf0;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize",0x102715,0x171,0x1026f8,0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00105b01;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00105b01:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


