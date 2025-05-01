
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



/* GLES3::Config::~Config() */

void __thiscall GLES3::Config::~Config(Config *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x48);
  singleton = 0;
  if (pvVar5 == (void *)0x0) {
    singleton = 0;
    return;
  }
  if ((*(int *)(this + 0x6c) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4) == 0 ||
      (memset(*(void **)(this + 0x60),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4) << 2),
      *(int *)(this + 0x6c) != 0)))) {
    lVar4 = 0;
    do {
      plVar2 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        pvVar5 = *(void **)(this + 0x48);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x6c));
    *(undefined4 *)(this + 0x6c) = 0;
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x58),false);
  Memory::free_static(*(void **)(this + 0x50),false);
  Memory::free_static(*(void **)(this + 0x60),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLES3::Config::Config() */

void __thiscall GLES3::Config::Config(Config *this)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  uint uVar4;
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  code *pcVar181;
  ulong uVar182;
  Config CVar183;
  undefined2 uVar184;
  char cVar185;
  Config CVar186;
  uint uVar187;
  int iVar188;
  int iVar189;
  int iVar190;
  char *pcVar191;
  long lVar192;
  uint uVar193;
  long lVar194;
  ulong uVar195;
  long *plVar196;
  uint uVar197;
  long lVar198;
  long in_FS_OFFSET;
  double dVar199;
  float fVar200;
  StrRange *local_d0;
  uint local_90;
  uint local_8c;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70;
  char *local_68;
  long *local_60;
  int local_58 [6];
  long local_40;
  
  uVar184 = _LC5;
  iVar188 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)this = uVar184;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (Config)0x0;
  *(undefined8 *)(this + 0x68) = 2;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined2 *)(this + 0x8c) = uVar184;
  local_78 = local_78 & 0xffffffff00000000;
  singleton = this;
  (*_glad_glGetIntegerv)(0x821d,(StrRange *)&local_78);
  if (0 < (int)local_78) {
    do {
      pcVar191 = (char *)(*_glad_glGetStringi)(0x1f03,iVar188);
      if (pcVar191 == (char *)0x0) break;
      local_70 = 0;
      local_60 = (long *)strlen(pcVar191);
      local_68 = pcVar191;
      String::parse_latin1((StrRange *)&local_70);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                ((String *)&local_68);
      lVar192 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar192 + -0x10),false);
        }
      }
      iVar188 = iVar188 + 1;
    } while (iVar188 < (int)local_78);
  }
  local_78 = 0;
  local_68 = "GL_ARB_texture_compression_bptc";
  local_60 = (long *)0x1f;
  String::parse_latin1((StrRange *)&local_78);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar193 * lVar192;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = uVar182;
    lVar194 = SUB168(auVar9 * auVar97,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar9 * auVar97,8);
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_78);
          if (cVar185 != '\0') {
            this[0x74] = (Config)0x1;
            goto LAB_00100373;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar98._8_8_ = 0;
        auVar98._0_8_ = uVar182;
        lVar194 = SUB168(auVar10 * auVar98,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar10 * auVar98,8);
      } while ((uVar187 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar187 * lVar192, auVar99._8_8_ = 0,
              auVar99._0_8_ = uVar182, auVar12._8_8_ = 0,
              auVar12._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar11 * auVar99,8)) * lVar192,
              auVar100._8_8_ = 0, auVar100._0_8_ = uVar182, uVar197 <= SUB164(auVar12 * auVar100,8))
              );
    }
  }
  local_70 = 0;
  local_68 = "EXT_texture_compression_bptc";
  local_60 = (long *)0x1c;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar193 * lVar192;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = uVar182;
    lVar194 = SUB168(auVar13 * auVar101,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar13 * auVar101,8);
      do {
        if (uVar187 == uVar193) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_00100345;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar102._8_8_ = 0;
        auVar102._0_8_ = uVar182;
        lVar194 = SUB168(auVar14 * auVar102,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar14 * auVar102,8);
      } while ((uVar187 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar187 * lVar192, auVar103._8_8_ = 0,
              auVar103._0_8_ = uVar182, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar15 * auVar103,8)) * lVar192,
              auVar104._8_8_ = 0, auVar104._0_8_ = uVar182, uVar197 <= SUB164(auVar16 * auVar104,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_00100345:
  lVar192 = local_70;
  this[0x74] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
LAB_00100373:
  uVar182 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(uVar182 + -0x10),false);
    }
  }
  local_88 = 0;
  local_68 = "GL_KHR_texture_compression_astc";
  local_60 = (long *)0x1f;
  String::parse_latin1((StrRange *)&local_88);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar193 * lVar192;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar182;
    lVar194 = SUB168(auVar5 * auVar93,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar5 * auVar93,8);
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_88);
          if (cVar185 != '\0') {
            this[0x76] = (Config)0x1;
            goto LAB_0010085a;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar94._8_8_ = 0;
        auVar94._0_8_ = uVar182;
        lVar194 = SUB168(auVar6 * auVar94,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar6 * auVar94,8);
      } while ((uVar187 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar187 * lVar192, auVar95._8_8_ = 0,
              auVar95._0_8_ = uVar182, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar7 * auVar95,8)) * lVar192,
              auVar96._8_8_ = 0, auVar96._0_8_ = uVar182, uVar197 <= SUB164(auVar8 * auVar96,8)));
    }
  }
  local_80 = 0;
  local_68 = "GL_OES_texture_compression_astc";
  local_60 = (long *)0x1f;
  String::parse_latin1((StrRange *)&local_80);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar193 * lVar192;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar182;
    lVar194 = SUB168(auVar17 * auVar105,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar17 * auVar105,8);
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_80);
          if (cVar185 != '\0') {
            this[0x76] = (Config)0x1;
            goto LAB_001024f6;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar106._8_8_ = 0;
        auVar106._0_8_ = uVar182;
        lVar194 = SUB168(auVar18 * auVar106,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar18 * auVar106,8);
      } while ((uVar187 != 0) &&
              (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar187 * lVar192, auVar107._8_8_ = 0,
              auVar107._0_8_ = uVar182, auVar20._8_8_ = 0,
              auVar20._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar19 * auVar107,8)) * lVar192,
              auVar108._8_8_ = 0, auVar108._0_8_ = uVar182, uVar197 <= SUB164(auVar20 * auVar108,8))
              );
    }
  }
  local_78 = 0;
  local_68 = "GL_KHR_texture_compression_astc_ldr";
  local_60 = (long *)0x23;
  String::parse_latin1((StrRange *)&local_78);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar69._8_8_ = 0;
    auVar69._0_8_ = (ulong)uVar193 * lVar192;
    auVar157._8_8_ = 0;
    auVar157._0_8_ = uVar182;
    lVar194 = SUB168(auVar69 * auVar157,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar69 * auVar157,8);
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_78);
          if (cVar185 != '\0') {
            this[0x76] = (Config)0x1;
            goto LAB_00102089;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar70._8_8_ = 0;
        auVar70._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar158._8_8_ = 0;
        auVar158._0_8_ = uVar182;
        lVar194 = SUB168(auVar70 * auVar158,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar70 * auVar158,8);
      } while ((uVar187 != 0) &&
              (auVar71._8_8_ = 0, auVar71._0_8_ = (ulong)uVar187 * lVar192, auVar159._8_8_ = 0,
              auVar159._0_8_ = uVar182, auVar72._8_8_ = 0,
              auVar72._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar71 * auVar159,8)) * lVar192,
              auVar160._8_8_ = 0, auVar160._0_8_ = uVar182, uVar197 <= SUB164(auVar72 * auVar160,8))
              );
    }
  }
  local_70 = 0;
  local_68 = "GL_KHR_texture_compression_astc_hdr";
  local_60 = (long *)0x23;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar89._8_8_ = 0;
    auVar89._0_8_ = (ulong)uVar193 * lVar192;
    auVar177._8_8_ = 0;
    auVar177._0_8_ = uVar182;
    lVar194 = SUB168(auVar89 * auVar177,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    iVar188 = SUB164(auVar89 * auVar177,8);
    if (uVar187 != 0) {
      uVar197 = 0;
      do {
        if (uVar187 == uVar193) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_0010205b;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar90._8_8_ = 0;
        auVar90._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar178._8_8_ = 0;
        auVar178._0_8_ = uVar182;
        lVar194 = SUB168(auVar90 * auVar178,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar90 * auVar178,8);
      } while ((uVar187 != 0) &&
              (auVar91._8_8_ = 0, auVar91._0_8_ = (ulong)uVar187 * lVar192, auVar179._8_8_ = 0,
              auVar179._0_8_ = uVar182, auVar92._8_8_ = 0,
              auVar92._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar91 * auVar179,8)) * lVar192,
              auVar180._8_8_ = 0, auVar180._0_8_ = uVar182, uVar197 <= SUB164(auVar92 * auVar180,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_0010205b:
  lVar192 = local_70;
  this[0x76] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
LAB_00102089:
  uVar182 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(uVar182 + -0x10),false);
    }
  }
LAB_001024f6:
  lVar192 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
LAB_0010085a:
  lVar192 = local_88;
  local_d0 = (StrRange *)&local_80;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  local_70 = 0;
  local_60 = (long *)0x23;
  local_68 = "GL_KHR_texture_compression_astc_hdr";
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)uVar193 * lVar192;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar182;
    lVar194 = SUB168(auVar21 * auVar109,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar21 * auVar109,8);
      do {
        if (uVar187 == uVar193) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_001009ba;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar110._8_8_ = 0;
        auVar110._0_8_ = uVar182;
        lVar194 = SUB168(auVar22 * auVar110,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar22 * auVar110,8);
      } while ((uVar187 != 0) &&
              (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)uVar187 * lVar192, auVar111._8_8_ = 0,
              auVar111._0_8_ = uVar182, auVar24._8_8_ = 0,
              auVar24._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar23 * auVar111,8)) * lVar192,
              auVar112._8_8_ = 0, auVar112._0_8_ = uVar182, uVar197 <= SUB164(auVar24 * auVar112,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_001009ba:
  lVar192 = local_70;
  this[0x77] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  local_70 = 0;
  local_68 = "GL_KHR_texture_compression_astc_sliced_3d";
  local_60 = (long *)0x29;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = (ulong)uVar193 * lVar192;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = uVar182;
    lVar194 = SUB168(auVar25 * auVar113,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar25 * auVar113,8);
      do {
        if (uVar187 == uVar193) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_00100b2a;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar114._8_8_ = 0;
        auVar114._0_8_ = uVar182;
        lVar194 = SUB168(auVar26 * auVar114,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar26 * auVar114,8);
      } while ((uVar187 != 0) &&
              (auVar27._8_8_ = 0, auVar27._0_8_ = (ulong)uVar187 * lVar192, auVar115._8_8_ = 0,
              auVar115._0_8_ = uVar182, auVar28._8_8_ = 0,
              auVar28._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar27 * auVar115,8)) * lVar192,
              auVar116._8_8_ = 0, auVar116._0_8_ = uVar182, uVar197 <= SUB164(auVar28 * auVar116,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_00100b2a:
  lVar192 = local_70;
  this[0x78] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  if ((char)RasterizerGLES3::gles_over_gl == '\0') {
    local_70 = 0;
    local_68 = "GL_EXT_color_buffer_float";
    local_60 = (long *)0x19;
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar45._8_8_ = 0;
      auVar45._0_8_ = (ulong)uVar193 * lVar192;
      auVar133._8_8_ = 0;
      auVar133._0_8_ = uVar182;
      lVar194 = SUB168(auVar45 * auVar133,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar45 * auVar133,8);
        do {
          if (uVar187 == uVar193) {
            CVar186 = (Config)String::operator==((String *)
                                                 (*(long *)(this + 0x48) +
                                                 (ulong)*(uint *)(*(long *)(this + 0x50) +
                                                                 lVar194 * 4) * 8),
                                                 (String *)&local_70);
            if (CVar186 != (Config)0x0) goto LAB_00101c12;
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar46._8_8_ = 0;
          auVar46._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar134._8_8_ = 0;
          auVar134._0_8_ = uVar182;
          lVar194 = SUB168(auVar46 * auVar134,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar46 * auVar134,8);
        } while ((uVar187 != 0) &&
                (auVar47._8_8_ = 0, auVar47._0_8_ = (ulong)uVar187 * lVar192, auVar135._8_8_ = 0,
                auVar135._0_8_ = uVar182, auVar48._8_8_ = 0,
                auVar48._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar47 * auVar135,8)) * lVar192,
                auVar136._8_8_ = 0, auVar136._0_8_ = uVar182,
                uVar197 <= SUB164(auVar48 * auVar136,8)));
      }
    }
    CVar186 = (Config)0x0;
LAB_00101c12:
    lVar192 = local_70;
    this[0x70] = CVar186;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
    local_70 = 0;
    local_68 = "GL_OES_texture_float_linear";
    local_60 = (long *)0x1b;
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar49._8_8_ = 0;
      auVar49._0_8_ = (ulong)uVar193 * lVar192;
      auVar137._8_8_ = 0;
      auVar137._0_8_ = uVar182;
      lVar194 = SUB168(auVar49 * auVar137,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar49 * auVar137,8);
        do {
          if (uVar187 == uVar193) {
            CVar186 = (Config)String::operator==((String *)
                                                 (*(long *)(this + 0x48) +
                                                 (ulong)*(uint *)(*(long *)(this + 0x50) +
                                                                 lVar194 * 4) * 8),
                                                 (String *)&local_70);
            if (CVar186 != (Config)0x0) goto LAB_00101d7a;
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar50._8_8_ = 0;
          auVar50._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar138._8_8_ = 0;
          auVar138._0_8_ = uVar182;
          lVar194 = SUB168(auVar50 * auVar138,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar50 * auVar138,8);
        } while ((uVar187 != 0) &&
                (auVar51._8_8_ = 0, auVar51._0_8_ = (ulong)uVar187 * lVar192, auVar139._8_8_ = 0,
                auVar139._0_8_ = uVar182, auVar52._8_8_ = 0,
                auVar52._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar51 * auVar139,8)) * lVar192,
                auVar140._8_8_ = 0, auVar140._0_8_ = uVar182,
                uVar197 <= SUB164(auVar52 * auVar140,8)));
      }
    }
    CVar186 = (Config)0x0;
LAB_00101d7a:
    lVar192 = local_70;
    this[0x71] = CVar186;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
    this[0x75] = (Config)0x1;
    local_80 = 0;
    local_68 = "GL_EXT_texture_compression_dxt1";
    local_60 = (long *)0x1f;
    String::parse_latin1(local_d0);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar53._8_8_ = 0;
      auVar53._0_8_ = (ulong)uVar193 * lVar192;
      auVar141._8_8_ = 0;
      auVar141._0_8_ = uVar182;
      lVar194 = SUB168(auVar53 * auVar141,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar53 * auVar141,8);
        do {
          if (uVar187 == uVar193) {
            cVar185 = String::operator==((String *)
                                         (*(long *)(this + 0x48) +
                                         (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8)
                                         ,(String *)local_d0);
            if (cVar185 != '\0') {
              this[0x72] = (Config)0x1;
              goto LAB_001020ce;
            }
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar142._8_8_ = 0;
          auVar142._0_8_ = uVar182;
          lVar194 = SUB168(auVar54 * auVar142,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar54 * auVar142,8);
        } while ((uVar187 != 0) &&
                (auVar55._8_8_ = 0, auVar55._0_8_ = (ulong)uVar187 * lVar192, auVar143._8_8_ = 0,
                auVar143._0_8_ = uVar182, auVar56._8_8_ = 0,
                auVar56._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar55 * auVar143,8)) * lVar192,
                auVar144._8_8_ = 0, auVar144._0_8_ = uVar182,
                uVar197 <= SUB164(auVar56 * auVar144,8)));
      }
    }
    local_78 = 0;
    local_68 = "GL_EXT_texture_compression_s3tc";
    local_60 = (long *)0x1f;
    String::parse_latin1((StrRange *)&local_78);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar73._8_8_ = 0;
      auVar73._0_8_ = (ulong)uVar193 * lVar192;
      auVar161._8_8_ = 0;
      auVar161._0_8_ = uVar182;
      lVar194 = SUB168(auVar73 * auVar161,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      uVar195 = (ulong)uVar187;
      if (uVar187 != 0) {
        uVar187 = 0;
        iVar188 = SUB164(auVar73 * auVar161,8);
        do {
          if ((uint)uVar195 == uVar193) {
            cVar185 = String::operator==((String *)
                                         (*(long *)(this + 0x48) +
                                         (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8)
                                         ,(String *)&local_78);
            if (cVar185 != '\0') {
              this[0x72] = (Config)0x1;
              goto LAB_00101f9d;
            }
            lVar198 = *(long *)(this + 0x60);
          }
          uVar187 = uVar187 + 1;
          auVar74._8_8_ = 0;
          auVar74._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar162._8_8_ = 0;
          auVar162._0_8_ = uVar182;
          lVar194 = SUB168(auVar74 * auVar162,8);
          uVar197 = *(uint *)(lVar198 + lVar194 * 4);
          uVar195 = (ulong)uVar197;
          iVar188 = SUB164(auVar74 * auVar162,8);
        } while ((uVar197 != 0) &&
                (auVar75._8_8_ = 0, auVar75._0_8_ = uVar195 * lVar192, auVar163._8_8_ = 0,
                auVar163._0_8_ = uVar182, auVar76._8_8_ = 0,
                auVar76._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar75 * auVar163,8)) * lVar192,
                auVar164._8_8_ = 0, auVar164._0_8_ = uVar182,
                uVar187 <= SUB164(auVar76 * auVar164,8)));
      }
    }
    local_70 = 0;
    local_68 = "WEBGL_compressed_texture_s3tc";
    local_60 = (long *)0x1d;
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar85._8_8_ = 0;
      auVar85._0_8_ = (ulong)uVar193 * lVar192;
      auVar173._8_8_ = 0;
      auVar173._0_8_ = uVar182;
      lVar194 = SUB168(auVar85 * auVar173,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar85 * auVar173,8);
        do {
          if (uVar187 == uVar193) {
            CVar186 = (Config)String::operator==((String *)
                                                 (*(long *)(this + 0x48) +
                                                 (ulong)*(uint *)(*(long *)(this + 0x50) +
                                                                 lVar194 * 4) * 8),
                                                 (String *)&local_70);
            if (CVar186 != (Config)0x0) goto LAB_00101f6f;
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar86._8_8_ = 0;
          auVar86._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar174._8_8_ = 0;
          auVar174._0_8_ = uVar182;
          lVar194 = SUB168(auVar86 * auVar174,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar86 * auVar174,8);
        } while ((uVar187 != 0) &&
                (auVar87._8_8_ = 0, auVar87._0_8_ = (ulong)uVar187 * lVar192, auVar175._8_8_ = 0,
                auVar175._0_8_ = uVar182, auVar88._8_8_ = 0,
                auVar88._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar87 * auVar175,8)) * lVar192,
                auVar176._8_8_ = 0, auVar176._0_8_ = uVar182,
                uVar197 <= SUB164(auVar88 * auVar176,8)));
      }
    }
    CVar186 = (Config)0x0;
LAB_00101f6f:
    lVar192 = local_70;
    this[0x72] = CVar186;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
LAB_00101f9d:
    uVar182 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(uVar182 + -0x10),false);
      }
    }
LAB_001020ce:
    lVar192 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
    local_80 = 0;
    local_68 = "GL_EXT_texture_compression_rgtc";
    local_60 = (long *)0x1f;
    String::parse_latin1(local_d0);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar57._8_8_ = 0;
      auVar57._0_8_ = (ulong)uVar193 * lVar192;
      auVar145._8_8_ = 0;
      auVar145._0_8_ = uVar182;
      lVar194 = SUB168(auVar57 * auVar145,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar57 * auVar145,8);
        do {
          if (uVar187 == uVar193) {
            cVar185 = String::operator==((String *)
                                         (*(long *)(this + 0x48) +
                                         (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8)
                                         ,(String *)local_d0);
            if (cVar185 != '\0') {
              this[0x73] = (Config)0x1;
              goto LAB_0010231f;
            }
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar146._8_8_ = 0;
          auVar146._0_8_ = uVar182;
          lVar194 = SUB168(auVar58 * auVar146,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar58 * auVar146,8);
        } while ((uVar187 != 0) &&
                (auVar59._8_8_ = 0, auVar59._0_8_ = (ulong)uVar187 * lVar192, auVar147._8_8_ = 0,
                auVar147._0_8_ = uVar182, auVar60._8_8_ = 0,
                auVar60._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar59 * auVar147,8)) * lVar192,
                auVar148._8_8_ = 0, auVar148._0_8_ = uVar182,
                uVar197 <= SUB164(auVar60 * auVar148,8)));
      }
    }
    local_78 = 0;
    local_68 = "GL_ARB_texture_compression_rgtc";
    local_60 = (long *)0x1f;
    String::parse_latin1((StrRange *)&local_78);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar65._8_8_ = 0;
      auVar65._0_8_ = (ulong)uVar193 * lVar192;
      auVar153._8_8_ = 0;
      auVar153._0_8_ = uVar182;
      lVar194 = SUB168(auVar65 * auVar153,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      uVar195 = (ulong)uVar187;
      if (uVar187 != 0) {
        uVar187 = 0;
        iVar188 = SUB164(auVar65 * auVar153,8);
        do {
          if ((uint)uVar195 == uVar193) {
            cVar185 = String::operator==((String *)
                                         (*(long *)(this + 0x48) +
                                         (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8)
                                         ,(String *)&local_78);
            if (cVar185 != '\0') {
              this[0x73] = (Config)0x1;
              goto LAB_001022e5;
            }
            lVar198 = *(long *)(this + 0x60);
          }
          uVar187 = uVar187 + 1;
          auVar66._8_8_ = 0;
          auVar66._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar154._8_8_ = 0;
          auVar154._0_8_ = uVar182;
          lVar194 = SUB168(auVar66 * auVar154,8);
          uVar197 = *(uint *)(lVar198 + lVar194 * 4);
          uVar195 = (ulong)uVar197;
          iVar188 = SUB164(auVar66 * auVar154,8);
        } while ((uVar197 != 0) &&
                (auVar67._8_8_ = 0, auVar67._0_8_ = uVar195 * lVar192, auVar155._8_8_ = 0,
                auVar155._0_8_ = uVar182, auVar68._8_8_ = 0,
                auVar68._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar67 * auVar155,8)) * lVar192,
                auVar156._8_8_ = 0, auVar156._0_8_ = uVar182,
                uVar187 <= SUB164(auVar68 * auVar156,8)));
      }
    }
    local_70 = 0;
    local_68 = "EXT_texture_compression_rgtc";
    local_60 = (long *)0x1c;
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar81._8_8_ = 0;
      auVar81._0_8_ = (ulong)uVar193 * lVar192;
      auVar169._8_8_ = 0;
      auVar169._0_8_ = uVar182;
      lVar194 = SUB168(auVar81 * auVar169,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar81 * auVar169,8);
        do {
          if (uVar187 == uVar193) {
            CVar186 = (Config)String::operator==((String *)
                                                 (*(long *)(this + 0x48) +
                                                 (ulong)*(uint *)(*(long *)(this + 0x50) +
                                                                 lVar194 * 4) * 8),
                                                 (String *)&local_70);
            if (CVar186 != (Config)0x0) goto LAB_001022b7;
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar82._8_8_ = 0;
          auVar82._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar170._8_8_ = 0;
          auVar170._0_8_ = uVar182;
          lVar194 = SUB168(auVar82 * auVar170,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar82 * auVar170,8);
        } while ((uVar187 != 0) &&
                (auVar83._8_8_ = 0, auVar83._0_8_ = (ulong)uVar187 * lVar192, auVar171._8_8_ = 0,
                auVar171._0_8_ = uVar182, auVar84._8_8_ = 0,
                auVar84._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar83 * auVar171,8)) * lVar192,
                auVar172._8_8_ = 0, auVar172._0_8_ = uVar182,
                uVar197 <= SUB164(auVar84 * auVar172,8)));
      }
    }
    CVar186 = (Config)0x0;
LAB_001022b7:
    lVar192 = local_70;
    this[0x73] = CVar186;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
LAB_001022e5:
    uVar182 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(uVar182 + -0x10),false);
      }
    }
LAB_0010231f:
    lVar192 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
    local_70 = 0;
    local_68 = "GL_EXT_sRGB_write_control";
    local_60 = (long *)0x19;
    String::parse_latin1((StrRange *)&local_70);
    CVar183 = (Config)0x0;
    CVar186 = CVar183;
    if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      uVar187 = String::hash();
      uVar182 = CONCAT44(0,uVar4);
      lVar198 = *(long *)(this + 0x60);
      uVar193 = 1;
      if (uVar187 != 0) {
        uVar193 = uVar187;
      }
      auVar61._8_8_ = 0;
      auVar61._0_8_ = (ulong)uVar193 * lVar192;
      auVar149._8_8_ = 0;
      auVar149._0_8_ = uVar182;
      lVar194 = SUB168(auVar61 * auVar149,8);
      uVar187 = *(uint *)(lVar198 + lVar194 * 4);
      if (uVar187 != 0) {
        uVar197 = 0;
        iVar188 = SUB164(auVar61 * auVar149,8);
        do {
          if (uVar193 == uVar187) {
            CVar186 = (Config)String::operator==((String *)
                                                 (*(long *)(this + 0x48) +
                                                 (ulong)*(uint *)(*(long *)(this + 0x50) +
                                                                 lVar194 * 4) * 8),
                                                 (String *)&local_70);
            if (CVar186 != (Config)0x0) break;
            lVar198 = *(long *)(this + 0x60);
          }
          uVar197 = uVar197 + 1;
          auVar62._8_8_ = 0;
          auVar62._0_8_ = (ulong)(iVar188 + 1) * lVar192;
          auVar150._8_8_ = 0;
          auVar150._0_8_ = uVar182;
          lVar194 = SUB168(auVar62 * auVar150,8);
          uVar187 = *(uint *)(lVar198 + lVar194 * 4);
          iVar188 = SUB164(auVar62 * auVar150,8);
          CVar186 = CVar183;
          if ((uVar187 == 0) ||
             (auVar63._8_8_ = 0, auVar63._0_8_ = (ulong)uVar187 * lVar192, auVar151._8_8_ = 0,
             auVar151._0_8_ = uVar182, auVar64._8_8_ = 0,
             auVar64._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar63 * auVar151,8)) * lVar192,
             auVar152._8_8_ = 0, auVar152._0_8_ = uVar182, SUB164(auVar64 * auVar152,8) < uVar197))
          break;
        } while( true );
      }
    }
    lVar192 = local_70;
    this[0x79] = CVar186;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
  }
  else {
    this[0x75] = (Config)0x0;
    *(undefined4 *)(this + 0x70) = 0x1010101;
    this[0x79] = (Config)0x1;
  }
  (*_glad_glGetIntegerv)(0x8b4c,this + 4);
  (*_glad_glGetIntegerv)(0x8872,this + 8);
  (*_glad_glGetIntegerv)(0xd33,this + 0xc);
  (*_glad_glGetIntegerv)(0xd3a,this + 0x10);
  (*_glad_glGetInteger64v)(0x8a30,this + 0x18);
  (*_glad_glGetIntegerv)(0x9122,&local_90);
  (*_glad_glGetIntegerv)(0x9125,&local_8c);
  local_70 = 0;
  local_60 = (long *)0x21;
  if ((int)local_90 < (int)local_8c) {
    local_8c = local_90;
  }
  *(uint *)(this + 0x20) = local_8c >> 2;
  lVar192 = *(long *)(this + 0x18);
  if (0x100000 < lVar192) {
    lVar192 = 0x100000;
  }
  if (lVar192 < 0x4000) {
    lVar192 = 0x4000;
  }
  *(long *)(this + 0x18) = lVar192;
  local_68 = "GL_EXT_texture_filter_anisotropic";
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (ulong)uVar193 * lVar192;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = uVar182;
    lVar194 = SUB168(auVar29 * auVar117,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar29 * auVar117,8);
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_70);
          if (cVar185 != '\0') {
            this[0x7b] = (Config)0x1;
            if (local_70 != 0) goto LAB_00100d6a;
            goto LAB_00100d97;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar118._8_8_ = 0;
        auVar118._0_8_ = uVar182;
        lVar194 = SUB168(auVar30 * auVar118,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar30 * auVar118,8);
      } while ((uVar187 != 0) &&
              (auVar31._8_8_ = 0, auVar31._0_8_ = (ulong)uVar187 * lVar192, auVar119._8_8_ = 0,
              auVar119._0_8_ = uVar182, auVar32._8_8_ = 0,
              auVar32._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar31 * auVar119,8)) * lVar192,
              auVar120._8_8_ = 0, auVar120._0_8_ = uVar182, uVar197 <= SUB164(auVar32 * auVar120,8))
              );
    }
  }
  this[0x7b] = (Config)0x0;
  if (local_70 != 0) {
LAB_00100d6a:
    lVar192 = local_70;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
    if (this[0x7b] != (Config)0x0) {
LAB_00100d97:
      (*_glad_glGetFloatv)(0x84ff,this + 0x7c);
      fVar3 = *(float *)(this + 0x7c);
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_68,
                 "rendering/textures/default_filters/anisotropic_filtering_level",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      iVar188 = Variant::operator_cast_to_int((Variant *)local_58);
      fVar200 = (float)(1 << ((byte)iVar188 & 0x1f));
      cVar185 = Variant::needs_deinit[local_58[0]];
      if (fVar3 <= fVar200) {
        fVar200 = fVar3;
      }
      *(float *)(this + 0x7c) = fVar200;
      if (cVar185 != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
  }
  (*_glad_glGetIntegerv)(0x8d57,this + 0x80);
  this[0x84] = (Config)0x1;
  local_70 = 0;
  local_68 = "GL_EXT_multiview_texture_multisample";
  local_60 = (long *)0x24;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar33._8_8_ = 0;
    auVar33._0_8_ = (ulong)uVar193 * lVar192;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = uVar182;
    lVar194 = SUB168(auVar33 * auVar121,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      iVar188 = SUB164(auVar33 * auVar121,8);
      uVar197 = 0;
      do {
        if (uVar187 == uVar193) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_00100faf;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar122._8_8_ = 0;
        auVar122._0_8_ = uVar182;
        lVar194 = SUB168(auVar34 * auVar122,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar34 * auVar122,8);
      } while ((uVar187 != 0) &&
              (auVar35._8_8_ = 0, auVar35._0_8_ = (ulong)uVar187 * lVar192, auVar123._8_8_ = 0,
              auVar123._0_8_ = uVar182, auVar36._8_8_ = 0,
              auVar36._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar35 * auVar123,8)) * lVar192,
              auVar124._8_8_ = 0, auVar124._0_8_ = uVar182, uVar197 <= SUB164(auVar36 * auVar124,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_00100faf:
  lVar192 = local_70;
  this[0x85] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  local_80 = 0;
  local_68 = "OCULUS_multiview";
  local_60 = (long *)&DAT_00000010;
  String::parse_latin1(local_d0);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar37._8_8_ = 0;
    auVar37._0_8_ = (ulong)uVar193 * lVar192;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = uVar182;
    lVar194 = SUB168(auVar37 * auVar125,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      iVar188 = SUB164(auVar37 * auVar125,8);
      uVar197 = 0;
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)local_d0);
          if (cVar185 != '\0') {
            this[0x88] = (Config)0x1;
            goto LAB_00101299;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar126._8_8_ = 0;
        auVar126._0_8_ = uVar182;
        lVar194 = SUB168(auVar38 * auVar126,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar38 * auVar126,8);
      } while ((uVar187 != 0) &&
              (auVar39._8_8_ = 0, auVar39._0_8_ = (ulong)uVar187 * lVar192, auVar127._8_8_ = 0,
              auVar127._0_8_ = uVar182, auVar40._8_8_ = 0,
              auVar40._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar39 * auVar127,8)) * lVar192,
              auVar128._8_8_ = 0, auVar128._0_8_ = uVar182, uVar197 <= SUB164(auVar40 * auVar128,8))
              );
    }
  }
  local_78 = 0;
  local_68 = "GL_OVR_multiview2";
  local_60 = (long *)0x11;
  String::parse_latin1((StrRange *)&local_78);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar41._8_8_ = 0;
    auVar41._0_8_ = (ulong)uVar193 * lVar192;
    auVar129._8_8_ = 0;
    auVar129._0_8_ = uVar182;
    lVar194 = SUB168(auVar41 * auVar129,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      iVar188 = SUB164(auVar41 * auVar129,8);
      uVar197 = 0;
      do {
        if (uVar187 == uVar193) {
          cVar185 = String::operator==((String *)
                                       (*(long *)(this + 0x48) +
                                       (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4) * 8),
                                       (String *)&local_78);
          if (cVar185 != '\0') {
            this[0x88] = (Config)0x1;
            goto LAB_00101bcc;
          }
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar130._8_8_ = 0;
        auVar130._0_8_ = uVar182;
        lVar194 = SUB168(auVar42 * auVar130,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar42 * auVar130,8);
      } while ((uVar187 != 0) &&
              (auVar43._8_8_ = 0, auVar43._0_8_ = (ulong)uVar187 * lVar192, auVar131._8_8_ = 0,
              auVar131._0_8_ = uVar182, auVar44._8_8_ = 0,
              auVar44._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar43 * auVar131,8)) * lVar192,
              auVar132._8_8_ = 0, auVar132._0_8_ = uVar182, uVar197 <= SUB164(auVar44 * auVar132,8))
              );
    }
  }
  local_70 = 0;
  local_68 = "GL_OVR_multiview";
  local_60 = (long *)&DAT_00000010;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(this + 0x48) != 0) && (*(int *)(this + 0x6c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    lVar192 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    uVar187 = String::hash();
    uVar182 = CONCAT44(0,uVar4);
    lVar198 = *(long *)(this + 0x60);
    uVar193 = 1;
    if (uVar187 != 0) {
      uVar193 = uVar187;
    }
    auVar77._8_8_ = 0;
    auVar77._0_8_ = (ulong)uVar193 * lVar192;
    auVar165._8_8_ = 0;
    auVar165._0_8_ = uVar182;
    lVar194 = SUB168(auVar77 * auVar165,8);
    uVar187 = *(uint *)(lVar198 + lVar194 * 4);
    if (uVar187 != 0) {
      uVar197 = 0;
      iVar188 = SUB164(auVar77 * auVar165,8);
      do {
        if (uVar193 == uVar187) {
          CVar186 = (Config)String::operator==((String *)
                                               (*(long *)(this + 0x48) +
                                               (ulong)*(uint *)(*(long *)(this + 0x50) + lVar194 * 4
                                                               ) * 8),(String *)&local_70);
          if (CVar186 != (Config)0x0) goto LAB_00101b9b;
          lVar198 = *(long *)(this + 0x60);
        }
        uVar197 = uVar197 + 1;
        auVar78._8_8_ = 0;
        auVar78._0_8_ = (ulong)(iVar188 + 1) * lVar192;
        auVar166._8_8_ = 0;
        auVar166._0_8_ = uVar182;
        lVar194 = SUB168(auVar78 * auVar166,8);
        uVar187 = *(uint *)(lVar198 + lVar194 * 4);
        iVar188 = SUB164(auVar78 * auVar166,8);
      } while ((uVar187 != 0) &&
              (auVar79._8_8_ = 0, auVar79._0_8_ = (ulong)uVar187 * lVar192, auVar167._8_8_ = 0,
              auVar167._0_8_ = uVar182, auVar80._8_8_ = 0,
              auVar80._0_8_ = (ulong)((uVar4 + iVar188) - SUB164(auVar79 * auVar167,8)) * lVar192,
              auVar168._8_8_ = 0, auVar168._0_8_ = uVar182, uVar197 <= SUB164(auVar80 * auVar168,8))
              );
    }
  }
  CVar186 = (Config)0x0;
LAB_00101b9b:
  lVar192 = local_70;
  this[0x88] = CVar186;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
LAB_00101bcc:
  uVar182 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(uVar182 + -0x10),false);
    }
  }
LAB_00101299:
  lVar192 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/shading/overrides/force_vertex_shading",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  CVar186 = (Config)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0x7a] = CVar186;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/textures/default_filters/use_nearest_mipmap_filter",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  CVar186 = (Config)Variant::operator_cast_to_bool((Variant *)local_58);
  *this = CVar186;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_68,"rendering/driver/depth_prepass/enable",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  CVar186 = (Config)Variant::operator_cast_to_bool((Variant *)local_58);
  this[1] = CVar186;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  iVar188 = (int)(StrRange *)&local_78;
  if (this[1] != (Config)0x0) {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"rendering/driver/depth_prepass/disable_for_vendors",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    String::split((char *)&local_68,SUB81((StrRange *)&local_88,0),0x1039c2);
    iVar189 = (*_glad_glGetString)(0x1f01);
    String::utf8((char *)local_d0,iVar189);
    lVar198 = local_80;
    for (lVar192 = 0; (local_80 = lVar198, local_60 != (long *)0x0 && (lVar192 < local_60[-1]));
        lVar192 = lVar192 + 1) {
      String::strip_edges(SUB81((StrRange *)&local_78,0),
                          (bool)((char)local_60 + (char)lVar192 * '\b'));
      local_70 = 0;
      cVar185 = String::operator==((String *)&local_78,(String *)&local_70);
      lVar198 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar198 + -0x10),false);
        }
      }
      if ((cVar185 == '\0') && (iVar189 = String::findn((String *)local_d0,iVar188), iVar189 != -1))
      {
        this[1] = (Config)0x0;
      }
      uVar182 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(uVar182 + -0x10),false);
        }
      }
      lVar198 = local_80;
    }
    if (lVar198 != 0) {
      LOCK();
      plVar1 = (long *)(lVar198 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar198 + -0x10),false);
      }
    }
    plVar1 = local_60;
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar196 = local_60 + -2;
      *plVar196 = *plVar196 + -1;
      UNLOCK();
      if (*plVar196 == 0) {
        if (local_60 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar181 = (code *)invalidInstructionException();
          (*pcVar181)();
        }
        lVar192 = local_60[-1];
        lVar198 = 0;
        local_60 = (long *)0x0;
        plVar196 = plVar1;
        if (lVar192 != 0) {
          do {
            if (*plVar196 != 0) {
              LOCK();
              plVar2 = (long *)(*plVar196 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar194 = *plVar196;
                *plVar196 = 0;
                Memory::free_static((void *)(lVar194 + -0x10),false);
              }
            }
            lVar198 = lVar198 + 1;
            plVar196 = plVar196 + 1;
          } while (lVar192 != lVar198);
        }
        Memory::free_static(plVar1 + -2,false);
      }
    }
    lVar192 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/limits/opengl/max_renderable_elements",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  lVar192 = Variant::operator_cast_to_long((Variant *)local_58);
  *(long *)(this + 0x28) = lVar192;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/limits/opengl/max_renderable_lights",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  lVar192 = Variant::operator_cast_to_long((Variant *)local_58);
  *(long *)(this + 0x30) = lVar192;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"rendering/limits/opengl/max_lights_per_object",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  lVar192 = Variant::operator_cast_to_long((Variant *)local_58);
  *(long *)(this + 0x38) = lVar192;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  iVar189 = (*_glad_glGetString)(0x1f01);
  String::utf8((char *)local_d0,iVar189);
  iVar189 = (int)(String *)&local_68;
  String::left(iVar189);
  cVar185 = String::operator==((String *)&local_68,"Adreno (TM) 3");
  pcVar191 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar191 + -0x10,false);
    }
  }
  if (cVar185 == '\0') {
    cVar185 = String::operator==((String *)local_d0,"PowerVR Rogue GE8320");
    if (cVar185 != '\0') {
      this[0x8c] = (Config)0x1;
    }
  }
  else {
    *(undefined2 *)(this + 0x8a) = 0x101;
    iVar190 = (*_glad_glGetString)(0x1f02);
    String::utf8((char *)&local_78,iVar190);
    String::get_slice((char *)&local_68,iVar188);
    String::get_slice((char *)&local_70,iVar189);
    pcVar191 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar191 + -0x10,false);
      }
    }
    cVar185 = String::is_valid_float();
    if ((cVar185 != '\0') && (dVar199 = (double)String::to_float(), __LC42 <= dVar199)) {
      this[0x8b] = (Config)0x0;
    }
    lVar192 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar192 + -0x10),false);
      }
    }
    uVar182 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(uVar182 + -0x10),false);
      }
    }
  }
  lVar192 = OS::get_singleton();
  local_68 = (char *)0x0;
  if (*(long *)(lVar192 + 0x60) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar192 + 0x60));
  }
  cVar185 = String::operator==((String *)&local_68,"opengl3_angle");
  pcVar191 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar191 + -0x10),false);
    }
  }
  lVar192 = local_80;
  if (cVar185 != '\0') {
    this[0x8d] = (Config)0x0;
  }
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar192 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00102f6c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_00102f6c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_001032e9;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC0 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_001032e9;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_001032e9:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
}



/* GLES3::Config::Config() [clone .cold] */

void __thiscall GLES3::Config::Config(Config *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


