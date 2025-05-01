
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorNetworkProfiler::_notification(int) [clone .part.0] */

void EditorNetworkProfiler::_notification(int param_1)

{
  StringName *pSVar1;
  char cVar2;
  undefined4 in_register_0000003c;
  long lVar3;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    Button::set_button_icon(*(Ref **)(lVar3 + 0xa18));
  }
  else {
    Button::set_button_icon(*(Ref **)(lVar3 + 0xa18));
  }
  Button::set_button_icon(*(Ref **)(lVar3 + 0xa20));
  LineEdit::set_right_icon(*(Ref **)(lVar3 + 0xa30));
  LineEdit::set_right_icon(*(Ref **)(lVar3 + 0xa38));
  local_68 = CONCAT44(_LC31._4_4_,(undefined4)_LC31);
  uStack_60 = CONCAT44(_LC32,_UNK_0010f0a8);
  pSVar1 = *(StringName **)(lVar3 + 0xa30);
  local_58 = Color::operator*((Color *)(lVar3 + 0xb40),(Color *)&local_68);
  StringName::StringName((StringName *)&local_70,"font_uneditable_color",false);
  Control::add_theme_color_override(pSVar1,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(lVar3 + 0xa38);
  local_68 = CONCAT44(_LC31._4_4_,(undefined4)_LC31);
  uStack_60 = CONCAT44(_LC32,_UNK_0010f0a8);
  local_58 = Color::operator*((Color *)(lVar3 + 0xb50),(Color *)&local_68);
  StringName::StringName((StringName *)&local_70,"font_uneditable_color",false);
  Control::add_theme_color_override(pSVar1,(Color *)&local_70);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::_lookup_pos(ObjectID const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
::_lookup_pos(HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
              *this,ObjectID *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(ObjectID **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

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



/* EditorNetworkProfiler::_notification(int) */

void __thiscall EditorNetworkProfiler::_notification(EditorNetworkProfiler *this,int param_1)

{
  if (param_1 != 0x2d) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorNetworkProfiler::pop_missing_node_data() */

void EditorNetworkProfiler::pop_missing_node_data(void)

{
  int iVar1;
  int iVar2;
  long in_RSI;
  Array *in_RDI;
  ObjectID *pOVar3;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  iVar1 = *(int *)(in_RSI + 0xafc);
  if (iVar1 != 0) {
    pOVar3 = *(ObjectID **)(in_RSI + 0xad8);
    iVar2 = 1;
    while( true ) {
      Variant::Variant((Variant *)local_58,pOVar3);
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar1 <= iVar2) break;
      iVar2 = iVar2 + 1;
      pOVar3 = pOVar3 + 8;
    }
    if ((*(long *)(in_RSI + 0xad8) != 0) && (*(int *)(in_RSI + 0xafc) != 0)) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xaf8) * 4) != 0) {
        memset(*(void **)(in_RSI + 0xaf0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0xaf8) * 4) * 4);
      }
      *(undefined4 *)(in_RSI + 0xafc) = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::is_profiling() */

void EditorNetworkProfiler::is_profiling(void)

{
  BaseButton::is_pressed();
  return;
}



/* EditorNetworkProfiler::add_sync_frame_data(MultiplayerDebugger::SyncInfo const&) */

void __thiscall
EditorNetworkProfiler::add_sync_frame_data(EditorNetworkProfiler *this,SyncInfo *param_1)

{
  HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
  *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  
  cVar10 = BaseButton::is_disabled();
  if (cVar10 != '\0') {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  this_00 = (HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
             *)(this + 0xa78);
  this[0xa0d] = (EditorNetworkProfiler)0x1;
  if ((*(long *)(this + 0xa80) != 0) && (*(int *)(this + 0xaa4) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4));
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xaa0) * 8);
    uVar11 = *(long *)param_1 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar16 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar16 = 1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar16 * lVar12;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar18;
    lVar15 = SUB168(auVar1 * auVar5,8);
    uVar17 = *(uint *)(*(long *)(this + 0xa88) + lVar15 * 4);
    iVar14 = SUB164(auVar1 * auVar5,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if (((uint)uVar16 == uVar17) &&
           (*(long *)param_1 == *(long *)(*(long *)(*(long *)(this + 0xa80) + lVar15 * 8) + 0x10)))
        {
          lVar12 = HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
                   ::operator[](this_00,(ObjectID *)param_1);
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + *(int *)(param_1 + 0x18);
          lVar12 = HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
                   ::operator[](this_00,(ObjectID *)param_1);
          *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + *(int *)(param_1 + 0x20);
          goto LAB_00100632;
        }
        uVar19 = uVar19 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)(iVar14 + 1) * lVar12;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar18;
        lVar15 = SUB168(auVar2 * auVar6,8);
        uVar17 = *(uint *)(*(long *)(this + 0xa88) + lVar15 * 4);
        iVar14 = SUB164(auVar2 * auVar6,8);
      } while ((uVar17 != 0) &&
              (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar17 * lVar12, auVar7._8_8_ = 0,
              auVar7._0_8_ = uVar18, auVar4._8_8_ = 0,
              auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xaa0) * 4) + iVar14) -
                                    SUB164(auVar3 * auVar7,8)) * lVar12, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar18, uVar19 <= SUB164(auVar4 * auVar8,8)));
    }
  }
  puVar13 = (undefined8 *)
            HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
            ::operator[](this_00,(ObjectID *)param_1);
  uVar9 = *(undefined8 *)(param_1 + 8);
  *puVar13 = *(undefined8 *)param_1;
  puVar13[1] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar13[2] = *(undefined8 *)(param_1 + 0x10);
  puVar13[3] = uVar9;
  puVar13[4] = *(undefined8 *)(param_1 + 0x20);
LAB_00100632:
  lVar12 = HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
           ::operator[](this_00,(ObjectID *)param_1);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(lVar12 + 0x1c) = *(int *)(param_1 + 0x1c) / *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)(lVar12 + 0x24) = *(int *)(param_1 + 0x24) / *(int *)(param_1 + 0x20);
  }
  return;
}



/* EditorNetworkProfiler::_update_button_text() */

void __thiscall EditorNetworkProfiler::_update_button_text(EditorNetworkProfiler *this)

{
  char cVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_pressed();
  if (cVar1 == '\0') {
    Button::set_button_icon(*(Ref **)(this + 0xa18));
    pSVar2 = *(String **)(this + 0xa18);
    local_50 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Start";
    local_40 = 5;
  }
  else {
    Button::set_button_icon(*(Ref **)(this + 0xa18));
    pSVar2 = *(String **)(this + 0xa18);
    local_50 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Stop";
    local_40 = 4;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::_activate_pressed() */

void __thiscall EditorNetworkProfiler::_activate_pressed(EditorNetworkProfiler *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _update_button_text(this);
  cVar1 = BaseButton::is_pressed();
  if (cVar1 == '\0') {
    Timer::stop();
  }
  else {
    Timer::start(_LC20);
  }
  bVar2 = (bool)BaseButton::is_pressed();
  if ((_activate_pressed()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_activate_pressed()::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_activate_pressed()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_activate_pressed()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_activate_pressed()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,bVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_activate_pressed()::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorNetworkProfiler::set_profiling(bool) */

void EditorNetworkProfiler::set_profiling(bool param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined7 in_register_00000039;
  EditorNetworkProfiler *this;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  this = (EditorNetworkProfiler *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa18),0));
  _update_button_text(this);
  bVar2 = (bool)BaseButton::is_pressed();
  if ((set_profiling(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&set_profiling(bool)::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&set_profiling(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&set_profiling(bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&set_profiling(bool)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,bVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_profiling(bool)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorNetworkProfiler::stopped() */

void __thiscall EditorNetworkProfiler::stopped(EditorNetworkProfiler *this)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  set_profiling(SUB81(this,0));
  Timer::stop();
  return;
}



/* EditorNetworkProfiler::_autostart_toggled(bool) */

void __thiscall EditorNetworkProfiler::_autostart_toggled(EditorNetworkProfiler *this,bool param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  local_58 = "autostart_network_profiler";
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "debug_options";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorRunBar::update_profiler_autostart_indicator();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::set_bandwidth(int, int) */

void EditorNetworkProfiler::set_bandwidth(int param_1,int param_2)

{
  undefined8 uVar1;
  StringName *pSVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 uVar4;
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  CowData<char32_t> local_80 [8];
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_40;
  
  lVar3 = CONCAT44(in_register_0000003c,param_1);
  uVar1 = *(undefined8 *)(lVar3 + 0xa30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::humanize_size((ulong)local_80);
  local_78 = &_LC15;
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC33;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  TTR(local_88,(String *)&local_98);
  vformat<String>((CowData<char32_t> *)&local_78,local_88,local_80);
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref(local_80);
  uVar1 = *(undefined8 *)(lVar3 + 0xa38);
  String::humanize_size((ulong)local_80);
  local_78 = &_LC15;
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC33;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  TTR(local_88,(String *)&local_98);
  vformat<String>((CowData<char32_t> *)&local_78,local_88,local_80);
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref(local_80);
  pSVar2 = *(StringName **)(lVar3 + 0xa30);
  uVar4 = _LC32;
  if (0 < param_2) {
    uVar4 = (undefined4)_LC31;
  }
  uVar1 = CONCAT44(_LC31._4_4_,(undefined4)_LC31);
  _local_60 = CONCAT44(uVar4,0x3f800000);
  local_68 = uVar1;
  local_58 = Color::operator*((Color *)(lVar3 + 0xb40),(Color *)&local_68);
  StringName::StringName((StringName *)&local_78,"font_uneditable_color",false);
  Control::add_theme_color_override(pSVar2,(Color *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  pSVar2 = *(StringName **)(lVar3 + 0xa38);
  uVar4 = _LC32;
  if (0 < in_EDX) {
    uVar4 = (undefined4)_LC31;
  }
  _local_60 = CONCAT44(uVar4,0x3f800000);
  local_68 = uVar1;
  local_58 = Color::operator*((Color *)(lVar3 + 0xb50),(Color *)&local_68);
  StringName::StringName((StringName *)&local_78,"font_uneditable_color",false);
  Control::add_theme_color_override(pSVar2,(Color *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorNetworkProfiler::EditorNetworkProfiler() */

void __thiscall EditorNetworkProfiler::EditorNetworkProfiler(EditorNetworkProfiler *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Vector2 *pVVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  FlowContainer *this_00;
  Button *pBVar8;
  CheckBox *this_01;
  String *pSVar9;
  CallableCustom *pCVar10;
  Control *pCVar11;
  BoxContainer *this_02;
  Label *pLVar12;
  LineEdit *pLVar13;
  SplitContainer *this_03;
  Tree *pTVar14;
  Timer *this_04;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  String local_98 [8];
  long local_90;
  undefined8 local_88 [2];
  int local_78 [8];
  undefined8 local_58 [3];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010e8d0;
  *(undefined2 *)(this + 0xa0c) = 1;
  uVar6 = _LC36;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb30) = (undefined1  [16])0x0;
  uVar5 = _UNK_0010f0b8;
  uVar3 = __LC37;
  *(undefined8 *)(this + 0xa70) = uVar6;
  *(undefined8 *)(this + 0xaa0) = uVar6;
  *(undefined8 *)(this + 0xad0) = uVar6;
  *(undefined8 *)(this + 0xaf8) = uVar6;
  *(undefined8 *)(this + 0xb40) = uVar3;
  *(undefined8 *)(this + 0xb48) = uVar5;
  *(undefined8 *)(this + 0xb50) = uVar3;
  *(undefined8 *)(this + 0xb58) = uVar5;
  this_00 = (FlowContainer *)operator_new(0xa28,"");
  FlowContainer::FlowContainer(this_00,false);
  postinitialize_handler((Object *)this_00);
  auVar16._0_8_ = EditorScale::get_scale();
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = (float)auVar16._0_8_ * __LC38;
  if (EditorNetworkProfiler()::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar17._0_8_,
                                &EditorNetworkProfiler()::{lambda()#1}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorNetworkProfiler()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorNetworkProfiler()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorNetworkProfiler()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_00,0x1049e8);
  auVar18._0_8_ = EditorScale::get_scale();
  auVar18._8_8_ = extraout_XMM0_Qb_00;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = (float)auVar18._0_8_ + (float)auVar18._0_8_;
  if (EditorNetworkProfiler()::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(auVar19._0_8_,
                                &EditorNetworkProfiler()::{lambda()#2}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorNetworkProfiler()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorNetworkProfiler()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorNetworkProfiler()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_00,0x1049d8);
  Node::add_child(this,this_00,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_88[0] = 0;
  Button::Button(pBVar8,(String *)local_88);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa18) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa18),0));
  pSVar9 = *(String **)(this + 0xa18);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Start");
  TTR(local_98,(String *)&local_90);
  Button::set_text(pSVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorNetworkProfiler>
            ((EditorNetworkProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorNetworkProfiler::_activate_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa18),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_88[0] = 0;
  Button::Button(pBVar8,(String *)local_88);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa20) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar9 = *(String **)(this + 0xa20);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Clear");
  TTR(local_98,(String *)&local_90);
  Button::set_text(pSVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar1 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorNetworkProfiler>
            ((EditorNetworkProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorNetworkProfiler::_clear_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa20),0,0);
  this_01 = (CheckBox *)operator_new(0xc60,"");
  local_88[0] = 0;
  CheckBox::CheckBox(this_01,(String *)local_88);
  postinitialize_handler((Object *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Autostart");
  TTR(local_98,(String *)&local_90);
  Button::set_text((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  pSVar9 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,false);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"autostart_network_profiler");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"debug_options");
  EditorSettings::get_project_metadata((String *)local_78,pSVar9,(Variant *)&local_90);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(this_01,0));
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pcVar2 = *(code **)(*(long *)this_01 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar10 = &PTR_hash_0010ecd8;
  *(undefined8 *)(pCVar10 + 0x30) = uVar3;
  *(code **)(pCVar10 + 0x38) = _autostart_toggled;
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined **)(pCVar10 + 0x20) = &_LC15;
  *(EditorNetworkProfiler **)(pCVar10 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "EditorNetworkProfiler::_autostart_toggled";
  Callable::Callable((Callable *)local_88,pCVar10);
  (*pcVar2)(this_01,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_00,this_01,0,0);
  pCVar11 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar11);
  postinitialize_handler((Object *)pCVar11);
  Control::set_h_size_flags(pCVar11,3);
  Node::add_child(this_00,pCVar11,0,0);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,false);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0010e1e0;
  postinitialize_handler((Object *)this_02);
  EditorScale::get_scale();
  if (EditorNetworkProfiler()::{lambda()#3}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&EditorNetworkProfiler()::{lambda()#3}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&EditorNetworkProfiler()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorNetworkProfiler()::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorNetworkProfiler()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::add_theme_constant_override((StringName *)this_02,0x1049c8);
  Node::add_child(this_00,this_02,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_88[0] = 0;
  Label::Label(pLVar12,(String *)local_88);
  postinitialize_handler((Object *)pLVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Network");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Down");
  TTR(local_98,(String *)&local_90);
  Label::set_text((String *)pLVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(this_02,pLVar12,0,0);
  pLVar13 = (LineEdit *)operator_new(0xbb0,"");
  local_88[0] = 0;
  LineEdit::LineEdit(pLVar13,(String *)local_88);
  postinitialize_handler((Object *)pLVar13);
  *(LineEdit **)(this + 0xa30) = pLVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa30),0));
  pVVar4 = *(Vector2 **)(this + 0xa30);
  fVar15 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar15 * _LC57._4_4_,fVar15 * (float)_LC57);
  Control::set_custom_minimum_size(pVVar4);
  LineEdit::set_horizontal_alignment(*(undefined8 *)(this + 0xa30),2);
  Node::add_child(this_02,*(undefined8 *)(this + 0xa30),0,0);
  pCVar11 = (Control *)operator_new(0x9c8,"");
  Control::Control(pCVar11);
  postinitialize_handler((Object *)pCVar11);
  fVar15 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar15 * _LC50._4_4_,fVar15 * (float)_LC50);
  Control::set_custom_minimum_size((Vector2 *)pCVar11);
  Node::add_child(this_02,pCVar11,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_88[0] = 0;
  Label::Label(pLVar12,(String *)local_88);
  postinitialize_handler((Object *)pLVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"Network");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Up");
  TTR(local_98,(String *)&local_90);
  Label::set_text((String *)pLVar12);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Node::add_child(this_02,pLVar12,0,0);
  pLVar13 = (LineEdit *)operator_new(0xbb0,"");
  local_88[0] = 0;
  LineEdit::LineEdit(pLVar13,(String *)local_88);
  postinitialize_handler((Object *)pLVar13);
  *(LineEdit **)(this + 0xa38) = pLVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa38),0));
  pVVar4 = *(Vector2 **)(this + 0xa38);
  fVar15 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar15 * _LC57._4_4_,fVar15 * (float)_LC57);
  Control::set_custom_minimum_size(pVVar4);
  LineEdit::set_horizontal_alignment(*(undefined8 *)(this + 0xa38),2);
  Node::add_child(this_02,*(undefined8 *)(this + 0xa38),0,0);
  set_bandwidth((int)this,0);
  this_03 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_03,false);
  this_03[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_0010e558;
  postinitialize_handler((Object *)this_03);
  Node::add_child(this,this_03,0);
  Control::set_v_size_flags(this_03,3);
  Control::set_h_size_flags(this_03,3);
  EditorScale::get_scale();
  SplitContainer::set_split_offset((int)this_03);
  pTVar14 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar14);
  postinitialize_handler((Object *)pTVar14);
  *(Tree **)(this + 0xa28) = pTVar14;
  fVar15 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar15 * _LC53._4_4_,fVar15 * (float)_LC53);
  Control::set_custom_minimum_size((Vector2 *)pTVar14);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa28),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa28),3);
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xa28),0));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa28),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa28));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa28),0));
  uVar3 = *(undefined8 *)(this + 0xa28);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Node");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa28),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa28),false);
  uVar3 = *(undefined8 *)(this + 0xa28);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,0);
  uVar3 = *(undefined8 *)(this + 0xa28);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Incoming RPC");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa28),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa28),true);
  uVar3 = *(undefined8 *)(this + 0xa28);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,1);
  uVar3 = *(undefined8 *)(this + 0xa28);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Outgoing RPC");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa28),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa28),true);
  uVar3 = *(undefined8 *)(this + 0xa28);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,2);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa28),0);
  pTVar14 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar14);
  postinitialize_handler((Object *)pTVar14);
  *(Tree **)(this + 0xa40) = pTVar14;
  fVar15 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar15 * _LC53._4_4_,fVar15 * (float)_LC53);
  Control::set_custom_minimum_size((Vector2 *)pTVar14);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa40),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa40),3);
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xa40),0));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa40),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa40));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa40),0));
  uVar3 = *(undefined8 *)(this + 0xa40);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Root");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),false);
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,0);
  uVar3 = *(undefined8 *)(this + 0xa40);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Synchronizer");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,1);
  uVar3 = *(undefined8 *)(this + 0xa40);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Config");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,2);
  uVar3 = *(undefined8 *)(this + 0xa40);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Count");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,3);
  uVar3 = *(undefined8 *)(this + 0xa40);
  local_88[0] = 0;
  String::parse_latin1((String *)local_88,"");
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"Size");
  TTR(local_98,(String *)&local_90);
  Tree::set_column_title((int)uVar3,(String *)0x4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa40),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa40),true);
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,4);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar10 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar10);
  *(undefined **)(pCVar10 + 0x20) = &_LC15;
  *(EditorNetworkProfiler **)(pCVar10 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar10 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar10 = &PTR_hash_0010ed68;
  *(undefined8 *)(pCVar10 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar10 + 0x10) = 0;
  *(undefined8 *)(pCVar10 + 0x30) = uVar3;
  *(code **)(pCVar10 + 0x38) = _replication_button_clicked;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar10,(int)pCVar10 + 0x28);
  *(char **)(pCVar10 + 0x20) = "EditorNetworkProfiler::_replication_button_clicked";
  Callable::Callable((Callable *)local_88,pCVar10);
  StringName::StringName((StringName *)&local_90,"button_clicked",false);
  (*pcVar2)(plVar1,(String *)&local_90,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa40),0,0);
  this_04 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_04);
  postinitialize_handler((Object *)this_04);
  *(Timer **)(this + 0xa10) = this_04;
  Timer::set_wait_time(_LC67);
  plVar1 = *(long **)(this + 0xa10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<EditorNetworkProfiler>
            ((EditorNetworkProfiler *)local_88,(char *)this,
             (_func_void *)"&EditorNetworkProfiler::_refresh");
  StringName::StringName((StringName *)&local_90,"timeout",false);
  (*pcVar2)(plVar1,(String *)&local_90,(CowData<char32_t> *)local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
    return;
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



/* EditorNetworkProfiler::_replication_button_clicked(TreeItem*, int, int, MouseButton) */

void EditorNetworkProfiler::_replication_button_clicked(long *param_1,long param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  long local_a0;
  undefined8 local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    TreeItem::get_metadata((int)(Variant *)local_78);
    Variant::operator_cast_to_String((Variant *)&local_a0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_a0 != 0) && (*(int *)(local_a0 + -8) != 0)) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      cVar1 = ResourceLoader::exists((String *)&local_a0,(String *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (cVar1 != '\0') {
        local_98 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_a0);
        StringName::StringName((StringName *)&local_90,"open_request",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        (**(code **)(*param_1 + 0xd0))(param_1,(String *)&local_90,local_88,1);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* EditorNetworkProfiler::refresh_rpc_data() */

void __thiscall EditorNetworkProfiler::refresh_rpc_data(EditorNetworkProfiler *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  iVar2 = Tree::create_item(*(TreeItem **)(this + 0xa28),0);
  iVar3 = Tree::get_columns();
  plVar7 = *(long **)(this + 0xa60);
  if (plVar7 != (long *)0x0) {
    do {
      uVar4 = Tree::create_item(*(TreeItem **)(this + 0xa28),iVar2);
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          TreeItem::set_text_alignment(uVar4,iVar5,(iVar5 != 0) * '\x02');
          iVar5 = iVar6;
        } while (iVar3 != iVar6);
      }
      local_58 = (char *)0x0;
      if (plVar7[4] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(plVar7 + 4));
      }
      TreeItem::set_text(uVar4,0,(CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((int)plVar7[5] == 0) {
        local_60 = 0;
        local_58 = "-";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        TreeItem::set_text(uVar4,1,(CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else {
        String::humanize_size((ulong)local_68);
        lVar1 = plVar7[5];
        local_70 = 0;
        local_58 = "";
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_70);
        local_58 = "%d (%s)";
        local_78 = 0;
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_78);
        TTR((String *)&local_58,(String *)&local_78);
        vformat<int,String>((CowData<char32_t> *)&local_60,(CowData<char32_t> *)&local_58,(int)lVar1
                            ,local_68);
        TreeItem::set_text(uVar4,1,(CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref(local_68);
      }
      if ((int)plVar7[6] == 0) {
        local_60 = 0;
        local_58 = "-";
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_60);
        TreeItem::set_text(uVar4,2,(CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      else {
        String::humanize_size((ulong)local_68);
        lVar1 = plVar7[6];
        local_58 = "";
        local_70 = 0;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_70);
        local_58 = "%d (%s)";
        local_78 = 0;
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_78);
        TTR((String *)&local_58,(String *)&local_78);
        vformat<int,String>((CowData<char32_t> *)&local_60,(CowData<char32_t> *)&local_58,(int)lVar1
                            ,local_68);
        TreeItem::set_text(uVar4,2,(CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref(local_68);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::add_node_data(EditorNetworkProfiler::NodeInfo const&) */

void __thiscall EditorNetworkProfiler::add_node_data(EditorNetworkProfiler *this,NodeInfo *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if ((*(long *)(this + 0xab0) != 0) && (*(int *)(this + 0xad4) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xad0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xad0) * 8);
    uVar10 = *(long *)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar14 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar14 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(*(long *)(this + 0xab8) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (((uint)uVar14 == uVar15) &&
           (*(long *)param_1 == *(long *)(*(long *)(*(long *)(this + 0xab0) + lVar13 * 8) + 0x10)))
        {
          puVar11 = (undefined8 *)
                    HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
                    ::operator[]((HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
                                  *)(this + 0xaa8),(ObjectID *)param_1);
          *puVar11 = *(undefined8 *)param_1;
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 1),(CowData *)(param_1 + 8));
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)(param_1 + 0x10));
          this[0xa0d] = (EditorNetworkProfiler)0x1;
          return;
        }
        uVar17 = uVar17 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0xab8) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar15 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xad0) * 4) + iVar12) -
                                    SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error("add_node_data","modules/multiplayer/editor/editor_network_profiler.cpp",0xa9,
                   "Condition \"!node_data.has(p_info.id)\" is true.",0,0);
  return;
}



/* EditorNetworkProfiler::refresh_replication_data() */

void __thiscall EditorNetworkProfiler::refresh_replication_data(EditorNetworkProfiler *this)

{
  String *pSVar1;
  HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
  *this_00;
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
  Object *pOVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  long lVar23;
  ObjectID *pOVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  long *plVar29;
  long in_FS_OFFSET;
  long local_c0;
  CowData<char32_t> local_b8 [8];
  CowData<char32_t> local_b0 [8];
  long local_a8;
  long local_a0;
  Object *local_98;
  undefined1 local_90 [16];
  long local_78;
  long local_70;
  long local_68;
  ObjectID local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  iVar15 = Tree::create_item(*(TreeItem **)(this + 0xa40),0);
  plVar29 = *(long **)(this + 0xa90);
  if (plVar29 != (long *)0x0) {
    this_00 = (HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
               *)(this + 0xaa8);
    do {
      local_78 = plVar29[3];
      local_70 = plVar29[4];
      local_68 = plVar29[5];
      pOVar24 = (ObjectID *)&local_78;
      do {
        lVar19 = *(long *)pOVar24;
        if ((*(long *)(this + 0xab0) != 0) && (*(int *)(this + 0xad4) != 0)) {
          uVar26 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xad0) * 4)
                           );
          lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xad0) * 8);
          uVar17 = lVar19 * 0x3ffff - 1;
          uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
          uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
          uVar17 = uVar17 >> 0x16 ^ uVar17;
          uVar28 = uVar17 & 0xffffffff;
          if ((int)uVar17 == 0) {
            uVar28 = 1;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar28 * lVar20;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar26;
          lVar23 = SUB168(auVar2 * auVar6,8);
          uVar25 = *(uint *)(*(long *)(this + 0xab8) + lVar23 * 4);
          iVar22 = SUB164(auVar2 * auVar6,8);
          if (uVar25 != 0) {
            uVar27 = 0;
            do {
              if ((uVar25 == (uint)uVar28) &&
                 (lVar19 == *(long *)(*(long *)(*(long *)(this + 0xab0) + lVar23 * 8) + 0x10)))
              goto joined_r0x00102f25;
              uVar27 = uVar27 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(iVar22 + 1) * lVar20;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar26;
              lVar23 = SUB168(auVar3 * auVar7,8);
              uVar25 = *(uint *)(*(long *)(this + 0xab8) + lVar23 * 4);
              iVar22 = SUB164(auVar3 * auVar7,8);
            } while ((uVar25 != 0) &&
                    (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar25 * lVar20, auVar8._8_8_ = 0,
                    auVar8._0_8_ = uVar26, auVar5._8_8_ = 0,
                    auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(this + 0xad0) * 4) + iVar22) -
                                          SUB164(auVar4 * auVar8,8)) * lVar20, auVar9._8_8_ = 0,
                    auVar9._0_8_ = uVar26, uVar27 <= SUB164(auVar5 * auVar9,8)));
          }
        }
        HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert
                  ((ObjectID *)&local_98);
        local_98 = *(Object **)pOVar24;
        local_90 = (undefined1  [16])0x0;
        String::num_int64((long)&local_a0,(int)lVar19,true);
        if (local_a0 == 0) {
          lVar20 = 0;
          lVar19 = local_a0;
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_90 + 8));
          lVar19 = local_a0;
          local_a0 = 0;
          local_90._8_8_ = lVar19;
          lVar20 = local_90._0_8_;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        plVar21 = (long *)HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
                          ::operator[](this_00,pOVar24);
        *plVar21 = (long)local_98;
        if (plVar21[1] != lVar20) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar21 + 1));
          plVar21[1] = lVar20;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_90._8_8_;
          local_90 = auVar10 << 0x40;
        }
        if (plVar21[2] != lVar19) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar21 + 2));
          plVar21[2] = lVar19;
          local_90._8_8_ = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(local_90 + 8));
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
joined_r0x00102f25:
        pOVar24 = pOVar24 + 8;
      } while (pOVar24 != local_60);
      uVar18 = Tree::create_item(*(TreeItem **)(this + 0xa40),iVar15);
      lVar19 = HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
               ::operator[](this_00,(ObjectID *)(plVar29 + 5));
      HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
      ::operator[](this_00,(ObjectID *)(plVar29 + 3));
      lVar20 = HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
               ::operator[](this_00,(ObjectID *)(plVar29 + 4));
      String::get_file();
      TreeItem::set_text(uVar18,0,(ObjectID *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      StringName::StringName((StringName *)&local_a8,(String *)(lVar19 + 8),false);
      cVar14 = Control::has_theme_icon((StringName *)this,(StringName *)&local_a8);
      iVar22 = (int)uVar18;
      if (cVar14 == '\0') {
        local_98 = (Object *)0x0;
        if ((*(Object **)(this + 0xb00) != (Object *)0x0) &&
           (local_98 = *(Object **)(this + 0xb00), cVar14 = RefCounted::reference(), cVar14 == '\0')
           ) {
          local_98 = (Object *)0x0;
        }
        TreeItem::set_icon(iVar22,(Ref *)0x0);
        if (((local_98 != (Object *)0x0) &&
            (cVar14 = RefCounted::unreference(), pOVar13 = local_98, cVar14 != '\0')) &&
           (cVar14 = predelete_handler(local_98), cVar14 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
LAB_00103069:
        if (StringName::configured != '\0') {
LAB_0010306d:
          if (local_a8 != 0) {
            StringName::unref();
          }
        }
      }
      else {
        StringName::StringName((StringName *)&local_a0,(String *)(lVar19 + 8),false);
        Control::get_theme_icon((StringName *)&local_98,(StringName *)this);
        TreeItem::set_icon(iVar22,(Ref *)0x0);
        if (((local_98 != (Object *)0x0) &&
            (cVar14 = RefCounted::unreference(), pOVar13 = local_98, cVar14 != '\0')) &&
           (cVar14 = predelete_handler(local_98), cVar14 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        if (StringName::configured != '\0') {
          if (local_a0 != 0) {
            StringName::unref();
            goto LAB_00103069;
          }
          goto LAB_0010306d;
        }
      }
      TreeItem::set_tooltip_text(iVar22,(String *)0x0);
      String::get_file();
      TreeItem::set_text(uVar18,1,(ObjectID *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      TreeItem::set_icon(iVar22,(Ref *)0x1);
      TreeItem::set_tooltip_text(iVar22,(String *)0x1);
      pSVar1 = (String *)(lVar20 + 0x10);
      iVar16 = String::find((char *)pSVar1,0x104e87);
      cVar14 = String::begins_with((char *)pSVar1);
      if (cVar14 == '\0') {
LAB_00103111:
        local_98 = (Object *)0x0;
        if (*(long *)(lVar20 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pSVar1);
        }
        TreeItem::set_text(uVar18,2,(ObjectID *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        Variant::Variant((Variant *)local_58,"");
        TreeItem::set_metadata(iVar22,(Variant *)0x2);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        local_a0 = 0;
        local_98 = (Object *)&_LC15;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_90._8_8_;
        local_90 = auVar11 << 0x40;
        String::parse_latin1((StrRange *)&local_a0);
        cVar14 = ResourceLoader::exists(pSVar1,(String *)&local_a0);
        if ((iVar16 < 1) || (cVar14 == '\0')) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          goto LAB_00103111;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        String::substr((int)(ObjectID *)&local_98,(int)pSVar1);
        String::replace((char *)&local_c0,(char *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        String::substr((int)local_b8,(int)pSVar1);
        String::get_file();
        local_a0 = 0;
        if (local_c0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c0);
        }
        local_a8 = 0;
        local_98 = (Object *)0x104ea9;
        local_90._0_8_ = 7;
        String::parse_latin1((StrRange *)&local_a8);
        vformat<String,String>
                  ((ObjectID *)&local_98,(StrRange *)&local_a8,(StrRange *)&local_a0,local_b0);
        TreeItem::set_text(uVar18,2,(ObjectID *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref(local_b0);
        local_98 = (Object *)&_LC15;
        local_a0 = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_90._8_8_;
        local_90 = auVar12 << 0x40;
        String::parse_latin1((StrRange *)&local_a0);
        TreeItem::add_button(iVar22,(Ref *)0x2,(int)this + 0xb28,true,(String *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        TreeItem::set_tooltip_text(iVar22,(String *)0x2);
        Variant::Variant((Variant *)local_58,(String *)local_b8);
        TreeItem::set_metadata(iVar22,(Variant *)0x2);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref(local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
      lVar19 = plVar29[6];
      local_98 = (Object *)0x104eb1;
      local_a0 = 0;
      local_90._0_8_ = 7;
      String::parse_latin1((StrRange *)&local_a0);
      iVar16 = (int)(StrRange *)&local_a0;
      vformat<int,int>((String *)&local_98,iVar16,(int)lVar19);
      TreeItem::set_text(uVar18,3,(ObjectID *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      iVar22 = *(int *)((long)plVar29 + 0x34);
      local_a0 = 0;
      local_98 = (Object *)0x104eb1;
      local_90._0_8_ = 7;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<int,int>((String *)&local_98,iVar16,iVar22);
      TreeItem::set_text(uVar18,4,(ObjectID *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      plVar29 = (long *)*plVar29;
    } while (plVar29 != (long *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorNetworkProfiler::_refresh() */

void __thiscall EditorNetworkProfiler::_refresh(EditorNetworkProfiler *this)

{
  if (this[0xa0d] == (EditorNetworkProfiler)0x0) {
    return;
  }
  this[0xa0d] = (EditorNetworkProfiler)0x0;
  refresh_rpc_data(this);
  refresh_replication_data(this);
  return;
}



/* EditorNetworkProfiler::_clear_pressed() */

void __thiscall EditorNetworkProfiler::_clear_pressed(EditorNetworkProfiler *this)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  
  if ((*(long *)(this + 0xa50) != 0) && (*(int *)(this + 0xa74) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa70) * 4);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xa58) + lVar3) != 0) {
          *(int *)(*(long *)(this + 0xa58) + lVar3) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xa50) + lVar3 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xa50) + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar1 << 2 != lVar3);
    }
    *(undefined4 *)(this + 0xa74) = 0;
    *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xa80) != 0) && (*(int *)(this + 0xaa4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xa88) + lVar3) != 0) {
          *(int *)(*(long *)(this + 0xa88) + lVar3) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0xa80) + lVar3 * 2),false);
          *(undefined8 *)(*(long *)(this + 0xa80) + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while ((ulong)uVar1 << 2 != lVar3);
    }
    *(undefined4 *)(this + 0xaa4) = 0;
    *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xab0) != 0) && (*(int *)(this + 0xad4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xad0) * 4);
    if (uVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xab8) + lVar3) != 0) {
          *(int *)(*(long *)(this + 0xab8) + lVar3) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xab0) + lVar3 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x28));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xab0) + lVar3 * 2) = 0;
        }
        lVar3 = lVar3 + 4;
      } while (lVar3 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0xad4) = 0;
    *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xad8) != 0) && (*(int *)(this + 0xafc) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf8) * 4) != 0) {
      memset(*(void **)(this + 0xaf0),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf8) * 4) << 2);
    }
    *(undefined4 *)(this + 0xafc) = 0;
  }
  set_bandwidth((int)this,0);
  refresh_rpc_data(this);
  refresh_replication_data(this);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  return;
}



/* EditorNetworkProfiler::started() */

void __thiscall EditorNetworkProfiler::started(EditorNetworkProfiler *this)

{
  bool bVar1;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _clear_pressed(this);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  pSVar2 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "autostart_network_profiler";
  local_90 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar2,(Variant *)&local_98);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar1) {
    set_profiling(SUB81(this,0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Timer::start(_LC20);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::_bind_methods() */

void EditorNetworkProfiler::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  PropertyInfo local_e8 [48];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"enable");
  PropertyInfo::PropertyInfo(local_e8,1,(String *)&local_110,0,(String *)&local_108,6,&local_100);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"enable_profiling");
  local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"EditorNetworkProfiler");
  StringName::StringName((StringName *)&local_f0,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  local_100 = 0;
  local_108 = 0;
  String::parse_latin1((String *)&local_108,"");
  local_110 = 0;
  String::parse_latin1((String *)&local_110,"path");
  PropertyInfo::PropertyInfo(local_e8,4,(String *)&local_110,0,(String *)&local_108,6,&local_100);
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"open_request");
  local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_118 = 0;
  String::parse_latin1((String *)&local_118,"EditorNetworkProfiler");
  StringName::StringName((StringName *)&local_f0,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_f0,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorNetworkProfiler::_update_theme_item_cache() */

void EditorNetworkProfiler::_update_theme_item_cache(void)

{
  Object *pOVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  StringName *in_RDI;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  long local_40;
  Ref *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Control::_update_theme_item_cache();
  if (_update_theme_item_cache()::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(in_RDI + 0xb00),local_38);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if (_update_theme_item_cache()::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(in_RDI + 0xb08),local_38);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if (_update_theme_item_cache()::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  pOVar1 = *(Object **)(in_RDI + 0xb10);
  if (local_38 != (Ref *)pOVar1) {
    *(Ref **)(in_RDI + 0xb10) = local_38;
    if (local_38 != (Ref *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(in_RDI + 0xb10) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if (_update_theme_item_cache()::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  pOVar1 = *(Object **)(in_RDI + 0xb18);
  if (local_38 != (Ref *)pOVar1) {
    *(Ref **)(in_RDI + 0xb18) = local_38;
    if (local_38 != (Ref *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(in_RDI + 0xb18) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  StringName::StringName((StringName *)&local_40,"MultiplayerSynchronizer",false);
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  pOVar1 = *(Object **)(in_RDI + 0xb20);
  if (local_38 != (Ref *)pOVar1) {
    *(Ref **)(in_RDI + 0xb20) = local_38;
    if (local_38 != (Ref *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(in_RDI + 0xb20) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (_update_theme_item_cache()::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(in_RDI + 0xb28),local_38);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if (_update_theme_item_cache()::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  pOVar1 = *(Object **)(in_RDI + 0xb30);
  if (local_38 != (Ref *)pOVar1) {
    *(Ref **)(in_RDI + 0xb30) = local_38;
    if (local_38 != (Ref *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(in_RDI + 0xb30) = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  if (_update_theme_item_cache()::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_theme_item_cache()::{lambda()#7}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_theme_item_cache()::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_theme_icon((StringName *)&local_38,in_RDI);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)(in_RDI + 0xb38),local_38);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
  uVar5 = Control::get_theme_color(in_RDI,(StringName *)(SceneStringNames::singleton + 0xb0));
  lVar2 = SceneStringNames::singleton;
  *(undefined8 *)(in_RDI + 0xb40) = uVar5;
  *(undefined8 *)(in_RDI + 0xb48) = in_XMM1_Qa;
  uVar5 = Control::get_theme_color(in_RDI,(StringName *)(lVar2 + 0xb0));
  *(undefined8 *)(in_RDI + 0xb50) = uVar5;
  *(undefined8 *)(in_RDI + 0xb58) = in_XMM1_Qa;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::add_rpc_frame_data(MultiplayerDebugger::RPCNodeInfo const&) */

void __thiscall
EditorNetworkProfiler::add_rpc_frame_data(EditorNetworkProfiler *this,RPCNodeInfo *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
  *this_00;
  long in_FS_OFFSET;
  ObjectID aOStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = BaseButton::is_disabled();
  if (cVar4 != '\0') {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  this[0xa0d] = (EditorNetworkProfiler)0x1;
  this_00 = (HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
             *)(this + 0xa48);
  cVar4 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
          ::_lookup_pos(this_00,*(ObjectID **)param_1,(uint *)aOStack_28);
  if (cVar4 == '\0') {
    HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
    ::insert(aOStack_28,(RPCNodeInfo *)this_00,SUB81(param_1,0));
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    lVar5 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
            ::operator[](this_00,(ObjectID *)param_1);
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + *(int *)(param_1 + 0x10);
    lVar5 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
            ::operator[](this_00,(ObjectID *)param_1);
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + *(int *)(param_1 + 0x18);
  }
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    lVar5 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
            ::operator[](this_00,(ObjectID *)param_1);
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)(lVar5 + 0x14) = iVar3 / iVar1;
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar5 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
            ::operator[](this_00,(ObjectID *)param_1);
    *(int *)(lVar5 + 0x1c) = iVar1 / iVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::get_argument_count
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorNetworkProfiler::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorNetworkProfiler::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorNetworkProfiler::_property_can_revertv(StringName const&) const */

undefined8 EditorNetworkProfiler::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HashMap<ObjectID, MultiplayerDebugger::SyncInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::SyncInfo> > >::_lookup_pos(ObjectID const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
::_lookup_pos(HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
              *this,ObjectID *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(ObjectID **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* HashMap<ObjectID, EditorNetworkProfiler::NodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   EditorNetworkProfiler::NodeInfo> > >::_lookup_pos(ObjectID const&, unsigned int&) const [clone
   .isra.0] */

undefined8 __thiscall
HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
::_lookup_pos(HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
              *this,ObjectID *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(ObjectID **)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_001051c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001051c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010522e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010522e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::get_object
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010535d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010535d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010535d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010545d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010545d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010545d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::get_object
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010555d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010555d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010555d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* EditorNetworkProfiler::_validate_propertyv(PropertyInfo&) const */

void EditorNetworkProfiler::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ee,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10ee,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10ee,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorNetworkProfiler::is_class_ptr(void*) const */

ulong EditorNetworkProfiler::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10ee,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10ee,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ee,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ee,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ee,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10ee,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorNetworkProfiler::_setv(StringName const&, Variant const&) */

undefined8 EditorNetworkProfiler::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105a98) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105b08) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105b78) */
/* EditorNetworkProfiler::_getv(StringName const&, Variant&) const */

undefined8 EditorNetworkProfiler::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00105bd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105bd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00105c3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00105c3e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorNetworkProfiler::_get_class_namev() const */

undefined8 * EditorNetworkProfiler::_get_class_namev(void)

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
LAB_00105cc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105cc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorNetworkProfiler");
      goto LAB_00105d2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorNetworkProfiler");
LAB_00105d2e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105dc0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105dc0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105e20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105e20:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113030 != Container::_notification) {
      SplitContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00113030 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113038 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00113038 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001061af;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001061af:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010635f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010635f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* EditorNetworkProfiler::_notificationv(int, bool) */

void __thiscall
EditorNetworkProfiler::_notificationv(EditorNetworkProfiler *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x2d) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00113038 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_00113038 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  if (param_1 != 0x2d) {
    return;
  }
  _notification(iVar1);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */

undefined1  [16]
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0010671f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010671f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00106bd1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC8 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00106bd1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00106bd1:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, MultiplayerDebugger::SyncInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::SyncInfo> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
::operator[](HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  ulong uVar25;
  undefined8 uVar26;
  void *__s_00;
  undefined1 (*pauVar27) [16];
  void *pvVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  ObjectID *pOVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_e8;
  uint local_90;
  uint local_8c [5];
  undefined8 local_78;
  long local_40;
  
  pOVar33 = *(ObjectID **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  cVar24 = _lookup_pos(this,pOVar33,&local_90);
  if (cVar24 == '\0') {
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar34 = (ulong)uVar32;
      uVar25 = uVar34 * 4;
      uVar39 = uVar34 * 8;
      uVar26 = Memory::alloc_static(uVar25,false);
      *(undefined8 *)(this + 0x10) = uVar26;
      pvVar28 = (void *)Memory::alloc_static(uVar39,false);
      *(void **)(this + 8) = pvVar28;
      if (uVar32 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar28 + uVar39)) &&
           (pvVar28 < (void *)((long)pvVar4 + uVar25))) {
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
      pOVar33 = *(ObjectID **)param_1;
    }
    local_8c[0] = 0;
    cVar24 = _lookup_pos(this,pOVar33,local_8c);
    if (cVar24 == '\0') {
      if ((float)uVar32 * __LC8 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar32 = *(uint *)(this + 0x28);
        if (uVar32 == 0x1c) {
          pauVar27 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001071d8;
        }
        uVar25 = (ulong)(uVar32 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
        if (uVar32 + 1 < 2) {
          uVar25 = 2;
        }
        uVar32 = *(uint *)(hash_table_size_primes + uVar25 * 4);
        uVar34 = (ulong)uVar32;
        *(int *)(this + 0x28) = (int)uVar25;
        pvVar28 = *(void **)(this + 8);
        uVar25 = uVar34 * 4;
        uVar39 = uVar34 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar26 = Memory::alloc_static(uVar25,false);
        *(undefined8 *)(this + 0x10) = uVar26;
        __s_00 = (void *)Memory::alloc_static(uVar39,false);
        *(void **)(this + 8) = __s_00;
        if (uVar32 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar25))) {
            uVar25 = 0;
            do {
              *(undefined4 *)((long)__s + uVar25 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar34);
          }
          else {
            memset(__s,0,uVar25);
            memset(__s_00,0,uVar39);
          }
        }
        if (uVar3 != 0) {
          uVar25 = 0;
          do {
            uVar32 = *(uint *)((long)pvVar4 + uVar25 * 4);
            if (uVar32 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar39 = CONCAT44(0,uVar38);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar32 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar39;
              lVar30 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar30 * 4);
              iVar29 = SUB164(auVar7 * auVar15,8);
              uVar37 = *puVar1;
              uVar26 = *(undefined8 *)((long)pvVar28 + uVar25 * 8);
              while (uVar37 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar37 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar39;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar38 + iVar29) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar39;
                local_e8 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar26;
                if (local_e8 < uVar36) {
                  *puVar1 = uVar32;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar30 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar26;
                  uVar32 = uVar37;
                  uVar36 = local_e8;
                }
                uVar36 = uVar36 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar29 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar39;
                lVar30 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar30 * 4);
                iVar29 = SUB164(auVar10 * auVar18,8);
                uVar26 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar30 * 8) = uVar26;
              *puVar1 = uVar32;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar3);
          Memory::free_static(pvVar28,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_78 = *(undefined8 *)param_1;
      pauVar27 = (undefined1 (*) [16])operator_new(0x40,"");
      *pauVar27 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
      *(undefined8 *)pauVar27[1] = local_78;
      puVar2 = *(undefined8 **)(this + 0x20);
      *(undefined8 *)(pauVar27[2] + 8) = 0;
      pauVar27[3] = (undefined1  [16])0x0;
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar27;
      }
      else {
        *puVar2 = pauVar27;
        *(undefined8 **)(*pauVar27 + 8) = puVar2;
      }
      lVar5 = *(long *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar27;
      lVar6 = *(long *)(this + 0x10);
      uVar25 = lVar5 * 0x3ffff - 1;
      uVar25 = (uVar25 ^ uVar25 >> 0x1f) * 0x15;
      uVar25 = (uVar25 ^ uVar25 >> 0xb) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar39 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
        uVar39 = 1;
      }
      uVar37 = 0;
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = (uint)uVar39;
      uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar32);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39 * lVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar31 = SUB168(auVar11 * auVar19,8);
      lVar30 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar6 + lVar31 * 4);
      iVar29 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar27;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar5;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar25;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar32 + iVar29) - SUB164(auVar12 * auVar20,8)) * lVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar25;
        local_e8 = SUB164(auVar13 * auVar21,8);
        pauVar40 = pauVar23;
        if (local_e8 < uVar37) {
          *puVar1 = (uint)uVar39;
          uVar39 = (ulong)uVar3;
          puVar2 = (undefined8 *)(lVar30 + lVar31 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar37 = local_e8;
        }
        uVar38 = (uint)uVar39;
        uVar37 = uVar37 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar29 + 1) * lVar5;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar25;
        lVar31 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar6 + lVar31 * 4);
        iVar29 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar40;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar30 + lVar31 * 8) = pauVar23;
      *puVar1 = uVar38;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_8c[0] * 8);
      *(undefined8 *)(pauVar27[2] + 8) = 0;
      *(undefined1 (*) [16])(pauVar27[1] + 8) = (undefined1  [16])0x0;
      pauVar27[3] = (undefined1  [16])0x0;
    }
  }
  else {
    pauVar27 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_90 * 8);
  }
LAB_001071d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar27[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorNetworkProfiler>(EditorNetworkProfiler*,
   char const*, void (EditorNetworkProfiler::*)()) */

EditorNetworkProfiler *
create_custom_callable_function_pointer<EditorNetworkProfiler>
          (EditorNetworkProfiler *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ec48;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107628) */
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



/* WARNING: Removing unreachable block (ram,0x00107910) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
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
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00107bc0) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
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
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00107e70) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_38,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_38) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_38;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorNetworkProfiler::get_class() const */

void EditorNetworkProfiler::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorNetworkProfiler");
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HBoxContainer");
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_001085c7:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_001085c7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, EditorNetworkProfiler::NodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   EditorNetworkProfiler::NodeInfo> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
::operator[](HashMap<ObjectID,EditorNetworkProfiler::NodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,EditorNetworkProfiler::NodeInfo>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined1 (*pauVar29) [16];
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ObjectID *pOVar35;
  ulong uVar36;
  undefined8 uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 (*pauVar41) [16];
  long in_FS_OFFSET;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  CowData<char32_t> local_90 [24];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  pOVar35 = *(ObjectID **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  cVar24 = _lookup_pos(this,pOVar35,&local_a0);
  if (cVar24 != '\0') {
    pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_a0 * 8);
    goto LAB_00108a77;
  }
  local_98 = 0;
  uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_90[0] = (CowData<char32_t>)0x0;
  local_90[1] = (CowData<char32_t>)0x0;
  local_90[2] = (CowData<char32_t>)0x0;
  local_90[3] = (CowData<char32_t>)0x0;
  local_90[4] = (CowData<char32_t>)0x0;
  local_90[5] = (CowData<char32_t>)0x0;
  local_90[6] = (CowData<char32_t>)0x0;
  local_90[7] = (CowData<char32_t>)0x0;
  local_90[8] = (CowData<char32_t>)0x0;
  local_90[9] = (CowData<char32_t>)0x0;
  local_90[10] = (CowData<char32_t>)0x0;
  local_90[0xb] = (CowData<char32_t>)0x0;
  local_90[0xc] = (CowData<char32_t>)0x0;
  local_90[0xd] = (CowData<char32_t>)0x0;
  local_90[0xe] = (CowData<char32_t>)0x0;
  local_90[0xf] = (CowData<char32_t>)0x0;
  if (*(long *)(this + 8) == 0) {
    uVar36 = (ulong)uVar34;
    uVar27 = uVar36 * 4;
    uVar38 = uVar36 * 8;
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    pvVar30 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar30;
    if (uVar34 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar30 + uVar38)) && (pvVar30 < (void *)((long)pvVar4 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar36 != uVar27);
      }
      else {
        memset(pvVar4,0,uVar27);
        memset(pvVar30,0,uVar38);
      }
    }
    pOVar35 = *(ObjectID **)param_1;
  }
  local_9c = 0;
  cVar24 = _lookup_pos(this,pOVar35,&local_9c);
  if (cVar24 == '\0') {
    if ((float)uVar34 * __LC8 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar34 = *(uint *)(this + 0x28);
      if (uVar34 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar29 = (undefined1 (*) [16])0x0;
        goto LAB_00108a63;
      }
      uVar27 = (ulong)(uVar34 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
      if (uVar34 + 1 < 2) {
        uVar27 = 2;
      }
      uVar34 = *(uint *)(hash_table_size_primes + uVar27 * 4);
      uVar36 = (ulong)uVar34;
      *(int *)(this + 0x28) = (int)uVar27;
      pvVar30 = *(void **)(this + 8);
      uVar27 = uVar36 * 4;
      uVar38 = uVar36 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar34 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)__s + uVar27 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar36);
        }
        else {
          memset(__s,0,uVar27);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar3 != 0) {
        uVar27 = 0;
        do {
          uVar34 = *(uint *)((long)pvVar4 + uVar27 * 4);
          if (uVar34 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar39 = 0;
            uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar38 = CONCAT44(0,uVar26);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar34 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar38;
            lVar32 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar32 * 4);
            iVar31 = SUB164(auVar7 * auVar15,8);
            uVar40 = *puVar1;
            uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
            while (uVar40 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar40 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar38;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar26 + iVar31) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar38;
              uVar25 = SUB164(auVar9 * auVar17,8);
              uVar37 = uVar28;
              if (uVar25 < uVar39) {
                *puVar1 = uVar34;
                puVar2 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                uVar37 = *puVar2;
                *puVar2 = uVar28;
                uVar34 = uVar40;
                uVar39 = uVar25;
              }
              uVar39 = uVar39 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar31 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar38;
              lVar32 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar32 * 4);
              iVar31 = SUB164(auVar10 * auVar18,8);
              uVar28 = uVar37;
              uVar40 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
            *puVar1 = uVar34;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar3);
        Memory::free_static(pvVar30,false);
        Memory::free_static(pvVar4,false);
      }
    }
    local_68 = *(undefined8 *)param_1;
    local_78 = (undefined1  [16])0x0;
    local_58[0] = (CowData<char32_t>)0x0;
    local_58[1] = (CowData<char32_t>)0x0;
    local_58[2] = (CowData<char32_t>)0x0;
    local_58[3] = (CowData<char32_t>)0x0;
    local_58[4] = (CowData<char32_t>)0x0;
    local_58[5] = (CowData<char32_t>)0x0;
    local_58[6] = (CowData<char32_t>)0x0;
    local_58[7] = (CowData<char32_t>)0x0;
    local_58[8] = (CowData<char32_t>)0x0;
    local_58[9] = (CowData<char32_t>)0x0;
    local_58[10] = (CowData<char32_t>)0x0;
    local_58[0xb] = (CowData<char32_t>)0x0;
    local_58[0xc] = (CowData<char32_t>)0x0;
    local_58[0xd] = (CowData<char32_t>)0x0;
    local_58[0xe] = (CowData<char32_t>)0x0;
    local_58[0xf] = (CowData<char32_t>)0x0;
    local_60 = local_98;
    pauVar29 = (undefined1 (*) [16])operator_new(0x30,"");
    *pauVar29 = (undefined1  [16])0x0;
    pauVar29[2] = (undefined1  [16])0x0;
    *(undefined8 *)pauVar29[1] = local_68;
    *(undefined8 *)(pauVar29[1] + 8) = local_60;
    CowData<char32_t>::_unref(local_58 + 8);
    CowData<char32_t>::_unref(local_58);
    puVar2 = *(undefined8 **)(this + 0x20);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar29;
    }
    else {
      *puVar2 = pauVar29;
      *(undefined8 **)(*pauVar29 + 8) = puVar2;
    }
    lVar5 = *(long *)param_1;
    lVar6 = *(long *)(this + 0x10);
    *(undefined1 (**) [16])(this + 0x20) = pauVar29;
    uVar27 = lVar5 * 0x3ffff - 1;
    uVar27 = (uVar27 ^ uVar27 >> 0x1f) * 0x15;
    uVar27 = (uVar27 ^ uVar27 >> 0xb) * 0x41;
    uVar27 = uVar27 >> 0x16 ^ uVar27;
    uVar38 = uVar27 & 0xffffffff;
    if ((int)uVar27 == 0) {
      uVar38 = 1;
    }
    uVar40 = 0;
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar27 = CONCAT44(0,uVar34);
    uVar26 = (uint)uVar38;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar38 * lVar5;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar27;
    lVar33 = SUB168(auVar11 * auVar19,8);
    lVar32 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar6 + lVar33 * 4);
    iVar31 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    pauVar23 = pauVar29;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar5;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar27;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((iVar31 + uVar34) - SUB164(auVar12 * auVar20,8)) * lVar5;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar27;
      uVar26 = SUB164(auVar13 * auVar21,8);
      pauVar41 = pauVar23;
      if (uVar26 < uVar40) {
        *puVar1 = (uint)uVar38;
        uVar38 = (ulong)uVar3;
        puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
        pauVar41 = (undefined1 (*) [16])*puVar2;
        *puVar2 = pauVar23;
        uVar40 = uVar26;
      }
      uVar26 = (uint)uVar38;
      uVar40 = uVar40 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar31 + 1) * lVar5;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar27;
      lVar33 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar6 + lVar33 * 4);
      iVar31 = SUB164(auVar14 * auVar22,8);
      pauVar23 = pauVar41;
      uVar3 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar32 + lVar33 * 8) = pauVar23;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar27 = (ulong)local_9c;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar27 * 8);
    *(undefined8 *)(lVar5 + 0x18) = local_98;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x20),(CowData *)local_90);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x28),(CowData *)(local_90 + 8));
    pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar27 * 8);
  }
LAB_00108a63:
  CowData<char32_t>::_unref(local_90 + 8);
  CowData<char32_t>::_unref(local_90);
LAB_00108a77:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar29[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::call
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00108e1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00108e1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00108ed0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00108e1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC82,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010915d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_0010915d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC83;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC84;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC85;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_001090c6:
          uVar3 = _LC86;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&TreeItem::typeinfo,0), lVar10 == 0)
              ) && (pOVar8 != (Object *)0x0)) goto LAB_001090c6;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar8 != (Object *)0x0) {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_00109262;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010915d:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC82,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109262:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::call
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00109429;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00109429;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC87;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001093d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_001094da;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109429:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC82,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001094da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_001095d3;
  }
  cVar3 = String::operator==(param_1,"Control");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_001095d3;
    }
    cVar3 = String::operator==(param_1,"CanvasItem");
    if (cVar3 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar2 = *(long *)(lVar1 + 0x20);
        if (lVar2 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
          }
        }
        cVar3 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 != '\0') goto LAB_001095d3;
      }
      cVar3 = String::operator==(param_1,"Node");
      if (cVar3 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = Object::is_class((Object *)this,param_1);
          return uVar4;
        }
        goto LAB_0010975e;
      }
    }
  }
LAB_001095d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010975e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010986b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010986b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001099a3;
  }
  cVar4 = String::operator==(param_1,"HSplitContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001099a3;
    }
    cVar4 = String::operator==(param_1,"SplitContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00109aae;
    }
  }
LAB_001099a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109aae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00113040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"SplitContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113048 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"SplitContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HSplitContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_00113040 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_00113058 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
        if (pvVar3 == (void *)0x0) goto LAB_0010a73f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010a73f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010a873;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010a873;
    }
    cVar4 = String::operator==(param_1,"Container");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Control::is_class((Control *)this,param_1);
        return uVar5;
      }
      goto LAB_0010a97e;
    }
  }
LAB_0010a873:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a97e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010aa8b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010aa8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::is_class(String const&) const */

undefined8 __thiscall EditorNetworkProfiler::is_class(EditorNetworkProfiler *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_0010abc3;
  }
  cVar4 = String::operator==(param_1,"EditorNetworkProfiler");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_0010abc3;
    }
    cVar4 = String::operator==(param_1,"VBoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar5;
      }
      goto LAB_0010acce;
    }
  }
LAB_0010abc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010acce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorNetworkProfiler::_bind_methods() [clone .cold] */

void EditorNetworkProfiler::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorNetworkProfiler::_initialize_classv() */

void EditorNetworkProfiler::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_00113050 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_00113040 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_00113058 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"VBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"VBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorNetworkProfiler");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC54;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC54;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00113060 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00113068 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorNetworkProfiler::_get_property_listv(EditorNetworkProfiler *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorNetworkProfiler";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNetworkProfiler";
  local_98 = 0;
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorNetworkProfiler",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
  local_98 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
  local_50 = 0x80;
  if (local_60 == 0x11) {
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* EditorNetworkProfiler::~EditorNetworkProfiler() */

void __thiscall EditorNetworkProfiler::~EditorNetworkProfiler(EditorNetworkProfiler *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e8d0;
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb38));
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb30));
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb28));
  if (*(long *)(this + 0xb20) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xb20);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xb18) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xb18);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb10));
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb08));
  Ref<Texture2D>::unref((Ref<Texture2D> *)(this + 0xb00));
  pvVar5 = *(void **)(this + 0xad8);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xafc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf8) * 4) != 0) {
        memset(*(void **)(this + 0xaf0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaf8) * 4) << 2);
      }
      *(undefined4 *)(this + 0xafc) = 0;
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xae8),false);
    Memory::free_static(*(void **)(this + 0xae0),false);
    Memory::free_static(*(void **)(this + 0xaf0),false);
  }
  pvVar5 = *(void **)(this + 0xab0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xad4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xad0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xad4) = 0;
        *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xab8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xab8) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xab0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xad4) = 0;
        *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010d100;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xab8),false);
  }
LAB_0010d100:
  pvVar5 = *(void **)(this + 0xa80);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xaa4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xaa0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xaa4) = 0;
        *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa88) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0xa88) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
            pvVar5 = *(void **)(this + 0xa80);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xaa4) = 0;
        *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010d197;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa88),false);
  }
LAB_0010d197:
  pvVar5 = *(void **)(this + 0xa50);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xa74) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa70) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa74) = 0;
        *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa58) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa58) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xa50);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa74) = 0;
        *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010d237;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa58),false);
  }
LAB_0010d237:
  bVar6 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar6) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d27f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d27f:
  Control::~Control((Control *)this);
  return;
}



/* EditorNetworkProfiler::~EditorNetworkProfiler() */

void __thiscall EditorNetworkProfiler::~EditorNetworkProfiler(EditorNetworkProfiler *this)

{
  ~EditorNetworkProfiler(this);
  operator_delete(this,0xb60);
  return;
}



/* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
::_resize_and_rehash
          (HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
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
/* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::insert(ObjectID const&, MultiplayerDebugger::RPCNodeInfo
   const&, bool) */

ObjectID *
HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
::insert(ObjectID *param_1,RPCNodeInfo *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__s;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  char cVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  void *__s_00;
  long *in_RCX;
  int iVar19;
  undefined7 in_register_00000011;
  long *plVar20;
  long lVar21;
  char in_R8B;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  long lVar27;
  long lVar28;
  uint local_c8;
  uint local_7c;
  undefined1 local_78 [16];
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  plVar20 = (long *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar26 = (ulong)uVar2;
    uVar17 = uVar26 * 4;
    uVar18 = Memory::alloc_static(uVar17,false);
    *(undefined8 *)(param_2 + 0x10) = uVar18;
    uVar24 = uVar26 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar24 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar17))) {
        uVar17 = 0;
        do {
          *(undefined4 *)((long)__s + uVar17 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar17 * 8) = 0;
          uVar17 = uVar17 + 1;
        } while (uVar26 != uVar17);
      }
      else {
        memset(__s,0,uVar17);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_7c = 0;
  cVar15 = _lookup_pos((HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
                        *)param_2,(ObjectID *)*plVar20,&local_7c);
  if (cVar15 == '\0') {
    if ((float)uVar2 * __LC8 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        plVar16 = (long *)0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0010d8cf;
      }
      _resize_and_rehash((HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_68 = *plVar20;
    local_58 = 0;
    local_78 = (undefined1  [16])0x0;
    local_60 = *in_RCX;
    if (in_RCX[1] == 0) {
      lVar27 = 0;
      lVar28 = 0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(in_RCX + 1));
      lVar27 = local_78._0_8_;
      lVar28 = local_78._8_8_;
    }
    lVar14 = local_58;
    lVar5 = in_RCX[2];
    lVar21 = in_RCX[3];
    local_50 = lVar5;
    lStack_48 = lVar21;
    plVar16 = (long *)operator_new(0x38,"");
    *plVar16 = lVar27;
    plVar16[1] = lVar28;
    plVar16[4] = 0;
    plVar16[2] = local_68;
    plVar16[3] = local_60;
    if (lVar14 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(plVar16 + 4),(CowData *)&local_58);
    }
    plVar16[5] = lVar5;
    plVar16[6] = lVar21;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar4 = *(undefined8 **)(param_2 + 0x20);
    if (puVar4 == (undefined8 *)0x0) {
      *(long **)(param_2 + 0x18) = plVar16;
      *(long **)(param_2 + 0x20) = plVar16;
    }
    else if (in_R8B == '\0') {
      *puVar4 = plVar16;
      plVar16[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = plVar16;
    }
    else {
      lVar27 = *(long *)(param_2 + 0x18);
      *(long **)(lVar27 + 8) = plVar16;
      *plVar16 = lVar27;
      *(long **)(param_2 + 0x18) = plVar16;
    }
    lVar27 = *(long *)(param_2 + 0x10);
    uVar17 = *plVar20 * 0x3ffff - 1;
    uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
    uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
    uVar17 = uVar17 >> 0x16 ^ uVar17;
    uVar24 = uVar17 & 0xffffffff;
    if ((int)uVar17 == 0) {
      uVar24 = 1;
    }
    uVar22 = 0;
    lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar23 = (uint)uVar24;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar17 = CONCAT44(0,uVar2);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar24 * lVar28;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar17;
    lVar21 = SUB168(auVar6 * auVar10,8);
    lVar5 = *(long *)(param_2 + 8);
    puVar1 = (uint *)(lVar27 + lVar21 * 4);
    iVar19 = SUB164(auVar6 * auVar10,8);
    uVar3 = *puVar1;
    plVar20 = plVar16;
    while (uVar3 != 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar3 * lVar28;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar17;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)((iVar19 + uVar2) - SUB164(auVar7 * auVar11,8)) * lVar28;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar17;
      local_c8 = SUB164(auVar8 * auVar12,8);
      plVar25 = plVar20;
      if (local_c8 < uVar22) {
        *puVar1 = (uint)uVar24;
        uVar24 = (ulong)uVar3;
        puVar4 = (undefined8 *)(lVar5 + lVar21 * 8);
        plVar25 = (long *)*puVar4;
        *puVar4 = plVar20;
        uVar22 = local_c8;
      }
      uVar23 = (uint)uVar24;
      uVar22 = uVar22 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(iVar19 + 1) * lVar28;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar17;
      lVar21 = SUB168(auVar9 * auVar13,8);
      puVar1 = (uint *)(lVar27 + lVar21 * 4);
      iVar19 = SUB164(auVar9 * auVar13,8);
      plVar20 = plVar25;
      uVar3 = *puVar1;
    }
    *(long **)(lVar5 + lVar21 * 8) = plVar20;
    *puVar1 = uVar23;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar17 = (ulong)local_7c;
    lVar27 = *(long *)(*(long *)(param_2 + 8) + uVar17 * 8);
    *(long *)(lVar27 + 0x18) = *in_RCX;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar27 + 0x20),(CowData *)(in_RCX + 1));
    lVar5 = in_RCX[3];
    lVar28 = *(long *)(param_2 + 8);
    *(long *)(lVar27 + 0x28) = in_RCX[2];
    *(long *)(lVar27 + 0x30) = lVar5;
    plVar16 = *(long **)(lVar28 + uVar17 * 8);
  }
LAB_0010d8cf:
  *(long **)param_1 = plVar16;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
::operator[](HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 (*pauVar16) [16];
  char cVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  undefined8 uVar21;
  void *__s_00;
  int iVar22;
  long lVar23;
  ObjectID *pOVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 (*pauVar28) [16];
  long in_FS_OFFSET;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  pOVar24 = *(ObjectID **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  cVar17 = _lookup_pos(this,pOVar24,&local_a0);
  if (cVar17 != '\0') {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_a0 * 8);
    goto LAB_0010dd17;
  }
  local_98 = 0;
  local_90 = 0;
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_88 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar25 = (ulong)uVar2;
    uVar20 = uVar25 * 4;
    uVar27 = uVar25 * 8;
    uVar21 = Memory::alloc_static(uVar20,false);
    *(undefined8 *)(this + 0x10) = uVar21;
    __s_00 = (void *)Memory::alloc_static(uVar27,false);
    *(void **)(this + 8) = __s_00;
    if (uVar2 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar27)) && (__s_00 < (void *)((long)__s + uVar20))) {
        uVar20 = 0;
        do {
          *(undefined4 *)((long)__s + uVar20 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar25 != uVar20);
      }
      else {
        memset(__s,0,uVar20);
        memset(__s_00,0,uVar27);
      }
    }
    pOVar24 = *(ObjectID **)param_1;
  }
  local_9c = 0;
  cVar17 = _lookup_pos(this,pOVar24,&local_9c);
  if (cVar17 == '\0') {
    if ((float)uVar2 * __LC8 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        pauVar19 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0010dd0b;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_68 = *(undefined8 *)param_1;
    local_78 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_60 = local_98;
    local_58 = 0;
    pauVar19 = (undefined1 (*) [16])operator_new(0x38,"");
    *pauVar19 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar19[2] = 0;
    *(undefined8 *)pauVar19[1] = local_68;
    *(undefined1 (*) [16])(pauVar19[2] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar19[1] + 8) = local_60;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar4 = *(undefined8 **)(this + 0x20);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar19;
    }
    else {
      *puVar4 = pauVar19;
      *(undefined8 **)(*pauVar19 + 8) = puVar4;
    }
    lVar5 = *(long *)param_1;
    lVar6 = *(long *)(this + 0x10);
    *(undefined1 (**) [16])(this + 0x20) = pauVar19;
    uVar20 = lVar5 * 0x3ffff - 1;
    uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
    uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
    uVar20 = uVar20 >> 0x16 ^ uVar20;
    uVar27 = uVar20 & 0xffffffff;
    if ((int)uVar20 == 0) {
      uVar27 = 1;
    }
    uVar26 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar18 = (uint)uVar27;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar20 = CONCAT44(0,uVar2);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar27 * lVar5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar20;
    lVar23 = SUB168(auVar8 * auVar12,8);
    lVar7 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar6 + lVar23 * 4);
    iVar22 = SUB164(auVar8 * auVar12,8);
    uVar3 = *puVar1;
    pauVar16 = pauVar19;
    while (uVar3 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar3 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar20;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((iVar22 + uVar2) - SUB164(auVar9 * auVar13,8)) * lVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar20;
      uVar18 = SUB164(auVar10 * auVar14,8);
      pauVar28 = pauVar16;
      if (uVar18 < uVar26) {
        *puVar1 = (uint)uVar27;
        uVar27 = (ulong)uVar3;
        puVar4 = (undefined8 *)(lVar7 + lVar23 * 8);
        pauVar28 = (undefined1 (*) [16])*puVar4;
        *puVar4 = pauVar16;
        uVar26 = uVar18;
      }
      uVar18 = (uint)uVar27;
      uVar26 = uVar26 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar22 + 1) * lVar5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar20;
      lVar23 = SUB168(auVar11 * auVar15,8);
      puVar1 = (uint *)(lVar6 + lVar23 * 4);
      iVar22 = SUB164(auVar11 * auVar15,8);
      pauVar16 = pauVar28;
      uVar3 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar7 + lVar23 * 8) = pauVar16;
    *puVar1 = uVar18;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar20 = (ulong)local_9c;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar20 * 8);
    *(undefined8 *)(lVar5 + 0x18) = local_98;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x20),(CowData *)&local_90);
    lVar6 = *(long *)(this + 8);
    *(undefined1 (*) [16])(lVar5 + 0x28) = (undefined1  [16])0x0;
    pauVar19 = *(undefined1 (**) [16])(lVar6 + uVar20 * 8);
  }
LAB_0010dd0b:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010dd17:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar19[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorNetworkProfiler::_bind_methods() */

void EditorNetworkProfiler::_GLOBAL__sub_I__bind_methods(void)

{
  undefined8 uStack_18;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated != '\0') {
    return;
  }
  EditorExport::_export_presets_runnable_updated = 1;
  EditorExport::_export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,&__dso_handle
               ,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorNetworkProfiler, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorNetworkProfiler, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorNetworkProfiler, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorNetworkProfiler,void,TreeItem*,int,int,MouseButton>
           *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* EditorNetworkProfiler::~EditorNetworkProfiler() */

void __thiscall EditorNetworkProfiler::~EditorNetworkProfiler(EditorNetworkProfiler *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

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


