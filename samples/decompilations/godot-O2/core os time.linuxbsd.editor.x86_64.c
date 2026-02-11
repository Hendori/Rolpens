
/* Time::get_unix_time_from_system() const */

void Time::get_unix_time_from_system(void)

{
  long *plVar1;
  
  plVar1 = (long *)OS::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010001e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1f0))(plVar1);
  return;
}



/* Time::get_ticks_usec() const */

void Time::get_ticks_usec(void)

{
  long *plVar1;
  
  plVar1 = (long *)OS::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010003e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x208))(plVar1);
  return;
}



/* Time::get_ticks_msec() const */

void Time::get_ticks_msec(void)

{
  OS::get_singleton();
  OS::get_ticks_msec();
  return;
}



/* Time::~Time() */

void __thiscall Time::~Time(Time *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117790;
  singleton = 0;
  Object::~Object((Object *)this);
  return;
}



/* Time::~Time() */

void __thiscall Time::~Time(Time *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117790;
  singleton = 0;
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* Time::get_time_dict_from_unix_time(long) const */

long Time::get_time_dict_from_unix_time(long param_1)

{
  char cVar1;
  Variant *pVVar2;
  ulong uVar3;
  long in_RDX;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = in_RDX % 0x15180;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 0x15180;
  }
  uVar4 = (uVar3 & 0xffffffff) / 0x3c;
  Dictionary::Dictionary((Dictionary *)param_1);
  Variant::Variant((Variant *)local_58,(uchar)(uVar4 / 0x3c));
  Variant::Variant((Variant *)local_78,"hour");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(char)uVar4 + (char)(uVar4 / 0x3c) * -0x3c);
  Variant::Variant((Variant *)local_78,"minute");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,(char)uVar3 + (char)uVar4 * -0x3c);
  Variant::Variant((Variant *)local_78,"second");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)param_1);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_time_dict_from_system(bool) const */

Dictionary * Time::get_time_dict_from_system(bool param_1)

{
  char cVar1;
  long *plVar2;
  Variant *pVVar3;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  Dictionary *this;
  long in_FS_OFFSET;
  undefined1 auStack_88 [14];
  uchar local_7a;
  uchar local_79;
  uchar local_78;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  this = (Dictionary *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  (**(code **)(*plVar2 + 0x1e0))(auStack_88,plVar2,in_DL);
  Dictionary::Dictionary(this);
  Variant::Variant((Variant *)local_48,local_7a);
  Variant::Variant((Variant *)local_68,"hour");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_79);
  Variant::Variant((Variant *)local_68,"minute");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_78);
  Variant::Variant((Variant *)local_68,"second");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* Time::get_date_dict_from_system(bool) const */

Dictionary * Time::get_date_dict_from_system(bool param_1)

{
  char cVar1;
  long *plVar2;
  Variant *pVVar3;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  Dictionary *this;
  long in_FS_OFFSET;
  long local_88;
  uchar local_80;
  uchar local_7c;
  uchar local_7b;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  this = (Dictionary *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  (**(code **)(*plVar2 + 0x1e0))(&local_88,plVar2,in_DL);
  Dictionary::Dictionary(this);
  Variant::Variant((Variant *)local_48,local_88);
  Variant::Variant((Variant *)local_68,"year");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_80);
  Variant::Variant((Variant *)local_68,"month");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_7c);
  Variant::Variant((Variant *)local_68,"day");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_7b);
  Variant::Variant((Variant *)local_68,"weekday");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Time::get_date_dict_from_unix_time(long) const */

long Time::get_date_dict_from_unix_time(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  ulong uVar6;
  Variant *pVVar7;
  long lVar8;
  long in_RDX;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  double dVar14;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  dVar14 = (double)in_RDX / __LC8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((double)((ulong)dVar14 & _LC12) < _LC9) {
    dVar14 = (double)((ulong)((double)(long)dVar14 -
                             (double)(-(ulong)(dVar14 < (double)(long)dVar14) & _LC11)) |
                     ~_LC12 & (ulong)dVar14);
  }
  uVar10 = 0x7b2;
  lVar8 = (long)dVar14;
LAB_00100b1a:
  uVar13 = (ulong)((uint)uVar10 & 3);
  if ((uVar10 & 3) == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10 >> 2;
    if ((uVar10 == ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                   (uVar10 >> 2) / 0x19) * 0x14) && (uVar13 = uVar10 % 400, uVar13 != 0)) {
      if (0x16c < lVar8) goto LAB_00100b0e;
      uVar13 = 0;
joined_r0x00100b60:
      for (; lVar8 < 0; lVar8 = lVar8 + lVar5) {
        uVar10 = uVar10 - 1;
        lVar5 = 0x16d;
        uVar13 = (ulong)((uint)uVar10 & 3);
        if ((uVar10 & 3) == 0) {
          lVar5 = 0x16e;
          lVar9 = uVar10 * -0x70a3d70a3d70a3d7;
          if ((lVar9 + 0x51eb851eb851eb8U >> 2 | lVar9 << 0x3e) < 0x28f5c28f5c28f5d) {
            lVar5 = (ulong)((lVar9 + 0x51eb851eb851eb0U >> 4 | lVar9 << 0x3c) < 0xa3d70a3d70a3d7) +
                    0x16d;
          }
        }
      }
      lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar10),8) + uVar10;
      uVar6 = ((lVar5 >> 8) - ((long)uVar10 >> 0x3f)) * 400;
      if (uVar13 == 0) {
        lVar5 = (lVar5 >> 6) - ((long)uVar10 >> 0x3f);
        uVar4 = 0;
        uVar11 = 0;
        uVar12 = 0;
        if (uVar10 + lVar5 * -100 != 0) {
          do {
            if (lVar8 < (long)(ulong)(byte)(&DAT_00117dcc)[(int)uVar4]) goto LAB_00100c70;
            uVar11 = uVar11 + 1;
            lVar8 = lVar8 - (ulong)(byte)(&DAT_00117dcc)[(int)uVar4];
            uVar4 = uVar11 & 0xff;
            uVar12 = uVar11;
          } while (uVar10 != lVar5 * 100);
        }
        while( true ) {
          if (uVar10 == uVar6) {
            bVar1 = (&DAT_00117dcc)[(int)uVar4];
          }
          else {
            bVar1 = (&MONTH_DAYS_TABLE)[(int)uVar4];
          }
          if (lVar8 < (long)(ulong)bVar1) break;
          uVar12 = uVar12 + 1;
          lVar8 = lVar8 - (ulong)(byte)(&MONTH_DAYS_TABLE)
                                       [(long)(int)uVar4 + (ulong)(uVar10 == uVar6) * 0xc];
          uVar4 = uVar12 & 0xff;
        }
      }
      else {
        uVar4 = 0;
        uVar11 = 0;
        for (; lVar5 = (long)(int)uVar4, (long)(ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5] <= lVar8;
            lVar8 = lVar8 - (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5]) {
          uVar11 = uVar11 + 1;
          uVar4 = uVar11 & 0xff;
        }
      }
LAB_00100c70:
      Dictionary::Dictionary((Dictionary *)param_1);
      Variant::Variant((Variant *)local_58,uVar10);
      Variant::Variant((Variant *)local_78,"year");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)uVar4 + '\x01');
      Variant::Variant((Variant *)local_78,"month");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)lVar8 + '\x01');
      Variant::Variant((Variant *)local_78,"day");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      lVar8 = ((long)dVar14 + 4) % 7;
      if (lVar8 < 0) {
        lVar8 = lVar8 + 7;
      }
      Variant::Variant((Variant *)local_58,lVar8);
      Variant::Variant((Variant *)local_78,"weekday");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar8 < 0x16e) goto joined_r0x00100b60;
    lVar5 = 0x16e;
  }
  else {
    if (lVar8 < 0x16d) goto joined_r0x00100b60;
LAB_00100b0e:
    lVar5 = 0x16d;
  }
  lVar8 = lVar8 - lVar5;
  uVar10 = uVar10 + 1;
  goto LAB_00100b1a;
}



/* Time::get_datetime_dict_from_system(bool) const */

Dictionary * Time::get_datetime_dict_from_system(bool param_1)

{
  char cVar1;
  long *plVar2;
  Variant *pVVar3;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  Dictionary *this;
  long in_FS_OFFSET;
  long local_88;
  uchar local_80;
  uchar local_7c;
  uchar local_7b;
  uchar local_7a;
  uchar local_79;
  uchar local_78;
  bool local_77;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  this = (Dictionary *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  (**(code **)(*plVar2 + 0x1e0))(&local_88,plVar2,in_DL);
  Dictionary::Dictionary(this);
  Variant::Variant((Variant *)local_48,local_88);
  Variant::Variant((Variant *)local_68,"year");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_80);
  Variant::Variant((Variant *)local_68,"month");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_7c);
  Variant::Variant((Variant *)local_68,"day");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_7b);
  Variant::Variant((Variant *)local_68,"weekday");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_7a);
  Variant::Variant((Variant *)local_68,"hour");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_79);
  Variant::Variant((Variant *)local_68,"minute");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_78);
  Variant::Variant((Variant *)local_68,"second");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,local_77);
  Variant::Variant((Variant *)local_68,"dst");
  pVVar3 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar3 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar3 = 0;
    *(int *)pVVar3 = local_48[0];
    *(undefined8 *)(pVVar3 + 8) = local_40;
    *(undefined8 *)(pVVar3 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Time::get_datetime_dict_from_unix_time(long) const */

long Time::get_datetime_dict_from_unix_time(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uchar uVar4;
  long lVar5;
  Variant *pVVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long in_RDX;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  double dVar16;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  dVar16 = (double)in_RDX / __LC8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = in_RDX % 0x15180;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 0x15180;
  }
  uVar7 = uVar10 & 0xffffffff;
  uVar4 = (uchar)(uVar7 / 0xe10);
  if ((double)((ulong)dVar16 & _LC12) < _LC9) {
    dVar16 = (double)((ulong)((double)(long)dVar16 -
                             (double)(-(ulong)(dVar16 < (double)(long)dVar16) & _LC11)) |
                     ~_LC12 & (ulong)dVar16);
  }
  uVar15 = 0x7b2;
  lVar13 = (long)dVar16;
LAB_00101832:
  uVar8 = (ulong)((uint)uVar15 & 3);
  if ((uVar15 & 3) == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15 >> 2;
    if ((uVar15 == ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                   (uVar15 >> 2) / 0x19) * 0x14) && (uVar8 = uVar15 % 400, uVar8 != 0)) {
      if (0x16c < lVar13) goto LAB_00101826;
      uVar8 = 0;
joined_r0x00101878:
      for (; lVar13 < 0; lVar13 = lVar13 + lVar5) {
        uVar15 = uVar15 - 1;
        lVar5 = 0x16d;
        uVar8 = (ulong)((uint)uVar15 & 3);
        if ((uVar15 & 3) == 0) {
          lVar5 = 0x16e;
          lVar11 = uVar15 * -0x70a3d70a3d70a3d7;
          if ((lVar11 + 0x51eb851eb851eb8U >> 2 | lVar11 << 0x3e) < 0x28f5c28f5c28f5d) {
            lVar5 = (ulong)((lVar11 + 0x51eb851eb851eb0U >> 4 | lVar11 << 0x3c) < 0xa3d70a3d70a3d7)
                    + 0x16d;
          }
        }
      }
      lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar15),8) + uVar15;
      uVar12 = ((lVar5 >> 8) - ((long)uVar15 >> 0x3f)) * 400;
      if (uVar8 == 0) {
        uVar14 = 0;
        lVar5 = (lVar5 >> 6) - ((long)uVar15 >> 0x3f);
        uVar9 = 0;
        if (uVar15 + lVar5 * -100 != 0) {
          do {
            if (lVar13 < (long)(ulong)(byte)(&DAT_00117dcc)[(int)uVar14]) goto LAB_00101990;
            uVar9 = uVar9 + 1;
            lVar13 = lVar13 - (ulong)(byte)(&DAT_00117dcc)[(int)uVar14];
            uVar14 = uVar9 & 0xff;
          } while (uVar15 != lVar5 * 100);
        }
        while( true ) {
          if (uVar15 == uVar12) {
            bVar1 = (&DAT_00117dcc)[(int)uVar14];
          }
          else {
            bVar1 = (&MONTH_DAYS_TABLE)[(int)uVar14];
          }
          if (lVar13 < (long)(ulong)bVar1) break;
          lVar5 = (long)(int)uVar14;
          uVar9 = uVar9 + 1;
          uVar14 = uVar9 & 0xff;
          lVar13 = lVar13 - (ulong)(byte)(&MONTH_DAYS_TABLE)
                                         [lVar5 + (ulong)(uVar15 == uVar12) * 0xc];
        }
      }
      else {
        uVar14 = 0;
        uVar9 = 0;
        for (; lVar5 = (long)(int)uVar14, (long)(ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5] <= lVar13;
            lVar13 = lVar13 - (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5]) {
          uVar9 = uVar9 + 1;
          uVar14 = uVar9 & 0xff;
        }
      }
LAB_00101990:
      Dictionary::Dictionary((Dictionary *)param_1);
      Variant::Variant((Variant *)local_58,uVar15);
      Variant::Variant((Variant *)local_78,"year");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)uVar14 + '\x01');
      Variant::Variant((Variant *)local_78,"month");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)lVar13 + '\x01');
      Variant::Variant((Variant *)local_78,"day");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      lVar13 = ((long)dVar16 + 4) % 7;
      if (lVar13 < 0) {
        lVar13 = lVar13 + 7;
      }
      Variant::Variant((Variant *)local_58,lVar13);
      Variant::Variant((Variant *)local_78,"weekday");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,uVar4);
      Variant::Variant((Variant *)local_78,"hour");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)(uVar7 / 0x3c) + uVar4 * -0x3c);
      Variant::Variant((Variant *)local_78,"minute");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(char)uVar10 + (char)(uVar7 / 0x3c) * -0x3c);
      Variant::Variant((Variant *)local_78,"second");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      if (pVVar6 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = local_58[0];
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      else {
        Variant::_clear_internal();
        cVar2 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_1;
    }
    if (lVar13 < 0x16e) goto joined_r0x00101878;
    lVar5 = 0x16e;
  }
  else {
    if (lVar13 < 0x16d) goto joined_r0x00101878;
LAB_00101826:
    lVar5 = 0x16d;
  }
  lVar13 = lVar13 - lVar5;
  uVar15 = uVar15 + 1;
  goto LAB_00101832;
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



/* Time::get_time_zone_from_system() const */

Time * __thiscall Time::get_time_zone_from_system(Time *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  int local_78 [2];
  long local_70;
  int local_68 [8];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)OS::get_singleton();
  (**(code **)(*plVar3 + 0x1e8))(local_78,plVar3);
  Dictionary::Dictionary((Dictionary *)this);
  Variant::Variant((Variant *)local_48,local_78[0]);
  Variant::Variant((Variant *)local_68,"bias");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar4 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_48[0];
    *(undefined8 *)(pVVar4 + 8) = local_40;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_48[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_48,(String *)&local_70);
  Variant::Variant((Variant *)local_68,"name");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)this);
  if (pVVar4 != (Variant *)local_48) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_48[0];
    *(undefined8 *)(pVVar4 + 8) = local_40;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_38;
    local_48[0] = 0;
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_singleton() */

undefined8 Time::get_singleton(void)

{
  return singleton;
}



/* Time::Time() */

undefined ** __thiscall Time::Time(Time *this)

{
  bool bVar1;
  
  Object::Object((Object *)this);
  bVar1 = singleton == (Time *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117790;
  if (bVar1) {
    singleton = this;
    return &PTR__initialize_classv_00117790;
  }
  _err_print_error(&_LC0,"core/os/time.cpp",0x1bc,"Condition \"singleton\" is true.",
                   "Singleton for Time already exists.",0);
  return (undefined **)0x0;
}



/* Time::get_unix_time_from_datetime_dict(Dictionary const&) const */

long __thiscall Time::get_unix_time_from_datetime_dict(Time *this,Dictionary *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  Variant *pVVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_e8;
  int local_e0;
  CowData<char32_t> local_c0 [8];
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  CowData<char32_t> local_a0 [8];
  String local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Dictionary::is_empty();
  if (cVar1 == '\0') {
    uVar13 = 0x7b2;
    Variant::Variant((Variant *)local_78,"year");
    cVar1 = Dictionary::has((Variant *)param_1);
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"year");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      uVar13 = Variant::operator_cast_to_long(pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar12 = 1;
    Variant::Variant((Variant *)local_78,"month");
    cVar1 = Dictionary::has((Variant *)param_1);
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"month");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      iVar12 = Variant::operator_cast_to_int(pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"day");
    cVar1 = Dictionary::has((Variant *)param_1);
    local_e0 = 1;
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"day");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      local_e0 = Variant::operator_cast_to_int(pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar2 = 0;
    Variant::Variant((Variant *)local_78,"hour");
    cVar1 = Dictionary::has((Variant *)param_1);
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"hour");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      iVar2 = Variant::operator_cast_to_int(pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"minute");
    cVar1 = Dictionary::has((Variant *)param_1);
    local_e8 = 0;
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"minute");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      local_e8 = Variant::operator_cast_to_int(pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"second");
    cVar1 = Dictionary::has((Variant *)param_1);
    lVar4 = 0;
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_58,"second");
      pVVar5 = (Variant *)Dictionary::operator[]((Variant *)param_1);
      iVar9 = Variant::operator_cast_to_int(pVVar5);
      lVar4 = (long)iVar9;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
        lVar4 = (long)iVar9;
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
      lVar4 = (long)(int)lVar4;
    }
    if (iVar12 == 0) {
      local_90 = 0;
      local_80 = 0x51;
      local_88 = ", months are 1-indexed and cannot be 0. See the Time.Month enum for valid values."
      ;
      String::parse_latin1((StrRange *)&local_90);
      itos((long)local_a0);
      operator+((char *)local_98,(String *)"Invalid month value of: ");
      String::operator+((String *)&local_88,local_98);
      _err_print_error("get_unix_time_from_datetime_dict","core/os/time.cpp",0x125,
                       "Condition \"month == 0\" is true. Returning: 0",(String *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref(local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      lVar4 = 0;
    }
    else {
      if (iVar12 < 0) {
        local_90 = 0;
        String::parse_latin1((String *)&local_90,".");
        itos((long)local_a0);
        operator+((char *)local_98,(String *)"Invalid month value of: ");
        String::operator+((String *)&local_88,local_98);
        pcVar7 = "Condition \"month < 0\" is true. Returning: 0";
      }
      else if (iVar12 < 0xd) {
        if (iVar2 < 0x18) {
          if (iVar2 < 0) {
            local_90 = 0;
            String::parse_latin1((String *)&local_90,".");
            itos((long)local_a0);
            operator+((char *)local_98,(String *)"Invalid hour value of: ");
            String::operator+((String *)&local_88,local_98);
            pcVar7 = "Condition \"hour < 0\" is true. Returning: 0";
          }
          else if (local_e8 < 0x3c) {
            if (local_e8 < 0) {
              local_90 = 0;
              String::parse_latin1((String *)&local_90,".");
              itos((long)local_a0);
              operator+((char *)local_98,(String *)"Invalid minute value of: ");
              String::operator+((String *)&local_88,local_98);
              pcVar7 = "Condition \"minute < 0\" is true. Returning: 0";
            }
            else if ((int)lVar4 < 0x3c) {
              if ((int)lVar4 < 0) {
                local_90 = 0;
                String::parse_latin1((String *)&local_90,".");
                itos((long)local_a0);
                operator+((char *)local_98,(String *)"Invalid second value of: ");
                String::operator+((String *)&local_88,local_98);
                pcVar7 = "Condition \"second < 0\" is true. Returning: 0";
              }
              else if (local_e0 == 0) {
                local_90 = 0;
                String::parse_latin1((String *)&local_90,", days are 1-indexed and cannot be 0.");
                itos((long)local_a0);
                operator+((char *)local_98,(String *)"Invalid day value of: ");
                String::operator+((String *)&local_88,local_98);
                pcVar7 = "Condition \"day == 0\" is true. Returning: 0";
              }
              else {
                if (-1 < local_e0) {
                  uVar3 = 0;
                  if ((uVar13 & 3) == 0) {
                    uVar3 = 1;
                    lVar6 = uVar13 * -0x70a3d70a3d70a3d7;
                    if ((lVar6 + 0x51eb851eb851eb8U >> 2 | lVar6 << 0x3e) < 0x28f5c28f5c28f5d) {
                      uVar3 = (ulong)((lVar6 + 0x51eb851eb851eb0U >> 4 | lVar6 << 0x3c) <
                                     0xa3d70a3d70a3d7);
                    }
                  }
                  iVar12 = iVar12 + -1;
                  if ((int)(uint)(byte)(&MONTH_DAYS_TABLE)[(long)iVar12 + uVar3 * 0xc] < local_e0) {
                    local_90 = 0;
                    String::parse_latin1((String *)&local_90,".");
                    itos((long)local_a0);
                    local_b0 = 0;
                    String::parse_latin1
                              ((String *)&local_b0,
                               " which is larger than the maximum for this month, ");
                    itos((long)local_c0);
                    operator+((char *)local_b8,(String *)"Invalid day value of: ");
                    String::operator+(local_a8,(String *)local_b8);
                    String::operator+(local_98,local_a8);
                    String::operator+((String *)&local_88,local_98);
                    _err_print_error("get_unix_time_from_datetime_dict","core/os/time.cpp",0x125,
                                     "Condition \"day > days_in_this_month\" is true. Returning: 0",
                                     (String *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
                    CowData<char32_t>::_unref(local_b8);
                    CowData<char32_t>::_unref(local_c0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref(local_a0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    lVar4 = 0;
                  }
                  else {
                    lVar6 = (long)(local_e0 + -1);
                    if (iVar12 != 0) {
                      iVar9 = 0;
                      do {
                        uVar3 = 0;
                        if (((uVar13 & 3) == 0) &&
                           (uVar3 = 1,
                           uVar13 == (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                                                     SEXT816((long)uVar13),8) + uVar13) >> 6) -
                                     ((long)uVar13 >> 0x3f)) * 100)) {
                          uVar3 = (ulong)((uVar13 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                                          uVar13 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
                        }
                        lVar8 = (long)iVar9;
                        iVar9 = iVar9 + 1;
                        lVar6 = lVar6 + (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar8 + uVar3 * 0xc];
                      } while (iVar9 != iVar12);
                    }
                    if ((long)uVar13 < 0x7b2) {
                      uVar3 = 0x7b1;
                      do {
                        lVar8 = 0x16d;
                        if ((uVar3 & 3) == 0) {
                          lVar8 = 0x16e;
                          lVar11 = uVar3 * -0x70a3d70a3d70a3d7;
                          if ((lVar11 + 0x51eb851eb851eb8U >> 2 | lVar11 << 0x3e) <
                              0x28f5c28f5c28f5d) {
                            lVar8 = (ulong)((lVar11 + 0x51eb851eb851eb0U >> 4 | lVar11 << 0x3c) <
                                           0xa3d70a3d70a3d7) + 0x16d;
                          }
                        }
                        uVar3 = uVar3 - 1;
                        lVar6 = lVar6 - lVar8;
                      } while (uVar13 - 1 != uVar3);
                    }
                    else if (uVar13 != 0x7b2) {
                      uVar3 = 0x7b2;
                      do {
                        lVar8 = 0x16d;
                        if ((uVar3 & 3) == 0) {
                          lVar8 = 0x16e;
                          uVar10 = uVar3 * -0x70a3d70a3d70a3d7;
                          if ((uVar10 >> 2 | uVar10 << 0x3e) < 0x28f5c28f5c28f5d) {
                            lVar8 = (ulong)((uVar10 >> 4 | uVar10 << 0x3c) < 0xa3d70a3d70a3d8) +
                                    0x16d;
                          }
                        }
                        uVar3 = uVar3 + 1;
                        lVar6 = lVar6 + lVar8;
                      } while (uVar13 != uVar3);
                    }
                    lVar4 = lVar6 * 0x15180 + (long)(iVar2 * 0xe10) + (long)(local_e8 * 0x3c) +
                            lVar4;
                  }
                  goto LAB_00102629;
                }
                local_90 = 0;
                String::parse_latin1((String *)&local_90,".");
                itos((long)local_a0);
                operator+((char *)local_98,(String *)"Invalid day value of: ");
                String::operator+((String *)&local_88,local_98);
                pcVar7 = "Condition \"day < 0\" is true. Returning: 0";
              }
            }
            else {
              local_90 = 0;
              String::parse_latin1((String *)&local_90," (leap seconds are not supported).");
              itos((long)local_a0);
              operator+((char *)local_98,(String *)"Invalid second value of: ");
              String::operator+((String *)&local_88,local_98);
              pcVar7 = "Condition \"second > 59\" is true. Returning: 0";
            }
          }
          else {
            local_90 = 0;
            String::parse_latin1((String *)&local_90,".");
            itos((long)local_a0);
            operator+((char *)local_98,(String *)"Invalid minute value of: ");
            String::operator+((String *)&local_88,local_98);
            pcVar7 = "Condition \"minute > 59\" is true. Returning: 0";
          }
        }
        else {
          local_90 = 0;
          String::parse_latin1((String *)&local_90,".");
          itos((long)local_a0);
          operator+((char *)local_98,(String *)"Invalid hour value of: ");
          String::operator+((String *)&local_88,local_98);
          pcVar7 = "Condition \"hour > 23\" is true. Returning: 0";
        }
      }
      else {
        local_90 = 0;
        String::parse_latin1((String *)&local_90,". See the Time.Month enum for valid values.");
        itos((long)local_a0);
        operator+((char *)local_98,(String *)"Invalid month value of: ");
        String::operator+((String *)&local_88,local_98);
        pcVar7 = "Condition \"month > 12\" is true. Returning: 0";
      }
      _err_print_error("get_unix_time_from_datetime_dict","core/os/time.cpp",0x125,pcVar7,
                       (CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref(local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      lVar4 = 0;
    }
  }
  else {
    _err_print_error("get_unix_time_from_datetime_dict","core/os/time.cpp",0x123,
                     "Condition \"p_datetime.is_empty()\" is true. Returning: 0",
                     "Invalid datetime Dictionary: Dictionary is empty",0,0);
    lVar4 = 0;
  }
LAB_00102629:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Time::get_date_string_from_unix_time(long) const */

long Time::get_date_string_from_unix_time(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long in_RDX;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long in_FS_OFFSET;
  double dVar12;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  dVar12 = (double)in_RDX / __LC8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((double)((ulong)dVar12 & _LC12) < _LC9) {
    dVar12 = (double)((ulong)((double)(long)dVar12 -
                             (double)(-(ulong)(dVar12 < (double)(long)dVar12) & _LC11)) |
                     ~_LC12 & (ulong)dVar12);
  }
  lVar10 = (long)dVar12;
  uVar9 = 0x7b2;
LAB_001031e2:
  uVar7 = (ulong)((uint)uVar9 & 3);
  if ((uVar9 & 3) == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar9 >> 2;
    if ((uVar9 == ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                  (uVar9 >> 2) / 0x19) * 0x14) && (uVar7 = uVar9 % 400, uVar7 != 0)) {
      if (0x16c < lVar10) goto LAB_001031d6;
      uVar7 = 0;
joined_r0x00103228:
      for (; lVar10 < 0; lVar10 = lVar10 + lVar5) {
        uVar9 = uVar9 - 1;
        lVar5 = 0x16d;
        uVar7 = (ulong)((uint)uVar9 & 3);
        if ((uVar9 & 3) == 0) {
          lVar5 = 0x16e;
          lVar8 = uVar9 * -0x70a3d70a3d70a3d7;
          if ((lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e) < 0x28f5c28f5c28f5d) {
            lVar5 = (ulong)((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7) +
                    0x16d;
          }
        }
      }
      lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar9),8) + uVar9;
      uVar6 = ((lVar5 >> 8) - ((long)uVar9 >> 0x3f)) * 400;
      if (uVar7 == 0) {
        uVar11 = 0;
        lVar5 = (lVar5 >> 6) - ((long)uVar9 >> 0x3f);
        uVar4 = 0;
        if (uVar9 + lVar5 * -100 != 0) {
          do {
            if (lVar10 < (long)(ulong)(byte)(&DAT_00117dcc)[(int)uVar11]) goto LAB_00103340;
            uVar4 = uVar4 + 1;
            lVar10 = lVar10 - (ulong)(byte)(&DAT_00117dcc)[(int)uVar11];
            uVar11 = uVar4 & 0xff;
          } while (uVar9 != lVar5 * 100);
        }
        while( true ) {
          if (uVar9 == uVar6) {
            bVar2 = (&DAT_00117dcc)[(int)uVar11];
          }
          else {
            bVar2 = (&MONTH_DAYS_TABLE)[(int)uVar11];
          }
          if (lVar10 < (long)(ulong)bVar2) break;
          lVar5 = (long)(int)uVar11;
          uVar4 = uVar4 + 1;
          uVar11 = uVar4 & 0xff;
          lVar10 = lVar10 - (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5 + (ulong)(uVar9 == uVar6) * 0xc];
        }
      }
      else {
        uVar11 = 0;
        uVar4 = 0;
        for (; lVar5 = (long)(int)uVar11, (long)(ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5] <= lVar10;
            lVar10 = lVar10 - (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar5]) {
          uVar4 = uVar4 + 1;
          uVar11 = uVar4 & 0xff;
        }
      }
LAB_00103340:
      local_50 = 0;
      local_48 = "%04d-%02d-%02d";
      local_40 = 0xe;
      String::parse_latin1((StrRange *)&local_50);
      vformat<long,unsigned_char,unsigned_char>
                ((String *)param_1,(long)&local_50,(uchar)uVar9,(char)uVar11 + '\x01');
      lVar10 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_1;
    }
    if (lVar10 < 0x16e) goto joined_r0x00103228;
    lVar5 = 0x16e;
  }
  else {
    if (lVar10 < 0x16d) goto joined_r0x00103228;
LAB_001031d6:
    lVar5 = 0x16d;
  }
  lVar10 = lVar10 - lVar5;
  uVar9 = uVar9 + 1;
  goto LAB_001031e2;
}



/* Time::get_date_string_from_system(bool) const */

String * Time::get_date_string_from_system(bool param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  uchar local_48 [8];
  uchar local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  (**(code **)(*plVar2 + 0x1e0))(local_48,plVar2,in_DL);
  local_60 = 0;
  local_58 = "%04d-%02d-%02d";
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  vformat<long,unsigned_char,unsigned_char>
            ((String *)CONCAT71(in_register_00000039,param_1),(long)&local_60,local_48[0],local_40);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar2 = (long *)(local_60 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_time_string_from_unix_time(long) const */

long Time::get_time_string_from_unix_time(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long in_RDX;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 0xe;
  uVar3 = in_RDX % 0x15180;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 0x15180;
  }
  local_48 = "%02d:%02d:%02d";
  String::parse_latin1((StrRange *)&local_50);
  uVar4 = (uVar3 & 0xffffffff) / 0x3c;
  vformat<unsigned_char,unsigned_char,unsigned_char>
            ((String *)param_1,(uchar)(StrRange *)&local_50,(uchar)(uVar4 / 0x3c),
             (char)((uVar3 & 0xffffffff) / 0x3c) + (char)(uVar4 / 0x3c) * -0x3c);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_time_string_from_system(bool) const */

String * Time::get_time_string_from_system(bool param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_48 [14];
  uchar local_3a;
  uchar local_39;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)OS::get_singleton();
  (**(code **)(*plVar2 + 0x1e0))(local_48,plVar2,in_DL);
  local_60 = 0;
  local_58 = "%02d:%02d:%02d";
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  vformat<unsigned_char,unsigned_char,unsigned_char>
            ((String *)CONCAT71(in_register_00000039,param_1),(uchar)(StrRange *)&local_60,local_3a,
             local_39);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar2 = (long *)(local_60 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT71(in_register_00000039,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_offset_string_from_offset_minutes(long) const */

long Time::get_offset_string_from_offset_minutes(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong in_RDX;
  long in_FS_OFFSET;
  bool bVar4;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if ((long)in_RDX < 0) {
    in_RDX = -in_RDX;
    local_40 = 1;
    local_48 = "-";
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    local_40 = 1;
    local_48 = "+";
    String::parse_latin1((StrRange *)&local_60);
  }
  local_50 = 0;
  plVar1 = (long *)(local_60 + -0x10);
  if (local_60 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001037fe;
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
      local_50 = local_60;
    }
  }
LAB_001037fe:
  local_58 = 0;
  local_48 = "%s%02d:%02d";
  local_40 = 0xb;
  String::parse_latin1((StrRange *)&local_58);
  vformat<String,long,long>(param_1,(StrRange *)&local_58,&local_50,in_RDX / 0x3c,in_RDX % 0x3c);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Time::get_datetime_string_from_system(bool, bool) const */

String * Time::get_datetime_string_from_system(bool param_1,bool param_2)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  char in_CL;
  undefined1 in_DL;
  undefined7 in_register_00000039;
  String *this;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  uchar local_58 [8];
  uchar local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  long local_40;
  
  this = (String *)CONCAT71(in_register_00000039,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)OS::get_singleton();
  (**(code **)(*plVar3 + 0x1e0))(local_58,plVar3,in_DL);
  local_70 = 0;
  local_68 = "%04d-%02d-%02d";
  local_60 = 0xe;
  String::parse_latin1((StrRange *)&local_70);
  vformat<long,unsigned_char,unsigned_char>(this,(long)&local_70,local_58[0],local_50);
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar3 = (long *)(local_70 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = *(long *)this;
  local_70 = 0;
  plVar3 = (long *)(lVar1 + -0x10);
  if (in_CL == '\0') {
    if (lVar1 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 == 0) goto LAB_00103b2e;
        LOCK();
        lVar4 = *plVar3;
        bVar5 = lVar1 == lVar4;
        if (bVar5) {
          *plVar3 = lVar1 + 1;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_70 = *(long *)this;
      }
    }
LAB_00103b2e:
    local_68 = "%sT%02d:%02d:%02d";
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String,unsigned_char,unsigned_char,unsigned_char>
              ((CowData<char32_t> *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70,local_4a,
               local_49,local_48);
    pcVar2 = local_68;
    if (*(char **)this == local_68) {
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_68 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          Memory::free_static(local_68 + -0x10,false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)this);
      *(char **)this = pcVar2;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    if (lVar1 != 0) {
      do {
        lVar1 = *plVar3;
        if (lVar1 == 0) goto LAB_00103a5d;
        LOCK();
        lVar4 = *plVar3;
        bVar5 = lVar1 == lVar4;
        if (bVar5) {
          *plVar3 = lVar1 + 1;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar5);
      if (lVar4 != -1) {
        local_70 = *(long *)this;
      }
    }
LAB_00103a5d:
    local_68 = "%s %02d:%02d:%02d";
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    vformat<String,unsigned_char,unsigned_char,unsigned_char>
              ((CowData<char32_t> *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70,local_4a,
               local_49,local_48);
    pcVar2 = local_68;
    if (*(char **)this != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)this);
      *(char **)this = pcVar2;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Time::get_datetime_string_from_unix_time(long, bool) const */

long Time::get_datetime_string_from_unix_time(long param_1,bool param_2)

{
  long *plVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  char in_CL;
  ulong uVar8;
  long lVar9;
  long in_RDX;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  double dVar19;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  dVar19 = (double)in_RDX / __LC8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = in_RDX % 0x15180;
  if ((long)uVar10 < 0) {
    uVar10 = uVar10 + 0x15180;
  }
  uVar8 = uVar10 & 0xffffffff;
  uVar16 = uVar8 / 0xe10;
  iVar15 = (int)uVar16;
  if ((double)((ulong)dVar19 & _LC12) < _LC9) {
    dVar19 = (double)((ulong)((double)(long)dVar19 -
                             (double)(-(ulong)(dVar19 < (double)(long)dVar19) & _LC11)) |
                     ~_LC12 & (ulong)dVar19);
  }
  lVar9 = (long)dVar19;
  uVar17 = 0x7b2;
LAB_00103d8a:
  uVar14 = (ulong)((uint)uVar17 & 3);
  if ((uVar17 & 3) == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17 >> 2;
    if ((uVar17 == ((SUB168(auVar3 * ZEXT816(0x28f5c28f5c28f5c3),8) & 0xfffffffffffffffc) +
                   (uVar17 >> 2) / 0x19) * 0x14) && (uVar14 = uVar17 % 400, uVar14 != 0)) {
      if (0x16c < lVar9) goto LAB_00103d7e;
      uVar14 = 0;
joined_r0x00103dd0:
      for (; lVar9 < 0; lVar9 = lVar9 + lVar6) {
        uVar17 = uVar17 - 1;
        lVar6 = 0x16d;
        uVar14 = (ulong)((uint)uVar17 & 3);
        if ((uVar17 & 3) == 0) {
          lVar6 = 0x16e;
          lVar11 = uVar17 * -0x70a3d70a3d70a3d7;
          if ((lVar11 + 0x51eb851eb851eb8U >> 2 | lVar11 << 0x3e) < 0x28f5c28f5c28f5d) {
            lVar6 = (ulong)((lVar11 + 0x51eb851eb851eb0U >> 4 | lVar11 << 0x3c) < 0xa3d70a3d70a3d7)
                    + 0x16d;
          }
        }
      }
      lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar17),8) + uVar17;
      uVar7 = ((lVar6 >> 8) - ((long)uVar17 >> 0x3f)) * 400;
      if (uVar14 == 0) {
        lVar6 = (lVar6 >> 6) - ((long)uVar17 >> 0x3f);
        uVar5 = 0;
        uVar12 = 0;
        uVar13 = 0;
        if (uVar17 + lVar6 * -100 != 0) {
          do {
            if (lVar9 < (long)(ulong)(byte)(&DAT_00117dcc)[(int)uVar5]) goto LAB_00103ee0;
            uVar12 = uVar12 + 1;
            lVar9 = lVar9 - (ulong)(byte)(&DAT_00117dcc)[(int)uVar5];
            uVar5 = uVar12 & 0xff;
            uVar13 = uVar12;
          } while (uVar17 != lVar6 * 100);
        }
        while( true ) {
          if (uVar17 == uVar7) {
            bVar2 = (&DAT_00117dcc)[(int)uVar5];
          }
          else {
            bVar2 = (&MONTH_DAYS_TABLE)[(int)uVar5];
          }
          if (lVar9 < (long)(ulong)bVar2) break;
          uVar13 = uVar13 + 1;
          lVar9 = lVar9 - (ulong)(byte)(&MONTH_DAYS_TABLE)
                                       [(long)(int)uVar5 + (ulong)(uVar17 == uVar7) * 0xc];
          uVar5 = uVar13 & 0xff;
        }
      }
      else {
        uVar5 = 0;
        uVar12 = 0;
        for (; lVar6 = (long)(int)uVar5, (long)(ulong)(byte)(&MONTH_DAYS_TABLE)[lVar6] <= lVar9;
            lVar9 = lVar9 - (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar6]) {
          uVar12 = uVar12 + 1;
          uVar5 = uVar12 & 0xff;
        }
      }
LAB_00103ee0:
      local_58 = "%04d-%02d-%02d";
      local_60 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange *)&local_60);
      vformat<long,unsigned_char,unsigned_char>
                ((String *)param_1,(long)&local_60,(uchar)uVar17,(char)uVar5 + '\x01');
      lVar6 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      local_60 = 0;
      lVar6 = *(long *)param_1;
      plVar1 = (long *)(lVar6 + -0x10);
      if (in_CL == '\0') {
        if (lVar6 != 0) {
          do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00104086;
            LOCK();
            lVar11 = *plVar1;
            bVar18 = lVar6 == lVar11;
            if (bVar18) {
              *plVar1 = lVar6 + 1;
              lVar11 = lVar6;
            }
            UNLOCK();
          } while (!bVar18);
          if (lVar11 != -1) {
            local_60 = *(long *)param_1;
          }
        }
LAB_00104086:
        local_58 = "%sT%02d:%02d:%02d";
      }
      else {
        if (lVar6 != 0) {
          do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00103f9d;
            LOCK();
            lVar11 = *plVar1;
            bVar18 = lVar6 == lVar11;
            if (bVar18) {
              *plVar1 = lVar6 + 1;
              lVar11 = lVar6;
            }
            UNLOCK();
          } while (!bVar18);
          if (lVar11 != -1) {
            local_60 = *(long *)param_1;
          }
        }
LAB_00103f9d:
        local_58 = "%s %02d:%02d:%02d";
      }
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_68);
      vformat<String,unsigned_char,unsigned_char,unsigned_char>
                ((CowData<char32_t> *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,
                 uVar16 & 0xffffffff,(int)(uVar8 / 0x3c) + iVar15 * -0x3c,
                 (int)uVar10 + (int)(uVar8 / 0x3c) * -0x3c,uVar16,uVar17,lVar9);
      pcVar4 = local_58;
      if (*(char **)param_1 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)param_1);
        *(char **)param_1 = pcVar4;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (lVar9 < 0x16e) goto joined_r0x00103dd0;
    lVar6 = 0x16e;
  }
  else {
    if (lVar9 < 0x16d) goto joined_r0x00103dd0;
LAB_00103d7e:
    lVar6 = 0x16d;
  }
  lVar9 = lVar9 - lVar6;
  uVar17 = uVar17 + 1;
  goto LAB_00103d8a;
}



/* Time::get_datetime_string_from_datetime_dict(Dictionary const&, bool) const */

Dictionary * Time::get_datetime_string_from_datetime_dict(Dictionary *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  Variant *pVVar7;
  char in_CL;
  char *pcVar8;
  Variant *in_RDX;
  long lVar9;
  long in_FS_OFFSET;
  int local_e8;
  ulong local_e0;
  CowData<char32_t> local_c0 [8];
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  char *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = Dictionary::is_empty();
  if (cVar1 != '\0') {
    _err_print_error("get_datetime_string_from_datetime_dict","core/os/time.cpp",0x115,
                     "Condition \"p_datetime.is_empty()\" is true. Returning: \"\"",
                     "Invalid datetime Dictionary: Dictionary is empty.",0,0);
    *(undefined8 *)param_1 = 0;
    local_80 = 0;
    local_88 = "";
    String::parse_latin1((StrRange *)param_1);
    goto LAB_001044e0;
  }
  Variant::Variant((Variant *)local_78,"year");
  cVar1 = Dictionary::has(in_RDX);
  local_e0 = 0x7b2;
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"year");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    local_e0 = Variant::operator_cast_to_long(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar5 = 1;
  Variant::Variant((Variant *)local_78,"month");
  cVar1 = Dictionary::has(in_RDX);
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"month");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    iVar5 = Variant::operator_cast_to_int(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"day");
  cVar1 = Dictionary::has(in_RDX);
  local_e8 = 1;
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"day");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    local_e8 = Variant::operator_cast_to_int(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar4 = 0;
  Variant::Variant((Variant *)local_78,"hour");
  cVar1 = Dictionary::has(in_RDX);
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"hour");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    iVar4 = Variant::operator_cast_to_int(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"minute");
  cVar1 = Dictionary::has(in_RDX);
  iVar3 = 0;
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"minute");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    iVar3 = Variant::operator_cast_to_int(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"second");
  cVar1 = Dictionary::has(in_RDX);
  iVar2 = 0;
  if (cVar1 != '\0') {
    Variant::Variant((Variant *)local_58,"second");
    pVVar7 = (Variant *)Dictionary::operator[](in_RDX);
    iVar2 = Variant::operator_cast_to_int(pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar5 == 0) {
    local_90 = 0;
    String::parse_latin1
              ((String *)&local_90,
               ", months are 1-indexed and cannot be 0. See the Time.Month enum for valid values.");
    itos((long)&local_a0);
    operator+((char *)&local_98,(String *)"Invalid month value of: ");
    String::operator+((String *)&local_88,(String *)&local_98);
    pcVar8 = "Condition \"month == 0\" is true. Returning: \"\"";
LAB_001047d8:
    _err_print_error("get_datetime_string_from_datetime_dict","core/os/time.cpp",0x117,pcVar8,
                     (CowData<char32_t> *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  else {
    if (iVar5 < 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid month value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"month < 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (0xc < iVar5) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,". See the Time.Month enum for valid values.");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid month value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"month > 12\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (0x17 < iVar4) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid hour value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"hour > 23\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (iVar4 < 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid hour value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"hour < 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (0x3b < iVar3) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid minute value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"minute > 59\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (iVar3 < 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid minute value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"minute < 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (0x3b < iVar2) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90," (leap seconds are not supported).");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid second value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"second > 59\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (iVar2 < 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid second value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"second < 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (local_e8 == 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,", days are 1-indexed and cannot be 0.");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid day value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"day == 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    if (local_e8 < 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,".");
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)"Invalid day value of: ");
      String::operator+((String *)&local_88,(String *)&local_98);
      pcVar8 = "Condition \"day < 0\" is true. Returning: \"\"";
      goto LAB_001047d8;
    }
    uVar6 = 0;
    if ((local_e0 & 3) == 0) {
      uVar6 = 1;
      lVar9 = local_e0 * -0x70a3d70a3d70a3d7;
      if ((lVar9 + 0x51eb851eb851eb8U >> 2 | lVar9 << 0x3e) < 0x28f5c28f5c28f5d) {
        uVar6 = (ulong)((lVar9 + 0x51eb851eb851eb0U >> 4 | lVar9 << 0x3c) < 0xa3d70a3d70a3d7);
      }
    }
    if (local_e8 <= (int)(uint)(byte)(&MONTH_DAYS_TABLE)[(long)(iVar5 + -1) + uVar6 * 0xc]) {
      local_90 = 0;
      local_88 = "%04d-%02d-%02d";
      local_80 = 0xe;
      String::parse_latin1((StrRange *)&local_90);
      vformat<long,unsigned_char,int>((String *)&local_a0,(long)&local_90,(uchar)local_e0,iVar5);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_90 = 0;
      if (in_CL == '\0') {
        if (local_a0 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_a0);
        }
        local_88 = "%sT%02d:%02d:%02d";
      }
      else {
        if (local_a0 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_a0);
        }
        local_88 = "%s %02d:%02d:%02d";
      }
      local_98 = 0;
      local_80 = 0x11;
      String::parse_latin1((StrRange *)&local_98);
      vformat<String,int,int,int>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_98,(StrRange *)&local_90,iVar4,
                 iVar3,iVar2);
      pcVar8 = local_88;
      if (local_88 != local_a0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      *(char **)param_1 = pcVar8;
      goto LAB_001044e0;
    }
    local_90 = 0;
    String::parse_latin1((String *)&local_90,".");
    itos((long)&local_a0);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0," which is larger than the maximum for this month, ");
    itos((long)local_c0);
    operator+((char *)local_b8,(String *)"Invalid day value of: ");
    String::operator+(local_a8,(String *)local_b8);
    String::operator+((String *)&local_98,local_a8);
    String::operator+((String *)&local_88,(String *)&local_98);
    _err_print_error("get_datetime_string_from_datetime_dict","core/os/time.cpp",0x117,
                     "Condition \"day > days_in_this_month\" is true. Returning: \"\"",
                     (String *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  *(undefined8 *)param_1 = 0;
  String::parse_latin1((String *)param_1,"");
LAB_001044e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::get_datetime_dict_from_datetime_string(String const&, bool) const */

String * Time::get_datetime_dict_from_datetime_string(String *param_1,bool param_2)

{
  CowData *pCVar1;
  code *pcVar2;
  bool bVar3;
  CowData *pCVar4;
  int iVar5;
  int iVar6;
  Variant *pVVar7;
  ulong uVar8;
  char in_CL;
  long lVar9;
  CowData *in_RDX;
  ulong uVar10;
  ulong uVar11;
  wchar32 wVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  CowData *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_98 = 0;
  wVar12 = (wchar32)in_RDX;
  iVar5 = String::find_char(wVar12,0x54);
  if (iVar5 < 1) {
    iVar5 = String::find_char(wVar12,0x20);
    if (0 < iVar5) {
      iVar5 = 0x10a70d;
      goto LAB_00104f41;
    }
    iVar5 = String::find_char(wVar12,0x2d);
    if (0 < iVar5) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_RDX);
      bVar3 = false;
      goto LAB_00104fc3;
    }
    iVar5 = String::find_char(wVar12,0x3a);
    if (0 < iVar5) {
      uVar10 = 0x7b2;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,in_RDX);
      local_c8 = 1;
      local_c0 = 1;
      goto LAB_0010508a;
    }
    local_c8 = 1;
    local_c0._0_1_ = '\x01';
    uVar10 = 0x7b2;
    local_c0 = 1;
    local_b4 = 0;
    local_bc = 0;
    local_b8 = 0;
    goto LAB_0010512d;
  }
  iVar5 = 0x10a6dd;
LAB_00104f41:
  String::split((char *)&local_88,SUB81(in_RDX,0),iVar5);
  if ((local_80 == (CowData *)0x0) || (*(long *)(local_80 + -8) < 2)) {
    _err_print_error("get_datetime_dict_from_datetime_string","core/os/time.cpp",0x103,
                     "Condition \"array.size() < 2\" is true. Returning: Dictionary()",
                     "Invalid ISO 8601 date/time string.",0,0);
    Dictionary::Dictionary((Dictionary *)param_1);
    CowData<String>::_unref((CowData<String> *)&local_80);
  }
  else {
    if (local_a0 != *(long *)local_80) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,local_80);
      if (local_80 == (CowData *)0x0) {
        lVar9 = 0;
LAB_001057bb:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,1,lVar9,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar9 = *(long *)(local_80 + -8);
      if (lVar9 < 2) goto LAB_001057bb;
    }
    if (local_98 != *(long *)(local_80 + 8)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,local_80 + 8);
    }
    CowData<String>::_unref((CowData<String> *)&local_80);
    bVar3 = true;
LAB_00104fc3:
    local_90 = 0;
    local_88 = &_LC54;
    local_80 = (CowData *)0x1;
    String::parse_latin1((StrRange *)&local_90);
    String::split_ints((String *)&local_88,SUB81(&local_a0,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((local_80 != (CowData *)0x0) && (2 < *(long *)(local_80 + -8))) {
      iVar5 = *(int *)local_80;
      local_c0 = *(int *)(local_80 + 4);
      local_c8 = *(int *)(local_80 + 8);
      iVar6 = String::find_char(wVar12,0x2d);
      pCVar4 = local_80;
      uVar10 = (long)iVar5;
      if (iVar6 == 0) {
        uVar10 = -(long)iVar5;
      }
      if (local_80 != (CowData *)0x0) {
        LOCK();
        pCVar1 = local_80 + -0x10;
        *(long *)pCVar1 = *(long *)pCVar1 + -1;
        UNLOCK();
        if (*(long *)pCVar1 == 0) {
          local_80 = (CowData *)0x0;
          Memory::free_static(pCVar4 + -0x10,false);
        }
      }
      if (bVar3) {
LAB_0010508a:
        local_90 = 0;
        local_88 = &_LC85;
        local_80 = (CowData *)0x1;
        String::parse_latin1((StrRange *)&local_90);
        String::split_ints((String *)&local_88,SUB81(&local_98,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pCVar4 = local_80;
        if ((local_80 == (CowData *)0x0) || (*(long *)(local_80 + -8) < 3)) {
          pcVar15 = "Invalid ISO 8601 time string.";
          goto LAB_001058b8;
        }
        local_b8 = *(int *)local_80;
        local_bc = *(int *)(local_80 + 4);
        local_b4 = *(int *)(local_80 + 8);
        LOCK();
        pCVar1 = local_80 + -0x10;
        *(long *)pCVar1 = *(long *)pCVar1 + -1;
        UNLOCK();
        if (*(long *)pCVar1 == 0) {
          local_80 = (CowData *)0x0;
          Memory::free_static(pCVar4 + -0x10,false);
        }
      }
      else {
        local_b8._0_1_ = (uchar)local_c0;
        local_c0._0_1_ = (uchar)local_b8;
        local_b4 = 0;
        local_bc = 0;
        local_b8 = 0;
      }
LAB_0010512d:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      Dictionary::Dictionary((Dictionary *)&local_88);
      Variant::Variant((Variant *)local_58,uVar10);
      Variant::Variant((Variant *)local_78,"year");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(uchar)local_c0);
      Variant::Variant((Variant *)local_78,"month");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_c8);
      Variant::Variant((Variant *)local_78,"day");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (in_CL != '\0') {
        lVar9 = (long)(local_c8 + -1);
        if (1 < local_c0) {
          iVar5 = 0;
          do {
            uVar8 = 0;
            if (((uVar10 & 3) == 0) &&
               (uVar8 = 1,
               uVar10 == (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar10),8) +
                                 uVar10) >> 6) - ((long)uVar10 >> 0x3f)) * 100)) {
              uVar8 = (ulong)((uVar10 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                              uVar10 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
            }
            lVar13 = (long)iVar5;
            iVar5 = iVar5 + 1;
            lVar9 = lVar9 + (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar13 + uVar8 * 0xc];
          } while (iVar5 != local_c0 + -1);
        }
        if ((long)uVar10 < 0x7b2) {
          uVar8 = 0x7b1;
          do {
            lVar13 = 0x16d;
            if ((uVar8 & 3) == 0) {
              lVar13 = 0x16e;
              lVar14 = uVar8 * -0x70a3d70a3d70a3d7;
              if ((lVar14 + 0x51eb851eb851eb8U >> 2 | lVar14 << 0x3e) < 0x28f5c28f5c28f5d) {
                lVar13 = (ulong)((lVar14 + 0x51eb851eb851eb0U >> 4 | lVar14 << 0x3c) <
                                0xa3d70a3d70a3d7) + 0x16d;
              }
            }
            uVar8 = uVar8 - 1;
            lVar9 = lVar9 - lVar13;
          } while (uVar10 - 1 != uVar8);
        }
        else if (uVar10 != 0x7b2) {
          uVar8 = 0x7b2;
          do {
            lVar13 = 0x16d;
            if ((uVar8 & 3) == 0) {
              lVar13 = 0x16e;
              uVar11 = uVar8 * -0x70a3d70a3d70a3d7;
              if ((uVar11 >> 2 | uVar11 << 0x3e) < 0x28f5c28f5c28f5d) {
                lVar13 = (ulong)((uVar11 >> 4 | uVar11 << 0x3c) < 0xa3d70a3d70a3d8) + 0x16d;
              }
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + lVar13;
          } while (uVar10 != uVar8);
        }
        lVar9 = (lVar9 + 4) % 7;
        if (lVar9 < 0) {
          lVar9 = lVar9 + 7;
        }
        Variant::Variant((Variant *)local_58,lVar9);
        Variant::Variant((Variant *)local_78,"weekday");
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
        if (pVVar7 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar7 = 0;
          *(int *)pVVar7 = local_58[0];
          *(undefined8 *)(pVVar7 + 8) = local_50;
          *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)local_58,local_b8);
      Variant::Variant((Variant *)local_78,"hour");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_bc);
      Variant::Variant((Variant *)local_78,"minute");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_b4);
      Variant::Variant((Variant *)local_78,"second");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      if (pVVar7 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar7 = 0;
        *(int *)pVVar7 = local_58[0];
        *(undefined8 *)(pVVar7 + 8) = local_50;
        *(undefined8 *)(pVVar7 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary((Dictionary *)param_1,(Dictionary *)&local_88);
      Dictionary::~Dictionary((Dictionary *)&local_88);
      goto LAB_00105693;
    }
    pcVar15 = "Invalid ISO 8601 date string.";
LAB_001058b8:
    _err_print_error("get_datetime_dict_from_datetime_string","core/os/time.cpp",0x103,
                     "Condition \"array.size() < 3\" is true. Returning: Dictionary()",pcVar15,0,0);
    Dictionary::Dictionary((Dictionary *)param_1);
    CowData<int>::_unref((CowData<int> *)&local_80);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00105693:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Time::get_unix_time_from_datetime_string(String const&) const */

long __thiscall Time::get_unix_time_from_datetime_string(Time *this,String *param_1)

{
  CowData *pCVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  CowData *pCVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  wchar32 wVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  CowData *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = 0;
  wVar13 = (wchar32)param_1;
  iVar6 = String::find_char(wVar13,0x54);
  if (iVar6 < 1) {
    iVar6 = String::find_char(wVar13,0x20);
    if (0 < iVar6) {
      iVar6 = 0x10a70d;
      goto LAB_00105b75;
    }
    iVar6 = String::find_char(wVar13,0x2d);
    if (0 < iVar6) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_1);
      bVar4 = false;
      goto LAB_00105bf7;
    }
    iVar6 = String::find_char(wVar13,0x3a);
    if (0 < iVar6) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
      uVar17 = 0x7b2;
      local_9c = 1;
      iVar6 = 1;
      goto LAB_00105cba;
    }
    uVar17 = 0x7b2;
    iVar7 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_9c = 1;
    iVar6 = 1;
    uVar8 = 0;
    iVar2 = 0;
    uVar14 = 2;
    local_a0 = 0;
LAB_00105e5c:
    iVar6 = iVar6 + -1;
    if ((int)(uint)(byte)(&MONTH_DAYS_TABLE)[(long)iVar6 + uVar8 * 0xc] < local_9c) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,".");
      itos((long)&local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," which is larger than the maximum for this month, ")
      ;
      itos((long)local_90);
      operator+((char *)local_88,(String *)"Invalid day value of: ");
      String::operator+(local_78,(String *)local_88);
      String::operator+((String *)&local_68,local_78);
      String::operator+((String *)&local_58,(String *)&local_68);
      _err_print_error("get_unix_time_from_datetime_string","core/os/time.cpp",300,
                       "Condition \"day > days_in_this_month\" is true. Returning: 0",
                       (String *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref(local_88);
      CowData<char32_t>::_unref(local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      lVar9 = 0;
    }
    else {
      lVar9 = (long)(local_9c + -1);
      if (iVar6 != 0) {
        iVar15 = 0;
        do {
          uVar8 = 0;
          if ((uVar14 == 0) &&
             (uVar8 = 1,
             uVar17 == (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar17),8) +
                               uVar17) >> 6) - ((long)uVar17 >> 0x3f)) * 100)) {
            uVar8 = (ulong)((uVar17 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                            uVar17 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
          }
          lVar16 = (long)iVar15;
          iVar15 = iVar15 + 1;
          lVar9 = lVar9 + (ulong)(byte)(&MONTH_DAYS_TABLE)[lVar16 + uVar8 * 0xc];
        } while (iVar6 != iVar15);
      }
      if ((long)uVar17 < 0x7b2) {
        uVar8 = 0x7b1;
        do {
          lVar16 = 0x16d;
          if ((uVar8 & 3) == 0) {
            lVar16 = 0x16e;
            lVar12 = uVar8 * -0x70a3d70a3d70a3d7;
            if ((lVar12 + 0x51eb851eb851eb8U >> 2 | lVar12 << 0x3e) < 0x28f5c28f5c28f5d) {
              lVar16 = (ulong)((lVar12 + 0x51eb851eb851eb0U >> 4 | lVar12 << 0x3c) <
                              0xa3d70a3d70a3d7) + 0x16d;
            }
          }
          uVar8 = uVar8 - 1;
          lVar9 = lVar9 - lVar16;
        } while (uVar8 != uVar17 - 1);
      }
      else if (uVar17 != 0x7b2) {
        uVar8 = 0x7b2;
        do {
          lVar16 = 0x16d;
          if ((uVar8 & 3) == 0) {
            lVar16 = 0x16e;
            uVar11 = uVar8 * -0x70a3d70a3d70a3d7;
            if ((uVar11 >> 2 | uVar11 << 0x3e) < 0x28f5c28f5c28f5d) {
              lVar16 = (ulong)((uVar11 >> 4 | uVar11 << 0x3c) < 0xa3d70a3d70a3d8) + 0x16d;
            }
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + lVar16;
        } while (uVar17 != uVar8);
      }
      lVar9 = lVar9 * 0x15180 + (long)(iVar7 * 0xe10) + (long)(iVar2 * 0x3c) + (long)local_a0;
    }
  }
  else {
    iVar6 = 0x10a6dd;
LAB_00105b75:
    String::split((char *)&local_58,SUB81(param_1,0),iVar6);
    if ((local_50[0] == (CowData *)0x0) || (*(long *)(local_50[0] + -8) < 2)) {
      _err_print_error("get_unix_time_from_datetime_string","core/os/time.cpp",299,
                       "Condition \"array.size() < 2\" is true. Returning: -1",
                       "Invalid ISO 8601 date/time string.",0,0);
      CowData<String>::_unref((CowData<String> *)local_50);
    }
    else {
      if (*(long *)local_50[0] != local_70) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,local_50[0]);
        if (local_50[0] == (CowData *)0x0) {
          lVar9 = 0;
LAB_00106033:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,1,lVar9,"p_index","size()","",false,
                     true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar9 = *(long *)(local_50[0] + -8);
        if (lVar9 < 2) goto LAB_00106033;
      }
      if (local_68 != *(long *)(local_50[0] + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_50[0] + 8);
      }
      CowData<String>::_unref((CowData<String> *)local_50);
      bVar4 = true;
LAB_00105bf7:
      local_60 = 0;
      local_58 = &_LC54;
      local_50[0] = (CowData *)0x1;
      String::parse_latin1((StrRange *)&local_60);
      String::split_ints((String *)&local_58,SUB81(&local_70,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((local_50[0] != (CowData *)0x0) && (2 < *(long *)(local_50[0] + -8))) {
        iVar2 = *(int *)local_50[0];
        iVar6 = *(int *)(local_50[0] + 4);
        local_9c = *(int *)(local_50[0] + 8);
        iVar7 = String::find_char(wVar13,0x2d);
        pCVar5 = local_50[0];
        uVar17 = (long)iVar2;
        if (iVar7 == 0) {
          uVar17 = -(long)iVar2;
        }
        if (local_50[0] != (CowData *)0x0) {
          LOCK();
          pCVar1 = local_50[0] + -0x10;
          *(long *)pCVar1 = *(long *)pCVar1 + -1;
          UNLOCK();
          if (*(long *)pCVar1 == 0) {
            local_50[0] = (CowData *)0x0;
            Memory::free_static(pCVar5 + -0x10,false);
          }
        }
        if (bVar4) {
LAB_00105cba:
          local_60 = 0;
          local_58 = &_LC85;
          local_50[0] = (CowData *)0x1;
          String::parse_latin1((StrRange *)&local_60);
          String::split_ints((String *)&local_58,SUB81(&local_68,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          pCVar5 = local_50[0];
          if ((local_50[0] == (CowData *)0x0) || (*(long *)(local_50[0] + -8) < 3)) {
            pcVar10 = "Invalid ISO 8601 time string.";
            goto LAB_001061c8;
          }
          iVar2 = *(int *)(local_50[0] + 4);
          iVar7 = *(int *)local_50[0];
          local_a0 = *(int *)(local_50[0] + 8);
          LOCK();
          pCVar1 = local_50[0] + -0x10;
          *(long *)pCVar1 = *(long *)pCVar1 + -1;
          UNLOCK();
          if (*(long *)pCVar1 == 0) {
            local_50[0] = (CowData *)0x0;
            Memory::free_static(pCVar5 + -0x10,false);
          }
        }
        else {
          local_a0 = 0;
          iVar7 = 0;
          iVar2 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (iVar6 == 0) {
          local_60 = 0;
          String::parse_latin1
                    ((String *)&local_60,
                     ", months are 1-indexed and cannot be 0. See the Time.Month enum for valid values."
                    );
          itos((long)&local_70);
          operator+((char *)&local_68,(String *)"Invalid month value of: ");
          String::operator+((String *)&local_58,(String *)&local_68);
          pcVar10 = "Condition \"month == 0\" is true. Returning: 0";
        }
        else if (iVar6 < 0) {
          local_60 = 0;
          String::parse_latin1((String *)&local_60,".");
          itos((long)&local_70);
          operator+((char *)&local_68,(String *)"Invalid month value of: ");
          String::operator+((String *)&local_58,(String *)&local_68);
          pcVar10 = "Condition \"month < 0\" is true. Returning: 0";
        }
        else if (iVar6 < 0xd) {
          if (iVar7 < 0x18) {
            if (iVar7 < 0) {
              local_60 = 0;
              String::parse_latin1((String *)&local_60,".");
              itos((long)&local_70);
              operator+((char *)&local_68,(String *)"Invalid hour value of: ");
              String::operator+((String *)&local_58,(String *)&local_68);
              pcVar10 = "Condition \"hour < 0\" is true. Returning: 0";
            }
            else if (iVar2 < 0x3c) {
              if (iVar2 < 0) {
                local_60 = 0;
                String::parse_latin1((String *)&local_60,".");
                itos((long)&local_70);
                operator+((char *)&local_68,(String *)"Invalid minute value of: ");
                String::operator+((String *)&local_58,(String *)&local_68);
                pcVar10 = "Condition \"minute < 0\" is true. Returning: 0";
              }
              else if (local_a0 < 0x3c) {
                if (local_a0 < 0) {
                  local_60 = 0;
                  String::parse_latin1((String *)&local_60,".");
                  itos((long)&local_70);
                  operator+((char *)&local_68,(String *)"Invalid second value of: ");
                  String::operator+((String *)&local_58,(String *)&local_68);
                  pcVar10 = "Condition \"second < 0\" is true. Returning: 0";
                }
                else if (local_9c == 0) {
                  local_60 = 0;
                  String::parse_latin1((String *)&local_60,", days are 1-indexed and cannot be 0.");
                  itos((long)&local_70);
                  operator+((char *)&local_68,(String *)"Invalid day value of: ");
                  String::operator+((String *)&local_58,(String *)&local_68);
                  pcVar10 = "Condition \"day == 0\" is true. Returning: 0";
                }
                else {
                  if (-1 < local_9c) {
                    uVar8 = 0;
                    uVar14 = (uint)uVar17 & 3;
                    if (((uVar17 & 3) == 0) &&
                       (uVar8 = 1,
                       uVar17 == (((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                                                 SEXT816((long)uVar17),8) + uVar17) >> 6) -
                                 ((long)uVar17 >> 0x3f)) * 100)) {
                      uVar8 = (ulong)((uVar17 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb0 >> 4 |
                                      uVar17 * -0x70a3d70a3d70a3d7 << 0x3c) < 0xa3d70a3d70a3d7);
                    }
                    goto LAB_00105e5c;
                  }
                  local_60 = 0;
                  String::parse_latin1((String *)&local_60,".");
                  itos((long)&local_70);
                  operator+((char *)&local_68,(String *)"Invalid day value of: ");
                  String::operator+((String *)&local_58,(String *)&local_68);
                  pcVar10 = "Condition \"day < 0\" is true. Returning: 0";
                }
              }
              else {
                local_60 = 0;
                String::parse_latin1((String *)&local_60," (leap seconds are not supported).");
                itos((long)&local_70);
                operator+((char *)&local_68,(String *)"Invalid second value of: ");
                String::operator+((String *)&local_58,(String *)&local_68);
                pcVar10 = "Condition \"second > 59\" is true. Returning: 0";
              }
            }
            else {
              local_60 = 0;
              String::parse_latin1((String *)&local_60,".");
              itos((long)&local_70);
              operator+((char *)&local_68,(String *)"Invalid minute value of: ");
              String::operator+((String *)&local_58,(String *)&local_68);
              pcVar10 = "Condition \"minute > 59\" is true. Returning: 0";
            }
          }
          else {
            local_60 = 0;
            String::parse_latin1((String *)&local_60,".");
            itos((long)&local_70);
            operator+((char *)&local_68,(String *)"Invalid hour value of: ");
            String::operator+((String *)&local_58,(String *)&local_68);
            pcVar10 = "Condition \"hour > 23\" is true. Returning: 0";
          }
        }
        else {
          local_60 = 0;
          String::parse_latin1((String *)&local_60,". See the Time.Month enum for valid values.");
          itos((long)&local_70);
          operator+((char *)&local_68,(String *)"Invalid month value of: ");
          String::operator+((String *)&local_58,(String *)&local_68);
          pcVar10 = "Condition \"month > 12\" is true. Returning: 0";
        }
        _err_print_error("get_unix_time_from_datetime_string","core/os/time.cpp",300,pcVar10,
                         (String *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        lVar9 = 0;
        goto LAB_00105fd8;
      }
      pcVar10 = "Invalid ISO 8601 date string.";
LAB_001061c8:
      _err_print_error("get_unix_time_from_datetime_string","core/os/time.cpp",299,
                       "Condition \"array.size() < 3\" is true. Returning: -1",pcVar10,0,0);
      CowData<int>::_unref((CowData<int> *)local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    lVar9 = -1;
  }
LAB_00105fd8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar9;
}



/* Time::_bind_methods() */

void Time::_bind_methods(void)

{
  Variant *pVVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  MethodBind *pMVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  long local_170;
  char *local_168;
  undefined8 local_160;
  long *local_158;
  char *local_148;
  undefined8 local_140;
  undefined *local_138;
  char *pcStack_130;
  undefined8 local_128;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  Variant *local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  Variant *local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  puVar8 = PTR__LC95_00117e78;
  puVar7 = PTR__LC94_00117e70;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  local_148 = "unix_time_val";
  uVar11 = (uint)(Variant *)&local_b8;
  local_b8 = (Variant *)&local_148;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_dict_from_unix_time",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,Dictionary,long>(get_datetime_dict_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  local_140 = 0;
  local_148 = "unix_time_val";
  local_b8 = (Variant *)&local_148;
  D_METHODP((char *)&local_168,(char ***)"get_date_dict_from_unix_time",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,Dictionary,long>(get_date_dict_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_148 = "unix_time_val";
  local_140 = 0;
  local_b8 = (Variant *)&local_148;
  D_METHODP((char *)&local_168,(char ***)"get_time_dict_from_unix_time",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,Dictionary,long>(get_time_dict_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_c8 = 0;
  local_d8 = (Variant *)0x10a775;
  pcStack_d0 = "use_space";
  auStack_b0._0_8_ = &pcStack_d0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_string_from_unix_time",uVar11);
  Variant::Variant((Variant *)&local_b8,false);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_d8 = (Variant *)&local_b8;
  pMVar10 = create_method_bind<Time,String,long,bool>(get_datetime_string_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_d8,1);
  if (Variant::needs_deinit[(int)local_a0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  pcStack_d0 = (char *)0x0;
  local_d8 = (Variant *)0x10a775;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_date_string_from_unix_time",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,String,long>(get_date_string_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  pcStack_d0 = (char *)0x0;
  local_d8 = (Variant *)0x10a775;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_time_string_from_unix_time",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,String,long>(get_time_string_from_unix_time);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_e8 = 0;
  local_f8 = puVar8;
  pcStack_f0 = "weekday";
  auStack_b0._0_8_ = &pcStack_f0;
  local_b8 = (Variant *)&local_f8;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_dict_from_datetime_string",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,Dictionary,String_const&,bool>
                      (get_datetime_dict_from_datetime_string);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_118 = puVar8;
  pcStack_110 = "use_space";
  auStack_b0._0_8_ = &pcStack_110;
  local_b8 = (Variant *)&local_118;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_string_from_datetime_dict",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,String,Dictionary_const&,bool>
                      (get_datetime_string_from_datetime_dict);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x10a76c;
  pcStack_d0 = (char *)0x0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_unix_time_from_datetime_dict",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,long,Dictionary_const&>(get_unix_time_from_datetime_dict);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x10a76c;
  pcStack_d0 = (char *)0x0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_unix_time_from_datetime_string",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,long,String_const&>(get_unix_time_from_datetime_string);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)0x10a7bd;
  pcStack_d0 = (char *)0x0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_offset_string_from_offset_minutes",uVar11);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,String,long>(get_offset_string_from_offset_minutes);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)&_LC94;
  pcStack_d0 = (char *)0x0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_dict_from_system",uVar11);
  Variant::Variant((Variant *)&local_b8,false);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_d8 = (Variant *)&local_b8;
  pMVar10 = create_method_bind<Time,Dictionary,bool>(get_datetime_dict_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_d8,1);
  if (Variant::needs_deinit[(int)local_a0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_d8 = (Variant *)&_LC94;
  pcStack_d0 = (char *)0x0;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_date_dict_from_system",uVar11);
  Variant::Variant((Variant *)&local_b8,false);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_d8 = (Variant *)&local_b8;
  pMVar10 = create_method_bind<Time,Dictionary,bool>(get_date_dict_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_d8,1);
  if (Variant::needs_deinit[(int)local_a0] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_b8];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  pcStack_d0 = (char *)0x0;
  local_d8 = (Variant *)&_LC94;
  local_b8 = (Variant *)&local_d8;
  D_METHODP((char *)&local_168,(char ***)"get_time_dict_from_system",uVar11);
  Variant::Variant((Variant *)&local_b8,false);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_d8 = (Variant *)&local_b8;
  pMVar10 = create_method_bind<Time,Dictionary,bool>(get_time_dict_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_d8,1);
  if (Variant::needs_deinit[(int)local_a0] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_128 = 0;
  pVVar14 = (Variant *)local_40;
  local_138 = puVar7;
  pcStack_130 = "use_space";
  local_b8 = (Variant *)&local_138;
  auStack_b0._0_8_ = &pcStack_130;
  D_METHODP((char *)&local_168,(char ***)"get_datetime_string_from_system",uVar11);
  Variant::Variant((Variant *)&local_88,false);
  Variant::Variant((Variant *)&local_70,false);
  local_50 = (undefined1  [16])0x0;
  auStack_b0._0_8_ = (Variant *)&local_70;
  local_58 = 0;
  local_b8 = (Variant *)&local_88;
  pMVar10 = create_method_bind<Time,String,bool,bool>(get_datetime_string_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_b8,2);
  do {
    pVVar1 = pVVar14 + -0x18;
    pVVar14 = pVVar14 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar9 = local_158;
  } while (pVVar14 != (Variant *)&local_88);
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Variant *)&_LC94;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar6 << 0x40;
  uVar11 = (uint)(Variant *)&local_88;
  local_88 = (Variant *)&local_b8;
  D_METHODP((char *)&local_168,(char ***)"get_date_string_from_system",uVar11);
  Variant::Variant((Variant *)&local_88,false);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Variant *)&local_88;
  pMVar10 = create_method_bind<Time,String,bool>(get_date_string_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auStack_b0._8_8_;
  auStack_b0 = auVar5 << 0x40;
  local_b8 = (Variant *)&_LC94;
  local_88 = (Variant *)&local_b8;
  D_METHODP((char *)&local_168,(char ***)"get_time_string_from_system",uVar11);
  Variant::Variant((Variant *)&local_88,false);
  local_68 = (undefined1  [16])0x0;
  local_70 = 0;
  local_b8 = (Variant *)&local_88;
  pMVar10 = create_method_bind<Time,String,bool>(get_time_string_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,&local_b8,1);
  if (Variant::needs_deinit[(int)local_70] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_88];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  D_METHODP((char *)&local_168,(char ***)"get_time_zone_from_system",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,Dictionary>(get_time_zone_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_unix_time_from_system",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,double>(get_unix_time_from_system);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_ticks_msec",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,unsigned_long>(get_ticks_msec);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar9 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar13 = local_158 + -2;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar3 != 0) {
        lVar12 = 0;
        plVar13 = plVar9;
        do {
          if ((StringName::configured != '\0') && (*plVar13 != 0)) {
            StringName::unref();
          }
          lVar12 = lVar12 + 1;
          plVar13 = plVar13 + 1;
        } while (lVar3 != lVar12);
      }
      Memory::free_static(plVar9 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_168,(char ***)"get_ticks_usec",0);
  local_80 = (undefined1  [16])0x0;
  local_88 = (Variant *)0x0;
  pMVar10 = create_method_bind<Time,unsigned_long>(get_ticks_usec);
  ClassDB::bind_methodfi(1,pMVar10,false,(MethodDefinition *)&local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_168);
  StringName::StringName((StringName *)&local_170,"MONTH_JANUARY",false);
  local_168 = "MONTH_JANUARY";
  local_180 = 0;
  local_160 = 0xd;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,1,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_FEBRUARY",false);
  local_168 = "MONTH_FEBRUARY";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,2,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_MARCH",false);
  local_168 = "MONTH_MARCH";
  local_180 = 0;
  local_160 = 0xb;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,3,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_APRIL",false);
  local_168 = "MONTH_APRIL";
  local_180 = 0;
  local_160 = 0xb;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,4,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_MAY",false);
  local_168 = "MONTH_MAY";
  local_180 = 0;
  local_160 = 9;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,5,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_JUNE",false);
  local_168 = "MONTH_JUNE";
  local_180 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,6,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_JULY",false);
  local_168 = "MONTH_JULY";
  local_180 = 0;
  local_160 = 10;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,7,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_AUGUST",false);
  local_168 = "MONTH_AUGUST";
  local_180 = 0;
  local_160 = 0xc;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,8,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_SEPTEMBER",false);
  local_168 = "MONTH_SEPTEMBER";
  local_180 = 0;
  local_160 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,9,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_OCTOBER",false);
  local_168 = "MONTH_OCTOBER";
  local_180 = 0;
  local_160 = 0xd;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,10,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_NOVEMBER",false);
  local_168 = "MONTH_NOVEMBER";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,0xb,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"MONTH_DECEMBER",false);
  local_168 = "MONTH_DECEMBER";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Month>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,0xc,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_SUNDAY",false);
  local_168 = "WEEKDAY_SUNDAY";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,0,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_MONDAY",false);
  local_168 = "WEEKDAY_MONDAY";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,1,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_TUESDAY",false);
  local_168 = "WEEKDAY_TUESDAY";
  local_180 = 0;
  local_160 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,2,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_WEDNESDAY",false);
  local_168 = "WEEKDAY_WEDNESDAY";
  local_180 = 0;
  local_160 = 0x11;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,3,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_THURSDAY",false);
  local_168 = "WEEKDAY_THURSDAY";
  local_180 = 0;
  local_160 = 0x10;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,4,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_FRIDAY",false);
  local_168 = "WEEKDAY_FRIDAY";
  local_180 = 0;
  local_160 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,5,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_170,"WEEKDAY_SATURDAY",false);
  local_168 = "WEEKDAY_SATURDAY";
  local_180 = 0;
  local_160 = 0x10;
  String::parse_latin1((StrRange *)&local_180);
  __constant_get_enum_name<Weekday>((StringName *)&local_178);
  local_188 = 0;
  local_168 = "Time";
  local_160 = 4;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_168,(String *)&local_188,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_168,(StringName *)&local_178,(StringName *)&local_170,6,false);
  if ((StringName::configured != '\0') && (local_168 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Time::is_class_ptr(void*) const */

uint __thiscall Time::is_class_ptr(Time *this,void *param_1)

{
  return (uint)CONCAT71(0x117d,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x117d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* Time::_getv(StringName const&, Variant&) const */

undefined8 Time::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Time::_setv(StringName const&, Variant const&) */

undefined8 Time::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Time::_validate_propertyv(PropertyInfo&) const */

void Time::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Time::_property_can_revertv(StringName const&) const */

undefined8 Time::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Time::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Time::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Time::_notificationv(int, bool) */

void Time::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<unsigned long>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<unsigned_long>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<unsigned long>::get_argument_meta(int) const */

int __thiscall
MethodBindTRC<unsigned_long>::get_argument_meta(MethodBindTRC<unsigned_long> *this,int param_1)

{
  return (param_1 >> 0x1f) * -8;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<String,bool>::_gen_argument_type(MethodBindTRC<String,bool> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 4;
}



/* MethodBindTRC<String, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String, bool, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<String,bool,bool>::_gen_argument_type
          (MethodBindTRC<String,bool,bool> *this,int param_1)

{
  return (-(uint)((uint)param_1 < 2) & 0xfffffffd) + 4;
}



/* MethodBindTRC<String, bool, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,bool,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Dictionary, bool>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Dictionary,bool>::_gen_argument_type(MethodBindTRC<Dictionary,bool> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe6) + 0x1b;
}



/* MethodBindTRC<Dictionary, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<long, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<long,String_const&>::_gen_argument_type
          (MethodBindTRC<long,String_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTRC<long, String const&>::get_argument_meta(int) const */

int __thiscall
MethodBindTRC<long,String_const&>::get_argument_meta
          (MethodBindTRC<long,String_const&> *this,int param_1)

{
  return (param_1 >> 0x1f) * -4;
}



/* MethodBindTRC<long, Dictionary const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<long,Dictionary_const&>::_gen_argument_type
          (MethodBindTRC<long,Dictionary_const&> *this,int param_1)

{
  return (-(param_1 == 0) & 0x19U) + 2;
}



/* MethodBindTRC<long, Dictionary const&>::get_argument_meta(int) const */

int __thiscall
MethodBindTRC<long,Dictionary_const&>::get_argument_meta
          (MethodBindTRC<long,Dictionary_const&> *this,int param_1)

{
  return (param_1 >> 0x1f) * -4;
}



/* MethodBindTRC<String, Dictionary const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::_gen_argument_type
          (MethodBindTRC<String,Dictionary_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x04';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x1aU) + 1;
  }
  return cVar1;
}



/* MethodBindTRC<String, Dictionary const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String,Dictionary_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Dictionary, String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::_gen_argument_type
          (MethodBindTRC<Dictionary,String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\x1b';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindTRC<Dictionary, String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary,String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String, long>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<String,long>::_gen_argument_type(MethodBindTRC<String,long> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffe) + 4;
}



/* MethodBindTRC<String, long>::get_argument_meta(int) const */

long __thiscall
MethodBindTRC<String,long>::get_argument_meta(MethodBindTRC<String,long> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindTRC<String, long, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindTRC<String,long,bool>::_gen_argument_type
          (MethodBindTRC<String,long,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 0) + '\x01';
  if (1 < (uint)param_1) {
    cVar1 = '\x04';
  }
  return cVar1;
}



/* MethodBindTRC<String, long, bool>::get_argument_meta(int) const */

long __thiscall
MethodBindTRC<String,long,bool>::get_argument_meta
          (MethodBindTRC<String,long,bool> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindTRC<Dictionary, long>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Dictionary,long>::_gen_argument_type(MethodBindTRC<Dictionary,long> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffe7) + 0x1b;
}



/* MethodBindTRC<Dictionary, long>::get_argument_meta(int) const */

long __thiscall
MethodBindTRC<Dictionary,long>::get_argument_meta(MethodBindTRC<Dictionary,long> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindTRC<Dictionary, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,long>::~MethodBindTRC(MethodBindTRC<Dictionary,long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001178f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,long>::~MethodBindTRC(MethodBindTRC<Dictionary,long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001178f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, long, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,long,bool>::~MethodBindTRC(MethodBindTRC<String,long,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117950;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, long, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,long,bool>::~MethodBindTRC(MethodBindTRC<String,long,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117950;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary, String const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::~MethodBindTRC
          (MethodBindTRC<Dictionary,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary, String const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::~MethodBindTRC
          (MethodBindTRC<Dictionary,String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, Dictionary const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::~MethodBindTRC
          (MethodBindTRC<String,Dictionary_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, Dictionary const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::~MethodBindTRC
          (MethodBindTRC<String,Dictionary_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117a70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<long, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,Dictionary_const&>::~MethodBindTRC(MethodBindTRC<long,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117ad0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<long, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,Dictionary_const&>::~MethodBindTRC(MethodBindTRC<long,Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117ad0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<long, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<long, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001179b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001179b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,bool>::~MethodBindTRC(MethodBindTRC<Dictionary,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,bool>::~MethodBindTRC(MethodBindTRC<Dictionary,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117b90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, bool, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,bool,bool>::~MethodBindTRC(MethodBindTRC<String,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117bf0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, bool, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,bool,bool>::~MethodBindTRC(MethodBindTRC<String,bool,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117bf0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117c50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117c50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117cb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117cb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117d10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117d10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117d70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00117d70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Time::_get_class_namev() const */

undefined8 * Time::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010a523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Time");
      goto LAB_0010a58e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Time");
LAB_0010a58e:
  return &_get_class_namev()::_class_name_static;
}



/* Time::get_class() const */

void Time::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010abcc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010abcc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010ad4c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ad4c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<unsigned_long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC14;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010aecc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010aecc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::is_class(String const&) const */

undefined8 __thiscall Time::is_class(Time *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010af8f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010af8f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010b043;
  }
  cVar6 = String::operator==(param_1,"Time");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0010b0f3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0010b0f3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010b043;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010b043:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Time::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Time::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC0;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010b318:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b318;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010b336;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010b336:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Time",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
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



/* WARNING: Removing unreachable block (ram,0x0010c240) */
/* WARNING: Removing unreachable block (ram,0x0010c3d5) */
/* WARNING: Removing unreachable block (ram,0x0010c3e1) */
/* String vformat<long, unsigned char, unsigned char>(String const&, long const, unsigned char
   const, unsigned char const) */

String * vformat<long,unsigned_char,unsigned_char>
                   (String *param_1,long param_2,uchar param_3,uchar param_4)

{
  Variant *pVVar1;
  undefined7 in_register_00000011;
  Variant *pVVar2;
  int iVar3;
  uchar in_R8B;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,CONCAT71(in_register_00000011,param_3));
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,in_R8B);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,(bool *)param_2);
  *(undefined8 *)param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010c588) */
/* WARNING: Removing unreachable block (ram,0x0010c71d) */
/* WARNING: Removing unreachable block (ram,0x0010c729) */
/* String vformat<String, unsigned char, unsigned char, unsigned char>(String const&, String const,
   unsigned char const, unsigned char const, unsigned char const) */

undefined8 *
vformat<String,unsigned_char,unsigned_char,unsigned_char>
          (undefined8 *param_1,bool *param_2,String *param_3,uchar param_4,uchar param_5,
          uchar param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010c8c0) */
/* WARNING: Removing unreachable block (ram,0x0010ca55) */
/* WARNING: Removing unreachable block (ram,0x0010ca61) */
/* String vformat<unsigned char, unsigned char, unsigned char>(String const&, unsigned char const,
   unsigned char const, unsigned char const) */

String * vformat<unsigned_char,unsigned_char,unsigned_char>
                   (String *param_1,uchar param_2,uchar param_3,uchar param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined7 in_register_00000031;
  int iVar3;
  uchar in_R8B;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,in_R8B);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,(bool *)CONCAT71(in_register_00000031,param_2));
  *(undefined8 *)param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010cbf0) */
/* WARNING: Removing unreachable block (ram,0x0010cd85) */
/* WARNING: Removing unreachable block (ram,0x0010cd91) */
/* String vformat<long, unsigned char, int>(String const&, long const, unsigned char const, int
   const) */

String * vformat<long,unsigned_char,int>(String *param_1,long param_2,uchar param_3,int param_4)

{
  Variant *pVVar1;
  undefined7 in_register_00000011;
  Variant *pVVar2;
  int iVar3;
  int in_R8D;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,CONCAT71(in_register_00000011,param_3));
  Variant::Variant(local_90,(uchar)param_4);
  iVar4 = 0;
  Variant::Variant(local_78,in_R8D);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,(bool *)param_2);
  *(undefined8 *)param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010cf38) */
/* WARNING: Removing unreachable block (ram,0x0010d0cd) */
/* WARNING: Removing unreachable block (ram,0x0010d0d9) */
/* String vformat<String, int, int, int>(String const&, String const, int const, int const, int
   const) */

undefined8 *
vformat<String,int,int,int>
          (undefined8 *param_1,bool *param_2,String *param_3,int param_4,int param_5,int param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010d270) */
/* WARNING: Removing unreachable block (ram,0x0010d405) */
/* WARNING: Removing unreachable block (ram,0x0010d411) */
/* String vformat<String, long, long>(String const&, String const, long const, long const) */

undefined8 *
vformat<String,long,long>
          (undefined8 *param_1,bool *param_2,String *param_3,long param_4,long param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<String, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar10;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar10 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._0_8_;
    local_60 = auVar3 << 0x40;
    local_68 = &_LC14;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar10 = 4;
    puVar10[6] = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar10[10] = 6;
LAB_0010d637:
      StringName::operator=((StringName *)(puVar10 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 8),(CowData *)&local_a0);
      puVar10[10] = 6;
      if (puVar10[6] != 0x11) goto LAB_0010d637;
      StringName::StringName((StringName *)&local_68,(String *)(puVar10 + 8),false);
      if (*(undefined **)(puVar10 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar10 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_0010d672;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC14;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_0010d6a8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d6a8;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  lVar9 = local_48;
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 == local_48) {
    local_70 = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_70 = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  uVar8 = local_90._8_8_;
  uVar7 = local_90._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_90._8_8_;
  local_90 = auVar6 << 0x40;
  *puVar10 = (undefined4)local_98;
  *(undefined8 *)(puVar10 + 2) = uVar7;
  *(undefined8 *)(puVar10 + 4) = uVar8;
  puVar10[6] = (undefined4)local_80;
  *(long *)(puVar10 + 8) = local_78;
  puVar10[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_0010d672:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar10;
}



/* MethodBindTRC<Dictionary, long>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary,long>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar10;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar10 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX != 0) {
    local_a0 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._0_8_;
    local_60 = auVar3 << 0x40;
    local_68 = &_LC14;
    String::parse_latin1((StrRange *)&local_a0);
    local_a8 = 0;
    *puVar10 = 0x1b;
    puVar10[6] = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
    if (local_a0 == 0) {
      puVar10[10] = 6;
LAB_0010da87:
      StringName::operator=((StringName *)(puVar10 + 4),(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 8),(CowData *)&local_a0);
      puVar10[10] = 6;
      if (puVar10[6] != 0x11) goto LAB_0010da87;
      StringName::StringName((StringName *)&local_68,(String *)(puVar10 + 8),false);
      if (*(undefined **)(puVar10 + 4) == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar10 + 4) = local_68;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    goto LAB_0010dac2;
  }
  local_80 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78 = 0;
  local_70 = 6;
  local_a8 = 0;
  local_b0 = 0;
  local_68 = &_LC14;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_b0 == 0) {
LAB_0010daf8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010daf8;
    StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
    if (local_60._8_8_ == local_a0) {
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_a0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
  if (local_90._0_8_ != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    local_90._0_8_ = local_60._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
  }
  if (local_90._8_8_ != local_60._8_8_) {
    StringName::unref();
    local_90._8_8_ = local_60._8_8_;
    local_60._8_8_ = 0;
  }
  lVar9 = local_48;
  local_80 = CONCAT44(local_80._4_4_,local_50);
  if (local_78 == local_48) {
    local_70 = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = local_48;
    local_70 = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar7 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
  uVar8 = local_90._8_8_;
  uVar7 = local_90._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_90._8_8_;
  local_90 = auVar6 << 0x40;
  *puVar10 = (undefined4)local_98;
  *(undefined8 *)(puVar10 + 2) = uVar7;
  *(undefined8 *)(puVar10 + 4) = uVar8;
  puVar10[6] = (undefined4)local_80;
  *(long *)(puVar10 + 8) = local_78;
  puVar10[10] = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_0010dac2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar10;
}



/* MethodBind* create_method_bind<Time, Dictionary, long>(Dictionary (Time::*)(long) const) */

MethodBind * create_method_bind<Time,Dictionary,long>(_func_Dictionary_long *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary_long **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001178f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, String, long, bool>(String (Time::*)(long, bool) const) */

MethodBind * create_method_bind<Time,String,long,bool>(_func_String_long_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_long_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117950;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, String, long>(String (Time::*)(long) const) */

MethodBind * create_method_bind<Time,String,long>(_func_String_long *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_long **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001179b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, Dictionary, String const&, bool>(Dictionary (Time::*)(String
   const&, bool) const) */

MethodBind *
create_method_bind<Time,Dictionary,String_const&,bool>(_func_Dictionary_String_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117a10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, String, Dictionary const&, bool>(String (Time::*)(Dictionary
   const&, bool) const) */

MethodBind *
create_method_bind<Time,String,Dictionary_const&,bool>(_func_String_Dictionary_ptr_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_Dictionary_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117a70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, long, Dictionary const&>(long (Time::*)(Dictionary const&)
   const) */

MethodBind * create_method_bind<Time,long,Dictionary_const&>(_func_long_Dictionary_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_long_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117ad0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, long, String const&>(long (Time::*)(String const&) const) */

MethodBind * create_method_bind<Time,long,String_const&>(_func_long_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_long_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117b30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, Dictionary, bool>(Dictionary (Time::*)(bool) const) */

MethodBind * create_method_bind<Time,Dictionary,bool>(_func_Dictionary_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117b90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, String, bool, bool>(String (Time::*)(bool, bool) const) */

MethodBind * create_method_bind<Time,String,bool,bool>(_func_String_bool_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_bool_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117bf0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, String, bool>(String (Time::*)(bool) const) */

MethodBind * create_method_bind<Time,String,bool>(_func_String_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117c50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, Dictionary>(Dictionary (Time::*)() const) */

MethodBind * create_method_bind<Time,Dictionary>(_func_Dictionary *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117cb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, double>(double (Time::*)() const) */

MethodBind * create_method_bind<Time,double>(_func_double *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117d10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Time, unsigned long>(unsigned long (Time::*)() const) */

MethodBind * create_method_bind<Time,unsigned_long>(_func_ulong *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_ulong **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00117d70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = &_LC0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

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
          plVar6 = plVar6 + 1;
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



/* Time::_bind_methods() [clone .cold] */

void Time::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Time::_initialize_classv() */

void Time::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "Time";
    local_50 = 0;
    local_30 = 4;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (undefined *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_0010eeb5;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_0010eeb5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010f148) */
/* WARNING: Removing unreachable block (ram,0x0010f2dd) */
/* WARNING: Removing unreachable block (ram,0x0010f2e9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<unsigned long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<unsigned_long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f4e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      uVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,uVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010f4e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<unsigned_long>::validated_call
          (MethodBindTRC<unsigned_long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f7d2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0010f7d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<unsigned long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<unsigned_long>::ptrcall
          (MethodBindTRC<unsigned_long> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f9d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_0010f9d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  double dVar7;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc40;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      dVar7 = (double)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,dVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0010fc40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fea4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar5;
LAB_0010fea4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001100a3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar5;
LAB_001100a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110330;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00110330:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10f338;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      ppVVar2 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar2 + -2,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001105a9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_001105a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10f338;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011079a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)(pcVar2 + (long)param_2 + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011079a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,bool>::validated_call
          (MethodBindTRC<String,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001109cc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_001109cc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,bool>::ptrcall
          (MethodBindTRC<String,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110bf0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2 != '\0');
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00110bf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,bool,bool>::validated_call
          (MethodBindTRC<String,bool,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110e12;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),(*param_2)[8],param_2[1][8]);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00110e12:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,bool,bool>::ptrcall
          (MethodBindTRC<String,bool,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011104b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2 != '\0',
            *param_2[1] != '\0');
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_0011104b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary,bool>::validated_call
          (MethodBindTRC<Dictionary,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111230;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00111230:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary,bool>::ptrcall
          (MethodBindTRC<Dictionary,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111444;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),**param_2 != '\0');
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00111444:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, String const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<long,String_const&>::validated_call
          (MethodBindTRC<long,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011163a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_0011163a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long,String_const&>::ptrcall
          (MethodBindTRC<long,String_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111836;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00111836:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<long,Dictionary_const&>::validated_call
          (MethodBindTRC<long,Dictionary_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111a3a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8);
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00111a3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<long,Dictionary_const&>::ptrcall
          (MethodBindTRC<long,Dictionary_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111c36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60),*param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_00111c36:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Dictionary const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::validated_call
          (MethodBindTRC<String,Dictionary_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111e94;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00111e94:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, Dictionary const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::ptrcall
          (MethodBindTRC<String,Dictionary_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001120c2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_001120c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, String const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::validated_call
          (MethodBindTRC<Dictionary,String_const&,bool> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001122b9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2 + 8,param_2[1][8]);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_001122b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, String const&, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::ptrcall
          (MethodBindTRC<Dictionary,String_const&,bool> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001124d8;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1] != '\0');
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_001124d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,long>::validated_call
          (MethodBindTRC<String,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011272c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_0011272c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,long>::ptrcall
          (MethodBindTRC<String,long> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011294a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_0011294a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String,long,bool>::validated_call
          (MethodBindTRC<String,long,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112b72;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8),
            param_2[1][8]);
  if (*(char **)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00112b72:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String,long,bool>::ptrcall
          (MethodBindTRC<String,long,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112da5;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2,*param_2[1] != '\0');
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  pcVar1 = local_48;
  if (local_48 != (char *)0x0) {
    LOCK();
    plVar3 = (long *)(local_48 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = (char *)0x0;
      Memory::free_static(pcVar1 + -0x10,false);
    }
  }
LAB_00112da5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, long>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary,long>::validated_call
          (MethodBindTRC<Dictionary,long> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00112f90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined8 *)(*param_2 + 8));
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_00112f90:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, long>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary,long>::ptrcall
          (MethodBindTRC<Dictionary,long> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011319e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011319e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Dictionary,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_68 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00113490;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001134e0;
LAB_001134d0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001134e0:
        uVar8 = 4;
        goto LAB_00113485;
      }
      if (in_R8D == 1) goto LAB_001134d0;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,1);
    uVar4 = _LC144;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = Variant::operator_cast_to_bool(pVVar12);
    (*(code *)pVVar13)((Dictionary *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),bVar7);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_00113485:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_00113490:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<String, bool, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<String,bool,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011389c;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar8 != 0) goto LAB_001138e0;
      this = *(Variant **)param_4;
LAB_001138fd:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar8) {
LAB_001138e0:
        uVar9 = 4;
        goto LAB_001138cd;
      }
      if (in_R8D == 0) {
        lVar11 = (long)(iVar13 + -2);
        if (lVar2 <= lVar11) goto LAB_001139d0;
        this = pVVar15 + lVar11 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001138fd;
      }
      lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar8));
      if (lVar2 <= lVar11) {
LAB_001139d0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,1);
    uVar4 = _LC146;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC144;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar7 = Variant::operator_cast_to_bool(this);
    (*(code *)pVVar14)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar12 + (long)pVVar1),
                       bVar7,bVar6);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar9 = 3;
LAB_001138cd:
    *in_R9 = uVar9;
    in_R9[2] = 2;
  }
LAB_0011389c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00113c70;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00113cc0;
LAB_00113cb0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00113cc0:
        uVar7 = 4;
        goto LAB_00113c65;
      }
      if (in_R8D == 1) goto LAB_00113cb0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,1);
    uVar4 = _LC144;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar11);
    (*(code *)pVVar12)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       bVar6);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00113c65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00113c70:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Dictionary, String const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Dictionary,String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011406c;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_001140b0;
      pVVar12 = *(Variant **)param_4;
LAB_001140cd:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_001140b0:
        uVar8 = 4;
        goto LAB_0011409d;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_001141a0;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001140cd;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_001141a0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,1);
    uVar4 = _LC146;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    (*(code *)pVVar14)((Dictionary *)&local_70,(Variant *)((long)plVar11 + (long)pVVar1),
                       (Variant *)&local_68,bVar6);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0011409d:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0011406c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<long,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114440;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00114490;
LAB_00114480:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_00114490:
        uVar5 = 4;
        goto LAB_00114435;
      }
      if (in_R8D == 1) goto LAB_00114480;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar3 = _LC147;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    lVar6 = (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,lVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar5 = 3;
LAB_00114435:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_00114440:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<String, Dictionary const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<String,Dictionary_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011483c;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_00114880;
      pVVar12 = *(Variant **)param_4;
LAB_0011489d:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_00114880:
        uVar8 = 4;
        goto LAB_0011486d;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_00114970;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011489d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_00114970:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar15,1);
    uVar4 = _LC146;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar15);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x1b);
    uVar4 = _LC148;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    (*(code *)pVVar14)((CowData<char32_t> *)&local_70,(Variant *)((long)plVar11 + (long)pVVar1),
                       (Variant *)&local_68,bVar6);
    Variant::Variant((Variant *)local_58,(String *)&local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar8 = 3;
LAB_0011486d:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_0011483c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<long,Dictionary_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114c10;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00114c60;
LAB_00114c50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar7 = *(long *)(pVVar11 + -8);
      if ((int)lVar7 < (int)(in_R8D ^ 1)) {
LAB_00114c60:
        uVar6 = 4;
        goto LAB_00114c05;
      }
      if (in_R8D == 1) goto LAB_00114c50;
      lVar9 = (long)((int)lVar7 + -1);
      if (lVar7 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x1b);
    uVar3 = _LC148;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_68);
    lVar7 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,lVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00114c05:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00114c10:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Dictionary, long>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindTRC<Dictionary,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar9 = (long *)(local_70 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00114fd0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00115020;
LAB_00115010:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_00115020:
        uVar5 = 4;
        goto LAB_00114fc5;
      }
      if (in_R8D == 1) goto LAB_00115010;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(pVVar10);
    (*(code *)pVVar11)((Dictionary *)&local_68,(Variant *)((long)plVar9 + (long)pVVar1),lVar6);
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Dictionary::~Dictionary((Dictionary *)&local_68);
  }
  else {
    uVar5 = 3;
LAB_00114fc5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_00114fd0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<String, long, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<String,long,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *this;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001153dc;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00115420;
      this = *(Variant **)param_4;
LAB_0011543d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar8 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar8;
      if (iVar12 < iVar6) {
LAB_00115420:
        uVar7 = 4;
        goto LAB_0011540d;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar8 <= lVar10) goto LAB_00115510;
        this = pVVar14 + lVar10 * 0x18;
      }
      else {
        this = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011543d;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar8 <= lVar10) {
LAB_00115510:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar14 = pVVar14 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar14,1);
    uVar3 = _LC146;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    bVar5 = Variant::operator_cast_to_bool(pVVar14);
    cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar8 = Variant::operator_cast_to_long(this);
    (*(code *)pVVar13)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar11 + (long)pVVar1),
                       lVar8,bVar5);
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0011540d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_001153dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String,long>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC140,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001157b0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00115800;
LAB_001157f0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar6 = *(long *)(pVVar10 + -8);
      if ((int)lVar6 < (int)(in_R8D ^ 1)) {
LAB_00115800:
        uVar5 = 4;
        goto LAB_001157a5;
      }
      if (in_R8D == 1) goto LAB_001157f0;
      lVar8 = (long)((int)lVar6 + -1);
      if (lVar6 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar6,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar3 = _LC149;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    lVar6 = Variant::operator_cast_to_long(pVVar10);
    (*(code *)pVVar11)((CowData<char32_t> *)&local_68,(Variant *)((long)plVar9 + (long)pVVar1),lVar6
                      );
    Variant::Variant((Variant *)local_58,(String *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar5 = 3;
LAB_001157a5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_001157b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<bool>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00115a37;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00115b35:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00115b35;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00115a37:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Dictionary, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<bool>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00115cf5;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x1b;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00115e07:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00115e07;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00115cf5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<bool>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00115ef5;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 4;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00116007:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00116007;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00115ef5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, bool, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,bool,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_001161d4;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 4;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00116207:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00116207;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001161d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String, long, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,long,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  int local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar11 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    iVar10 = 1;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_bc = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    if (in_EDX == 0) {
      local_a8 = 0;
      local_68 = &_LC14;
      local_b0 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_0011657b:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_0011657b;
        StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
        if (local_60._8_8_ == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_a0;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60._0_8_;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_60._8_8_;
        local_60 = auVar5 << 0x40;
      }
      if (local_90._8_8_ != local_60._8_8_) {
        StringName::unref();
        local_90._8_8_ = local_60._8_8_;
        local_60._8_8_ = 0;
      }
      lVar9 = local_48;
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 == local_48) {
        local_70 = local_40;
        if (local_48 != 0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_70 = local_40;
      }
      if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
        StringName::unref();
      }
      uVar7 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_60._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_60._8_8_;
          local_60 = auVar6 << 0x40;
          Memory::free_static((void *)(uVar7 + -0x10),false);
        }
      }
      iVar10 = local_bc + 1;
    }
    local_bc = iVar10;
    call_get_argument_type_info_helper<bool>(in_EDX,&local_bc,(PropertyInfo *)&local_98);
    uVar8 = local_90._8_8_;
    uVar7 = local_90._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_90._8_8_;
    local_90 = auVar3 << 0x40;
    *puVar11 = (undefined4)local_98;
    *(undefined8 *)(puVar11 + 2) = uVar7;
    *(undefined8 *)(puVar11 + 4) = uVar8;
    puVar11[6] = (undefined4)local_80;
    *(long *)(puVar11 + 8) = local_78;
    puVar11[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0011640d;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = &_LC14;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar11 = 4;
  puVar11[6] = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar11[10] = 6;
LAB_00116447:
    StringName::operator=((StringName *)(puVar11 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_a0);
    puVar11[10] = 6;
    if (puVar11[6] != 0x11) goto LAB_00116447;
    StringName::StringName((StringName *)&local_68,(String *)(puVar11 + 8),false);
    if (*(undefined **)(puVar11 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar11 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0011640d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar11;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00116747;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116845:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116845;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00116747:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Dictionary, String const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary,String_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<String_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00116ae4;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 0x1b;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00116b17:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00116b17;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00116ae4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<long,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00116c25;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00116d37:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00116d37;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00116c25:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Dictionary const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Dictionary_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00116db7;
  local_78 = 0;
  local_68 = &_LC14;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00116eb5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00116eb5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00116db7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<String, Dictionary const&, bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String,Dictionary_const&,bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<Dictionary_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<bool>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar5 = local_60._0_8_;
    uVar6 = local_60._8_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *puVar7 = local_68._0_4_;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_50;
    *(undefined8 *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00117154;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._0_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar7 = 4;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar7[10] = 6;
LAB_00117187:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_78);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_00117187;
    StringName::StringName((StringName *)&local_68,(String *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00117154:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<long, Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<long,Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<Dictionary_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00117295;
  }
  local_70 = 0;
  local_68 = &_LC14;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001173a7:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_001173a7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00117295:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<unsigned long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<unsigned_long>::~MethodBindTRC(MethodBindTRC<unsigned_long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,bool>::~MethodBindTRC(MethodBindTRC<String,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, bool, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,bool,bool>::~MethodBindTRC(MethodBindTRC<String,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary, bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,bool>::~MethodBindTRC(MethodBindTRC<Dictionary,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String,long>::~MethodBindTRC(MethodBindTRC<String,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long, String const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,String_const&>::~MethodBindTRC(MethodBindTRC<long,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<long, Dictionary const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<long,Dictionary_const&>::~MethodBindTRC(MethodBindTRC<long,Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, Dictionary const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,Dictionary_const&,bool>::~MethodBindTRC
          (MethodBindTRC<String,Dictionary_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary, String const&, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Dictionary,String_const&,bool>::~MethodBindTRC
          (MethodBindTRC<Dictionary,String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String, long, bool>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<String,long,bool>::~MethodBindTRC(MethodBindTRC<String,long,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary, long>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary,long>::~MethodBindTRC(MethodBindTRC<Dictionary,long> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.