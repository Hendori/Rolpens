
/* icu_76_godot::ByteSink::GetAppendBuffer(int, int, char*, int, int*) */

char * __thiscall
icu_76_godot::ByteSink::GetAppendBuffer
          (ByteSink *this,int param_1,int param_2,char *param_3,int param_4,int *param_5)

{
  if ((0 < param_1) && (param_1 <= param_4)) {
    *param_5 = param_4;
    return param_3;
  }
  *param_5 = 0;
  return (char *)0x0;
}



/* icu_76_godot::ByteSink::Flush() */

void icu_76_godot::ByteSink::Flush(void)

{
  return;
}



/* icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink() */

void __thiscall
icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(CheckedArrayByteSink *this)

{
  return;
}



/* icu_76_godot::CheckedArrayByteSink::Reset() */

CheckedArrayByteSink * __thiscall
icu_76_godot::CheckedArrayByteSink::Reset(CheckedArrayByteSink *this)

{
  *(undefined8 *)(this + 0x14) = 0;
  this[0x1c] = (CheckedArrayByteSink)0x0;
  return this;
}



/* icu_76_godot::CheckedArrayByteSink::GetAppendBuffer(int, int, char*, int, int*) */

char * __thiscall
icu_76_godot::CheckedArrayByteSink::GetAppendBuffer
          (CheckedArrayByteSink *this,int param_1,int param_2,char *param_3,int param_4,int *param_5
          )

{
  if ((0 < param_1) && (param_1 <= param_4)) {
    if (param_1 <= *(int *)(this + 0x10) - *(int *)(this + 0x14)) {
      *param_5 = *(int *)(this + 0x10) - *(int *)(this + 0x14);
      return (char *)((long)*(int *)(this + 0x14) + *(long *)(this + 8));
    }
    *param_5 = param_4;
    return param_3;
  }
  *param_5 = 0;
  return (char *)0x0;
}



/* icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink() */

void __thiscall
icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(CheckedArrayByteSink *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CheckedArrayByteSink::Append(char const*, int) */

void __thiscall
icu_76_godot::CheckedArrayByteSink::Append(CheckedArrayByteSink *this,char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    return;
  }
  if (param_2 <= 0x7fffffff - *(int *)(this + 0x18)) {
    iVar2 = *(int *)(this + 0x10);
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
    iVar1 = *(int *)(this + 0x14);
    iVar3 = iVar2 - iVar1;
    if ((param_2 <= iVar3) || (this[0x1c] = (CheckedArrayByteSink)0x1, param_2 = iVar3, 0 < iVar3))
    {
      iVar2 = iVar1 + param_2;
      if ((char *)((long)iVar1 + *(long *)(this + 8)) != param_1) {
        memcpy((char *)((long)iVar1 + *(long *)(this + 8)),param_1,(long)param_2);
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
        return;
      }
    }
    *(int *)(this + 0x14) = iVar2;
    return;
  }
  *(undefined4 *)(this + 0x18) = 0x7fffffff;
  this[0x1c] = (CheckedArrayByteSink)0x1;
  return;
}



/* icu_76_godot::ByteSink::~ByteSink() */

void __thiscall icu_76_godot::ByteSink::~ByteSink(ByteSink *this)

{
  return;
}



/* icu_76_godot::ByteSink::~ByteSink() */

void __thiscall icu_76_godot::ByteSink::~ByteSink(ByteSink *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(char*, int) */

void __thiscall
icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink
          (CheckedArrayByteSink *this,char *param_1,int param_2)

{
  *(char **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__CheckedArrayByteSink_001002a8;
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(undefined8 *)(this + 0x14) = 0;
  this[0x1c] = (CheckedArrayByteSink)0x0;
  *(int *)(this + 0x10) = param_2;
  return;
}


