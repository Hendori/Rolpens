
/* icu_76_godot::StringPiece::StringPiece(char const*) */

void __thiscall icu_76_godot::StringPiece::StringPiece(StringPiece *this,char *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  
  uVar1 = 0;
  *(char **)this = param_1;
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    uVar1 = (undefined4)sVar2;
  }
  *(undefined4 *)(this + 8) = uVar1;
  return;
}



/* icu_76_godot::StringPiece::StringPiece(icu_76_godot::StringPiece const&, int) */

void __thiscall
icu_76_godot::StringPiece::StringPiece(StringPiece *this,StringPiece *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  lVar2 = 0;
  if (-1 < param_2) {
    if (iVar3 < param_2) {
      param_2 = iVar3;
    }
    lVar2 = (long)param_2;
    iVar3 = iVar3 - param_2;
  }
  lVar1 = *(long *)param_1;
  *(int *)(this + 8) = iVar3;
  *(long *)this = lVar2 + lVar1;
  return;
}



/* icu_76_godot::StringPiece::StringPiece(icu_76_godot::StringPiece const&, int, int) */

void __thiscall
icu_76_godot::StringPiece::StringPiece
          (StringPiece *this,StringPiece *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 < 0) {
    lVar3 = 0;
    param_2 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) < param_2) {
      param_2 = *(int *)(param_1 + 8);
    }
    lVar3 = (long)param_2;
  }
  iVar2 = 0;
  if ((-1 < param_3) &&
     (iVar2 = *(int *)(param_1 + 8) - param_2, param_3 < *(int *)(param_1 + 8) - param_2)) {
    iVar2 = param_3;
  }
  lVar1 = *(long *)param_1;
  *(int *)(this + 8) = iVar2;
  *(long *)this = lVar1 + lVar3;
  return;
}



/* icu_76_godot::StringPiece::set(char const*) */

void __thiscall icu_76_godot::StringPiece::set(StringPiece *this,char *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  
  uVar1 = 0;
  *(char **)this = param_1;
  if (param_1 != (char *)0x0) {
    sVar2 = strlen(param_1);
    uVar1 = (undefined4)sVar2;
  }
  *(undefined4 *)(this + 8) = uVar1;
  return;
}



/* icu_76_godot::StringPiece::find(icu_76_godot::StringPiece, int) */

uint icu_76_godot::StringPiece::find(long *param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = uVar1 | param_3;
  if (uVar4 != 0) {
    if ((int)param_4 < (int)uVar1) {
      if ((int)param_3 < 1) {
        return param_4;
      }
      do {
        lVar5 = (long)(int)param_4;
        uVar4 = param_3 + param_4;
        lVar3 = 0;
        while (iVar2 = (int)lVar3, *(char *)(lVar5 + *param_1 + lVar3) == *(char *)(param_2 + lVar3)
              ) {
          param_4 = param_4 + 1;
          lVar3 = lVar3 + 1;
          if (param_4 == uVar4) {
            return param_4 - (iVar2 + 1);
          }
        }
        param_4 = (param_4 - iVar2) + 1;
      } while ((int)param_4 < (int)uVar1);
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



/* icu_76_godot::StringPiece::compare(icu_76_godot::StringPiece) */

int icu_76_godot::StringPiece::compare(long *param_1,long param_2,int param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  
  if (0 < (int)*(uint *)(param_1 + 1)) {
    if (param_3 != 0) {
      uVar3 = 1;
      do {
        cVar2 = *(char *)((uVar3 - 1) + param_2);
        cVar1 = *(char *)(*param_1 + -1 + uVar3);
        if (cVar1 < cVar2) {
          return -1;
        }
        if (cVar2 < cVar1) {
          return 1;
        }
        if (uVar3 == *(uint *)(param_1 + 1)) goto LAB_00100180;
        bVar4 = (long)param_3 != uVar3;
        uVar3 = uVar3 + 1;
      } while (bVar4);
    }
    return 1;
  }
  uVar3 = 0;
LAB_00100180:
  return -(uint)((int)uVar3 < param_3);
}



/* icu_76_godot::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::StringPiece const&,
   icu_76_godot::StringPiece const&) */

undefined8 icu_76_godot::operator==(StringPiece *param_1,StringPiece *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 extraout_var;
  size_t __n;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if ((iVar1 == *(int *)(param_2 + 8)) && (uVar2 = 1, iVar1 != 0)) {
    uVar2 = 0;
    __n = (size_t)(iVar1 + -1);
    if (*(char *)((long)*(void **)param_1 + __n) == *(char *)((long)*(void **)param_2 + __n)) {
      iVar1 = memcmp(*(void **)param_1,*(void **)param_2,__n);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
  }
  return uVar2;
}


