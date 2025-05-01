
/* embree::openLibrary(std::__cxx11::string const&) */

long embree::openLibrary(string *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  long *local_b8;
  long local_a8 [2];
  long *local_98 [2];
  long local_88 [2];
  long *local_78 [2];
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  long local_30;
  ulong uVar7;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar6 = *(ulong *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  local_58 = &local_48;
  std::__cxx11::string::reserve((ulong)&local_58);
  if (2 < 0x3fffffffffffffffU - local_50) {
    std::__cxx11::string::_M_append((char *)&local_58,0x10030e);
    if (uVar2 <= 0x3fffffffffffffffU - local_50) {
      std::__cxx11::string::_M_append((char *)&local_58,uVar6);
      if (2 < 0x3fffffffffffffffU - local_50) {
        plVar3 = (long *)std::__cxx11::string::_M_append((char *)&local_58,0x100312);
        plVar1 = plVar3 + 2;
        if ((long *)*plVar3 == plVar1) {
          uVar2 = plVar3[1] + 1;
          plVar8 = plVar1;
          plVar9 = local_a8;
          if (7 < (uint)uVar2) {
            uVar6 = 0;
            do {
              uVar5 = (int)uVar6 + 8;
              uVar7 = (ulong)uVar5;
              *(undefined8 *)((long)local_a8 + uVar6) = *(undefined8 *)((long)plVar1 + uVar6);
              uVar6 = uVar7;
            } while (uVar5 < ((uint)uVar2 & 0xfffffff8));
            plVar9 = (long *)((long)local_a8 + uVar7);
            plVar8 = (long *)(uVar7 + (long)plVar1);
          }
          lVar4 = 0;
          if ((uVar2 & 4) != 0) {
            *(int *)plVar9 = (int)*plVar8;
            lVar4 = 4;
          }
          if ((uVar2 & 2) != 0) {
            *(undefined2 *)((long)plVar9 + lVar4) = *(undefined2 *)((long)plVar8 + lVar4);
            lVar4 = lVar4 + 2;
          }
          local_b8 = local_a8;
          if ((uVar2 & 1) != 0) {
            *(undefined1 *)((long)plVar9 + lVar4) = *(undefined1 *)((long)plVar8 + lVar4);
          }
        }
        else {
          local_a8[0] = plVar3[2];
          local_b8 = (long *)*plVar3;
        }
        *plVar3 = (long)plVar1;
        plVar3[1] = 0;
        *(undefined1 *)(plVar3 + 2) = 0;
        if (local_58 != &local_48) {
          operator_delete(local_58,CONCAT71(uStack_47,local_48) + 1);
        }
        lVar4 = dlopen(local_b8,2);
        if (lVar4 == 0) {
          embree::getExecutableFileName_abi_cxx11_();
          embree::FileName::FileName((FileName *)local_98,(string *)&local_58);
          if (local_58 != &local_48) {
            operator_delete(local_58,CONCAT71(uStack_47,local_48) + 1);
          }
          embree::FileName::path();
          embree::FileName::operator+((FileName *)&local_58,(string *)local_78);
          lVar4 = dlopen(local_58,2);
          if (local_58 != &local_48) {
            operator_delete(local_58,CONCAT71(uStack_47,local_48) + 1);
          }
          if (local_78[0] != local_68) {
            operator_delete(local_78[0],local_68[0] + 1);
          }
          if (lVar4 == 0) {
            dlerror();
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (local_98[0] != local_88) {
            operator_delete(local_98[0],local_88[0] + 1);
          }
        }
        if (local_b8 != local_a8) {
          operator_delete(local_b8,local_a8[0] + 1);
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return lVar4;
        }
        goto LAB_001002d0;
      }
    }
  }
  std::__throw_length_error("basic_string::append");
LAB_001002d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::getSymbol(embree::opaque_lib_t*, std::__cxx11::string const&) */

void embree::getSymbol(opaque_lib_t *param_1,string *param_2)

{
  dlsym(param_1,*(undefined8 *)param_2);
  return;
}



/* embree::closeLibrary(embree::opaque_lib_t*) */

void embree::closeLibrary(opaque_lib_t *param_1)

{
  dlclose();
  return;
}



/* embree::openLibrary(std::__cxx11::string const&) [clone .cold] */

void embree::openLibrary(string *param_1)

{
  dlerror();
                    /* WARNING: Subroutine does not return */
  abort();
}


