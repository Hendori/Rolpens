
/* tvg::Text::type() const */

undefined8 tvg::Text::type(void)

{
  return 4;
}



/* tvg::Text::Text() */

void __thiscall tvg::Text::Text(Text *this)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  tvg::Paint::Paint((Paint *)this);
  *(undefined ***)this = &PTR__Text_00100560;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = 0;
  puVar2[1] = this;
  tvg::Shape::gen();
  *(undefined8 **)(this + 0x18) = puVar2;
  puVar2[3] = 0;
  puVar2[2] = local_28;
  *(undefined2 *)((long)puVar2 + 0x24) = 0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Text::text(char const*) */

undefined8 __thiscall tvg::Text::text(Text *this,char *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  free(*(void **)(lVar1 + 0x18));
  if (param_1 != (char *)0x0) {
    param_1 = strdup(param_1);
  }
  *(char **)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x25) = 1;
  return 0;
}



/* tvg::Text::font(char const*, float, char const*) */

undefined8 __thiscall tvg::Text::font(Text *this,char *param_1,float param_2,char *param_3)

{
  undefined8 *puVar1;
  LoadModule *pLVar2;
  LoadModule *pLVar3;
  char *pcVar4;
  bool bVar5;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  pLVar3 = (LoadModule *)LoaderMgr::loader(param_1);
  if (pLVar3 != (LoadModule *)0x0) {
    bVar5 = false;
    if (param_3 != (char *)0x0) {
      pcVar4 = strstr(param_3,"italic");
      bVar5 = pcVar4 != (char *)0x0;
    }
    pLVar2 = (LoadModule *)*puVar1;
    *(bool *)((long)puVar1 + 0x24) = bVar5;
    *(float *)(puVar1 + 4) = param_2;
    if (pLVar3 == pLVar2) {
      *(short *)(pLVar3 + 0x24) = *(short *)(pLVar3 + 0x24) + -1;
    }
    else {
      if (pLVar2 != (LoadModule *)0x0) {
        LoaderMgr::retrieve(pLVar2);
      }
      *puVar1 = pLVar3;
      *(undefined1 *)((long)puVar1 + 0x25) = 1;
    }
    return 0;
  }
  return 2;
}



/* tvg::Text::load(std::__cxx11::string const&) */

char tvg::Text::load(string *param_1)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = LoaderMgr::loader(param_1,&local_11);
  cVar1 = '\0';
  if (lVar2 == 0) {
    cVar1 = (-(local_11 == false) & 4U) + 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Text::load(char const*, char const*, unsigned int, std::__cxx11::string const&, bool) */

uint tvg::Text::load(char *param_1,char *param_2,uint param_3,string *param_4,bool param_5)

{
  uint uVar1;
  long lVar2;
  size_t __n;
  size_t *psVar3;
  long in_FS_OFFSET;
  size_t local_60;
  size_t *local_58;
  size_t local_50;
  size_t local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    uVar1 = 1;
    goto LAB_00100218;
  }
  if (param_3 == 0) {
    uVar1 = 1;
    if (param_2 != (char *)0x0) goto LAB_00100218;
  }
  else if (param_2 != (char *)0x0) {
    lVar2 = LoaderMgr::loader(param_1,param_2,param_3,param_4,param_5);
    uVar1 = -(uint)(lVar2 == 0) & 5;
    goto LAB_00100218;
  }
  local_58 = local_48;
  __n = strlen(param_1);
  local_60 = __n;
  if (__n < 0x10) {
    psVar3 = local_48;
    if (__n == 1) {
      local_48[0] = CONCAT71(local_48[0]._1_7_,*param_1);
    }
    else if (__n != 0) goto LAB_00100311;
  }
  else {
    local_58 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
    psVar3 = local_58;
LAB_00100311:
    memcpy(psVar3,param_1,__n);
    psVar3 = local_58;
  }
  *(undefined1 *)((long)psVar3 + local_60) = 0;
  local_50 = local_60;
  uVar1 = LoaderMgr::retrieve((string *)&local_58);
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  uVar1 = ((uVar1 ^ 1) & 0xff) * 2;
LAB_00100218:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* tvg::Text::unload(std::__cxx11::string const&) */

int tvg::Text::unload(string *param_1)

{
  uint uVar1;
  
  uVar1 = LoaderMgr::retrieve(param_1);
  return ((uVar1 ^ 1) & 0xff) * 2;
}



/* tvg::Text::fill(unsigned char, unsigned char, unsigned char) */

void __thiscall tvg::Text::fill(Text *this,uchar param_1,uchar param_2,uchar param_3)

{
  tvg::Shape::fill((uchar)*(undefined8 *)(*(long *)(this + 0x18) + 0x10),param_1,param_2,param_3);
  return;
}



/* tvg::Text::fill(std::unique_ptr<tvg::Fill, std::default_delete<tvg::Fill> >) */

undefined4 __thiscall tvg::Text::fill(Text *this,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  long *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(this + 0x18) + 0x10);
  local_18 = (long *)*param_2;
  *param_2 = 0;
  uVar2 = tvg::Shape::fill(uVar1,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Text::gen() */

Text * __thiscall tvg::Text::gen(Text *this)

{
  long lVar1;
  Paint *this_00;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Paint *)operator_new(0x20);
  tvg::Paint::Paint(this_00);
  *(undefined ***)this_00 = &PTR__Text_00100560;
  puVar2 = (undefined8 *)operator_new(0x28);
  *puVar2 = 0;
  puVar2[1] = this_00;
  tvg::Shape::gen();
  *(undefined8 **)(this_00 + 0x18) = puVar2;
  puVar2[3] = 0;
  puVar2[2] = local_28;
  *(undefined2 *)((long)puVar2 + 0x24) = 0;
  *(Paint **)this = this_00;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::Text::~Text() */

void __thiscall tvg::Text::~Text(Text *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x18);
  *(undefined ***)this = &PTR__Text_00100560;
  if (puVar1 != (undefined8 *)0x0) {
    free((void *)puVar1[3]);
    LoaderMgr::retrieve((LoadModule *)*puVar1);
    if ((Shape *)puVar1[2] != (Shape *)0x0) {
      tvg::Shape::~Shape((Shape *)puVar1[2]);
    }
    operator_delete(puVar1,0x28);
  }
  tvg::Paint::~Paint((Paint *)this);
  return;
}



/* tvg::Text::~Text() */

void __thiscall tvg::Text::~Text(Text *this)

{
  ~Text(this);
  operator_delete(this,0x20);
  return;
}


