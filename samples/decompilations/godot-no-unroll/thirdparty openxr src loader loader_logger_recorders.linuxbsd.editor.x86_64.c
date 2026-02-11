
/* (anonymous namespace)::DebugUtilsLogRecorder::LogDebugUtilsMessage(unsigned long, unsigned long,
   XrDebugUtilsMessengerCallbackDataEXT const*) */

bool __thiscall
(anonymous_namespace)::DebugUtilsLogRecorder::LogDebugUtilsMessage
          (DebugUtilsLogRecorder *this,ulong param_1,ulong param_2,
          XrDebugUtilsMessengerCallbackDataEXT *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(this + 0x30))(param_1,param_2,param_3,*(undefined8 *)(this + 0x18));
  return iVar1 == 1;
}



/* (anonymous namespace)::DebugUtilsLogRecorder::~DebugUtilsLogRecorder() */

void __thiscall
(anonymous_namespace)::DebugUtilsLogRecorder::~DebugUtilsLogRecorder(DebugUtilsLogRecorder *this)

{
  return;
}



/* (anonymous namespace)::OstreamLoaderLogRecorder::~OstreamLoaderLogRecorder() */

void __thiscall
(anonymous_namespace)::OstreamLoaderLogRecorder::~OstreamLoaderLogRecorder
          (OstreamLoaderLogRecorder *this)

{
  return;
}



/* (anonymous namespace)::OstreamLoaderLogRecorder::~OstreamLoaderLogRecorder() */

void __thiscall
(anonymous_namespace)::OstreamLoaderLogRecorder::~OstreamLoaderLogRecorder
          (OstreamLoaderLogRecorder *this)

{
  operator_delete(this,0x38);
  return;
}



/* (anonymous namespace)::DebugUtilsLogRecorder::~DebugUtilsLogRecorder() */

void __thiscall
(anonymous_namespace)::DebugUtilsLogRecorder::~DebugUtilsLogRecorder(DebugUtilsLogRecorder *this)

{
  operator_delete(this,0x38);
  return;
}



/* (anonymous namespace)::DebugUtilsLogRecorder::LogMessage(unsigned long, unsigned long,
   XrLoaderLogMessengerCallbackData const*) */

DebugUtilsLogRecorder __thiscall
(anonymous_namespace)::DebugUtilsLogRecorder::LogMessage
          (DebugUtilsLogRecorder *this,ulong param_1,ulong param_2,
          XrLoaderLogMessengerCallbackData *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  DebugUtilsLogRecorder DVar11;
  undefined4 local_78;
  undefined1 local_74 [12];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DVar11 = this[8];
  if (((DVar11 != (DebugUtilsLogRecorder)0x0) &&
      (DVar11 = (DebugUtilsLogRecorder)0x0, (param_1 & *(ulong *)(this + 0x20)) != 0)) &&
     ((param_2 & *(ulong *)(this + 0x28)) != 0)) {
    uVar2 = DebugUtilsSeveritiesToLoaderLogMessageSeverities(param_1);
    uVar3 = LoaderLogMessageTypesToDebugUtilsMessageTypes(param_2);
    local_34 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_60 = *(undefined8 *)(param_3 + 8);
    local_74 = SUB1612((undefined1  [16])0x0,0);
    local_78 = 0x3b9b1439;
    local_58 = (undefined4)*(undefined8 *)(param_3 + 0x10);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    uVar4 = (ulong)(byte)param_3[0x18];
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_68 = (undefined4)*(undefined8 *)param_3;
    uStack_64 = (undefined4)((ulong)*(undefined8 *)param_3 >> 0x20);
    if (uVar4 == 0) {
      uStack_50 = 0;
      uStack_40 = (uint)(byte)param_3[0x28];
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_38 = (undefined4)*(undefined8 *)(param_3 + 0x30);
      local_34 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
      iVar1 = (**(code **)(this + 0x30))(uVar2,uVar3,&local_78,*(undefined8 *)(this + 0x18));
      DVar11 = (DebugUtilsLogRecorder)(iVar1 == 1);
    }
    else {
      puVar5 = (undefined8 *)operator_new(uVar4 * 0x28);
      puVar6 = puVar5;
      do {
        puVar7 = puVar6 + 5;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0x3b9b1438;
        puVar6[1] = 0;
        puVar6[4] = 0;
        puVar6 = puVar7;
      } while (puVar5 + uVar4 * 5 != puVar7);
      uVar10 = (ulong)(byte)param_3[0x18];
      if (param_3[0x18] == (XrLoaderLogMessengerCallbackData)0x0) {
        uVar10 = 0;
      }
      else {
        puVar6 = *(undefined8 **)(param_3 + 0x20);
        puVar7 = puVar6;
        puVar9 = puVar5 + 2;
        do {
          puVar8 = puVar7 + 6;
          puVar9[1] = *puVar7;
          *(undefined4 *)puVar9 = *(undefined4 *)(puVar7 + 1);
          puVar9[2] = puVar7[2];
          puVar7 = puVar8;
          puVar9 = puVar9 + 5;
        } while (puVar8 != puVar6 + uVar10 * 6);
      }
      uStack_50 = (undefined4)uVar10;
      uStack_48 = SUB84(puVar5,0);
      uStack_44 = (undefined4)((ulong)puVar5 >> 0x20);
      uStack_40 = (uint)(byte)param_3[0x28];
      uStack_38 = (undefined4)*(undefined8 *)(param_3 + 0x30);
      local_34 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
      iVar1 = (**(code **)(this + 0x30))(uVar2,uVar3,&local_78,*(undefined8 *)(this + 0x18));
      DVar11 = (DebugUtilsLogRecorder)(iVar1 == 1);
      operator_delete(puVar5,uVar4 * 0x28);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return DVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (anonymous namespace)::OutputMessageToStream(std::ostream&, unsigned long, unsigned long,
   XrLoaderLogMessengerCallbackData const*) */

void (anonymous_namespace)::OutputMessageToStream
               (ostream *param_1,ulong param_2,ulong param_3,
               XrLoaderLogMessengerCallbackData *param_4)

{
  char *pcVar1;
  size_t sVar2;
  ostream *poVar3;
  long *plVar4;
  char cVar5;
  uint uVar7;
  char cVar8;
  long lVar9;
  long in_FS_OFFSET;
  long *local_138;
  long local_130;
  long local_128 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_58;
  char acStack_57 [23];
  long local_40;
  uint uVar6;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x10) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"Verbose [",9);
  }
  else if (param_2 < 0x100) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"Info [",6);
  }
  else if (param_2 < 0x1000) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"Warning [",9);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"Error [",7);
  }
  if (param_3 == 2) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"SPEC",4);
  }
  else if (param_3 == 4) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"PERF",4);
  }
  else if (param_3 == 1) {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"GENERAL",7);
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>(param_1,"UNKNOWN",7);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_1," | ",3);
  pcVar1 = *(char **)(param_4 + 8);
  if (pcVar1 == (char *)0x0) {
    std::ios::clear(param_1 + *(long *)(*(long *)param_1 + -0x18),
                    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) | 1);
  }
  else {
    sVar2 = strlen(pcVar1);
    std::__ostream_insert<char,std::char_traits<char>>(param_1,pcVar1,sVar2);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_1," | ",3);
  pcVar1 = *(char **)param_4;
  if (pcVar1 == (char *)0x0) {
    std::ios::clear(param_1 + *(long *)(*(long *)param_1 + -0x18),
                    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) | 1);
  }
  else {
    sVar2 = strlen(pcVar1);
    std::__ostream_insert<char,std::char_traits<char>>(param_1,pcVar1,sVar2);
  }
  std::__ostream_insert<char,std::char_traits<char>>(param_1,"] : ",4);
  pcVar1 = *(char **)(param_4 + 0x10);
  if (pcVar1 == (char *)0x0) {
    std::ios::clear(param_1 + *(long *)(*(long *)param_1 + -0x18),
                    *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) | 1);
  }
  else {
    sVar2 = strlen(pcVar1);
    std::__ostream_insert<char,std::char_traits<char>>(param_1,pcVar1,sVar2);
  }
  plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar4 == (long *)0x0) {
LAB_001009ef:
    std::__throw_bad_cast();
  }
  else {
    if ((char)plVar4[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar4 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar4 + 0x30))(plVar4,10);
      }
    }
    cVar8 = (char)param_1;
    std::ostream::put(cVar8);
    std::ostream::flush();
    if (param_4[0x18] != (XrLoaderLogMessengerCallbackData)0x0) {
      uVar7 = 0;
      do {
        std::__ostream_insert<char,std::char_traits<char>>(param_1,"    Object[",0xb);
        poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
        std::__ostream_insert<char,std::char_traits<char>>(poVar3,"] = ",4);
        XrSdkLogObjectInfo::ToString_abi_cxx11_();
        std::__ostream_insert<char,std::char_traits<char>>(poVar3,(char *)local_138,local_130);
        if (local_138 != local_128) {
          operator_delete(local_138,local_128[0] + 1);
        }
        plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
        if (plVar4 == (long *)0x0) goto LAB_001009ef;
        if ((char)plVar4[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar4 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar4 + 0x30))(plVar4,10);
          }
        }
        uVar7 = uVar7 + 1;
        std::ostream::put(cVar8);
        std::ostream::flush();
      } while (uVar7 < (byte)param_4[0x18]);
    }
    if (param_4[0x28] != (XrLoaderLogMessengerCallbackData)0x0) {
      lVar9 = 0;
      uVar7 = 0;
      do {
        std::__ostream_insert<char,std::char_traits<char>>(param_1,"    SessionLabel[",0x11);
        local_138 = local_128;
        if (uVar7 < 10) {
          std::__cxx11::string::_M_construct((ulong)&local_138,'\x01');
          uVar6 = uVar7;
LAB_001006f6:
          cVar5 = (char)uVar6 + '0';
          plVar4 = local_138;
        }
        else {
          if (99 < uVar7) {
            std::__cxx11::string::_M_construct((ulong)&local_138,'\x03');
            local_d8 = __LC13;
            uStack_d0 = _UNK_00100d88;
            local_118 = __LC22;
            uStack_110 = _UNK_00100e18;
            local_c8 = __LC14;
            uStack_c0 = _UNK_00100d98;
            local_108 = __LC23;
            uStack_100 = _UNK_00100e28;
            local_b8 = __LC15;
            uStack_b0 = _UNK_00100da8;
            local_f8 = __LC24;
            uStack_f0 = _UNK_00100e38;
            local_a8 = __LC16;
            uStack_a0 = _UNK_00100db8;
            uVar6 = (uVar7 % 100) * 2;
            local_e8 = __LC25;
            uStack_e0 = _UNK_00100e48;
            local_98 = __LC17;
            uStack_90 = _UNK_00100dc8;
            local_88 = __LC18;
            uStack_80 = _UNK_00100dd8;
            local_78 = __LC19;
            uStack_70 = _UNK_00100de8;
            local_68 = __LC20;
            uStack_60 = (undefined1)_UNK_00100df8;
            uStack_5f = (undefined7)_LC21._0_8_;
            cStack_58 = SUB81(_LC21._0_8_,7);
            acStack_57[0] = _LC21[8];
            acStack_57[1] = _LC21[9];
            acStack_57[2] = _LC21[10];
            acStack_57[3] = _LC21[0xb];
            acStack_57[4] = _LC21[0xc];
            acStack_57[5] = _LC21[0xd];
            acStack_57[6] = _LC21[0xe];
            acStack_57[7] = _LC21[0xf];
            cVar5 = *(char *)((long)&local_118 + (ulong)uVar6);
            *(char *)((long)local_138 + (ulong)((int)local_130 - 1)) =
                 *(char *)((long)&local_118 + (ulong)(uVar6 + 1));
            *(char *)((long)local_138 + (ulong)((int)local_130 - 2)) = cVar5;
            uVar6 = uVar7 / 100;
            goto LAB_001006f6;
          }
          std::__cxx11::string::_M_construct((ulong)&local_138,'\x02');
          plVar4 = local_138;
          local_d8 = __LC13;
          uStack_d0 = _UNK_00100d88;
          local_118 = __LC22;
          uStack_110 = _UNK_00100e18;
          local_c8 = __LC14;
          uStack_c0 = _UNK_00100d98;
          local_108 = __LC23;
          uStack_100 = _UNK_00100e28;
          local_b8 = __LC15;
          uStack_b0 = _UNK_00100da8;
          local_f8 = __LC24;
          uStack_f0 = _UNK_00100e38;
          local_a8 = __LC16;
          uStack_a0 = _UNK_00100db8;
          local_e8 = __LC25;
          uStack_e0 = _UNK_00100e48;
          local_98 = __LC17;
          uStack_90 = _UNK_00100dc8;
          local_88 = __LC18;
          uStack_80 = _UNK_00100dd8;
          local_78 = __LC19;
          uStack_70 = _UNK_00100de8;
          local_68 = __LC20;
          uStack_60 = (undefined1)_UNK_00100df8;
          uStack_5f = (undefined7)_LC21._0_8_;
          cStack_58 = SUB81(_LC21._0_8_,7);
          acStack_57[0] = _LC21[8];
          acStack_57[1] = _LC21[9];
          acStack_57[2] = _LC21[10];
          acStack_57[3] = _LC21[0xb];
          acStack_57[4] = _LC21[0xc];
          acStack_57[5] = _LC21[0xd];
          acStack_57[6] = _LC21[0xe];
          acStack_57[7] = _LC21[0xf];
          *(char *)((long)local_138 + 1) = *(char *)((long)&local_118 + (ulong)(uVar7 * 2 + 1));
          cVar5 = *(char *)((long)&local_118 + (ulong)(uVar7 * 2));
        }
        *(char *)plVar4 = cVar5;
        poVar3 = std::__ostream_insert<char,std::char_traits<char>>
                           (param_1,(char *)local_138,local_130);
        std::__ostream_insert<char,std::char_traits<char>>(poVar3,"] = ",4);
        pcVar1 = *(char **)(*(long *)(param_4 + 0x30) + 0x10 + lVar9);
        if (pcVar1 == (char *)0x0) {
          std::ios::clear(poVar3 + *(long *)(*(long *)poVar3 + -0x18),
                          *(uint *)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0x20) | 1);
        }
        else {
          sVar2 = strlen(pcVar1);
          std::__ostream_insert<char,std::char_traits<char>>(poVar3,pcVar1,sVar2);
        }
        if (local_138 != local_128) {
          operator_delete(local_138,local_128[0] + 1);
        }
        plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
        if (plVar4 == (long *)0x0) goto LAB_001009ef;
        if ((char)plVar4[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar4 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar4 + 0x30))(plVar4,10);
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x18;
        std::ostream::put(cVar8);
        std::ostream::flush();
      } while (uVar7 < (byte)param_4[0x28]);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::OstreamLoaderLogRecorder::LogMessage(unsigned long, unsigned long,
   XrLoaderLogMessengerCallbackData const*) */

undefined8 __thiscall
(anonymous_namespace)::OstreamLoaderLogRecorder::LogMessage
          (OstreamLoaderLogRecorder *this,ulong param_1,ulong param_2,
          XrLoaderLogMessengerCallbackData *param_3)

{
  if (((this[8] != (OstreamLoaderLogRecorder)0x0) && ((param_1 & *(ulong *)(this + 0x20)) != 0)) &&
     ((param_2 & *(ulong *)(this + 0x28)) != 0)) {
    OutputMessageToStream(*(ostream **)(this + 0x30),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}



/* MakeStdOutLoaderLogRecorder(void*, unsigned long) */

void * MakeStdOutLoaderLogRecorder(void *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 in_RDX;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  puVar1[5] = 0xffffffff;
  puVar1[3] = param_2;
  *(undefined4 *)((long)puVar1 + 0xc) = 2;
  puVar1[2] = 0;
  puVar1[4] = in_RDX;
  *puVar1 = &PTR__OstreamLoaderLogRecorder_00100c70;
  puVar1[6] = &std::cout;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 **)param_1 = puVar1;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MakeStdErrLoaderLogRecorder(void*) */

void * MakeStdErrLoaderLogRecorder(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 in_RSI;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  uVar2 = _UNK_00100e58;
  uVar1 = __LC26;
  puVar3[3] = in_RSI;
  *(undefined4 *)((long)puVar3 + 0xc) = 2;
  puVar3[2] = 0;
  *puVar3 = &PTR__OstreamLoaderLogRecorder_00100c70;
  puVar3[6] = &std::cerr;
  *(undefined1 *)(puVar3 + 1) = 1;
  *(undefined8 **)param_1 = puVar3;
  puVar3[4] = uVar1;
  puVar3[5] = uVar2;
  return param_1;
}



/* MakeDebugUtilsLoaderLogRecorder(XrDebugUtilsMessengerCreateInfoEXT const*,
   XrDebugUtilsMessengerEXT_T*) */

XrDebugUtilsMessengerCreateInfoEXT *
MakeDebugUtilsLoaderLogRecorder
          (XrDebugUtilsMessengerCreateInfoEXT *param_1,XrDebugUtilsMessengerEXT_T *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_RDX;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  uVar3 = DebugUtilsMessageTypesToLoaderLogMessageTypes(*(ulong *)(param_2 + 0x18));
  uVar4 = DebugUtilsSeveritiesToLoaderLogMessageSeverities(*(ulong *)(param_2 + 0x10));
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)((long)puVar2 + 0xc) = 3;
  puVar2[4] = uVar4;
  *puVar2 = &PTR__DebugUtilsLogRecorder_00100d40;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar2[3] = uVar1;
  puVar2[6] = uVar4;
  puVar2[5] = uVar3;
  puVar2[2] = in_RDX;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined8 **)param_1 = puVar2;
  return param_1;
}



/* LoaderLogRecorder::Start() */

void __thiscall LoaderLogRecorder::Start(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x1;
  return;
}



/* LoaderLogRecorder::Pause() */

void __thiscall LoaderLogRecorder::Pause(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x0;
  return;
}



/* LoaderLogRecorder::Resume() */

void __thiscall LoaderLogRecorder::Resume(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x1;
  return;
}



/* LoaderLogRecorder::Stop() */

void __thiscall LoaderLogRecorder::Stop(LoaderLogRecorder *this)

{
  this[8] = (LoaderLogRecorder)0x0;
  return;
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}


