
/* basisu::handle_verify_failure(int) */

void basisu::handle_verify_failure(int param_1)

{
  basisu::error_printf("basisu_frontend: verify check failed at line %i!\n",param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*, long, long, unsigned int,
   __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  if (param_2 < lVar7) {
    do {
      lVar2 = (lVar6 + 1) * 2;
      lVar4 = (lVar6 + 1) * 8;
      puVar3 = (uint *)(param_1 + lVar4);
      uVar5 = *puVar3;
      if (uVar5 < *(uint *)(param_1 + -4 + lVar4)) {
        lVar2 = lVar2 + -1;
        puVar3 = (uint *)(param_1 + lVar2 * 4);
        uVar5 = *puVar3;
      }
      *(uint *)(param_1 + lVar6 * 4) = uVar5;
      lVar6 = lVar2;
    } while (lVar2 < lVar7);
    if ((param_3 & 1) == 0) goto LAB_001000f0;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 4);
    lVar2 = param_2;
    if ((param_3 & 1) != 0) goto LAB_001000d1;
LAB_001000f0:
    if (lVar2 == (long)(param_3 - 2) / 2) {
      lVar6 = lVar2 * 2;
      lVar2 = lVar6 + 1;
      *puVar3 = *(uint *)(param_1 + -4 + (lVar6 + 2) * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
    }
  }
  lVar6 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  if (param_2 < lVar2) {
    while( true ) {
      lVar7 = lVar6 >> 1;
      puVar1 = (uint *)(param_1 + lVar7 * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
      uVar5 = *puVar1;
      if (param_4 <= uVar5) break;
      *puVar3 = uVar5;
      lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar2 = lVar7;
      if (lVar7 <= param_2) {
        *puVar1 = param_4;
        return;
      }
    }
  }
LAB_001000d1:
  *puVar3 = param_4;
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned int> const&,
   basisu::vector<int>&, bool, basisu::vector<unsigned
   int>*)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x30);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x30);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::
                    reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)
                    ::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::
                    {lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::create_optimized_selector_codebook(unsigned
   int)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::
              {lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>::
_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x20);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x20);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}::
                    typeinfo;
  return 0;
}



/* std::_Function_handler<void (), basisu::basisu_frontend::generate_endpoint_codebook(unsigned
   int)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}
                    ::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}::typeinfo
  ;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}::
                    typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>::_M_manager
          (undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &basisu::basisu_frontend::init_etc1_images()::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>::
_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    return 0;
  }
  *param_1 = &basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>::
_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x18);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x18);
    }
    return 0;
  }
  *param_1 = (long)&basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}::typeinfo;
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unsigned int* std::__unique<unsigned int*, __gnu_cxx::__ops::_Iter_equal_to_iter>(unsigned int*,
   unsigned int*, __gnu_cxx::__ops::_Iter_equal_to_iter) [clone .isra.0] */

uint * std::__unique<unsigned_int*,__gnu_cxx::__ops::_Iter_equal_to_iter>
                 (uint *param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      param_1 = puVar1;
      if (param_2 == param_1 + 1) {
        return param_2;
      }
      puVar1 = param_1 + 1;
    } while (*param_1 != param_1[1]);
    if (param_2 != param_1) {
      for (puVar1 = param_1 + 2; param_2 != puVar1; puVar1 = puVar1 + 1) {
        if (*param_1 != *puVar1) {
          param_1[1] = *puVar1;
          param_1 = param_1 + 1;
        }
      }
      return param_1 + 1;
    }
  }
  return param_1;
}



/* basisu::etc_block::get_block_colors5(basisu::color_rgba*, basisu::color_rgba const&, unsigned
   int, bool) [clone .isra.0] */

void basisu::etc_block::get_block_colors5
               (color_rgba *param_1,color_rgba *param_2,uint param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  color_rgba cVar3;
  uint uVar4;
  color_rgba cVar5;
  byte bVar6;
  uint uVar7;
  color_rgba cVar8;
  uint in_R8D;
  long lVar9;
  char in_R9B;
  int iVar10;
  int iVar11;
  int iVar12;
  
  bVar6 = (byte)param_2;
  uVar1 = (uint)param_4;
  if (in_R9B == '\0') {
    bVar6 = (byte)((int)param_2 << 3) | (byte)(((ulong)param_2 & 0xffffffff) >> 2) & 0x3f;
    param_3 = param_3 << 3 | param_3 >> 2 & 0x3f;
    uVar1 = uVar1 << 3 | (uint)(byte)(param_4 >> 2);
  }
  uVar4 = param_3 & 0xff;
  uVar1 = uVar1 & 0xff;
  lVar9 = (ulong)in_R8D * 0x10;
  uVar7 = (uint)bVar6;
  iVar2 = *(int *)(&g_etc1_inten_tables + (ulong)in_R8D * 2);
  iVar10 = iVar2 + uVar4;
  iVar11 = iVar2 + uVar7;
  iVar2 = iVar2 + uVar1;
  if (iVar2 < 0) {
    if (iVar10 < 0) {
      iVar2 = 0;
LAB_0010078b:
      iVar10 = 0;
    }
    else {
      iVar2 = 0;
    }
    if (iVar11 < 0) {
      iVar12 = 0;
    }
    else {
LAB_00100797:
      iVar12 = iVar11;
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar10 < 0) goto LAB_0010078b;
    if (0xff < iVar10) goto LAB_00100a2f;
    iVar12 = 0;
    if (-1 < iVar11) goto joined_r0x00100773;
  }
  else {
    iVar2 = -1;
    if (0xff < iVar10) {
      iVar2 = -1;
LAB_00100a2f:
      iVar10 = -1;
    }
joined_r0x00100773:
    iVar12 = -1;
    if (iVar11 < 0x100) goto LAB_00100797;
  }
  *param_1 = SUB41(iVar12,0);
  param_1[1] = SUB41(iVar10,0);
  param_1[2] = SUB41(iVar2,0);
  param_1[3] = (color_rgba)0xff;
  iVar10 = *(int *)((long)&g_etc1_inten_tables + lVar9 + 4);
  iVar11 = uVar1 + iVar10;
  if (iVar11 < 0) {
    iVar2 = iVar10 + uVar4;
    if (iVar2 < 0) {
      iVar11 = 0;
LAB_0010099d:
      iVar2 = 0;
    }
    else {
      iVar11 = 0;
    }
    if ((int)(iVar10 + uVar7) < 0) {
      cVar5 = (color_rgba)0x0;
    }
    else {
LAB_0010090d:
      cVar5 = (color_rgba)((char)iVar10 + bVar6);
    }
  }
  else {
    iVar2 = iVar10 + uVar4;
    if (iVar11 < 0x100) {
      if (iVar2 < 0) goto LAB_0010099d;
      if (0xff < iVar2) goto LAB_001008f5;
      cVar5 = (color_rgba)0x0;
      if (-1 < (int)(iVar10 + uVar7)) goto LAB_001008fb;
    }
    else {
      iVar11 = -1;
      if (0xff < iVar2) {
        iVar11 = -1;
LAB_001008f5:
        iVar2 = -1;
      }
LAB_001008fb:
      cVar5 = (color_rgba)0xff;
      if ((int)(iVar10 + uVar7) < 0x100) goto LAB_0010090d;
    }
  }
  param_1[6] = SUB41(iVar11,0);
  param_1[4] = cVar5;
  param_1[5] = SUB41(iVar2,0);
  param_1[7] = (color_rgba)0xff;
  iVar10 = *(int *)(basisu::etc_block::unpack_color5 + lVar9);
  iVar11 = uVar1 + iVar10;
  if (iVar11 < 0) {
    iVar2 = uVar4 + iVar10;
    if (iVar2 < 0) {
      iVar11 = 0;
LAB_0010097d:
      iVar2 = 0;
    }
    else {
      iVar11 = 0;
    }
    if ((int)(iVar10 + uVar7) < 0) {
      cVar5 = (color_rgba)0x0;
    }
    else {
LAB_00100945:
      cVar5 = (color_rgba)((char)iVar10 + bVar6);
    }
  }
  else {
    iVar2 = uVar4 + iVar10;
    if (iVar11 < 0x100) {
      if (iVar2 < 0) goto LAB_0010097d;
      if (0xff < iVar2) goto LAB_0010092d;
      cVar5 = (color_rgba)0x0;
      if (-1 < (int)(iVar10 + uVar7)) goto LAB_00100933;
    }
    else {
      iVar11 = -1;
      if (0xff < iVar2) {
        iVar11 = -1;
LAB_0010092d:
        iVar2 = -1;
      }
LAB_00100933:
      cVar5 = (color_rgba)0xff;
      if ((int)(iVar10 + uVar7) < 0x100) goto LAB_00100945;
    }
  }
  param_1[8] = cVar5;
  param_1[9] = SUB41(iVar2,0);
  param_1[10] = SUB41(iVar11,0);
  param_1[0xb] = (color_rgba)0xff;
  iVar10 = *(int *)(&DAT_00120034 + lVar9);
  iVar11 = uVar1 + iVar10;
  if (iVar11 < 0) {
    iVar11 = uVar4 + iVar10;
    if (iVar11 < 0) {
      iVar11 = 0;
LAB_0010095c:
      cVar5 = SUB41(iVar11,0);
      iVar11 = 0;
    }
    else {
      cVar5 = (color_rgba)0x0;
    }
    cVar3 = SUB41(iVar11,0);
    if ((int)(uVar7 + iVar10) < 0) {
      param_1[0xd] = cVar3;
      param_1[0xc] = (color_rgba)0x0;
      param_1[0xe] = cVar5;
      param_1[0xf] = (color_rgba)0xff;
      return;
    }
  }
  else {
    iVar2 = uVar4 + iVar10;
    if (iVar11 < 0x100) {
      if (iVar2 < 0) goto LAB_0010095c;
      if (0xff < iVar2) goto LAB_001008b2;
      cVar8 = (color_rgba)0x0;
      if ((int)(iVar10 + uVar7) < 0) goto LAB_00100890;
    }
    else {
      iVar11 = -1;
      if (0xff < iVar2) {
        iVar11 = -1;
LAB_001008b2:
        iVar2 = -1;
      }
    }
    cVar3 = SUB41(iVar2,0);
    cVar5 = SUB41(iVar11,0);
    cVar8 = (color_rgba)0xff;
    if (0xff < (int)(iVar10 + uVar7)) {
LAB_00100890:
      param_1[0xc] = cVar8;
      param_1[0xd] = SUB41(iVar2,0);
      param_1[0xe] = SUB41(iVar11,0);
      param_1[0xf] = (color_rgba)0xff;
      return;
    }
  }
  param_1[0xd] = cVar3;
  param_1[0xc] = (color_rgba)((char)iVar10 + bVar6);
  param_1[0xe] = cVar5;
  param_1[0xf] = (color_rgba)0xff;
  return;
}



/* basisu::etc_block::get_block_colors(basisu::color_rgba*, unsigned int) const [clone .isra.0] */

void __thiscall
basisu::etc_block::get_block_colors(etc_block *this,color_rgba *param_1,uint param_2)

{
  sbyte sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  color_rgba cVar10;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[3] & 2) == 0) {
    if (param_2 != 0) {
      local_24 = basisu::etc_block::unpack_color4
                           ((ushort)(((byte)*this & 0xf) << 8) |
                            (ushort)(((byte)this[1] & 0xf) << 4) | (byte)this[2] & 0xf,true,0xff);
      goto LAB_00100cba;
    }
    local_24 = basisu::etc_block::unpack_color4
                         (((byte)*this & 0xf0) << 4 | (byte)this[1] & 0xf0 |
                          (ushort)((int)(uint)(byte)this[2] >> 4),true,0xff);
LAB_00100aae:
    sVar1 = 5;
  }
  else {
    if (param_2 == 0) {
      basisu::etc_block::unpack_color5
                ((color_rgba *)&local_24,
                 (ushort)(((int)(uint)(byte)this[1] >> 3) << 5) |
                 (ushort)(((int)(uint)(byte)*this >> 3) << 10) |
                 (ushort)((int)(uint)(byte)this[2] >> 3),true);
      goto LAB_00100aae;
    }
    basisu::etc_block::unpack_color5
              ((color_rgba *)&local_24,
               (ushort)(byte)this[1] * 4 & 0x3e0 | ((byte)*this & 0xf8) << 7 |
               (ushort)((int)(uint)(byte)this[2] >> 3),
               (ushort)(((byte)this[1] & 7) << 3) | (ushort)(((byte)*this & 7) << 6) |
               (byte)this[2] & 7,true,0xff);
LAB_00100cba:
    sVar1 = 2;
  }
  uVar5 = local_24 >> 8 & 0xff;
  uVar6 = local_24 & 0xff;
  uVar3 = (ulong)((int)(uint)(byte)this[3] >> sVar1 & 7);
  lVar4 = uVar3 * 0x10;
  iVar2 = *(int *)(&g_etc1_inten_tables + uVar3 * 2);
  iVar8 = iVar2 + uVar5;
  iVar9 = iVar2 + uVar6;
  iVar2 = iVar2 + (uint)local_24._2_1_;
  if (iVar2 < 0) {
    if (iVar8 < 0) {
      iVar2 = 0;
LAB_00100deb:
      iVar8 = 0;
    }
    else {
      iVar2 = 0;
    }
    if (iVar9 < 0) {
      iVar7 = 0;
    }
    else {
LAB_00100b24:
      iVar7 = iVar9;
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar8 < 0) goto LAB_00100deb;
    if (0xff < iVar8) goto LAB_00100ef7;
    iVar7 = 0;
    if (-1 < iVar9) goto LAB_00100b15;
  }
  else {
    iVar2 = -1;
    if (0xff < iVar8) {
      iVar2 = -1;
LAB_00100ef7:
      iVar8 = -1;
    }
LAB_00100b15:
    iVar7 = -1;
    if (iVar9 < 0x100) goto LAB_00100b24;
  }
  *param_1 = SUB41(iVar7,0);
  param_1[1] = SUB41(iVar8,0);
  param_1[2] = SUB41(iVar2,0);
  param_1[3] = (color_rgba)0xff;
  iVar8 = *(int *)((long)&g_etc1_inten_tables + lVar4 + 4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_00100e2d:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00100d65:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_00100e2d;
      if (0xff < iVar2) goto LAB_00100d4d;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_00100d53;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_00100d4d:
        iVar2 = -1;
      }
LAB_00100d53:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_00100d65;
    }
  }
  param_1[6] = SUB41(iVar9,0);
  param_1[4] = cVar10;
  param_1[5] = SUB41(iVar2,0);
  param_1[7] = (color_rgba)0xff;
  iVar8 = *(int *)(basisu::etc_block::unpack_color5 + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_00100e0d:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00100d2d:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_00100e0d;
      if (0xff < iVar2) goto LAB_00100d15;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_00100d1b;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_00100d15:
        iVar2 = -1;
      }
LAB_00100d1b:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_00100d2d;
    }
  }
  param_1[8] = cVar10;
  param_1[9] = SUB41(iVar2,0);
  param_1[10] = SUB41(iVar9,0);
  param_1[0xb] = (color_rgba)0xff;
  iVar8 = *(int *)(&DAT_00120034 + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = uVar5 + iVar8;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_00100dc4:
      iVar2 = 0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_00100cf0;
    }
    else {
      iVar9 = 0;
      iVar7 = uVar6 + iVar8;
      if (-1 < iVar7) goto LAB_00100c30;
    }
    iVar7 = 0;
  }
  else {
    iVar2 = uVar5 + iVar8;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_00100dc4;
      if (0xff < iVar2) goto LAB_00100cda;
      iVar7 = 0;
      if ((int)(iVar8 + uVar6) < 0) goto LAB_00100c30;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_00100cda:
        iVar2 = -1;
      }
    }
    iVar7 = -1;
    if (0xff < (int)(iVar8 + uVar6)) goto LAB_00100c30;
LAB_00100cf0:
    iVar7 = iVar8 + uVar6;
  }
LAB_00100c30:
  param_1[0xc] = SUB41(iVar7,0);
  param_1[0xd] = SUB41(iVar2,0);
  param_1[0xe] = SUB41(iVar9,0);
  param_1[0xf] = (color_rgba)0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Hashtable<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::find(unsigned int const&) [clone .isra.0] */

undefined8 * __thiscall
std::
_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
::find(_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
       *this,uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x18) == 0) {
    for (puVar4 = *(undefined8 **)(this + 0x10);
        (puVar4 != (undefined8 *)0x0 && (*(uint *)(puVar4 + 1) != (uint)param_1));
        puVar4 = (undefined8 *)*puVar4) {
    }
  }
  else {
    uVar5 = ((ulong)param_1 & 0xffffffff) % *(ulong *)(this + 8);
    puVar4 = *(undefined8 **)(*(long *)this + uVar5 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      uVar1 = *(uint *)((undefined8 *)*puVar4 + 1);
      puVar3 = (undefined8 *)*puVar4;
      do {
        if ((uint)param_1 == uVar1) {
          return (undefined8 *)*puVar4;
        }
        puVar2 = (undefined8 *)*puVar3;
      } while ((puVar2 != (undefined8 *)0x0) &&
              (uVar1 = *(uint *)(puVar2 + 1), puVar4 = puVar3, puVar3 = puVar2,
              uVar5 == (ulong)uVar1 % *(ulong *)(this + 8)));
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*,
   unsigned int*, long, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (ulong *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar5 = (long)param_2 - (long)param_1;
  if (0x40 < lVar5) {
    puVar2 = (uint *)((long)param_1 + 4);
    puVar8 = param_2;
    if (param_3 != 0) {
      do {
        uVar7 = *param_1;
        uVar3 = puVar8[-1];
        param_3 = param_3 + -1;
        puVar1 = (uint *)((long)param_1 + (lVar5 >> 3) * 4);
        uVar4 = *puVar1;
        uVar10 = (uint)uVar7;
        uVar11 = (uint)(uVar7 >> 0x20);
        uVar7 = uVar7 & 0xffffffff;
        puVar6 = puVar8;
        param_2 = puVar2;
        if (uVar11 < uVar4) {
          if (uVar4 < uVar3) {
LAB_001010a7:
            *(uint *)param_1 = uVar4;
            *puVar1 = uVar10;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
            uVar11 = (uint)*param_1;
            uVar10 = puVar8[-1];
          }
          else {
            if (uVar3 <= uVar11) goto LAB_0010100b;
LAB_00101063:
            *(uint *)param_1 = uVar3;
            puVar8[-1] = uVar10;
            uVar11 = (uint)*param_1;
            uVar7 = (ulong)*(uint *)((long)param_1 + 4);
          }
        }
        else {
          if (uVar3 <= uVar11) {
            if (uVar4 < uVar3) goto LAB_00101063;
            goto LAB_001010a7;
          }
LAB_0010100b:
          *param_1 = CONCAT44(uVar10,uVar11);
          uVar10 = puVar8[-1];
        }
        while( true ) {
          while ((uint)uVar7 < uVar11) {
            uVar7 = (ulong)param_2[1];
            param_2 = param_2 + 1;
          }
          while (puVar6 = puVar6 + -1, uVar11 < uVar10) {
            uVar10 = puVar6[-1];
          }
          if (puVar6 <= param_2) break;
          *param_2 = uVar10;
          uVar10 = puVar6[-1];
          *puVar6 = (uint)uVar7;
          uVar7 = (ulong)param_2[1];
          uVar11 = (uint)*param_1;
          param_2 = param_2 + 1;
        }
        __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_2,puVar8,param_3);
        lVar5 = (long)param_2 - (long)param_1;
        if (lVar5 < 0x41) {
          return;
        }
        puVar8 = param_2;
      } while (param_3 != 0);
    }
    for (lVar9 = (lVar5 >> 2) + -2 >> 1;
        __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
                  (param_1,lVar9,lVar5 >> 2,*(undefined4 *)((long)param_1 + lVar9 * 4)), lVar9 != 0;
        lVar9 = lVar9 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar3 = *param_2;
      *param_2 = (uint)*param_1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar3);
    } while (4 < (long)param_2 - (long)param_1);
  }
  return;
}



/* basisu::etc_block::get_block_low_high_colors(basisu::color_rgba*, unsigned int) const [clone
   .isra.0] */

void __thiscall
basisu::etc_block::get_block_low_high_colors(etc_block *this,color_rgba *param_1,uint param_2)

{
  ulong uVar1;
  sbyte sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  color_rgba cVar10;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[3] & 2) == 0) {
    if (param_2 != 0) {
      local_24 = basisu::etc_block::unpack_color4
                           ((ushort)(((byte)*this & 0xf) << 8) |
                            (ushort)(((byte)this[1] & 0xf) << 4) | (byte)this[2] & 0xf,true,0xff);
      goto LAB_001012da;
    }
    local_24 = basisu::etc_block::unpack_color4
                         ((byte)this[1] & 0xf0 | ((byte)*this & 0xf0) << 4 |
                          (ushort)((int)(uint)(byte)this[2] >> 4),true,0xff);
LAB_0010118e:
    sVar2 = 5;
  }
  else {
    if (param_2 == 0) {
      basisu::etc_block::unpack_color5
                ((color_rgba *)&local_24,
                 (ushort)(((int)(uint)(byte)this[1] >> 3) << 5) |
                 (ushort)(((int)(uint)(byte)*this >> 3) << 10) |
                 (ushort)((int)(uint)(byte)this[2] >> 3),true);
      goto LAB_0010118e;
    }
    basisu::etc_block::unpack_color5
              ((color_rgba *)&local_24,
               (ushort)(byte)this[1] * 4 & 0x3e0 | ((byte)*this & 0xf8) << 7 |
               (ushort)((int)(uint)(byte)this[2] >> 3),
               (ushort)(((byte)this[1] & 7) << 3) | (ushort)(((byte)*this & 7) << 6) |
               (byte)this[2] & 7,true,0xff);
LAB_001012da:
    sVar2 = 2;
  }
  uVar6 = local_24 >> 8 & 0xff;
  uVar7 = local_24 & 0xff;
  uVar1 = (ulong)((int)(uint)(byte)this[3] >> sVar2 & 7);
  iVar5 = *(int *)(&g_etc1_inten_tables + uVar1 * 2);
  iVar9 = iVar5 + uVar6;
  iVar4 = iVar5 + uVar7;
  uVar3 = local_24 >> 0x10 & 0xff;
  iVar5 = iVar5 + uVar3;
  if (iVar5 < 0) {
    if (iVar9 < 0) {
      iVar5 = 0;
LAB_00101387:
      iVar9 = 0;
    }
    else {
      iVar5 = 0;
    }
    if (iVar4 < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00101204:
      cVar10 = SUB41(iVar4,0);
    }
  }
  else if (iVar5 < 0x100) {
    if (iVar9 < 0) goto LAB_00101387;
    if (0xff < iVar9) goto LAB_00101407;
    cVar10 = (color_rgba)0x0;
    if (-1 < iVar4) goto LAB_001011f5;
  }
  else {
    iVar5 = -1;
    if (0xff < iVar9) {
      iVar5 = -1;
LAB_00101407:
      iVar9 = -1;
    }
LAB_001011f5:
    cVar10 = (color_rgba)0xff;
    if (iVar4 < 0x100) goto LAB_00101204;
  }
  *param_1 = cVar10;
  param_1[1] = SUB41(iVar9,0);
  param_1[2] = SUB41(iVar5,0);
  param_1[3] = (color_rgba)0xff;
  iVar9 = *(int *)(&DAT_00120034 + uVar1 * 0x10);
  iVar4 = uVar3 + iVar9;
  if (iVar4 < 0) {
    iVar5 = uVar6 + iVar9;
    if (iVar5 < 0) {
      iVar4 = 0;
LAB_00101370:
      iVar5 = 0;
      if (-1 < (int)(iVar9 + uVar7)) goto LAB_0010130f;
    }
    else {
      iVar4 = 0;
      iVar8 = uVar7 + iVar9;
      if (-1 < iVar8) goto LAB_00101250;
    }
    iVar8 = 0;
  }
  else {
    iVar5 = uVar6 + iVar9;
    if (iVar4 < 0x100) {
      if (iVar5 < 0) goto LAB_00101370;
      if (0xff < iVar5) goto LAB_001012fa;
      iVar8 = 0;
      if ((int)(iVar9 + uVar7) < 0) goto LAB_00101250;
    }
    else {
      iVar4 = -1;
      if (0xff < iVar5) {
        iVar4 = -1;
LAB_001012fa:
        iVar5 = -1;
      }
    }
    iVar8 = -1;
    if (0xff < (int)(iVar9 + uVar7)) goto LAB_00101250;
LAB_0010130f:
    iVar8 = iVar9 + uVar7;
  }
LAB_00101250:
  param_1[4] = SUB41(iVar8,0);
  param_1[5] = SUB41(iVar5,0);
  param_1[6] = SUB41(iVar4,0);
  param_1[7] = (color_rgba)0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<basisu::basisu_frontend::subblock_endpoint_quant_err*,
   __gnu_cxx::__ops::_Val_less_iter>(basisu::basisu_frontend::subblock_endpoint_quant_err*,
   __gnu_cxx::__ops::_Val_less_iter) [clone .isra.0] */

void std::
     __unguarded_linear_insert<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Val_less_iter>
               (ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)((long)param_1 + 0x14);
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[2];
  for (; (uVar2 < param_1[-3] ||
         ((param_1[-3] == uVar2 &&
          (((uint)uVar5 < (uint)param_1[-1] ||
           (((uint)param_1[-1] == (uint)uVar5 && (uVar1 < *(uint *)((long)param_1 + -4)))))))));
      param_1 = param_1 + -3) {
    *param_1 = param_1[-3];
    param_1[1] = param_1[-2];
    param_1[2] = param_1[-1];
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>::
     _M_invoke(_Any_data *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  etc_block *this;
  ulong uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  color_rgba local_90;
  byte local_8f;
  byte local_8e;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  plVar1 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = *(uint *)(plVar1 + 1);
  if (uVar16 < *(uint *)((long)plVar1 + 0xc)) {
    lVar11 = *plVar1;
    lVar12 = (ulong)uVar16 << 3;
    do {
      uVar3 = 0;
      this = (etc_block *)(*(long *)(lVar11 + 0x68) + lVar12);
      do {
        uVar13 = uVar3 * 4;
        uVar10 = uVar3;
        do {
          uVar8 = (ulong)uVar13;
          uVar2 = uVar10 >> 3;
          bVar7 = (byte)uVar10 & 7;
          uVar10 = uVar10 + 4;
          uVar15 = (ulong)(7 - uVar2);
          uVar13 = uVar13 + 1;
          *(float *)((long)&local_88 + uVar8 * 4) =
               (float)*(byte *)((long)&basisu::g_etc1_to_selector_index +
                               (ulong)(((int)(uint)(byte)this[uVar15 - 2] >> bVar7) * 2 & 2U |
                                      (int)(uint)(byte)this[uVar15] >> bVar7 & 1U));
        } while (uVar3 + 0x10 != uVar10);
        uVar3 = uVar3 + 1;
      } while (uVar3 != 4);
      basisu::etc_block::get_block_low_high_colors
                (this,&local_90,
                 (uint)((uint)((int)(uint)(byte)this[3] >> 5) <=
                       ((int)(uint)(byte)this[3] >> 2 & 7U)));
      lVar11 = *plVar1;
      iVar4 = (uint)(byte)local_90 - (uint)local_8c;
      if (*(char *)(lVar11 + 0x1c) == '\0') {
        uVar3 = iVar4 * iVar4 +
                ((uint)local_8f - (uint)local_8b) * ((uint)local_8f - (uint)local_8b) +
                ((uint)local_8e - (uint)local_8a) * ((uint)local_8e - (uint)local_8a);
      }
      else {
        lVar9 = (long)(int)(((uint)local_8f - (uint)local_8b) * 0x5c + iVar4 * 0x1b +
                           ((uint)local_8e - (uint)local_8a) * 9);
        lVar6 = iVar4 * 0x80 - lVar9;
        lVar14 = (int)(((uint)local_8e - (uint)local_8a) * 0x80) - lVar9;
        uVar3 = ((uint)((int)(lVar6 * lVar6 >> 7) * 0x1a) >> 7) +
                ((uint)((int)(lVar14 * lVar14 >> 7) * 3) >> 7) + (int)(lVar9 * lVar9 >> 7);
      }
      uVar8 = 1;
      if (299 < uVar3) {
        uVar3 = uVar3 / 300;
        if (0x1000 < uVar3) {
          uVar3 = 0x1000;
        }
        uVar8 = (ulong)uVar3;
      }
      lVar6 = lVar12 * 9;
      uVar16 = uVar16 + 1;
      lVar12 = lVar12 + 8;
      puVar5 = (undefined8 *)(lVar6 + *(long *)plVar1[2]);
      puVar5[8] = uVar8;
      *puVar5 = local_88;
      puVar5[1] = uStack_80;
      puVar5[2] = local_78;
      puVar5[3] = uStack_70;
      puVar5[4] = local_68;
      puVar5[5] = uStack_60;
      puVar5[6] = local_58;
      puVar5[7] = uStack_50;
    } while (uVar16 < *(uint *)((long)plVar1 + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*,
   unsigned int*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
               (uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  uint *puVar3;
  uint *puVar4;
  
  if (param_1 == param_2) {
    return;
  }
  puVar3 = param_1 + 1;
  do {
    if (param_2 == puVar3) {
      return;
    }
    while( true ) {
      uVar1 = *puVar3;
      puVar4 = puVar3 + 1;
      if (uVar1 < *param_1) break;
      uVar2 = puVar3[-1];
      while (uVar1 < uVar2) {
        *puVar3 = uVar2;
        uVar2 = puVar3[-2];
        puVar3 = puVar3 + -1;
      }
      *puVar3 = uVar1;
      puVar3 = puVar4;
      if (param_2 == puVar4) {
        return;
      }
    }
    __n = (long)puVar3 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *puVar3 = *param_1;
      }
    }
    else {
      memmove((void *)((long)puVar3 + (4 - __n)),param_1,__n);
    }
    *param_1 = uVar1;
    puVar3 = puVar4;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__final_insertion_sort<unsigned int*, __gnu_cxx::__ops::_Iter_less_iter>(unsigned int*,
   unsigned int*, __gnu_cxx::__ops::_Iter_less_iter) [clone .isra.0] */

void std::__final_insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  if ((long)param_2 - param_1 < 0x41) {
    __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>();
    return;
  }
  __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>
            (param_1,(uint *)(param_1 + 0x40));
  puVar5 = (uint *)(param_1 + 0x40);
  do {
    if (param_2 == puVar5) {
      return;
    }
    while( true ) {
      uVar1 = *puVar5;
      uVar4 = puVar5[-1];
      puVar2 = puVar5;
      if (uVar4 <= uVar1) break;
      do {
        puVar3 = puVar2 + -1;
        *puVar2 = uVar4;
        uVar4 = puVar2[-2];
        puVar2 = puVar3;
      } while (uVar1 < uVar4);
      puVar5 = puVar5 + 1;
      *puVar3 = uVar1;
      if (param_2 == puVar5) {
        return;
      }
    }
    *puVar5 = uVar1;
    puVar5 = puVar5 + 1;
  } while( true );
}



/* basisu::basisu_frontend::validate_output() const [clone .part.0] */

undefined8 __thiscall basisu::basisu_frontend::validate_output(basisu_frontend *this)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  
  if (*(int *)(this + 0x40) == 0) {
    return 1;
  }
  lVar12 = 0;
  lVar14 = *(long *)(this + 0x68);
  while( true ) {
    lVar1 = lVar12 * 8;
    bVar6 = *(byte *)(lVar14 + 3 + lVar1);
    if ((bVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd2b);
    }
    if ((bVar6 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd2e);
    }
    uVar9 = *(uint *)(*(long *)(this + 0x110) + lVar1);
    if (uVar9 != ((uint *)(*(long *)(this + 0x110) + lVar1))[1]) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd39);
    }
    lVar2 = (ulong)uVar9 * 0x38;
    iVar8 = basisu::etc_block::pack_color5
                      ((color_rgba *)(*(long *)(this + 0x100) + lVar2),false,0x7f);
    uVar7 = basisu::etc_block::pack_delta3(0,0,0);
    bVar6 = (byte)uVar7 & 7 | (byte)(iVar8 << 3);
    uVar9 = uVar7 >> 3 & 7;
    lVar14 = *(long *)(this + 0x100) + lVar2;
    if (*(char *)(lVar14 + 0x30) == '\0') {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd3d);
    }
    uVar13 = *(int *)(*(long *)(this + 0x100) + 8 + lVar2) << 2 | *(int *)(lVar14 + 8) << 5;
    uVar4 = *(uint *)(*(long *)(this + 0x170) + lVar12 * 4);
    if (*(uint *)(this + 0x128) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd43);
    }
    plVar10 = (long *)((ulong)uVar4 * 0x10 + *(long *)(this + 0x120));
    uVar5 = *(uint *)(plVar10 + 1);
    if (uVar5 == 0) break;
    uVar11 = 0;
    while (*(int *)(*plVar10 + uVar11 * 4) != (int)lVar12) {
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar5) goto LAB_00101ab0;
    }
    lVar14 = *(long *)(this + 0x68);
    pbVar15 = (byte *)(lVar1 + lVar14);
    bVar3 = pbVar15[3];
    if ((bVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd4b);
    }
    if ((bVar3 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd4c);
    }
    if ((int)(uint)bVar3 >> 5 != (int)(uVar13 & 0xff | 3) >> 5) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd4d);
    }
    if (((uVar13 ^ bVar3) & 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd4e);
    }
    if ((ushort)((ushort)pbVar15[1] * 4 & 0x3e0 | (*pbVar15 & 0xf8) << 7 |
                (ushort)((int)(uint)pbVar15[2] >> 3)) !=
        (ushort)((((ushort)iVar8 >> 5) * 8 | (ushort)uVar9) * 4 & 0x3e0 |
                 ((ushort)iVar8 >> 10 & 0x1f) << 10 | (ushort)((int)(uint)bVar6 >> 3))) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd4f);
    }
    if ((ushort)((ushort)((pbVar15[1] & 7) << 3) | (ushort)((*pbVar15 & 7) << 6) | pbVar15[2] & 7)
        != (ushort)((ushort)(uVar9 << 3) | (ushort)((uVar7 >> 6 & 7) << 6) | bVar6 & 7)) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd50);
    }
    if (*(int *)(pbVar15 + 4) != *(int *)(*(long *)(this + 0x130) + 4 + (ulong)uVar4 * 8)) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0xd51);
    }
    lVar12 = lVar12 + 1;
    if (*(uint *)(this + 0x40) <= (uint)lVar12) {
      return 1;
    }
  }
LAB_00101ab0:
                    /* WARNING: Subroutine does not return */
  handle_verify_failure(0xd45);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<basisu::basisu_frontend::subblock_endpoint_quant_err*,
   __gnu_cxx::__ops::_Iter_less_iter>(basisu::basisu_frontend::subblock_endpoint_quant_err*,
   basisu::basisu_frontend::subblock_endpoint_quant_err*, __gnu_cxx::__ops::_Iter_less_iter) [clone
   .isra.0] */

void std::
     __insertion_sort<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Iter_less_iter>
               (ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  ulong *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == param_2) {
    return;
  }
  if (param_2 != param_1 + 3) {
    puVar4 = param_1 + 6;
    do {
      while( true ) {
        uVar1 = puVar4[-3];
        if (*param_1 <= uVar1) break;
        uVar6 = (uint)puVar4[-1];
        uVar7 = *(uint *)((long)puVar4 + -4);
LAB_00101b5f:
        uVar2 = puVar4[-2];
        __n = (long)puVar4 + (-0x18 - (long)param_1);
        if ((long)__n < 0x19) {
          if (__n == 0x18) {
            uVar3 = param_1[1];
            puVar4[-3] = *param_1;
            puVar4[-2] = uVar3;
            puVar4[-1] = param_1[2];
          }
        }
        else {
          memmove((void *)((long)puVar4 - __n),param_1,__n);
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = CONCAT44(uVar7,uVar6);
        bVar5 = param_2 == puVar4;
        puVar4 = puVar4 + 3;
        if (bVar5) {
          return;
        }
      }
      if (uVar1 == *param_1) {
        uVar6 = (uint)puVar4[-1];
        if (uVar6 < (uint)param_1[2]) {
          uVar7 = *(uint *)((long)puVar4 + -4);
        }
        else if ((uVar6 != (uint)param_1[2]) ||
                (uVar7 = *(uint *)((long)puVar4 + -4), *(uint *)((long)param_1 + 0x14) <= uVar7))
        goto LAB_00101b36;
        goto LAB_00101b5f;
      }
LAB_00101b36:
      __unguarded_linear_insert<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Val_less_iter>
                ();
      bVar5 = param_2 != puVar4;
      puVar4 = puVar4 + 3;
    } while (bVar5);
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<basisu::basisu_frontend::subblock_endpoint_quant_err*, long,
   basisu::basisu_frontend::subblock_endpoint_quant_err,
   __gnu_cxx::__ops::_Iter_less_iter>(basisu::basisu_frontend::subblock_endpoint_quant_err*, long,
   long, basisu::basisu_frontend::subblock_endpoint_quant_err, __gnu_cxx::__ops::_Iter_less_iter)
   [clone .isra.0] */

void std::
     __adjust_heap<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,basisu::basisu_frontend::subblock_endpoint_quant_err,__gnu_cxx::__ops::_Iter_less_iter>
               (long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  
  lVar6 = (long)(param_3 - 1) / 2;
  lVar7 = param_2;
  if (param_2 < lVar6) {
    do {
      lVar5 = (lVar7 + 1) * 2;
      lVar3 = (lVar7 + 1) * 0x30;
      puVar1 = (ulong *)(param_1 + -0x18 + lVar3);
      puVar4 = (ulong *)(lVar3 + param_1);
      if ((*puVar4 < *puVar1) ||
         ((*puVar4 == *puVar1 &&
          (((uint)puVar4[2] < (uint)puVar1[2] ||
           (((uint)puVar4[2] == (uint)puVar1[2] &&
            (*(uint *)((long)puVar4 + 0x14) < *(uint *)((long)puVar1 + 0x14))))))))) {
        lVar5 = lVar5 + -1;
        puVar4 = (ulong *)(param_1 + lVar5 * 0x18);
      }
      uVar2 = puVar4[1];
      puVar1 = (ulong *)(param_1 + lVar7 * 0x18);
      *puVar1 = *puVar4;
      puVar1[1] = uVar2;
      puVar1[2] = puVar4[2];
      lVar7 = lVar5;
    } while (lVar5 < lVar6);
    if ((param_3 & 1) == 0) goto LAB_00101d40;
  }
  else {
    puVar4 = (ulong *)(param_1 + param_2 * 0x18);
    lVar5 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00101d1b;
LAB_00101d40:
    if ((long)(param_3 - 2) / 2 == lVar5) {
      lVar7 = param_1 + (lVar5 + 1) * 0x30;
      uVar2 = *(ulong *)(lVar7 + -0x10);
      *puVar4 = *(ulong *)(lVar7 + -0x18);
      puVar4[1] = uVar2;
      puVar4[2] = *(ulong *)(lVar7 + -8);
      lVar5 = (lVar5 + 1) * 2 + -1;
      puVar4 = (ulong *)(param_1 + lVar5 * 0x18);
    }
  }
  lVar7 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  while (param_2 < lVar5) {
    lVar6 = lVar7 >> 1;
    puVar4 = (ulong *)(param_1 + lVar6 * 0x18);
    if ((in_stack_00000008 <= *puVar4) &&
       ((*puVar4 != in_stack_00000008 ||
        ((uStack0000000000000018 <= (uint)puVar4[2] &&
         (((uint)puVar4[2] != uStack0000000000000018 ||
          (uStack000000000000001c <= *(uint *)((long)puVar4 + 0x14))))))))) {
      puVar4 = (ulong *)(param_1 + lVar5 * 0x18);
      break;
    }
    uVar2 = puVar4[1];
    puVar1 = (ulong *)(param_1 + lVar5 * 0x18);
    *puVar1 = *puVar4;
    puVar1[1] = uVar2;
    puVar1[2] = puVar4[2];
    lVar7 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
    lVar5 = lVar6;
  }
LAB_00101d1b:
  *puVar4 = in_stack_00000008;
  puVar4[1] = in_stack_00000010;
  puVar4[2] = _uStack0000000000000018;
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  color_rgba *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long in_FS_OFFSET;
  byte *local_68;
  undefined8 local_60;
  color_rgba local_58 [16];
  color_rgba local_48 [8];
  long local_40;
  
  uVar14 = *(uint *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar14 < *(uint *)(param_1 + 0xc)) {
    lVar9 = (ulong)uVar14 << 4;
    lVar16 = (ulong)uVar14 * 0x38;
    do {
      plVar18 = (long *)(*(long *)(*(long *)param_1 + 0xc0) + lVar9);
      if ((int)plVar18[1] != 0) {
        lVar10 = 0;
        do {
          local_68 = (byte *)0x0;
          local_60 = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_68,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
          local_60 = CONCAT44(local_60._4_4_,8);
          uVar2 = *(uint *)(*plVar18 + lVar10 * 4);
          lVar8 = 0;
          lVar3 = *(long *)(*(long *)param_1 + 0x58);
          do {
            *(undefined4 *)(local_68 + lVar8) =
                 *(undefined4 *)
                  ((ulong)(uVar2 >> 1) * 0x40 + lVar3 +
                  (ulong)*(uint *)(basisu::etc1_optimizer::init + lVar8 + (ulong)(uVar2 & 1) * 0x20)
                  * 4);
            lVar8 = lVar8 + 4;
          } while (lVar8 != 0x20);
          lVar3 = *(long *)param_1;
          lVar8 = 0;
          pbVar6 = (byte *)(*(long *)(lVar3 + 0x100) + lVar16);
          basisu::etc_block::get_block_colors5
                    (local_58,(color_rgba *)(ulong)*pbVar6,(uint)pbVar6[1],(bool)pbVar6[2]);
          pbVar6 = local_68;
          do {
            while (uVar11 = 0xffffffffffffffff, *(char *)(lVar3 + 0x1c) != '\0') {
              pcVar7 = local_58;
              do {
                lVar15 = (long)(int)(((uint)pbVar6[1] - (uint)(byte)pcVar7[1]) * 0x5c +
                                     ((uint)*pbVar6 - (uint)(byte)*pcVar7) * 0x1b +
                                    ((uint)pbVar6[2] - (uint)(byte)pcVar7[2]) * 9);
                lVar12 = (int)(((uint)*pbVar6 - (uint)(byte)*pcVar7) * 0x80) - lVar15;
                lVar17 = (int)(((uint)pbVar6[2] - (uint)(byte)pcVar7[2]) * 0x80) - lVar15;
                uVar13 = (ulong)(((uint)((int)(lVar12 * lVar12 >> 7) * 0x1a) >> 7) +
                                 ((uint)((int)(lVar17 * lVar17 >> 7) * 3) >> 7) +
                                (int)(lVar15 * lVar15 >> 7));
                if (uVar13 < uVar11) {
                  uVar11 = uVar13;
                }
                pcVar7 = pcVar7 + 4;
              } while (pcVar7 != local_48);
              pbVar6 = pbVar6 + 4;
              lVar8 = lVar8 + uVar11;
              if (local_68 + 0x20 == pbVar6) goto LAB_00102054;
            }
            pcVar7 = local_58;
            do {
              uVar13 = (ulong)(int)(((uint)pbVar6[1] - (uint)(byte)pcVar7[1]) *
                                    ((uint)pbVar6[1] - (uint)(byte)pcVar7[1]) +
                                    ((uint)*pbVar6 - (uint)(byte)*pcVar7) *
                                    ((uint)*pbVar6 - (uint)(byte)*pcVar7) +
                                   ((uint)pbVar6[2] - (uint)(byte)pcVar7[2]) *
                                   ((uint)pbVar6[2] - (uint)(byte)pcVar7[2]));
              if (uVar13 < uVar11) {
                uVar11 = uVar13;
              }
              pcVar7 = pcVar7 + 4;
            } while (pcVar7 != local_48);
            pbVar6 = pbVar6 + 4;
            lVar8 = lVar8 + uVar11;
          } while (local_68 + 0x20 != pbVar6);
LAB_00102054:
          iVar4 = pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 400));
          if (iVar4 != 0) {
            std::__throw_system_error(iVar4);
            goto LAB_001021e9;
          }
          lVar12 = *(long *)param_1;
          uVar5 = *(uint *)(lVar12 + 0x188);
          if (*(uint *)(lVar12 + 0x18c) <= uVar5) {
            basisu::elemental_vector::increase_capacity
                      ((int)lVar12 + 0x180,(bool)((char)uVar5 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x18,false);
            uVar5 = *(uint *)(lVar12 + 0x188);
          }
          plVar1 = (long *)(*(long *)(lVar12 + 0x180) + (ulong)uVar5 * 0x18);
          *plVar1 = lVar8;
          plVar1[1] = CONCAT44((int)lVar10,uVar14);
          plVar1[2] = CONCAT44(uVar2,uVar2 >> 1) & 0x1ffffffff;
          *(uint *)(lVar12 + 0x188) = uVar5 + 1;
          pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 400));
          if (local_68 != (byte *)0x0) {
            free(local_68);
          }
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < *(uint *)(plVar18 + 1));
      }
      uVar14 = uVar14 + 1;
      lVar9 = lVar9 + 0x10;
      lVar16 = lVar16 + 0x38;
    } while (uVar14 < *(uint *)(param_1 + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001021e9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  color_rgba *pcVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  color_rgba *pcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long in_FS_OFFSET;
  uint local_90;
  color_rgba local_58 [16];
  color_rgba local_48 [8];
  long local_40;
  
  plVar4 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(plVar4 + 1) < *(uint *)((long)plVar4 + 0xc)) {
    lVar5 = *(long *)plVar4[3];
    uVar15 = (ulong)*(uint *)(plVar4 + 1);
    do {
      uVar2 = *(uint *)(lVar5 + uVar15 * 8);
      if (uVar2 != *(uint *)(lVar5 + 4 + uVar15 * 8)) {
                    /* WARNING: Subroutine does not return */
        basisu::handle_verify_failure(0x724);
      }
      lVar6 = *plVar4;
      pbVar8 = (byte *)(uVar15 * 0x40 + *(long *)(lVar6 + 0x58));
      uVar14 = (ulong)*(uint *)(lVar6 + 0xe8);
      if (*(uint *)(lVar6 + 0xe8) != 0) {
        uVar14 = (ulong)*(byte *)(*(long *)(lVar6 + 0xe0) + uVar15);
      }
      plVar9 = (long *)0x0;
      if (*(int *)(lVar6 + 0xf8) != 0) {
        plVar9 = (long *)(uVar14 * 0x10 + *(long *)(lVar6 + 0xf0));
      }
      cVar1 = *(char *)(lVar6 + 0x49);
      if (cVar1 == '\0') {
        uVar22 = *(uint *)(lVar6 + 200);
      }
      else {
        uVar22 = *(uint *)(plVar9 + 1);
      }
      if (uVar22 != 0) {
        lVar7 = *(long *)(lVar6 + 0x100);
        lVar23 = 0;
        uVar14 = 0x7fffffffffffffff;
        local_90 = 0;
        uVar3 = *(uint *)(lVar7 + 8 + (ulong)uVar2 * 0x38);
        uVar10 = (ulong)uVar22;
LAB_00102300:
        uVar22 = (uint)lVar23;
        if (cVar1 != '\0') {
          uVar22 = *(uint *)(*plVar9 + lVar23 * 4);
        }
        pbVar13 = (byte *)(lVar7 + (ulong)uVar22 * 0x38);
        if (uVar3 < *(uint *)(pbVar13 + 8)) {
          if ((-1 < (long)uVar14) && ((uVar14 != 0x7fffffffffffffff || (uVar2 != uVar22))))
          goto LAB_00102438;
          uVar14 = 0x7fffffffffffffff;
          if (uVar10 != lVar23 + 1U) goto LAB_00102443;
        }
        else {
          pcVar17 = local_58;
          basisu::etc_block::get_block_colors5
                    (pcVar17,(color_rgba *)(ulong)*pbVar13,(uint)pbVar13[1],(bool)pbVar13[2]);
          if (*(char *)(lVar6 + 0x1c) == '\0') {
            uVar11 = 0;
            pbVar13 = pbVar8;
            do {
              uVar16 = 0xffffffffffffffff;
              pcVar12 = pcVar17;
              do {
                uVar18 = (ulong)(int)(((uint)pbVar13[2] - (uint)(byte)pcVar12[2]) *
                                      ((uint)pbVar13[2] - (uint)(byte)pcVar12[2]) +
                                     ((uint)*pbVar13 - (uint)(byte)*pcVar12) *
                                     ((uint)*pbVar13 - (uint)(byte)*pcVar12) +
                                     ((uint)pbVar13[1] - (uint)(byte)pcVar12[1]) *
                                     ((uint)pbVar13[1] - (uint)(byte)pcVar12[1]));
                if (uVar18 < uVar16) {
                  uVar16 = uVar18;
                }
                if (uVar16 == 0) goto LAB_00102409;
                pcVar12 = pcVar12 + 4;
              } while (local_48 != pcVar12);
              uVar11 = uVar11 + uVar16;
LAB_00102409:
              if (uVar14 < uVar11) goto LAB_0010263b;
              pbVar13 = pbVar13 + 4;
            } while (pbVar8 + 0x40 != pbVar13);
          }
          else {
            uVar11 = 0;
            pbVar13 = pbVar8;
            do {
              uVar16 = 0xffffffffffffffff;
              pcVar12 = pcVar17;
              do {
                lVar21 = (long)(int)(((uint)*pbVar13 - (uint)(byte)*pcVar12) * 0x1b +
                                     ((uint)pbVar13[1] - (uint)(byte)pcVar12[1]) * 0x5c +
                                    ((uint)pbVar13[2] - (uint)(byte)pcVar12[2]) * 9);
                lVar19 = (int)(((uint)*pbVar13 - (uint)(byte)*pcVar12) * 0x80) - lVar21;
                lVar20 = (int)(((uint)pbVar13[2] - (uint)(byte)pcVar12[2]) * 0x80) - lVar21;
                uVar18 = (ulong)((int)(lVar21 * lVar21 >> 7) +
                                ((uint)((int)(lVar20 * lVar20 >> 7) * 3) >> 7) +
                                ((uint)((int)(lVar19 * lVar19 >> 7) * 0x1a) >> 7));
                if (uVar18 < uVar16) {
                  uVar16 = uVar18;
                }
                if (uVar16 == 0) goto LAB_001025e5;
                pcVar12 = pcVar12 + 4;
              } while (local_48 != pcVar12);
              uVar11 = uVar11 + uVar16;
LAB_001025e5:
              if (uVar14 < uVar11) goto LAB_0010263b;
              pbVar13 = pbVar13 + 4;
            } while (pbVar8 + 0x40 != pbVar13);
          }
          if ((uVar14 <= uVar11) && ((uVar2 != uVar22 || (uVar11 != uVar14)))) goto LAB_00102438;
          if (uVar11 != 0) goto LAB_00102435;
        }
      }
LAB_0010249a:
      *(uint *)(*(long *)plVar4[2] + uVar15 * 4) = uVar22;
      uVar15 = uVar15 + 1;
    } while ((uint)uVar15 < *(uint *)((long)plVar4 + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010263b:
  if ((uVar2 == uVar22) && (uVar11 == uVar14)) {
LAB_00102435:
    uVar14 = uVar11;
    local_90 = uVar22;
  }
LAB_00102438:
  uVar22 = local_90;
  if (uVar10 == lVar23 + 1U) goto LAB_0010249a;
LAB_00102443:
  lVar23 = lVar23 + 1;
  local_90 = uVar22;
  goto LAB_00102300;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  color_rgba *pcVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  etc_block *this;
  long in_FS_OFFSET;
  ulong local_c0;
  uint local_80;
  uint local_60;
  uint local_5c;
  color_rgba local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = *(uint *)(param_1 + 8);
  if (local_80 < *(uint *)(param_1 + 0xc)) {
    lVar16 = (ulong)local_80 * 8;
    do {
      lVar10 = *(long *)param_1;
      puVar6 = (uint *)(*(long *)(lVar10 + 0x110) + lVar16);
      uVar19 = *puVar6;
      if (uVar19 != puVar6[1]) {
                    /* WARNING: Subroutine does not return */
        basisu::handle_verify_failure(0x843);
      }
      pbVar7 = (byte *)(*(long *)(lVar10 + 0x58) + lVar16 * 8);
      this = (etc_block *)(*(long *)(lVar10 + 0x68) + lVar16);
      puVar6 = (uint *)(*(long *)(lVar10 + 0x100) + (ulong)uVar19 * 0x38);
      local_60 = *puVar6;
      uVar19 = puVar6[2];
      local_5c = *puVar6;
      this[3] = (etc_block)((byte)this[3] | 2);
      iVar4 = basisu::etc_block::pack_color5((color_rgba *)&local_60,false,0x7f);
      *(ushort *)this =
           CONCAT11((char)((ushort)iVar4 >> 5) << 3,((byte)((uint)iVar4 >> 8) >> 2) << 3) |
           _LC1 & *(ushort *)this;
      this[2] = (etc_block)((byte)(iVar4 << 3) | (byte)this[2] & 7);
      uVar5 = basisu::etc_block::pack_delta3
                        ((local_5c & 0xff) - (local_60 & 0xff),
                         (local_5c >> 8 & 0xff) - (local_60 >> 8 & 0xff),
                         (local_5c >> 0x10 & 0xff) - (local_60 >> 0x10 & 0xff));
      uVar26 = 0;
      *(uint *)this =
           (((((byte)this[3] & 2 | uVar19 << 5 | uVar19 << 2) & 0xff | 1) << 8 |
            (byte)this[2] & 0xfffffff8 | uVar5 & 7) << 8 |
           (uint)((byte)this[1] & 0xf8 | (byte)((ushort)uVar5 >> 3) & 7)) << 8 |
           (uint)((byte)*this & 0xf8 | (byte)((ushort)uVar5 >> 6) & 7);
      uVar5 = 0;
      cVar1 = *(char *)(*(long *)param_1 + 0x1c);
      uVar19 = 0x10;
      iVar4 = 0;
      pbVar22 = pbVar7;
      while( true ) {
        basisu::etc_block::get_block_colors(this,local_58,uVar5);
        if (((byte)this[3] & 1) == 0) {
          pbVar13 = pbVar22;
          uVar15 = uVar26;
          do {
            pbVar18 = pbVar13;
            uVar21 = uVar15;
            do {
              uVar25 = 0;
              uVar23 = 0;
              uVar24 = 0xffffffffffffffff;
              pcVar20 = local_58;
              do {
                iVar11 = (uint)(byte)*pcVar20 - (uint)*pbVar18;
                if (cVar1 == '\0') {
                  uVar12 = iVar11 * iVar11 +
                           ((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) *
                           ((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) +
                           ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) *
                           ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]);
                }
                else {
                  lVar17 = (long)(int)(iVar11 * 0x1b +
                                       ((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) * 0x5c +
                                      ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) * 9);
                  lVar14 = iVar11 * 0x80 - lVar17;
                  lVar10 = (int)(((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) * 0x80) - lVar17;
                  uVar12 = ((uint)((int)(lVar14 * lVar14 >> 7) * 0x1a) >> 7) +
                           ((uint)((int)(lVar10 * lVar10 >> 7) * 3) >> 7) +
                           (int)(lVar17 * lVar17 >> 7);
                }
                if (uVar12 < uVar24) {
                  uVar25 = uVar23;
                  uVar24 = (ulong)uVar12;
                }
                uVar12 = (int)uVar23 + 1;
                uVar23 = (ulong)uVar12;
                pcVar20 = pcVar20 + 4;
              } while (uVar12 != 4);
              uVar12 = uVar21 >> 3;
              bVar8 = (byte)uVar21 & 7;
              uVar21 = uVar21 + 4;
              pbVar18 = pbVar18 + 4;
              uVar24 = (ulong)(7 - uVar12);
              bVar2 = *(byte *)((long)&basisu::g_selector_index_to_etc1 + uVar25);
              bVar3 = ~(byte)(1 << bVar8);
              this[uVar24] = (etc_block)((byte)this[uVar24] & bVar3 | (byte)((bVar2 & 1) << bVar8));
              this[uVar24 - 2] = (etc_block)(bVar3 & (byte)this[uVar24 - 2] | (bVar2 >> 1) << bVar8)
              ;
            } while (uVar15 + 8 != uVar21);
            uVar15 = uVar15 + 1;
            pbVar13 = pbVar13 + 0x10;
          } while (uVar26 + 4 != uVar15);
        }
        else {
          pbVar13 = pbVar7;
          uVar15 = uVar19;
          do {
            uVar21 = uVar15 - 0x10;
            pbVar18 = pbVar13;
            do {
              local_c0 = 0;
              uVar25 = 0xffffffffffffffff;
              uVar12 = 0;
              pcVar20 = local_58;
              do {
                if (cVar1 == '\0') {
                  uVar9 = ((uint)(byte)*pcVar20 - (uint)*pbVar18) *
                          ((uint)(byte)*pcVar20 - (uint)*pbVar18) +
                          ((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) *
                          ((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) +
                          ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) *
                          ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]);
                }
                else {
                  lVar14 = (long)(int)(((uint)(byte)pcVar20[1] - (uint)pbVar18[1]) * 0x5c +
                                       ((uint)(byte)*pcVar20 - (uint)*pbVar18) * 0x1b +
                                      ((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) * 9);
                  lVar10 = (int)(((uint)(byte)*pcVar20 - (uint)*pbVar18) * 0x80) - lVar14;
                  lVar17 = (int)(((uint)(byte)pcVar20[2] - (uint)pbVar18[2]) * 0x80) - lVar14;
                  uVar9 = ((uint)((int)(lVar10 * lVar10 >> 7) * 0x1a) >> 7) +
                          ((uint)((int)(lVar17 * lVar17 >> 7) * 3) >> 7) +
                          (int)(lVar14 * lVar14 >> 7);
                }
                if (uVar9 < uVar25) {
                  local_c0 = (ulong)uVar12;
                  uVar25 = (ulong)uVar9;
                }
                uVar12 = uVar12 + 1;
                pcVar20 = pcVar20 + 4;
              } while (uVar12 != 4);
              pbVar18 = pbVar18 + 4;
              uVar25 = (ulong)(7 - (uVar21 >> 3));
              bVar2 = *(byte *)((long)&basisu::g_selector_index_to_etc1 + local_c0);
              bVar8 = (byte)uVar21 & 7;
              uVar21 = uVar21 + 4;
              bVar3 = ~(byte)(1 << bVar8);
              this[uVar25] = (etc_block)((byte)this[uVar25] & bVar3 | (byte)((bVar2 & 1) << bVar8));
              this[uVar25 - 2] = (etc_block)(bVar3 & (byte)this[uVar25 - 2] | (bVar2 >> 1) << bVar8)
              ;
            } while (uVar15 != uVar21);
            uVar15 = uVar15 + 1;
            pbVar13 = pbVar13 + 0x10;
          } while (iVar4 + 0x12U != uVar15);
        }
        uVar26 = uVar26 + 8;
        iVar4 = iVar4 + 2;
        pbVar22 = pbVar22 + 8;
        uVar19 = uVar19 + 2;
        pbVar7 = pbVar7 + 0x20;
        if (uVar5 != 0) break;
        uVar5 = 1;
      }
      local_80 = local_80 + 1;
      lVar16 = lVar16 + 8;
    } while (local_80 < *(uint *)(param_1 + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::create_optimized_selector_codebook(unsigned
   int)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}::operator()
          (_lambda___1_ *this)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  color_rgba *pcVar14;
  uint uVar15;
  long lVar16;
  color_rgba *pcVar17;
  ulong uVar18;
  long *plVar19;
  color_rgba *pcVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  byte bVar27;
  color_rgba local_258 [144];
  long local_1c8 [49];
  long local_40;
  
  bVar27 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (ulong)*(uint *)(this + 8);
  if (*(uint *)(this + 8) < *(uint *)(this + 0xc)) {
    lVar25 = uVar5 * 8;
    do {
      lVar21 = *(long *)this;
      plVar1 = (long *)(*(long *)(lVar21 + 0x120) + lVar25 * 2);
      if ((int)plVar1[1] != 0) {
        pcVar20 = local_258 + 0x10;
        lVar12 = 0;
        pcVar14 = pcVar20;
        for (lVar9 = 0x40; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined8 *)pcVar14 = 0;
          pcVar14 = pcVar14 + (ulong)bVar27 * -0x10 + 8;
        }
        do {
          uVar6 = (ulong)*(uint *)(*plVar1 + lVar12 * 4);
          etc_block::get_block_colors
                    ((etc_block *)(*(long *)(lVar21 + 0x68) + uVar6 * 8),local_258,0);
          lVar16 = 0;
          lVar21 = *(long *)this;
          lVar9 = *(long *)(lVar21 + 0x58);
          cVar2 = *(char *)(lVar21 + 0x1c);
          plVar10 = local_1c8;
          do {
            plVar24 = plVar10 + -0x10;
            pbVar23 = (byte *)(lVar9 + uVar6 * 0x40 + lVar16 * 4);
            if (cVar2 == '\0') {
              do {
                bVar3 = pbVar23[1];
                bVar4 = *pbVar23;
                bVar8 = pbVar23[2];
                pcVar14 = local_258;
                plVar19 = plVar24;
                do {
                  pcVar17 = pcVar14 + 4;
                  *plVar19 = *plVar19 +
                             (long)(int)(((uint)(byte)pcVar14[1] - (uint)bVar3) *
                                         ((uint)(byte)pcVar14[1] - (uint)bVar3) +
                                         ((uint)(byte)*pcVar14 - (uint)bVar4) *
                                         ((uint)(byte)*pcVar14 - (uint)bVar4) +
                                        ((uint)(byte)pcVar14[2] - (uint)bVar8) *
                                        ((uint)(byte)pcVar14[2] - (uint)bVar8));
                  plVar19 = plVar19 + 1;
                  pcVar14 = pcVar17;
                } while (pcVar20 != pcVar17);
                plVar24 = plVar24 + 4;
                pbVar23 = pbVar23 + 4;
              } while (plVar10 != plVar24);
            }
            else {
              do {
                bVar3 = *pbVar23;
                bVar4 = pbVar23[1];
                bVar8 = pbVar23[2];
                pcVar14 = local_258;
                plVar19 = plVar24;
                do {
                  pcVar17 = pcVar14 + 4;
                  lVar13 = (long)(int)(((uint)(byte)*pcVar14 - (uint)bVar3) * 0x1b +
                                       ((uint)(byte)pcVar14[1] - (uint)bVar4) * 0x5c +
                                      ((uint)(byte)pcVar14[2] - (uint)bVar8) * 9);
                  lVar7 = (int)(((uint)(byte)*pcVar14 - (uint)bVar3) * 0x80) - lVar13;
                  lVar22 = (int)(((uint)(byte)pcVar14[2] - (uint)bVar8) * 0x80) - lVar13;
                  *plVar19 = *plVar19 +
                             (ulong)(((uint)((int)(lVar22 * lVar22 >> 7) * 3) >> 7) +
                                     ((uint)((int)(lVar7 * lVar7 >> 7) * 0x1a) >> 7) +
                                    (int)(lVar13 * lVar13 >> 7));
                  plVar19 = plVar19 + 1;
                  pcVar14 = pcVar17;
                } while (pcVar20 != pcVar17);
                plVar24 = plVar24 + 4;
                pbVar23 = pbVar23 + 4;
              } while (plVar24 != plVar10);
            }
            lVar16 = lVar16 + 4;
            plVar10 = plVar10 + 0x10;
          } while (lVar16 != 0x10);
          lVar12 = lVar12 + 1;
        } while ((uint)lVar12 < *(uint *)(plVar1 + 1));
        uVar26 = 0xc;
        while( true ) {
          uVar15 = uVar26 - 0xc;
          pcVar14 = pcVar20;
          while( true ) {
            uVar6 = *(ulong *)pcVar14;
            uVar18 = *(ulong *)(pcVar14 + 8);
            uVar11 = uVar18;
            if (uVar18 >= uVar6) {
              uVar11 = uVar6;
            }
            uVar6 = (ulong)(uVar18 < uVar6);
            if (*(ulong *)(pcVar14 + 0x10) < uVar11) {
              uVar6 = 2;
              uVar11 = *(ulong *)(pcVar14 + 0x10);
            }
            if (*(ulong *)(pcVar14 + 0x18) < uVar11) {
              uVar6 = 3;
            }
            pcVar14 = pcVar14 + 0x20;
            uVar18 = (ulong)(7 - (uVar15 >> 3));
            lVar21 = *(long *)(lVar21 + 0x130) + lVar25;
            bVar3 = *(byte *)((long)&g_selector_index_to_etc1 + uVar6);
            bVar8 = (byte)uVar15 & 7;
            bVar4 = ~(byte)(1 << bVar8);
            *(byte *)(lVar21 + uVar18) =
                 *(byte *)(lVar21 + uVar18) & bVar4 | (byte)((bVar3 & 1) << bVar8);
            *(byte *)(lVar21 + uVar18 + -2) =
                 bVar4 & *(byte *)(lVar21 + uVar18 + -2) | (bVar3 >> 1) << bVar8;
            if (uVar26 == uVar15) break;
            uVar15 = uVar15 + 4;
            lVar21 = *(long *)this;
          }
          uVar26 = uVar26 + 1;
          pcVar20 = pcVar20 + 0x80;
          if (uVar26 == 0x10) break;
          lVar21 = *(long *)this;
        }
      }
      uVar26 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar26;
      lVar25 = lVar25 + 8;
    } while (uVar26 < *(uint *)(this + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::create_optimized_selector_codebook(unsigned
   int)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}::
  operator()((_lambda___1_ *)param_1);
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>::_M_invoke(std::_Any_data const&)
    */

void std::_Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>::
     _M_invoke(_Any_data *param_1)

{
  char cVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  color_rgba *pcVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  ulong local_e8;
  ulong local_c8;
  ulong local_c0;
  uint local_a8;
  uint local_a4;
  ulong local_90;
  int local_78;
  byte abStack_62 [2];
  undefined8 local_60;
  color_rgba local_58 [24];
  long local_40;
  
  plVar2 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)*(uint *)(plVar2 + 1);
  if (*(uint *)(plVar2 + 1) < *(uint *)((long)plVar2 + 0xc)) {
    lVar23 = uVar9 * 8;
    do {
      if ((int)plVar2[2] == 0) {
        lVar26 = *(long *)(*plVar2 + 0x88);
      }
      else {
        lVar26 = *(long *)(*plVar2 + 0x68);
      }
      puVar10 = (undefined8 *)(lVar23 + lVar26);
      local_60._0_3_ = (undefined3)*puVar10;
      local_60 = CONCAT17((char)((uint)*(int *)((long)puVar10 + 4) >> 0x18),
                          CONCAT43(*(int *)((long)puVar10 + 4) << 8 |
                                   (uint)((ulong)*puVar10 >> 0x18) & 0xff | 1,(undefined3)local_60))
      ;
      lVar26 = *plVar2;
      local_78 = *(int *)(lVar26 + 0x108);
      local_90 = local_60;
      if (local_78 != 0) {
        lVar27 = 0;
        local_78 = 0;
        uVar25 = 0xffffffffffffffff;
        do {
          pcVar19 = (color_rgba *)(*(long *)(lVar26 + 0x100) + lVar27 * 0x38);
          if (*(uint *)(pcVar19 + 8) <= (uint)((int)(uint)*(byte *)((long)puVar10 + 3) >> 5)) {
            local_60 = local_60 | 0x2000000;
            iVar7 = basisu::etc_block::pack_color5(pcVar19,false,0x7f);
            local_60._0_3_ =
                 CONCAT12((byte)(iVar7 << 3) | local_60._2_1_ & 7,
                          CONCAT11((char)((ushort)iVar7 >> 5) << 3,
                                   ((byte)((uint)iVar7 >> 8) >> 2) << 3) | _LC1 & (ushort)local_60);
            uVar6 = basisu::etc_block::pack_delta3(0,0,0);
            uVar5 = local_60;
            local_60._0_2_ =
                 CONCAT11(local_60._1_1_ & 0xf8 | (byte)(uVar6 >> 3) & 7,
                          (byte)local_60._0_1_ & 0xf8 | (byte)(uVar6 >> 6) & 7);
            local_60._2_1_ = SUB81(uVar5,2);
            local_60._0_3_ = CONCAT12((byte)uVar6 & 7 | local_60._2_1_ & 0xf8,(ushort)local_60);
            lVar26 = *plVar2;
            iVar7 = *(int *)(*(long *)(lVar26 + 0x100) + 8 + lVar27 * 0x38);
            local_60._3_1_ = SUB81(uVar5,3);
            bVar3 = local_60._3_1_ & 3;
            lVar22 = lVar23 * 8 + *(long *)(lVar26 + 0x58);
            local_60._4_4_ = SUB84(uVar5,4);
            local_60._0_4_ =
                 CONCAT13(bVar3 | (byte)(iVar7 << 5) | (byte)(iVar7 << 2),(undefined3)local_60);
            if ((int)plVar2[2] == 0) {
              cVar1 = *(char *)(lVar26 + 0x1c);
              uVar24 = 0;
              lVar26 = 0;
              local_e8 = 0;
              do {
                basisu::etc_block::get_block_colors((etc_block *)&local_60,local_58,(uint)lVar26);
                if ((local_60 & 0x1000000) == 0) {
                  uVar17 = uVar24 * 4;
                  pbVar20 = (byte *)(lVar22 + lVar26 * 8);
                  uVar15 = uVar17 + 4;
                  do {
                    pbVar16 = pbVar20;
                    local_a8 = uVar17;
                    do {
                      local_a4 = 0;
                      uVar18 = 0;
                      local_c0 = 0xffffffffffffffff;
                      pcVar19 = local_58;
                      do {
                        if (cVar1 == '\0') {
                          uVar8 = ((uint)(byte)*pcVar19 - (uint)*pbVar16) *
                                  ((uint)(byte)*pcVar19 - (uint)*pbVar16) +
                                  ((uint)(byte)pcVar19[1] - (uint)pbVar16[1]) *
                                  ((uint)(byte)pcVar19[1] - (uint)pbVar16[1]) +
                                  ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) *
                                  ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]);
                        }
                        else {
                          lVar12 = (long)(int)(((uint)(byte)pcVar19[1] - (uint)pbVar16[1]) * 0x5c +
                                               ((uint)(byte)*pcVar19 - (uint)*pbVar16) * 0x1b +
                                              ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) * 9);
                          lVar14 = (int)(((uint)(byte)*pcVar19 - (uint)*pbVar16) * 0x80) - lVar12;
                          lVar21 = (int)(((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) * 0x80) -
                                   lVar12;
                          uVar8 = ((uint)((int)(lVar14 * lVar14 >> 7) * 0x1a) >> 7) +
                                  ((uint)((int)(lVar21 * lVar21 >> 7) * 3) >> 7) +
                                  (int)(lVar12 * lVar12 >> 7);
                        }
                        if (uVar8 < local_c0) {
                          local_c0 = (ulong)uVar8;
                          local_a4 = uVar18;
                        }
                        uVar18 = uVar18 + 1;
                        pcVar19 = pcVar19 + 4;
                      } while (uVar18 != 4);
                      uVar18 = local_a8 + 4;
                      pbVar16 = pbVar16 + 4;
                      bVar11 = (byte)local_a8 & 7;
                      uVar13 = (ulong)(7 - (local_a8 >> 3));
                      bVar3 = *(byte *)((long)&basisu::g_selector_index_to_etc1 + (ulong)local_a4);
                      bVar4 = ~(byte)(1 << bVar11);
                      local_58[uVar13 - 8] =
                           (color_rgba)
                           ((byte)local_58[uVar13 - 8] & bVar4 | (byte)((bVar3 & 1) << bVar11));
                      abStack_62[uVar13] = bVar4 & abStack_62[uVar13] | (bVar3 >> 1) << bVar11;
                      local_e8 = local_e8 + local_c0;
                      local_a8 = uVar18;
                    } while (uVar17 + 8 != uVar18);
                    uVar17 = uVar17 + 1;
                    pbVar20 = pbVar20 + 0x10;
                  } while (uVar15 != uVar17);
                }
                else {
                  pbVar20 = (byte *)(lVar26 * 0x20 + lVar22);
                  uVar15 = uVar24;
                  do {
                    pbVar16 = pbVar20;
                    uVar17 = uVar15;
                    do {
                      local_c0 = 0;
                      local_c8 = 0xffffffffffffffff;
                      uVar18 = 0;
                      pcVar19 = local_58;
                      do {
                        iVar7 = (uint)(byte)*pcVar19 - (uint)*pbVar16;
                        if (cVar1 == '\0') {
                          uVar8 = ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) *
                                  ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) +
                                  iVar7 * iVar7 +
                                  ((uint)(byte)pcVar19[1] - (uint)pbVar16[1]) *
                                  ((uint)(byte)pcVar19[1] - (uint)pbVar16[1]);
                        }
                        else {
                          lVar14 = (long)(int)(iVar7 * 0x1b +
                                               ((uint)(byte)pcVar19[1] - (uint)pbVar16[1]) * 0x5c +
                                              ((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) * 9);
                          lVar12 = iVar7 * 0x80 - lVar14;
                          lVar21 = (int)(((uint)(byte)pcVar19[2] - (uint)pbVar16[2]) * 0x80) -
                                   lVar14;
                          uVar8 = ((uint)((int)(lVar12 * lVar12 >> 7) * 0x1a) >> 7) +
                                  ((uint)((int)(lVar21 * lVar21 >> 7) * 3) >> 7) +
                                  (int)(lVar14 * lVar14 >> 7);
                        }
                        if (uVar8 < local_c8) {
                          local_c0 = (ulong)uVar18;
                          local_c8 = (ulong)uVar8;
                        }
                        uVar18 = uVar18 + 1;
                        pcVar19 = pcVar19 + 4;
                      } while (uVar18 != 4);
                      uVar18 = uVar17 >> 3;
                      bVar11 = (byte)uVar17 & 7;
                      uVar17 = uVar17 + 4;
                      uVar13 = (ulong)(7 - uVar18);
                      pbVar16 = pbVar16 + 4;
                      bVar3 = *(byte *)((long)&basisu::g_selector_index_to_etc1 + local_c0);
                      bVar4 = ~(byte)(1 << bVar11);
                      local_58[uVar13 - 8] =
                           (color_rgba)
                           ((byte)local_58[uVar13 - 8] & bVar4 | (byte)((bVar3 & 1) << bVar11));
                      abStack_62[uVar13] = bVar4 & abStack_62[uVar13] | (bVar3 >> 1) << bVar11;
                      local_e8 = local_e8 + local_c8;
                    } while (uVar15 + 0x10 != uVar17);
                    uVar15 = uVar15 + 1;
                    pbVar20 = pbVar20 + 0x10;
                  } while (uVar24 + 2 != uVar15);
                }
                uVar24 = uVar24 + 2;
                lVar26 = lVar26 + 1;
              } while (uVar24 != 4);
            }
            else {
              local_e8 = basisu::etc_block::evaluate_etc1_error
                                   ((color_rgba *)&local_60,SUB81(lVar22,0),
                                    (uint)*(byte *)(lVar26 + 0x1c));
            }
            if (local_e8 < uVar25) {
              local_78 = (int)lVar27;
              local_90 = local_60;
              uVar25 = local_e8;
              if (local_e8 == 0) {
                lVar26 = *plVar2;
                break;
              }
            }
            lVar26 = *plVar2;
          }
          lVar27 = lVar27 + 1;
        } while ((uint)lVar27 < *(uint *)(lVar26 + 0x108));
      }
      uVar24 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar24;
      *(ulong *)(*(long *)(lVar26 + 0x110) + lVar23) = CONCAT44(local_78,local_78);
      *(ulong *)(*(long *)(lVar26 + 0x78) + lVar23) = local_90;
      lVar23 = lVar23 + 8;
    } while (uVar24 < *(uint *)((long)plVar2 + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>::_M_invoke(std::_Any_data const&)
    */

void std::_Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>::
     _M_invoke(_Any_data *param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_54;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  
  local_54 = *(uint *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_54 < *(uint *)(param_1 + 0xc)) {
    lVar6 = *(long *)param_1;
    local_50 = (ulong)local_54 * 4;
    do {
      local_48 = local_48 | 0x2000000;
      lVar7 = (ulong)*(uint *)(*(long *)(lVar6 + 0x110) + local_50 * 2) * 0x38;
      iVar4 = basisu::etc_block::pack_color5
                        ((color_rgba *)(*(long *)(lVar6 + 0x100) + lVar7),false,0x7f);
      uVar3 = _LC1 & (ushort)local_48;
      bVar2 = local_48._2_1_ & 7;
      local_48._0_3_ =
           CONCAT12((byte)(iVar4 << 3) | bVar2,
                    CONCAT11((char)((ushort)iVar4 >> 5) << 3,((byte)((uint)iVar4 >> 8) >> 2) << 3) |
                    uVar3);
      uVar3 = basisu::etc_block::pack_delta3(0,0,0);
      lVar6 = *(long *)param_1;
      iVar4 = *(int *)(lVar6 + 0x138);
      iVar1 = *(int *)(*(long *)(lVar6 + 0x100) + 8 + lVar7);
      local_48 = (((((local_48 >> 0x18 & 3 | iVar1 << 5 | iVar1 << 2) & 0xff) << 8 |
                   local_48 >> 0x10 & 0xff) << 8 | local_48 >> 8 & 0xff) << 8 | local_48 & 0xff) &
                 __LC31 | ((uint)CONCAT11(1,(byte)uVar3 & 7) << 8 | uVar3 >> 3 & 7) << 8 |
                          uVar3 >> 6 & 7;
      if (iVar4 != 0) {
        iVar4 = 0;
        uVar8 = 0xffffffffffffffff;
        lVar7 = 0;
        do {
          local_44 = *(undefined4 *)(*(long *)(lVar6 + 0x130) + 4 + lVar7 * 8);
          uVar5 = basisu::etc_block::evaluate_etc1_error
                            ((color_rgba *)&local_48,
                             (bool)((char)*(undefined8 *)(lVar6 + 0x58) + (char)local_50 * '\x10'),
                             (uint)*(byte *)(lVar6 + 0x1c));
          if ((uVar5 < uVar8) && (iVar4 = (int)lVar7, uVar8 = uVar5, uVar5 == 0)) {
            lVar6 = *(long *)param_1;
            break;
          }
          lVar6 = *(long *)param_1;
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < *(uint *)(lVar6 + 0x138));
      }
      local_54 = local_54 + 1;
      *(int *)(*(long *)(lVar6 + 0x170) + local_50) = iVar4;
      local_50 = local_50 + 4;
    } while (local_54 < *(uint *)(param_1 + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::init_etc1_images()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::basisu_frontend::init_etc1_images()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  byte bVar9;
  ushort *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  long local_278;
  uint local_26c;
  color_rgba local_240 [4];
  int local_23c;
  undefined4 local_238;
  byte *local_230;
  undefined8 local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  undefined4 *local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  undefined8 local_1e0;
  params local_1d8 [48];
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  byte local_58 [24];
  long local_40;
  
  local_26c = *(uint *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_26c < *(uint *)(this + 0xc)) {
    local_278 = (ulong)local_26c << 3;
    do {
      lVar2 = *(long *)this;
      local_218 = 0x100010000000002;
      local_1a8 = (void *)0x0;
      local_1a0 = 0;
      local_208 = *(long *)(lVar2 + 0x58) + local_278 * 8;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_128 = 0xffffffffffffffff;
      local_120 = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_f8 = 0xffffffffffffffff;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_200 = 0;
      local_1d8[0] = (params)0x0;
      local_1d8[1] = (params)0x0;
      local_1d8[2] = (params)0x0;
      local_1d8[3] = (params)0x0;
      local_1d8[4] = (params)0x0;
      local_1d8[5] = (params)0x0;
      local_1d8[6] = (params)0x0;
      local_1d8[7] = (params)0x0;
      local_1d8[8] = (params)0x0;
      local_1d8[9] = (params)0x0;
      local_1d8[10] = (params)0x0;
      local_1d8[0xb] = (params)0x0;
      local_1d8[0xc] = (params)0x0;
      local_1d8[0xd] = (params)0x0;
      local_1d8[0xe] = (params)0x0;
      local_1d8[0xf] = (params)0x0;
      local_178 = (undefined1  [16])0x0;
      local_1f8 = &etc1_optimizer::params::clear_optimizer_params()::s_default_scan_delta;
      local_1e8 = _LC3;
      local_1f0 = 1;
      iVar8 = *(int *)(lVar2 + 0x18);
      local_1e0 = 0;
      if (iVar8 == 0) {
        local_218 = 0x100010000000000;
      }
      else if (iVar8 == 1) {
        local_218 = 0x100010000000001;
      }
      else if (iVar8 == 6) {
        local_218 = 0x100010000000003;
      }
      local_210 = 0x1000000000;
      local_218._0_5_ = CONCAT14(*(undefined1 *)(lVar2 + 0x1c),(undefined4)local_218);
      local_238 = 0x10;
      local_230 = local_58;
      basisu::etc1_optimizer::init(local_1d8,(results *)&local_218);
      cVar6 = basisu::etc1_optimizer::compute();
      if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x333);
      }
      uVar15 = 0x10;
      puVar10 = (ushort *)(local_278 + *(long *)(*(long *)this + 0x88));
      puVar10[0] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(byte *)((long)puVar10 + 3) = 2;
      iVar8 = basisu::etc_block::pack_color5(local_240,false,0x7f);
      *puVar10 = CONCAT11((char)((ushort)iVar8 >> 5) << 3,((byte)((uint)iVar8 >> 8) >> 2) << 3) |
                 _LC1 & *puVar10;
      *(byte *)(puVar10 + 1) = (byte)(iVar8 << 3) | (byte)puVar10[1] & 7;
      uVar7 = basisu::etc_block::pack_delta3(0,0,0);
      *(byte *)puVar10 = (byte)*puVar10 & 0xf8 | (byte)(uVar7 >> 6) & 7;
      *(byte *)((long)puVar10 + 1) = *(byte *)((long)puVar10 + 1) & 0xf8 | (byte)(uVar7 >> 3) & 7;
      *(byte *)(puVar10 + 1) = (byte)uVar7 & 7 | (byte)puVar10[1] & 0xf8;
      uVar11 = 0;
      *(byte *)((long)puVar10 + 3) =
           *(byte *)((long)puVar10 + 3) & 3 | (byte)(local_23c << 5) | (byte)(local_23c << 2) | 1;
      do {
        uVar13 = uVar11 * 4;
        uVar5 = uVar11;
        do {
          uVar3 = uVar5;
          uVar14 = (ulong)uVar13;
          bVar9 = (byte)uVar3 & 7;
          uVar12 = (ulong)(7 - (uVar3 >> 3));
          uVar13 = uVar13 + 1;
          bVar1 = *(byte *)((long)&g_selector_index_to_etc1 + (ulong)local_58[uVar14]);
          bVar4 = ~(byte)(1 << bVar9);
          *(byte *)((long)puVar10 + uVar12) =
               *(byte *)((long)puVar10 + uVar12) & bVar4 | (byte)((bVar1 & 1) << bVar9);
          *(byte *)((long)puVar10 + (uVar12 - 2)) =
               bVar4 & *(byte *)((long)puVar10 + (uVar12 - 2)) | (bVar1 >> 1) << bVar9;
          uVar5 = uVar3 + 4;
        } while (uVar3 + 4 != uVar15);
        uVar15 = uVar3 + 5;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 4);
      if (local_e8 != (void *)0x0) {
        free(local_e8);
      }
      if (local_108 != (void *)0x0) {
        free(local_108);
      }
      if (local_138 != (void *)0x0) {
        free(local_138);
      }
      if (local_158 != (void *)0x0) {
        free(local_158);
      }
      if (local_168 != (void *)0x0) {
        free(local_168);
      }
      if (local_188 != (void *)0x0) {
        free(local_188);
      }
      if (local_198 != (void *)0x0) {
        free(local_198);
      }
      if (local_1a8 != (void *)0x0) {
        free(local_1a8);
      }
      local_26c = local_26c + 1;
      local_278 = local_278 + 8;
    } while (local_26c < *(uint *)(this + 0xc));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::_Function_handler<void(),basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>::
     _M_invoke(_Any_data *param_1)

{
  basisu::basisu_frontend::init_etc1_images()::{lambda()#1}::operator()((_lambda___1_ *)param_1);
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  ulong uStack_60;
  ulong local_58;
  long local_40;
  
  plVar1 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *(uint *)(plVar1 + 1);
  if (uVar9 < *(uint *)((long)plVar1 + 0xc)) {
    lVar10 = (ulong)uVar9 << 3;
    do {
      pbVar11 = (byte *)(*(long *)(*plVar1 + 0x88) + lVar10);
      if ((pbVar11[3] & 2) == 0) {
        uVar3 = basisu::etc_block::unpack_color4
                          (pbVar11[1] & 0xf0 | (ushort)(((int)(uint)*pbVar11 >> 4) << 8) |
                           (ushort)((int)(uint)pbVar11[2] >> 4),true,0xff);
        local_68 = (ulong)uVar3;
      }
      else {
        basisu::etc_block::unpack_color5
                  ((color_rgba *)&local_68,
                   (ushort)(((int)(uint)pbVar11[1] >> 3) << 5) |
                   (ushort)(((int)(uint)*pbVar11 >> 3) << 10) | (ushort)((int)(uint)pbVar11[2] >> 3)
                   ,true);
      }
      uVar6 = (uint)(byte)local_68._0_1_;
      uVar8 = (uint)local_68._1_1_;
      lVar4 = (long)((int)(uint)pbVar11[3] >> 5) * 0x10;
      iVar7 = *(int *)(&basisu::g_etc1_inten_tables + (long)((int)(uint)pbVar11[3] >> 5) * 2);
      uVar3 = iVar7 + uVar6;
      iVar2 = iVar7 + uVar8;
      iVar7 = iVar7 + (uint)local_68._2_1_;
      if (iVar7 < 0) {
        if (-1 < iVar2) {
          fVar15 = 0.0;
          fVar12 = 0.0;
          fVar18 = (float)iVar2 * _LC7;
          fVar14 = 0.0;
          if ((int)uVar3 < 0) goto LAB_00104011;
LAB_00104000:
          fVar12 = (float)(uVar3 & 0xff) * _LC7;
          fVar14 = fVar15;
          goto LAB_00104011;
        }
        fVar15 = 0.0;
LAB_0010416c:
        fVar18 = 0.0;
        fVar12 = 0.0;
        if (-1 < (int)uVar3) goto LAB_00104000;
        iVar2 = *(int *)(&DAT_00120034 + lVar4);
        iVar7 = uVar8 + iVar2;
        uVar6 = uVar6 + iVar2;
        iVar2 = iVar2 + (uint)local_68._2_1_;
        fVar14 = 0.0;
        if (-1 < iVar2) goto LAB_00104020;
LAB_00104190:
        if (iVar7 < 0) {
          fVar17 = 0.0;
          goto LAB_001041c0;
        }
        fVar17 = 0.0;
        fVar14 = (float)iVar7 * _LC7;
        if (-1 < (int)uVar6) goto LAB_00104083;
        fVar16 = 0.0;
        fVar13 = fVar14;
      }
      else {
        fVar18 = _LC6;
        if (iVar7 < 0x100) {
          fVar15 = (float)iVar7 * _LC7;
          if (iVar2 < 0) goto LAB_0010416c;
          if (iVar2 < 0x100) {
            fVar18 = (float)iVar2 * _LC7;
            fVar12 = 0.0;
            fVar14 = fVar15;
            if ((int)uVar3 < 0) goto LAB_00104011;
          }
        }
        else {
          fVar15 = _LC6;
          if (iVar2 < 0x100) {
            fVar18 = (float)iVar2 * _LC7;
          }
        }
        fVar12 = _LC6;
        fVar14 = fVar15;
        if ((int)uVar3 < 0x100) goto LAB_00104000;
LAB_00104011:
        fVar15 = fVar14;
        iVar2 = *(int *)(&DAT_00120034 + lVar4);
        iVar7 = uVar8 + iVar2;
        uVar6 = uVar6 + iVar2;
        iVar2 = iVar2 + (uint)local_68._2_1_;
        fVar14 = fVar12;
        if (iVar2 < 0) goto LAB_00104190;
LAB_00104020:
        fVar12 = fVar14;
        fVar14 = _LC6;
        if (0xff < iVar2) {
          fVar17 = _LC6;
          if (iVar7 < 0x100) {
            fVar14 = (float)iVar7 * _LC7;
          }
          goto LAB_0010406b;
        }
        fVar17 = (float)iVar2 * _LC7;
        if (-1 < iVar7) {
          if (0xff < iVar7) {
LAB_0010406b:
            fVar13 = fVar14;
            fVar16 = _LC6;
            if (0xff < (int)uVar6) goto LAB_00104092;
            goto LAB_00104083;
          }
          fVar14 = (float)iVar7 * _LC7;
          fVar13 = (float)iVar7 * _LC7;
          fVar16 = 0.0;
          if (-1 < (int)uVar6) goto LAB_0010406b;
          goto LAB_00104092;
        }
LAB_001041c0:
        fVar14 = 0.0;
        fVar13 = 0.0;
        fVar16 = 0.0;
        if (-1 < (int)uVar6) {
LAB_00104083:
          fVar16 = _LC7 * (float)(uVar6 & 0xff);
          fVar13 = fVar14;
        }
      }
LAB_00104092:
      uStack_60 = CONCAT44(fVar16,fVar15);
      local_68 = CONCAT44(fVar18,fVar12);
      local_58 = CONCAT44(fVar17,fVar13);
      lVar10 = lVar10 + 8;
      uVar3 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      lVar4 = *(long *)plVar1[2];
      puVar5 = (ulong *)((ulong)uVar3 * 0x20 + lVar4);
      *puVar5 = local_68;
      puVar5[1] = uStack_60;
      puVar5[3] = 1;
      puVar5[2] = local_58;
      puVar5 = (ulong *)((ulong)(uVar3 + 1) * 0x20 + lVar4);
      *puVar5 = local_68;
      puVar5[1] = uStack_60;
      puVar5[3] = 1;
      puVar5[2] = local_58;
    } while (uVar9 < *(uint *)((long)plVar1 + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::validate_endpoint_cluster_hierarchy(bool) const [clone .part.0] */

undefined8 __thiscall
basisu::basisu_frontend::validate_endpoint_cluster_hierarchy(basisu_frontend *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  int *__ptr;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  long in_FS_OFFSET;
  int *local_48;
  ulong local_40;
  int *local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (int *)0x0;
  local_40 = 0;
  uVar7 = *(int *)(this + 0x40) * 2;
  if (uVar7 == 0) {
LAB_001044a2:
    local_30 = 0;
    local_38 = (int *)0x0;
    __ptr = (int *)0x0;
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_48,SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset(local_48 + (local_40 & 0xffffffff),0,(ulong)(uVar7 - (int)local_40) << 2);
    local_40 = CONCAT44(local_40._4_4_,uVar7);
    if ((ulong)uVar7 != 0) {
      memset(local_48,0xff,(ulong)uVar7 << 2);
    }
    local_38 = (int *)0x0;
    local_30 = 0;
    uVar7 = *(int *)(this + 0x40) * 2;
    if (uVar7 == 0) goto LAB_001044a2;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_38,SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset(local_38 + (local_30 & 0xffffffff),0,(ulong)(uVar7 - (int)local_30) << 2);
    local_30 = CONCAT44(local_30._4_4_,uVar7);
    __ptr = local_38;
    if ((ulong)uVar7 != 0) {
      __ptr = (int *)memset(local_38,0xff,(ulong)uVar7 << 2);
    }
  }
  if (*(int *)(this + 0xd8) != 0) {
    uVar7 = 0;
    puVar6 = (uint *)(*(long *)(this + 0xd0) + 8);
    do {
      if (*puVar6 != 0) {
        lVar2 = *(long *)(puVar6 + -2);
        lVar4 = 0;
        do {
          uVar1 = *(uint *)(lVar2 + lVar4 * 4);
          if (((uint)(*(int *)(this + 0x40) * 2) <= uVar1) || (local_48[uVar1] != 0xffffffff))
          goto LAB_00104418;
          local_48[uVar1] = uVar7;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *puVar6);
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar7 < *(uint *)(this + 0xd8));
  }
  if ((int)local_40 != 0) {
    piVar3 = local_48;
    do {
      if (*piVar3 == -1) goto LAB_00104418;
      piVar3 = piVar3 + 1;
    } while (local_48 + (local_40 & 0xffffffff) != piVar3);
  }
  if (*(int *)(this + 200) != 0) {
    uVar7 = 0;
    puVar6 = (uint *)(*(long *)(this + 0xc0) + 8);
    do {
      if (*puVar6 != 0) {
        lVar2 = *(long *)(puVar6 + -2);
        lVar4 = 0;
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(lVar2 + lVar4 * 4);
          if (((uint)(*(int *)(this + 0x40) * 2) <= uVar1) || (__ptr[uVar1] != 0xffffffff))
          goto LAB_00104418;
          __ptr[uVar1] = uVar7;
          if (param_1) {
            if ((int)lVar4 == 0) {
              iVar8 = local_48[uVar1];
            }
            else if (local_48[uVar1] != iVar8) goto LAB_00104418;
          }
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *puVar6);
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar7 < *(uint *)(this + 200));
  }
  if ((int)local_30 != 0) {
    piVar3 = __ptr;
    do {
      if (*piVar3 == -1) goto LAB_00104418;
      piVar3 = piVar3 + 1;
    } while (piVar3 != __ptr + (local_30 & 0xffffffff));
  }
  uVar5 = 1;
LAB_0010441a:
  if (__ptr != (int *)0x0) {
    free(__ptr);
  }
  if (local_48 != (int *)0x0) {
    free(local_48);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
LAB_00104418:
  uVar5 = 0;
  goto LAB_0010441a;
}



/* basisu::basisu_frontend::generate_endpoint_codebook(unsigned
   int)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}::operator()
          (_lambda___1_ *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  params *ppVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint local_2d4;
  long local_2d0;
  long local_2c8;
  byte *local_298;
  undefined8 local_290;
  void *local_288;
  ulong local_280;
  ulong local_278;
  undefined4 local_270;
  undefined4 local_26c;
  uint local_268;
  void *local_260;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined2 local_218;
  undefined1 local_216;
  undefined4 local_208;
  undefined1 uStack_204;
  undefined3 uStack_203;
  long local_200;
  byte *local_1f8;
  undefined8 local_1f0;
  undefined4 *local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d0;
  params local_1c8 [48];
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  long local_40;
  
  local_2d4 = *(uint *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_2d4 < *(uint *)(this + 0xc)) {
    local_2c8 = (ulong)local_2d4 << 4;
    local_2d0 = (ulong)local_2d4 * 0x38;
    do {
      lVar5 = *(long *)this;
      plVar10 = (long *)(local_2c8 + *(long *)(lVar5 + 0xc0));
      if ((int)plVar10[1] == 0) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x5fd);
      }
      local_298 = (byte *)0x0;
      uVar17 = (int)plVar10[1] * 8;
      local_290 = 0;
      if (uVar17 == 0) {
LAB_00104632:
        uVar13 = 0;
        lVar12 = 0;
        while( true ) {
          uVar1 = *(uint *)(*plVar10 + lVar12 * 4);
          uVar7 = (ulong)(uVar1 & 1);
          lVar8 = (ulong)(uVar1 >> 1) * 0x40 + *(long *)(lVar5 + 0x58);
          *(undefined4 *)(local_298 + uVar13 * 4) =
               *(undefined4 *)
                (lVar8 + (ulong)*(uint *)(basisu::etc1_optimizer::init + uVar7 * 0x20) * 4);
          lVar5 = 0;
          do {
            lVar15 = lVar5 * 4;
            iVar2 = (int)lVar5;
            lVar5 = lVar5 + 1;
            *(undefined4 *)(local_298 + (ulong)(uint)((int)uVar13 + 1 + iVar2) * 4) =
                 *(undefined4 *)
                  (lVar8 + (ulong)*(uint *)(&DAT_001200cc + lVar15 + uVar7 * 0x20) * 4);
          } while (lVar5 != 7);
          lVar12 = lVar12 + 1;
          uVar13 = (ulong)((int)uVar13 + 8);
          if (*(uint *)(plVar10 + 1) <= (uint)lVar12) break;
          lVar5 = *(long *)this;
        }
      }
      else {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_298,SUB41(uVar17,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false
                  );
        local_290 = CONCAT44(local_290._4_4_,uVar17);
        if ((int)plVar10[1] != 0) {
          lVar5 = *(long *)this;
          goto LAB_00104632;
        }
      }
      local_228 = 0;
      local_238 = (undefined1  [16])0x0;
      local_220 = 0;
      local_248 = 0;
      local_240 = 0;
      local_218 = 0;
      local_216 = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_118 = 0xffffffffffffffff;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = 0xffffffffffffffff;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_1c8[0] = (params)0x0;
      local_1c8[1] = (params)0x0;
      local_1c8[2] = (params)0x0;
      local_1c8[3] = (params)0x0;
      local_1c8[4] = (params)0x0;
      local_1c8[5] = (params)0x0;
      local_1c8[6] = (params)0x0;
      local_1c8[7] = (params)0x0;
      local_1c8[8] = (params)0x0;
      local_1c8[9] = (params)0x0;
      local_1c8[10] = (params)0x0;
      local_1c8[0xb] = (params)0x0;
      local_1c8[0xc] = (params)0x0;
      local_1c8[0xd] = (params)0x0;
      local_1c8[0xe] = (params)0x0;
      local_1c8[0xf] = (params)0x0;
      local_168 = (undefined1  [16])0x0;
      local_d0 = 0;
      local_1e8 = &etc1_optimizer::params::clear_optimizer_params()::s_default_scan_delta;
      local_1d8 = _LC3;
      local_1f8 = local_298;
      local_1f0 = 0;
      local_1e0 = 1;
      uVar1 = *(uint *)(*(long *)this + 0x18);
      local_1d0 = 0;
      local_200 = (ulong)uVar17 << 0x20;
      _local_208 = CONCAT35(0x10001,CONCAT14(*(undefined1 *)(*(long *)this + 0x1c),2));
      if (uVar1 < 2) {
        _local_208 = CONCAT44(_uStack_204,1);
      }
      else if (uVar1 == 6) {
        _local_208 = CONCAT44(_uStack_204,3);
      }
      local_288 = (void *)0x0;
      local_280 = 0;
      if (uVar17 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_288,SUB41(uVar17,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                  );
        memset((void *)((local_280 & 0xffffffff) + (long)local_288),0,
               (ulong)(uVar17 - (int)local_280));
        local_280 = CONCAT44(local_280._4_4_,uVar17);
      }
      local_268 = uVar17;
      local_260 = local_288;
      basisu::etc1_optimizer::init(local_1c8,(results *)&local_208);
      cVar4 = basisu::etc1_optimizer::compute();
      uVar3 = local_26c;
      uVar13 = local_278;
      if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x62e);
      }
      local_248 = CONCAT44(local_248._4_4_,local_270);
      local_238._0_8_ = local_278;
      local_240 = CONCAT44(local_240._4_4_,local_26c);
      if (local_288 != (void *)0x0) {
        free(local_288);
      }
      if (local_d8 != (void *)0x0) {
        free(local_d8);
      }
      if (local_f8 != (void *)0x0) {
        free(local_f8);
      }
      if (local_128 != (void *)0x0) {
        free(local_128);
      }
      if (local_148 != (void *)0x0) {
        free(local_148);
      }
      if (local_158 != (void *)0x0) {
        free(local_158);
      }
      if (local_178 != (void *)0x0) {
        free(local_178);
      }
      if (local_188 != (void *)0x0) {
        free(local_188);
      }
      if (local_198 != (void *)0x0) {
        free(local_198);
      }
      lVar5 = *(long *)this;
      pbVar11 = (byte *)(local_2d0 + *(long *)(lVar5 + 0x100));
      if ((*(int *)(this + 0x10) == 0) || (pbVar11[0x32] == 0)) {
LAB_00104a4c:
        pbVar11[0xc] = 0;
        pbVar11[0xd] = 0;
        pbVar11[0xe] = 0;
        pbVar11[0xf] = 0;
        *(ulong *)(pbVar11 + 0x10) = uVar13;
        *(undefined8 *)pbVar11 = local_248;
        pbVar11[0x18] = 0;
        pbVar11[0x19] = 0;
        pbVar11[0x1a] = 0;
        pbVar11[0x1b] = 0;
        pbVar11[0x1c] = 0;
        pbVar11[0x1d] = 0;
        pbVar11[0x1e] = 0;
        pbVar11[0x1f] = 0;
        *(undefined4 *)(pbVar11 + 8) = uVar3;
        pbVar11[0x28] = 0;
        pbVar11[0x29] = 0;
        pbVar11[0x2a] = 0;
        pbVar11[0x2b] = 0;
        pbVar11[0x30] = 0;
        pbVar11[0x31] = 0;
        pbVar11[0x32] = 1;
      }
      else {
        etc_block::get_block_colors5
                  ((color_rgba *)local_1c8,(color_rgba *)(ulong)*pbVar11,(uint)pbVar11[1],
                   (bool)pbVar11[2]);
        if (uVar17 != 0) {
          uVar7 = 0;
          pbVar14 = local_298;
          do {
            uVar16 = 0xffffffffffffffff;
            if (*(char *)(lVar5 + 0x1c) == '\0') {
              ppVar9 = local_1c8;
              do {
                uVar6 = (ulong)(int)(((uint)pbVar14[1] - (uint)(byte)ppVar9[1]) *
                                     ((uint)pbVar14[1] - (uint)(byte)ppVar9[1]) +
                                     ((uint)*pbVar14 - (uint)(byte)*ppVar9) *
                                     ((uint)*pbVar14 - (uint)(byte)*ppVar9) +
                                    ((uint)pbVar14[2] - (uint)(byte)ppVar9[2]) *
                                    ((uint)pbVar14[2] - (uint)(byte)ppVar9[2]));
                if (uVar6 < uVar16) {
                  uVar16 = uVar6;
                }
                ppVar9 = ppVar9 + 4;
              } while (local_1c8 + 0x10 != ppVar9);
            }
            else {
              ppVar9 = local_1c8;
              do {
                lVar15 = (long)(int)(((uint)*pbVar14 - (uint)(byte)*ppVar9) * 0x1b +
                                     ((uint)pbVar14[1] - (uint)(byte)ppVar9[1]) * 0x5c +
                                    ((uint)pbVar14[2] - (uint)(byte)ppVar9[2]) * 9);
                lVar12 = (int)(((uint)*pbVar14 - (uint)(byte)*ppVar9) * 0x80) - lVar15;
                lVar8 = (int)(((uint)pbVar14[2] - (uint)(byte)ppVar9[2]) * 0x80) - lVar15;
                uVar6 = (ulong)(((uint)((int)(lVar8 * lVar8 >> 7) * 3) >> 7) +
                                ((uint)((int)(lVar12 * lVar12 >> 7) * 0x1a) >> 7) +
                               (int)(lVar15 * lVar15 >> 7));
                if (uVar6 < uVar16) {
                  uVar16 = uVar6;
                }
                ppVar9 = ppVar9 + 4;
              } while (ppVar9 != local_1c8 + 0x10);
            }
            pbVar14 = pbVar14 + 4;
            uVar7 = uVar7 + uVar16;
          } while (pbVar14 != local_298 + (ulong)(uVar17 - 1) * 4 + 4);
          if (uVar13 < uVar7) goto LAB_00104a4c;
        }
      }
      if (local_298 != (byte *)0x0) {
        free(local_298);
      }
      local_2d4 = local_2d4 + 1;
      local_2c8 = local_2c8 + 0x10;
      local_2d0 = local_2d0 + 0x38;
    } while (local_2d4 < *(uint *)(this + 0xc));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Function_handler<void (), basisu::basisu_frontend::generate_endpoint_codebook(unsigned
   int)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}::operator()
            (*(_lambda___1_ **)param_1);
  return;
}



/* basisu::vector<unsigned int>::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<unsigned int> const&)
   [clone .isra.0] */

void __thiscall basisu::vector<unsigned_int>::operator=(vector<unsigned_int> *this,vector *param_1)

{
  ulong uVar1;
  void *__ptr;
  
  if (this != (vector<unsigned_int> *)param_1) {
    uVar1 = (ulong)*(uint *)(param_1 + 8);
    __ptr = *(void **)this;
    if (*(uint *)(this + 0xc) < *(uint *)(param_1 + 8)) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar1 = (ulong)*(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB81(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar1 = (ulong)*(uint *)(param_1 + 8);
      __ptr = *(void **)this;
    }
    else if (*(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = 0;
      uVar1 = (ulong)*(uint *)(param_1 + 8);
    }
    if ((__ptr != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) {
      memcpy(__ptr,*(void **)param_1,uVar1 * 4);
      uVar1 = (ulong)*(uint *)(param_1 + 8);
    }
    *(int *)(this + 8) = (int)uVar1;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned int> const&,
   basisu::vector<int>&, bool, basisu::vector<unsigned
   int>*)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::basisu_frontend::
reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  long in_FS_OFFSET;
  ulong local_2e0;
  void *local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  ulong local_2a0;
  void *local_298;
  ulong local_290;
  undefined4 local_280;
  undefined4 local_27c;
  ulong local_278;
  undefined4 local_270;
  undefined4 local_26c;
  uint local_268;
  void *local_260;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined2 local_218;
  undefined1 local_216;
  int local_208;
  undefined4 uStack_204;
  long local_200;
  void *local_1f8;
  undefined8 local_1f0;
  undefined4 *local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  void *local_1d0;
  params local_1c8 [48];
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  long local_40;
  
  uVar14 = (ulong)*(uint *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 8) < *(uint *)(this + 0xc)) {
    do {
      while( true ) {
        plVar21 = (long *)(uVar14 * 0x10 + **(long **)(this + 0x20));
        if ((int)plVar21[1] != 0) break;
LAB_00104db0:
        uVar14 = uVar14 + 1;
        if (*(uint *)(this + 0xc) <= (uint)uVar14) goto LAB_001054a1;
      }
      local_2b8 = (void *)0x0;
      uVar8 = (int)plVar21[1] * 0x10;
      local_2b0 = 0;
      bVar15 = SUB41(uVar8,0);
      if (uVar8 == 0) {
        local_2a8 = (void *)0x0;
        local_2a0 = 0;
      }
      else {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_2b8,bVar15,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        local_2b0 = CONCAT44(local_2b0._4_4_,uVar8);
        local_2a8 = (void *)0x0;
        local_2a0 = 0;
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_2a8,bVar15,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        memset((void *)((local_2a0 & 0xffffffff) + (long)local_2a8),0,
               (ulong)(uVar8 - (int)local_2a0));
        local_2a0 = CONCAT44(local_2a0._4_4_,uVar8);
      }
      local_280 = local_280 | 0x2000000;
      lVar2 = uVar14 * 0x38;
      iVar9 = basisu::etc_block::pack_color5
                        ((color_rgba *)(*(long *)(*(long *)this + 0x100) + lVar2),false,0x7f);
      uVar7 = _LC1 & (ushort)local_280;
      bVar12 = local_280._2_1_ & 7;
      local_280._0_3_ =
           CONCAT12((byte)(iVar9 << 3) | bVar12,
                    CONCAT11((char)((ushort)iVar9 >> 5) << 3,((byte)((uint)iVar9 >> 8) >> 2) << 3) |
                    uVar7);
      uVar7 = basisu::etc_block::pack_delta3(0,0,0);
      lVar11 = *(long *)this;
      iVar9 = *(int *)(*(long *)(lVar11 + 0x100) + 8 + lVar2);
      local_280 = (((((local_280 >> 0x18 & 3 | iVar9 << 5 | iVar9 << 2) & 0xff) << 8 |
                    local_280 >> 0x10 & 0xff) << 8 | local_280 >> 8 & 0xff) << 8 | local_280 & 0xff)
                  & __LC31 |
                  ((uint)CONCAT11(1,(byte)uVar7 & 7) << 8 | uVar7 >> 3 & 7) << 8 | uVar7 >> 6 & 7;
      if ((int)plVar21[1] == 0) {
        local_2e0 = 0;
      }
      else {
        lVar22 = 0;
        local_2e0 = 0;
        while( true ) {
          uVar24 = (int)lVar22 << 4;
          uVar13 = (ulong)*(uint *)(*plVar21 + lVar22 * 4);
          puVar17 = (undefined8 *)(uVar13 * 0x40 + *(long *)(lVar11 + 0x58));
          uVar3 = puVar17[1];
          puVar23 = (undefined8 *)((long)local_2b8 + (ulong)uVar24 * 4);
          *puVar23 = *puVar17;
          puVar23[1] = uVar3;
          uVar3 = puVar17[3];
          puVar23[2] = puVar17[2];
          puVar23[3] = uVar3;
          uVar3 = puVar17[5];
          puVar23[4] = puVar17[4];
          puVar23[5] = uVar3;
          uVar3 = puVar17[7];
          puVar23[6] = puVar17[6];
          puVar23[7] = uVar3;
          if ((long *)**(long **)(this + 0x28) == (long *)0x0) {
            lVar11 = *(long *)this;
            uVar20 = *(uint *)(*(long *)(lVar11 + 0x170) + uVar13 * 4);
          }
          else {
            lVar11 = *(long *)this;
            uVar20 = *(uint *)(*(long *)**(long **)(this + 0x28) + uVar13 * 4);
          }
          lVar1 = *(long *)(lVar11 + 0x130) + (ulong)uVar20 * 8;
          local_27c = *(undefined4 *)(lVar1 + 4);
          lVar11 = basisu::etc_block::evaluate_etc1_error
                             ((color_rgba *)&local_280,SUB81(puVar17,0),
                              (uint)*(byte *)(lVar11 + 0x1c));
          local_2e0 = local_2e0 + lVar11;
          uVar20 = 0x10;
          do {
            uVar16 = uVar20 - 0x10;
            uVar18 = uVar24;
            do {
              uVar13 = (ulong)uVar18;
              uVar10 = uVar16 >> 3;
              bVar12 = (byte)uVar16 & 7;
              uVar16 = uVar16 + 4;
              uVar18 = uVar18 + 1;
              uVar19 = (ulong)(7 - uVar10);
              *(undefined1 *)((long)local_2a8 + uVar13) =
                   *(undefined1 *)
                    ((long)&g_etc1_to_selector_index +
                    (ulong)(((int)(uint)*(byte *)(lVar1 + -2 + uVar19) >> bVar12) * 2 & 2U |
                           (int)(uint)*(byte *)(lVar1 + uVar19) >> bVar12 & 1U));
            } while (uVar20 != uVar16);
            uVar20 = uVar20 + 1;
            uVar24 = uVar24 + 4;
          } while (uVar20 != 0x14);
          lVar22 = lVar22 + 1;
          if (*(uint *)(plVar21 + 1) <= (uint)lVar22) break;
          lVar11 = *(long *)this;
        }
        lVar11 = *(long *)this;
      }
      local_228 = 0;
      local_218 = 0;
      local_238 = (undefined1  [16])0x0;
      local_220 = 0;
      local_248 = 0;
      local_240 = 0;
      local_216 = 0;
      local_198 = (void *)0x0;
      local_190 = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_118 = 0xffffffffffffffff;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = 0xffffffffffffffff;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_1c8[0] = (params)0x0;
      local_1c8[1] = (params)0x0;
      local_1c8[2] = (params)0x0;
      local_1c8[3] = (params)0x0;
      local_1c8[4] = (params)0x0;
      local_1c8[5] = (params)0x0;
      local_1c8[6] = (params)0x0;
      local_1c8[7] = (params)0x0;
      local_1c8[8] = (params)0x0;
      local_1c8[9] = (params)0x0;
      local_1c8[10] = (params)0x0;
      local_1c8[0xb] = (params)0x0;
      local_1c8[0xc] = (params)0x0;
      local_1c8[0xd] = (params)0x0;
      local_1c8[0xe] = (params)0x0;
      local_1c8[0xf] = (params)0x0;
      local_168 = (undefined1  [16])0x0;
      local_d0 = 0;
      local_1e8 = &etc1_optimizer::params::clear_optimizer_params()::s_default_scan_delta;
      local_1d8 = _LC3;
      local_1f0 = 0;
      local_1e0 = 1;
      local_1f8 = local_2b8;
      local_200 = (ulong)uVar8 << 0x20;
      local_1d0 = local_2a8;
      local_298 = (void *)0x0;
      local_290 = 0;
      _local_208 = CONCAT44(CONCAT31(0x10001,*(undefined1 *)(lVar11 + 0x1c)),
                            (*(int *)(lVar11 + 0x18) == 6) + 2);
      if (uVar8 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_298,bVar15,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        memset((void *)((local_290 & 0xffffffff) + (long)local_298),0,
               (ulong)(uVar8 - (int)local_290));
        local_290 = CONCAT44(local_290._4_4_,uVar8);
      }
      local_268 = uVar8;
      local_260 = local_298;
      basisu::etc1_optimizer::init(local_1c8,(results *)&local_208);
      cVar6 = basisu::etc1_optimizer::compute();
      uVar5 = local_26c;
      uVar13 = local_278;
      if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0xc54);
      }
      local_218 = CONCAT11(local_218._1_1_,1);
      local_216 = 1;
      local_248 = CONCAT44(local_248._4_4_,local_270);
      local_240 = CONCAT44(local_240._4_4_,local_26c);
      local_238._0_8_ = local_278;
      if (local_298 != (void *)0x0) {
        free(local_298);
      }
      if (local_d8 != (void *)0x0) {
        free(local_d8);
      }
      if (local_f8 != (void *)0x0) {
        free(local_f8);
      }
      if (local_128 != (void *)0x0) {
        free(local_128);
      }
      if (local_148 != (void *)0x0) {
        free(local_148);
      }
      if (local_158 != (void *)0x0) {
        free(local_158);
      }
      if (local_178 != (void *)0x0) {
        free(local_178);
      }
      if (local_188 != (void *)0x0) {
        free(local_188);
      }
      if (local_198 != (void *)0x0) {
        free(local_198);
      }
      if (uVar13 < local_2e0) {
        puVar23 = (undefined8 *)(lVar2 + *(long *)(*(long *)this + 0x100));
        *(undefined4 *)(puVar23 + 1) = uVar5;
        *puVar23 = local_248;
        *(undefined4 *)((long)puVar23 + 0xc) = 0;
        puVar23[2] = uVar13;
        puVar23[3] = 0;
        vector<unsigned_int>::operator=((vector<unsigned_int> *)(puVar23 + 4),(vector *)&local_228);
        uVar4 = (undefined2)_LC9;
        *(undefined1 *)((long)puVar23 + 0x32) = 1;
        *(undefined2 *)(puVar23 + 6) = uVar4;
        *(undefined1 *)(**(long **)(this + 0x10) + uVar14) = 1;
      }
      *(undefined1 *)(**(long **)(this + 0x18) + uVar14) = 1;
      if (local_2a8 != (void *)0x0) {
        free(local_2a8);
      }
      if (local_2b8 == (void *)0x0) goto LAB_00104db0;
      free(local_2b8);
      uVar14 = uVar14 + 1;
    } while ((uint)uVar14 < *(uint *)(this + 0xc));
  }
LAB_001054a1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned int> const&,
   basisu::vector<int>&, bool, basisu::vector<unsigned
   int>*)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::basisu_frontend::
  reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)
  ::{lambda()#1}::operator()(*(_lambda___1_ **)param_1);
  return;
}



/* basisu::vector<basisu::vector<unsigned int>
   >::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<basisu::vector<unsigned int> > const&) [clone .isra.0]
    */

void __thiscall
basisu::vector<basisu::vector<unsigned_int>>::operator=
          (vector<basisu::vector<unsigned_int>> *this,vector *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *__ptr;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  if (this != (vector<basisu::vector<unsigned_int>> *)param_1) {
    __ptr = *(undefined8 **)this;
    uVar6 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(this + 0xc) < *(uint *)(param_1 + 8)) {
      if (__ptr != (undefined8 *)0x0) {
        puVar3 = __ptr + (ulong)*(uint *)(this + 8) * 2;
        if (puVar3 != __ptr) {
          do {
            if ((void *)*__ptr != (void *)0x0) {
              free((void *)*__ptr);
            }
            __ptr = __ptr + 2;
          } while (puVar3 != __ptr);
          __ptr = *(undefined8 **)this;
        }
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar6 = (ulong)*(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB81(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
      uVar6 = (ulong)*(uint *)(param_1 + 8);
      __ptr = *(undefined8 **)this;
    }
    else if (*(uint *)(this + 8) != 0) {
      puVar3 = __ptr + (ulong)*(uint *)(this + 8) * 2;
      do {
        if ((void *)*__ptr != (void *)0x0) {
          free((void *)*__ptr);
        }
        __ptr = __ptr + 2;
      } while (puVar3 != __ptr);
      *(undefined4 *)(this + 8) = 0;
      __ptr = *(undefined8 **)this;
      uVar6 = (ulong)*(uint *)(param_1 + 8);
    }
    if ((int)uVar6 != 0) {
      puVar3 = __ptr;
      puVar5 = *(undefined8 **)param_1;
      do {
        uVar1 = *(undefined4 *)(puVar5 + 1);
        puVar4 = puVar3 + 2;
        *puVar3 = 0;
        puVar3[1] = 0;
        basisu::elemental_vector::increase_capacity
                  ((uint)puVar3,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar2 = *(uint *)(puVar5 + 1);
        *(uint *)(puVar3 + 1) = uVar2;
        if (((void *)*puVar3 != (void *)0x0) && ((void *)*puVar5 != (void *)0x0)) {
          memcpy((void *)*puVar3,(void *)*puVar5,(ulong)uVar2 << 2);
        }
        puVar3 = puVar4;
        puVar5 = puVar5 + 2;
      } while (puVar4 != __ptr + uVar6 * 2);
      uVar6 = (ulong)*(uint *)(param_1 + 8);
    }
    *(int *)(this + 8) = (int)uVar6;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}::operator()
          (_lambda___1_ *this)

{
  etc_block *this_00;
  color_rgba cVar1;
  color_rgba cVar2;
  color_rgba cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  color_rgba *pcVar20;
  long in_FS_OFFSET;
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar28;
  uint uVar29;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  ulong local_198;
  color_rgba local_158 [16];
  uint local_148 [28];
  undefined1 local_d8 [16];
  uint local_c8 [28];
  undefined1 local_58 [16];
  uint local_48 [2];
  long local_40;
  
  uVar28 = *(uint *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0xc) <= uVar28) {
LAB_00105e98:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_198 = (ulong)uVar28;
  lVar17 = *(long *)this;
  uVar10 = 0;
  do {
    this_00 = (etc_block *)(*(long *)(lVar17 + 0x68) + local_198 * 8);
    plVar12 = (long *)(local_198 * 0x40 + *(long *)(lVar17 + 0x58));
    if ((((uVar28 < (uint)local_198) &&
         (plVar6 = (long *)(*(long *)(lVar17 + 0x58) + (ulong)((uint)local_198 - 1) * 0x40),
         *plVar12 == *plVar6 && plVar12[1] == plVar6[1])) &&
        (plVar12[2] == plVar6[2] && plVar12[3] == plVar6[3])) &&
       ((plVar12[4] == plVar6[4] && plVar12[5] == plVar6[5] &&
        (plVar12[6] == plVar6[6] && plVar12[7] == plVar6[7])))) {
      *(undefined4 *)(this_00 + 4) =
           *(undefined4 *)(*(long *)(lVar17 + 0x130) + 4 + (long)(int)uVar10 * 8);
      lVar17 = *(long *)this;
      *(int *)(*(long *)(lVar17 + 0x170) + local_198 * 4) = (int)uVar10;
    }
    else {
      etc_block::get_block_colors_etc1s(this_00,local_158);
      lVar17 = *(long *)this;
      if (*(char *)(lVar17 + 0x1c) == '\0') {
        puVar9 = local_148;
        pcVar20 = local_158;
        do {
          cVar1 = pcVar20[2];
          cVar2 = pcVar20[1];
          lVar7 = 0;
          cVar3 = *pcVar20;
          do {
            iVar19 = (uint)*(byte *)((long)plVar12 + lVar7) - (uint)(byte)cVar3;
            iVar4 = (uint)*(byte *)((long)plVar12 + lVar7 + 1) - (uint)(byte)cVar2;
            iVar18 = (uint)*(byte *)((long)plVar12 + lVar7 + 2) - (uint)(byte)cVar1;
            *(int *)((long)puVar9 + lVar7) = iVar4 * iVar4 + iVar19 * iVar19 + iVar18 * iVar18;
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x40);
          puVar9 = puVar9 + 0x10;
          pcVar20 = pcVar20 + 4;
        } while (puVar9 != local_48);
      }
      else {
        puVar9 = local_148;
        pcVar20 = local_158;
        do {
          cVar1 = *pcVar20;
          cVar2 = pcVar20[1];
          lVar7 = 0;
          cVar3 = pcVar20[2];
          do {
            iVar4 = (uint)*(byte *)((long)plVar12 + lVar7) - (uint)(byte)cVar1;
            iVar18 = (uint)*(byte *)((long)plVar12 + lVar7 + 2) - (uint)(byte)cVar3;
            lVar38 = (long)(int)(iVar4 * 0x1b +
                                 ((uint)*(byte *)((long)plVar12 + lVar7 + 1) - (uint)(byte)cVar2) *
                                 0x5c + iVar18 * 9);
            lVar40 = iVar4 * 0x80 - lVar38;
            lVar41 = iVar18 * 0x80 - lVar38;
            *(uint *)((long)puVar9 + lVar7) =
                 ((uint)((int)(lVar40 * lVar40 >> 7) * 0x1a) >> 7) +
                 ((uint)((int)(lVar41 * lVar41 >> 7) * 3) >> 7) + (int)(lVar38 * lVar38 >> 7);
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x40);
          puVar9 = puVar9 + 0x10;
          pcVar20 = pcVar20 + 4;
        } while (puVar9 != local_48);
      }
      lVar7 = 0;
      lVar40 = 0;
      puVar9 = local_148;
      do {
        puVar8 = puVar9 + 4;
        uVar28 = -(uint)((int)(puVar9[0x30] - __LC10) < (int)(puVar9[0x20] - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x31] - _UNK_0011dae4) < (int)(puVar9[0x21] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x32] - _UNK_0011dae8) < (int)(puVar9[0x22] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x33] - _UNK_0011daec) < (int)(puVar9[0x23] - _UNK_0011daec));
        uVar29 = ~uVar28 & puVar9[0x20] | puVar9[0x30] & uVar28;
        uVar33 = ~uVar32 & puVar9[0x21] | puVar9[0x31] & uVar32;
        uVar35 = ~uVar34 & puVar9[0x22] | puVar9[0x32] & uVar34;
        uVar37 = ~uVar36 & puVar9[0x23] | puVar9[0x33] & uVar36;
        uVar28 = -(uint)((int)(puVar9[0x10] - __LC10) < (int)(*puVar9 - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x11] - _UNK_0011dae4) < (int)(puVar9[1] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x12] - _UNK_0011dae8) < (int)(puVar9[2] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x13] - _UNK_0011daec) < (int)(puVar9[3] - _UNK_0011daec));
        uVar22 = ~uVar28 & *puVar9 | puVar9[0x10] & uVar28;
        uVar25 = ~uVar32 & puVar9[1] | puVar9[0x11] & uVar32;
        uVar26 = ~uVar34 & puVar9[2] | puVar9[0x12] & uVar34;
        uVar27 = ~uVar36 & puVar9[3] | puVar9[0x13] & uVar36;
        uVar28 = -(uint)((int)(uVar22 - __LC10) < (int)(uVar29 - __LC10));
        uVar32 = -(uint)((int)(uVar25 - _UNK_0011dae4) < (int)(uVar33 - _UNK_0011dae4));
        uVar34 = -(uint)((int)(uVar26 - _UNK_0011dae8) < (int)(uVar35 - _UNK_0011dae8));
        uVar36 = -(uint)((int)(uVar27 - _UNK_0011daec) < (int)(uVar37 - _UNK_0011daec));
        lVar7 = lVar7 + (ulong)(~uVar28 & uVar29 | uVar22 & uVar28) +
                        (ulong)(~uVar34 & uVar35 | uVar26 & uVar34);
        lVar40 = lVar40 + (ulong)(~uVar32 & uVar33 | uVar25 & uVar32) +
                          (ulong)(~uVar36 & uVar37 | uVar27 & uVar36);
        puVar9 = puVar8;
      } while (puVar8 != local_148 + 0x10);
      lVar38 = 0;
      lVar41 = 0;
      puVar9 = local_148;
      do {
        puVar8 = puVar9 + 4;
        uVar28 = -(uint)((int)(puVar9[0x14] - __LC10) < (int)(puVar9[4] - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x15] - _UNK_0011dae4) < (int)(puVar9[5] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x16] - _UNK_0011dae8) < (int)(puVar9[6] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x17] - _UNK_0011daec) < (int)(puVar9[7] - _UNK_0011daec));
        uVar29 = ~uVar28 & *puVar8 | puVar9[0x14] & uVar28;
        uVar33 = ~uVar32 & puVar9[5] | puVar9[0x15] & uVar32;
        uVar35 = ~uVar34 & puVar9[6] | puVar9[0x16] & uVar34;
        uVar37 = ~uVar36 & puVar9[7] | puVar9[0x17] & uVar36;
        uVar28 = -(uint)((int)(puVar9[0x34] - __LC10) < (int)(puVar9[0x24] - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x35] - _UNK_0011dae4) < (int)(puVar9[0x25] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x36] - _UNK_0011dae8) < (int)(puVar9[0x26] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x37] - _UNK_0011daec) < (int)(puVar9[0x27] - _UNK_0011daec));
        uVar22 = ~uVar28 & puVar9[0x24] | puVar9[0x34] & uVar28;
        uVar25 = ~uVar32 & puVar9[0x25] | puVar9[0x35] & uVar32;
        uVar26 = ~uVar34 & puVar9[0x26] | puVar9[0x36] & uVar34;
        uVar27 = ~uVar36 & puVar9[0x27] | puVar9[0x37] & uVar36;
        uVar28 = -(uint)((int)(uVar22 - __LC10) < (int)(uVar29 - __LC10));
        uVar32 = -(uint)((int)(uVar25 - _UNK_0011dae4) < (int)(uVar33 - _UNK_0011dae4));
        uVar34 = -(uint)((int)(uVar26 - _UNK_0011dae8) < (int)(uVar35 - _UNK_0011dae8));
        uVar36 = -(uint)((int)(uVar27 - _UNK_0011daec) < (int)(uVar37 - _UNK_0011daec));
        lVar38 = lVar38 + (ulong)(~uVar28 & uVar29 | uVar22 & uVar28) +
                          (ulong)(~uVar34 & uVar35 | uVar26 & uVar34);
        lVar41 = lVar41 + (ulong)(~uVar32 & uVar33 | uVar25 & uVar32) +
                          (ulong)(~uVar36 & uVar37 | uVar27 & uVar36);
        puVar9 = puVar8;
      } while (puVar8 != local_148 + 0xc);
      lVar39 = 0;
      lVar42 = 0;
      puVar9 = local_148;
      do {
        puVar8 = puVar9 + 4;
        uVar28 = -(uint)((int)(puVar9[0x38] - __LC10) < (int)(puVar9[0x28] - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x39] - _UNK_0011dae4) < (int)(puVar9[0x29] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x3a] - _UNK_0011dae8) < (int)(puVar9[0x2a] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x3b] - _UNK_0011daec) < (int)(puVar9[0x2b] - _UNK_0011daec));
        uVar29 = ~uVar28 & puVar9[0x28] | puVar9[0x38] & uVar28;
        uVar33 = ~uVar32 & puVar9[0x29] | puVar9[0x39] & uVar32;
        uVar35 = ~uVar34 & puVar9[0x2a] | puVar9[0x3a] & uVar34;
        uVar37 = ~uVar36 & puVar9[0x2b] | puVar9[0x3b] & uVar36;
        uVar28 = -(uint)((int)(puVar9[0x18] - __LC10) < (int)(puVar9[8] - __LC10));
        uVar32 = -(uint)((int)(puVar9[0x19] - _UNK_0011dae4) < (int)(puVar9[9] - _UNK_0011dae4));
        uVar34 = -(uint)((int)(puVar9[0x1a] - _UNK_0011dae8) < (int)(puVar9[10] - _UNK_0011dae8));
        uVar36 = -(uint)((int)(puVar9[0x1b] - _UNK_0011daec) < (int)(puVar9[0xb] - _UNK_0011daec));
        uVar22 = ~uVar28 & puVar9[8] | puVar9[0x18] & uVar28;
        uVar25 = ~uVar32 & puVar9[9] | puVar9[0x19] & uVar32;
        uVar26 = ~uVar34 & puVar9[10] | puVar9[0x1a] & uVar34;
        uVar27 = ~uVar36 & puVar9[0xb] | puVar9[0x1b] & uVar36;
        uVar28 = -(uint)((int)(uVar22 - __LC10) < (int)(uVar29 - __LC10));
        uVar32 = -(uint)((int)(uVar25 - _UNK_0011dae4) < (int)(uVar33 - _UNK_0011dae4));
        uVar34 = -(uint)((int)(uVar26 - _UNK_0011dae8) < (int)(uVar35 - _UNK_0011dae8));
        uVar36 = -(uint)((int)(uVar27 - _UNK_0011daec) < (int)(uVar37 - _UNK_0011daec));
        lVar39 = lVar39 + (ulong)(~uVar28 & uVar29 | uVar22 & uVar28) +
                          (ulong)(~uVar34 & uVar35 | uVar26 & uVar34);
        lVar42 = lVar42 + (ulong)(~uVar32 & uVar33 | uVar25 & uVar32) +
                          (ulong)(~uVar36 & uVar37 | uVar27 & uVar36);
        puVar9 = puVar8;
      } while (local_148 + 8 != puVar8);
      uVar10 = (ulong)*(uint *)(lVar17 + 0x158);
      auVar30._0_4_ = -(uint)(local_58._0_4_ - __LC10 < (int)(local_c8[0xc] - __LC10));
      auVar30._4_4_ = -(uint)(local_58._4_4_ - _UNK_0011dae4 < (int)(local_c8[0xd] - _UNK_0011dae4))
      ;
      auVar30._8_4_ = -(uint)(local_58._8_4_ - _UNK_0011dae8 < (int)(local_c8[0xe] - _UNK_0011dae8))
      ;
      auVar30._12_4_ =
           -(uint)(local_58._12_4_ - _UNK_0011daec < (int)(local_c8[0xf] - _UNK_0011daec));
      auVar31._4_4_ = local_c8[0xd];
      auVar31._0_4_ = local_c8[0xc];
      auVar31._8_4_ = local_c8[0xe];
      auVar31._12_4_ = local_c8[0xf];
      auVar31 = ~auVar30 & auVar31 | local_58 & auVar30;
      auVar23._0_4_ = -(uint)(local_d8._0_4_ - __LC10 < (int)(local_148[0xc] - __LC10));
      auVar23._4_4_ =
           -(uint)(local_d8._4_4_ - _UNK_0011dae4 < (int)(local_148[0xd] - _UNK_0011dae4));
      auVar23._8_4_ =
           -(uint)(local_d8._8_4_ - _UNK_0011dae8 < (int)(local_148[0xe] - _UNK_0011dae8));
      auVar23._12_4_ =
           -(uint)(local_d8._12_4_ - _UNK_0011daec < (int)(local_148[0xf] - _UNK_0011daec));
      auVar24._4_4_ = local_148[0xd];
      auVar24._0_4_ = local_148[0xc];
      auVar24._8_4_ = local_148[0xe];
      auVar24._12_4_ = local_148[0xf];
      auVar24 = ~auVar23 & auVar24 | local_d8 & auVar23;
      auVar21._0_4_ = -(uint)(auVar24._0_4_ - __LC10 < auVar31._0_4_ - __LC10);
      auVar21._4_4_ = -(uint)(auVar24._4_4_ - _UNK_0011dae4 < auVar31._4_4_ - _UNK_0011dae4);
      auVar21._8_4_ = -(uint)(auVar24._8_4_ - _UNK_0011dae8 < auVar31._8_4_ - _UNK_0011dae8);
      auVar21._12_4_ = -(uint)(auVar24._12_4_ - _UNK_0011daec < auVar31._12_4_ - _UNK_0011daec);
      auVar24 = ~auVar21 & auVar31 | auVar24 & auVar21;
      if (*(uint *)(lVar17 + 0x158) != 0) {
        uVar10 = (ulong)*(byte *)(*(long *)(lVar17 + 0x150) + local_198);
      }
      plVar12 = (long *)0x0;
      if (*(int *)(lVar17 + 0x168) != 0) {
        plVar12 = (long *)(uVar10 * 0x10 + *(long *)(lVar17 + 0x160));
      }
      if (*(char *)(lVar17 + 0x4a) == '\0') {
        uVar28 = *(uint *)(lVar17 + 0x128);
        if (uVar28 != 0) goto LAB_00105b4c;
LAB_00105dc8:
        lVar7 = 0;
        uVar10 = 0;
      }
      else {
        uVar28 = *(uint *)(plVar12 + 1);
        if (uVar28 == 0) goto LAB_00105dc8;
LAB_00105b4c:
        uVar13 = (ulong)uVar28;
        uVar15 = 0;
        uVar16 = 0x7fffffffffffffff;
        uVar32 = 0;
        do {
          uVar10 = uVar15 & 0xffffffff;
          if (*(char *)(lVar17 + 0x4a) != '\0') {
            uVar10 = (ulong)*(uint *)(*plVar12 + uVar15 * 4);
          }
          uVar28 = (uint)uVar10;
          pbVar11 = (byte *)((ulong)(uVar28 << 4) + **(long **)(this + 0x10));
          lVar5 = (ulong)local_148[(ulong)*pbVar11 * 0x10] +
                  (ulong)local_148[(ulong)pbVar11[1] * 0x10 + 1] +
                  (ulong)local_148[(ulong)pbVar11[2] * 0x10 + 2] +
                  (ulong)local_148[(ulong)pbVar11[3] * 0x10 + 3];
          if ((((ulong)(lVar5 + lVar38 + lVar41) < uVar16) &&
              (lVar5 = lVar5 + (ulong)local_148[(ulong)pbVar11[4] * 0x10 + 4] +
                               (ulong)local_148[(ulong)pbVar11[5] * 0x10 + 5] +
                               (ulong)local_148[(ulong)pbVar11[6] * 0x10 + 6] +
                               (ulong)local_148[(ulong)pbVar11[7] * 0x10 + 7],
              (ulong)(lVar5 + lVar39 + lVar42) < uVar16)) &&
             ((lVar5 = lVar5 + (ulong)local_148[(ulong)pbVar11[8] * 0x10 + 8] +
                               (ulong)local_148[(ulong)pbVar11[9] * 0x10 + 9] +
                               (ulong)local_148[(ulong)pbVar11[10] * 0x10 + 10] +
                               (ulong)local_148[(ulong)pbVar11[0xb] * 0x10 + 0xb],
              lVar5 + (auVar24._0_8_ & 0xffffffff) + (ulong)auVar24._8_4_ +
                      (ulong)auVar24._4_4_ + (ulong)auVar24._12_4_ < uVar16 &&
              ((uVar14 = (ulong)local_148[(ulong)pbVar11[0xe] * 0x10 + 0xe] +
                         (ulong)local_148[(ulong)pbVar11[0xc] * 0x10 + 0xc] +
                         (ulong)local_148[(ulong)pbVar11[0xd] * 0x10 + 0xd] +
                         (ulong)*(uint *)(local_d8 + (ulong)pbVar11[0xf] * 0x40 + -0x34) + lVar5,
               uVar14 < uVar16 && (uVar16 = uVar14, uVar32 = uVar28, uVar14 == lVar7 + lVar40))))))
          {
            lVar7 = uVar10 << 3;
            goto LAB_00105cfe;
          }
          uVar28 = uVar32;
          uVar15 = uVar15 + 1;
          uVar32 = uVar28;
        } while (uVar13 != uVar15);
        uVar10 = (ulong)uVar28;
        lVar7 = (ulong)uVar28 << 3;
      }
LAB_00105cfe:
      *(undefined4 *)(this_00 + 4) = *(undefined4 *)(*(long *)(lVar17 + 0x130) + 4 + lVar7);
      lVar17 = *(long *)this;
      *(uint *)(*(long *)(lVar17 + 0x170) + local_198 * 4) = uVar28;
    }
    local_198 = local_198 + 1;
    if (*(uint *)(this + 0xc) <= (uint)local_198) goto LAB_00105e98;
    uVar28 = *(uint *)(this + 8);
  } while( true );
}



/* std::_Function_handler<void (),
   basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>::_M_invoke(std::_Any_data
   const&) */

void std::
     _Function_handler<void(),basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}::operator()
            (*(_lambda___1_ **)param_1);
  return;
}



/* basisu::basisu_frontend::init(basisu::basisu_frontend::params const&) */

undefined8 __thiscall basisu::basisu_frontend::init(basisu_frontend *this,params *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  opencl_context *poVar4;
  void *__src;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  
  lVar7 = 0;
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    lVar7 = (plVar3[1] - *plVar3 >> 3) + 1;
  }
  basisu::debug_printf
            ("basisu_frontend::init: Multithreaded: %u, Job pool total threads: %u, NumEndpointClusters: %u, NumSelectorClusters: %u, Perceptual: %u, CompressionLevel: %u\n"
             ,(ulong)(byte)param_1[0x21],lVar7,(ulong)*(uint *)(param_1 + 0x10),
             (ulong)*(uint *)(param_1 + 0x14),(ulong)(byte)param_1[0x1c],
             (ulong)*(uint *)(param_1 + 0x18));
  uVar9 = 0;
  if ((*(int *)(param_1 + 0x10) - 1U < 0x3f00) && (*(int *)(param_1 + 0x14) - 1U < 0x3f00)) {
    if (*(int *)(this + 0x60) != 0) {
      *(undefined4 *)(this + 0x60) = 0;
    }
    uVar1 = *(uint *)param_1;
    if ((ulong)uVar1 != 0) {
      uVar2 = *(uint *)(this + 0x60);
      __src = *(void **)(param_1 + 8);
      uVar12 = uVar2 + uVar1;
      if (*(uint *)(this + 100) < uVar12) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x58,SUB41(uVar12,0),(uint)(uVar1 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x40,false);
      }
      *(uint *)(this + 0x60) = uVar12;
      memcpy((void *)((ulong)uVar2 * 0x40 + *(long *)(this + 0x58)),__src,(ulong)uVar1 << 6);
    }
    uVar9 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar9;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x28) = uVar9;
    poVar4 = *(opencl_context **)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x38) = uVar9;
    if ((poVar4 != (opencl_context *)0x0) &&
       (cVar5 = basisu::opencl_set_pixel_blocks
                          (poVar4,*(uint *)(this + 0x60),*(cl_pixel_block **)(this + 0x58)),
       cVar5 == '\0')) {
      basisu::error_printf("basisu_frontend::init: opencl_set_pixel_blocks() failed\n");
      *(undefined8 *)(this + 0x30) = 0;
      this[0x1b8] = (basisu_frontend)0x1;
    }
    uVar1 = *(uint *)this;
    uVar2 = *(uint *)(this + 0x70);
    if (uVar1 != uVar2) {
      if ((uVar2 <= uVar1) && (*(uint *)(this + 0x74) < uVar1)) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x68,SUB41(uVar1,0),(uint)(uVar2 + 1 == uVar1),
                   (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      }
      *(uint *)(this + 0x70) = uVar1;
      uVar2 = uVar1;
    }
    memset(*(void **)(this + 0x68),0,(ulong)uVar2 << 3);
    *(undefined8 *)(this + 0x4c) = _LC9;
    uVar9 = _LC15;
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0:
      this[0x4a] = (basisu_frontend)0x1;
      uVar10 = 0;
      uVar6 = 1;
      *(undefined2 *)(this + 0x48) = 0x100;
      uVar11 = 1;
      break;
    case 1:
    case 2:
      this[0x4a] = (basisu_frontend)0x1;
      uVar10 = 1;
      uVar6 = 1;
      *(undefined2 *)(this + 0x48) = 0x101;
      uVar11 = 1;
      break;
    case 3:
      this[0x4a] = (basisu_frontend)0x0;
      uVar6 = 0;
      uVar11 = 1;
      *(undefined2 *)(this + 0x48) = 1;
      uVar10 = 1;
      break;
    case 4:
      this[0x4a] = (basisu_frontend)0x1;
      uVar10 = 1;
      *(undefined2 *)(this + 0x48) = 0x101;
      uVar11 = 3;
      uVar6 = 1;
      *(undefined8 *)(this + 0x4c) = uVar9;
      break;
    case 5:
      this[0x4a] = (basisu_frontend)0x0;
      uVar9 = _LC15;
      uVar10 = 1;
      uVar6 = 0;
      *(undefined2 *)(this + 0x48) = 1;
      uVar11 = 3;
      *(undefined8 *)(this + 0x4c) = uVar9;
      break;
    default:
      this[0x4a] = (basisu_frontend)0x0;
      uVar10 = 1;
      uVar6 = 0;
      *(undefined2 *)(this + 0x48) = 1;
      uVar11 = 6;
      *(undefined8 *)(this + 0x4c) = _LC16;
    }
    if (this[0x22] == (basisu_frontend)0x0) {
      uVar8 = (ulong)(byte)this[0x49];
    }
    else {
      this[0x49] = (basisu_frontend)0x0;
      uVar8 = 0;
    }
    basisu::debug_printf
              ("Endpoint refinement: %u, Hierarchical endpoint codebooks: %u, Hierarchical selector codebooks: %u, Endpoint codebook iters: %u, Selector codebook iters: %u\n"
               ,uVar10,uVar8,uVar6,uVar11,uVar11);
    uVar9 = 1;
  }
  return uVar9;
}



/* basisu::basisu_frontend::init_etc1_images() */

void __thiscall basisu::basisu_frontend::init_etc1_images(basisu_frontend *this)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  interval_timer local_78 [32];
  basisu_frontend *local_58;
  uint local_50;
  uint local_4c;
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basisu_frontend::init_etc1_images\n");
  basisu::interval_timer::interval_timer(local_78);
  basisu::interval_timer::start();
  uVar3 = *(uint *)(this + 0x40);
  uVar4 = *(uint *)(this + 0x90);
  if (uVar3 != uVar4) {
    if ((uVar4 <= uVar3) && (*(uint *)(this + 0x94) < uVar3)) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0x88,SUB41(uVar3,0),(uint)(uVar4 + 1 == uVar3),
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    }
    *(uint *)(this + 0x90) = uVar3;
  }
  if (*(opencl_context **)(this + 0x30) != (opencl_context *)0x0) {
    iVar1 = *(int *)(this + 0x18);
    uVar3 = 4;
    if ((iVar1 != 0) && (uVar3 = 0x10, iVar1 != 1)) {
      uVar3 = 0xa5;
      if (iVar1 != 6) {
        uVar3 = 0x40;
      }
    }
    cVar2 = basisu::opencl_encode_etc1s_blocks
                      (*(opencl_context **)(this + 0x30),*(etc_block **)(this + 0x88),
                       (bool)this[0x1c],uVar3);
    if (cVar2 != '\0') goto LAB_001062b2;
    basisu::error_printf
              (
              "basisu_frontend::init_etc1_images: opencl_encode_etc1s_blocks() failed! Using CPU.\n"
              );
    *(undefined8 *)(this + 0x30) = 0;
    this[0x1b8] = (basisu_frontend)0x1;
  }
  uVar3 = *(uint *)(this + 0x40);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar5 = uVar4 + 0x1000;
      local_4c = uVar3;
      if (uVar5 < uVar3) {
        local_4c = uVar5;
      }
      local_48 = std::
                 _Function_handler<void(),basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>
                 ::_M_manager;
      pcStack_40 = std::
                   _Function_handler<void(),basisu::basisu_frontend::init_etc1_images()::{lambda()#1}>
                   ::_M_invoke;
      local_58 = this;
      local_50 = uVar4;
      basisu::job_pool::add_job(*(function **)(this + 0x38));
      if (local_48 != (code *)0x0) {
        (*local_48)(&local_58,&local_58,3);
      }
      uVar3 = *(uint *)(this + 0x40);
      uVar4 = uVar5;
    } while (uVar5 < uVar3);
  }
  basisu::job_pool::wait_for_all();
LAB_001062b2:
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("init_etc1_images: Elapsed time: %3.3f secs\n");
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::init_endpoint_training_vectors() */

void __thiscall basisu::basisu_frontend::init_endpoint_training_vectors(basisu_frontend *this)

{
  function *pfVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("init_endpoint_training_vectors\n");
  uVar2 = *(uint *)(this + 0x40);
  uVar6 = *(uint *)(this + 0xb0);
  uVar7 = uVar2 * 2;
  if (uVar7 != uVar6) {
    if (uVar6 <= uVar7) {
      if (*(uint *)(this + 0xb4) < uVar7) {
        basisu::elemental_vector::increase_capacity
                  ((uint)(this + 0xa8),SUB41(uVar7,0),(uint)(uVar6 + 1 == uVar7),
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        uVar6 = *(uint *)(this + 0xb0);
        uVar2 = *(uint *)(this + 0x40);
      }
      lVar5 = (ulong)uVar6 * 0x20 + *(long *)(this + 0xa8);
      lVar4 = (ulong)(uVar7 - uVar6) * 0x20 + lVar5;
      for (; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
    *(uint *)(this + 0xb0) = uVar7;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      pfVar1 = *(function **)(this + 0x38);
      uVar7 = uVar6 + 0x4000;
      local_68 = (undefined1  [16])0x0;
      local_58 = (code *)0x0;
      pcStack_50 = (code *)0x0;
      if (uVar7 <= uVar2) {
        uVar2 = uVar7;
      }
      puVar3 = (undefined8 *)operator_new(0x18);
      *puVar3 = this;
      *(uint *)(puVar3 + 1) = uVar6;
      *(uint *)((long)puVar3 + 0xc) = uVar2;
      puVar3[2] = this + 0xa8;
      local_68._0_8_ = puVar3;
      local_58 = std::
                 _Function_handler<void(),basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(),basisu::basisu_frontend::init_endpoint_training_vectors()::{lambda()#1}>
                   ::_M_invoke;
      basisu::job_pool::add_job(pfVar1);
      if (local_58 != (code *)0x0) {
        (*local_58)(local_68,local_68,3);
      }
      uVar2 = *(uint *)(this + 0x40);
      uVar6 = uVar7;
    } while (uVar7 < uVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    basisu::job_pool::wait_for_all();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::generate_block_endpoint_clusters() */

void __thiscall basisu::basisu_frontend::generate_block_endpoint_clusters(basisu_frontend *this)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  
  uVar2 = *(uint *)(this + 0x40);
  uVar3 = *(uint *)(this + 0x118);
  if (uVar2 != uVar3) {
    if ((uVar3 <= uVar2) && (*(uint *)(this + 0x11c) < uVar2)) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0x110,SUB41(uVar2,0),(uint)(uVar3 + 1 == uVar2),
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    }
    *(uint *)(this + 0x118) = uVar2;
  }
  if (0 < *(int *)(this + 200)) {
    iVar9 = 0;
    puVar8 = (uint *)(*(long *)(this + 0xc0) + 8);
    do {
      if (*puVar8 != 0) {
        lVar4 = *(long *)(puVar8 + -2);
        lVar5 = *(long *)(this + 0x110);
        lVar7 = 0;
        do {
          uVar2 = *(uint *)(lVar4 + lVar7 * 4);
          lVar7 = lVar7 + 1;
          *(int *)(lVar5 + (ulong)(uVar2 & 1) * 4 + (ulong)(uVar2 >> 1) * 8) = iVar9;
        } while ((uint)lVar7 < *puVar8);
      }
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar9 < *(int *)(this + 200));
  }
  if ((this[0x20] != (basisu_frontend)0x0) && (*(uint *)(this + 0x40) != 0)) {
    piVar6 = *(int **)(this + 0x110);
    piVar1 = piVar6 + (ulong)*(uint *)(this + 0x40) * 2;
    do {
      if (*piVar6 != piVar6[1]) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x3e9);
      }
      piVar6 = piVar6 + 2;
    } while (piVar1 != piVar6);
  }
  return;
}



/* basisu::basisu_frontend::compute_endpoint_clusters_within_each_parent_cluster() */

void __thiscall
basisu::basisu_frontend::compute_endpoint_clusters_within_each_parent_cluster(basisu_frontend *this)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint *__dest;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  generate_block_endpoint_clusters(this);
  if (*(uint *)(this + 0xf8) != 0) {
    puVar9 = *(undefined8 **)(this + 0xf0);
    puVar7 = puVar9 + (ulong)*(uint *)(this + 0xf8) * 2;
    do {
      if ((void *)*puVar9 != (void *)0x0) {
        free((void *)*puVar9);
      }
      puVar9 = puVar9 + 2;
    } while (puVar7 != puVar9);
    *(undefined4 *)(this + 0xf8) = 0;
  }
  uVar1 = *(uint *)(this + 0xd8);
  if (uVar1 != 0) {
    uVar5 = 0;
    if (*(uint *)(this + 0xfc) < uVar1) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0xf0,SUB41(uVar1,0),(uint)(uVar1 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x10,false);
      uVar5 = (ulong)*(uint *)(this + 0xf8);
    }
    puVar7 = (undefined8 *)(uVar5 * 0x10 + *(long *)(this + 0xf0));
    puVar9 = puVar7 + (ulong)(uVar1 - (int)uVar5) * 2;
    for (; puVar7 != puVar9; puVar7 = puVar7 + 2) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    *(uint *)(this + 0xf8) = uVar1;
  }
  lVar12 = 0;
  if (*(int *)(this + 0x40) != 0) {
    do {
      uVar2 = *(undefined4 *)(*(long *)(this + 0x110) + lVar12 * 8);
      plVar11 = (long *)((ulong)*(byte *)(*(long *)(this + 0xe0) + lVar12) * 0x10 +
                        *(long *)(this + 0xf0));
      uVar1 = *(uint *)(plVar11 + 1);
      if (*(uint *)((long)plVar11 + 0xc) <= uVar1) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar11,(bool)((char)uVar1 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar1 = *(uint *)(plVar11 + 1);
      }
      lVar12 = lVar12 + 1;
      *(undefined4 *)(*plVar11 + (ulong)uVar1 * 4) = uVar2;
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    } while ((uint)lVar12 < *(uint *)(this + 0x40));
  }
  lVar12 = 0;
  if (*(int *)(this + 0xf8) != 0) {
    do {
      plVar11 = (long *)(lVar12 * 0x10 + *(long *)(this + 0xf0));
      if (*(uint *)(plVar11 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x402);
      }
      lVar6 = *plVar11;
      lVar4 = (ulong)*(uint *)(plVar11 + 1) * 4;
      lVar10 = lVar6 + lVar4;
      uVar5 = lVar4 >> 2;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar6,lVar10,(long)(int)lVar4 * 2);
      std::__final_insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(lVar6,lVar10);
      lVar10 = *plVar11;
      __dest = std::__unique<unsigned_int*,__gnu_cxx::__ops::_Iter_equal_to_iter>
                         (lVar10,lVar10 + (ulong)*(uint *)(plVar11 + 1) * 4);
      if ((ulong)((long)__dest - lVar10) < 0x3fffffffd) {
        uVar1 = *(uint *)(plVar11 + 1);
        uVar5 = (lVar10 + (ulong)uVar1 * 4) - (long)__dest;
        if (uVar5 < 0x3fffffffd) {
          lVar4 = (long)uVar5 >> 2;
          lVar6 = (long)__dest - lVar10 >> 2;
          iVar3 = (int)lVar4;
          uVar8 = iVar3 + (int)lVar6;
          if ((iVar3 != 0) && (uVar8 <= uVar1)) {
            memmove(__dest,(void *)(lVar10 + (lVar6 + lVar4) * 4),(ulong)(uVar1 - uVar8) << 2);
            *(int *)(plVar11 + 1) = (int)plVar11[1] - iVar3;
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while ((uint)lVar12 < *(uint *)(this + 0xf8));
  }
  return;
}



/* basisu::basisu_frontend::check_etc1s_constraints() const */

undefined4 __thiscall basisu::basisu_frontend::check_etc1s_constraints(basisu_frontend *this)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  long in_FS_OFFSET;
  int *local_38;
  undefined8 local_30;
  long local_20;
  
  iVar7 = *(int *)(this + 0x40);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (int *)0x0;
  local_30 = 0;
  if (iVar7 == 0) {
    if (*(int *)(this + 200) < 1) {
      uVar5 = 1;
      goto LAB_001069ff;
    }
LAB_00106978:
    iVar7 = 0;
    puVar6 = (uint *)(*(long *)(this + 0xc0) + 8);
    do {
      if (*puVar6 != 0) {
        lVar2 = *(long *)(puVar6 + -2);
        lVar4 = 0;
        do {
          uVar1 = *(uint *)(lVar2 + lVar4 * 4);
          lVar4 = lVar4 + 1;
          local_38[(ulong)(uVar1 >> 1) * 2 + (ulong)(uVar1 & 1)] = iVar7;
        } while ((uint)lVar4 < *puVar6);
      }
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar7 < *(int *)(this + 200));
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_38,SUB41(iVar7,0),(uint)(iVar7 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    local_30 = CONCAT44(local_30._4_4_,iVar7);
    if (0 < *(int *)(this + 200)) goto LAB_00106978;
  }
  if (*(uint *)(this + 0x40) != 0) {
    piVar3 = local_38;
    do {
      if (*piVar3 != piVar3[1]) {
        uVar5 = 0;
        goto LAB_001069f2;
      }
      piVar3 = piVar3 + 2;
    } while (local_38 + (ulong)*(uint *)(this + 0x40) * 2 != piVar3);
  }
  uVar5 = 1;
LAB_001069f2:
  if (local_38 != (int *)0x0) {
    free(local_38);
  }
LAB_001069ff:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::create_initial_packed_texture() */

void __thiscall basisu::basisu_frontend::create_initial_packed_texture(basisu_frontend *this)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *__ptr;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  color_rgba *local_88;
  undefined8 local_80;
  interval_timer local_78 [32];
  basisu_frontend *local_58;
  uint local_50;
  uint local_4c;
  code *local_48;
  code *pcStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("create_initial_packed_texture\n");
  basisu::interval_timer::interval_timer(local_78);
  basisu::interval_timer::start();
  if ((*(long *)(this + 0x30) != 0) && (cVar2 = basisu::opencl_is_available(), cVar2 != '\0')) {
    local_88 = (color_rgba *)0x0;
    iVar5 = *(int *)(this + 0x40);
    local_80 = 0;
    if (iVar5 != 0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_88,SUB41(iVar5,0),(uint)(iVar5 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      local_80 = CONCAT44(local_80._4_4_,iVar5);
      if (*(int *)(this + 0x40) != 0) {
        lVar6 = 0;
        do {
          puVar1 = (undefined1 *)
                   (*(long *)(this + 0x100) +
                   (ulong)*(uint *)(*(long *)(this + 0x110) + lVar6 * 8) * 0x38);
          iVar5 = *(int *)(puVar1 + 8);
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          uVar3 = (char)iVar5;
          if (iVar5 < 0) {
            uVar3 = 0;
          }
          *(uint *)(local_88 + lVar6 * 4) =
               CONCAT31(CONCAT21(CONCAT11(uVar3,puVar1[2]),puVar1[1]),*puVar1);
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < *(uint *)(this + 0x40));
      }
    }
    cVar2 = basisu::opencl_determine_selectors
                      (*(opencl_context **)(this + 0x30),local_88,*(etc_block **)(this + 0x68),
                       (bool)this[0x1c]);
    if (cVar2 != '\0') {
      if (local_88 != (color_rgba *)0x0) {
        free(local_88);
      }
      goto LAB_00106b24;
    }
    basisu::error_printf
              (
              "basisu_frontend::create_initial_packed_texture: opencl_determine_selectors() failed! Using CPU.\n"
              );
    *(undefined8 *)(this + 0x30) = 0;
    this[0x1b8] = (basisu_frontend)0x1;
    if (local_88 != (color_rgba *)0x0) {
      free(local_88);
    }
  }
  uVar4 = *(uint *)(this + 0x40);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      uVar9 = uVar8 + 0x1000;
      local_4c = uVar4;
      if (uVar9 < uVar4) {
        local_4c = uVar9;
      }
      local_48 = std::
                 _Function_handler<void(),basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>
                 ::_M_manager;
      pcStack_40 = std::
                   _Function_handler<void(),basisu::basisu_frontend::create_initial_packed_texture()::{lambda()#1}>
                   ::_M_invoke;
      local_58 = this;
      local_50 = uVar8;
      basisu::job_pool::add_job(*(function **)(this + 0x38));
      if (local_48 != (code *)0x0) {
        (*local_48)(&local_58,&local_58,3);
      }
      uVar4 = *(uint *)(this + 0x40);
      uVar8 = uVar9;
    } while (uVar9 < uVar4);
  }
  basisu::job_pool::wait_for_all();
LAB_00106b24:
  uVar7 = (ulong)*(uint *)(this + 0x70);
  __ptr = *(void **)(this + 0x78);
  if (*(uint *)(this + 0x84) < *(uint *)(this + 0x70)) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined8 *)(this + 0x78) = 0;
      uVar7 = (ulong)*(uint *)(this + 0x70);
      *(undefined8 *)(this + 0x80) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((int)this + 0x78,SUB81(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false);
    uVar7 = (ulong)*(uint *)(this + 0x70);
    __ptr = *(void **)(this + 0x78);
  }
  else if (*(int *)(this + 0x80) != 0) {
    *(undefined4 *)(this + 0x80) = 0;
  }
  if ((__ptr != (void *)0x0) && (*(void **)(this + 0x68) != (void *)0x0)) {
    memcpy(__ptr,*(void **)(this + 0x68),uVar7 * 8);
    uVar7 = (ulong)*(uint *)(this + 0x70);
  }
  *(int *)(this + 0x80) = (int)uVar7;
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("Elapsed time: %3.3f secs\n");
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::compute_selector_clusters_within_each_parent_cluster() */

void __thiscall
basisu::basisu_frontend::compute_selector_clusters_within_each_parent_cluster(basisu_frontend *this)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long in_FS_OFFSET;
  void *local_58;
  ulong local_50;
  long local_40;
  
  iVar10 = *(int *)(this + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_50 = 0;
  if (iVar10 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_58,SUB41(iVar10,0),(uint)(iVar10 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_58 + (local_50 & 0xffffffff) * 4),0,
           (ulong)(uint)(iVar10 - (int)local_50) << 2);
    local_50 = CONCAT44(local_50._4_4_,iVar10);
  }
  if (0 < *(int *)(this + 0x128)) {
    iVar10 = 0;
    puVar6 = (uint *)(*(long *)(this + 0x120) + 8);
    do {
      if (*puVar6 != 0) {
        lVar13 = *(long *)(puVar6 + -2);
        lVar3 = 0;
        do {
          lVar7 = lVar3 * 4;
          lVar3 = lVar3 + 1;
          *(int *)((long)local_58 + (ulong)*(uint *)(lVar13 + lVar7) * 4) = iVar10;
        } while ((uint)lVar3 < *puVar6);
      }
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar10 < *(int *)(this + 0x128));
  }
  if (*(uint *)(this + 0x168) != 0) {
    puVar8 = *(undefined8 **)(this + 0x160);
    puVar11 = puVar8 + (ulong)*(uint *)(this + 0x168) * 2;
    do {
      if ((void *)*puVar8 != (void *)0x0) {
        free((void *)*puVar8);
      }
      puVar8 = puVar8 + 2;
    } while (puVar11 != puVar8);
    *(undefined4 *)(this + 0x168) = 0;
  }
  uVar1 = *(uint *)(this + 0x148);
  if (uVar1 != 0) {
    uVar5 = 0;
    if (*(uint *)(this + 0x16c) < uVar1) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0x160,SUB41(uVar1,0),(uint)(uVar1 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x10,false);
      uVar5 = (ulong)*(uint *)(this + 0x168);
    }
    puVar8 = (undefined8 *)(uVar5 * 0x10 + *(long *)(this + 0x160));
    puVar11 = puVar8 + (ulong)(uVar1 - (int)uVar5) * 2;
    for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
      *puVar8 = 0;
      puVar8[1] = 0;
    }
    *(uint *)(this + 0x168) = uVar1;
  }
  lVar13 = 0;
  if (*(int *)(this + 0x40) != 0) {
    do {
      uVar2 = *(undefined4 *)((long)local_58 + lVar13 * 4);
      plVar12 = (long *)((ulong)*(byte *)(*(long *)(this + 0x150) + lVar13) * 0x10 +
                        *(long *)(this + 0x160));
      uVar1 = *(uint *)(plVar12 + 1);
      if (*(uint *)((long)plVar12 + 0xc) <= uVar1) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar12,(bool)((char)uVar1 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar1 = *(uint *)(plVar12 + 1);
      }
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar12 + (ulong)uVar1 * 4) = uVar2;
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    } while ((uint)lVar13 < *(uint *)(this + 0x40));
  }
  lVar13 = 0;
  if (*(int *)(this + 0x168) != 0) {
    do {
      plVar12 = (long *)(lVar13 * 0x10 + *(long *)(this + 0x160));
      if (*(uint *)(plVar12 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x888);
      }
      lVar7 = *plVar12;
      lVar4 = (ulong)*(uint *)(plVar12 + 1) * 4;
      lVar3 = lVar7 + lVar4;
      uVar5 = lVar4 >> 2;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      std::__introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_less_iter>
                (lVar7,lVar3,(long)(int)lVar4 * 2);
      std::__final_insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_less_iter>(lVar7,lVar3);
      lVar3 = *plVar12;
      puVar6 = std::__unique<unsigned_int*,__gnu_cxx::__ops::_Iter_equal_to_iter>
                         (lVar3,lVar3 + (ulong)*(uint *)(plVar12 + 1) * 4);
      if ((ulong)((long)puVar6 - lVar3) < 0x3fffffffd) {
        uVar1 = *(uint *)(plVar12 + 1);
        uVar5 = (lVar3 + (ulong)uVar1 * 4) - (long)puVar6;
        if (uVar5 < 0x3fffffffd) {
          lVar4 = (long)uVar5 >> 2;
          lVar7 = (long)puVar6 - lVar3 >> 2;
          iVar10 = (int)lVar4;
          uVar9 = iVar10 + (int)lVar7;
          if ((iVar10 != 0) && (uVar9 <= uVar1)) {
            memmove(puVar6,(void *)(lVar3 + (lVar7 + lVar4) * 4),(ulong)(uVar1 - uVar9) << 2);
            *(int *)(plVar12 + 1) = (int)plVar12[1] - iVar10;
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while ((uint)lVar13 < *(uint *)(this + 0x168));
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::create_optimized_selector_codebook(unsigned int) */

void __thiscall
basisu::basisu_frontend::create_optimized_selector_codebook(basisu_frontend *this,uint param_1)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  interval_timer local_1a8 [32];
  uint local_188;
  uint local_184;
  int local_180;
  void *local_178;
  basisu_frontend *local_168;
  uint local_160;
  uint local_15c;
  code *local_158;
  code *pcStack_150;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("create_optimized_selector_codebook\n");
  basisu::interval_timer::interval_timer(local_1a8);
  basisu::interval_timer::start();
  uVar14 = *(uint *)(this + 0x128);
  basisu::debug_printf
            ("Total selector clusters (from m_selector_cluster_block_indices.size()): %u\n",
             (ulong)uVar14);
  uVar11 = *(uint *)(this + 0x138);
  if (uVar14 == uVar11) {
LAB_001070ff:
    if (uVar14 != 0) goto LAB_00107104;
  }
  else {
    if ((uVar14 < uVar11) || (uVar14 <= *(uint *)(this + 0x13c))) {
      *(uint *)(this + 0x138) = uVar14;
      goto LAB_001070ff;
    }
    basisu::elemental_vector::increase_capacity
              ((int)this + 0x130,SUB41(uVar14,0),(uint)(uVar11 + 1 == uVar14),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    *(uint *)(this + 0x138) = uVar14;
LAB_00107104:
    uVar11 = 0;
    do {
      uVar10 = uVar11 + 0x100;
      local_15c = uVar14;
      if (uVar10 <= uVar14) {
        local_15c = uVar10;
      }
      local_158 = std::
                  _Function_handler<void(),basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}>
                  ::_M_manager;
      pcStack_150 = std::
                    _Function_handler<void(),basisu::basisu_frontend::create_optimized_selector_codebook(unsigned_int)::{lambda()#1}>
                    ::_M_invoke;
      local_168 = this;
      local_160 = uVar11;
      basisu::job_pool::add_job(*(function **)(this + 0x38));
      if (local_158 != (code *)0x0) {
        (*local_158)(&local_168,&local_168,3);
      }
      uVar11 = uVar10;
    } while (uVar10 < uVar14);
  }
  basisu::job_pool::wait_for_all();
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("Elapsed time: %3.3f secs\n");
  if (this[0x1e] != (basisu_frontend)0x0) {
    uVar14 = *(uint *)(this + 0x128);
    if (uVar14 == 0) {
      uVar11 = 0x10;
      uVar14 = 0;
    }
    else {
      lVar4 = *(long *)(this + 0x120);
      uVar11 = 0;
      lVar13 = (ulong)uVar14 * 0x10 + lVar4;
      do {
        if (uVar11 < *(uint *)(lVar4 + 8)) {
          uVar11 = *(uint *)(lVar4 + 8);
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != lVar13);
      if (0x7fff < uVar11 * 5) goto LAB_001071cb;
      uVar14 = uVar14 * 5;
      uVar11 = uVar11 * 5 + 0x10;
    }
    uVar10 = 0;
    image::image((image *)&local_188,uVar11,uVar14,0xffffffff);
    lVar4 = 0;
    if (*(int *)(this + 0x128) != 0) {
      do {
        uVar9 = 0;
        plVar8 = (long *)(lVar4 * 0x10 + *(long *)(this + 0x120));
        uVar14 = uVar10;
        do {
          iVar15 = (int)uVar9;
          uVar11 = 4;
          do {
            if ((uVar11 < local_188) && (uVar14 < local_184)) {
              bVar5 = (byte)uVar9 & 7;
              lVar13 = *(long *)(this + 0x130) + lVar4 * 8;
              uVar17 = (ulong)(7 - (int)(uVar9 >> 3));
              uVar16 = ((uint)*(byte *)((long)&g_etc1_to_selector_index +
                                       (ulong)(((int)(uint)*(byte *)(lVar13 + -2 + uVar17) >> bVar5)
                                               * 2 & 2U |
                                              (int)(uint)*(byte *)(lVar13 + uVar17) >> bVar5 & 1U))
                       * 0xff) / 3;
              if (0xff < uVar16) {
                uVar16 = 0xff;
              }
              uVar6 = (undefined1)uVar16;
              puVar1 = (undefined2 *)((long)local_178 + (ulong)(local_180 * uVar14 + uVar11) * 4);
              *puVar1 = CONCAT11(uVar6,uVar6);
              *(undefined1 *)(puVar1 + 1) = uVar6;
              *(undefined1 *)((long)puVar1 + 3) = 0xff;
            }
            uVar11 = uVar11 + 1;
            uVar9 = (ulong)((int)uVar9 + 4);
          } while (uVar11 != 8);
          uVar14 = uVar14 + 1;
          uVar11 = iVar15 + 1;
          uVar9 = (ulong)uVar11;
        } while (uVar11 != 4);
        uVar14 = 0x10;
        lVar13 = 0;
        if ((int)plVar8[1] != 0) {
          do {
            uVar16 = 0x10;
            lVar2 = *(long *)(this + 0x78) + (ulong)*(uint *)(*plVar8 + lVar13 * 4) * 8;
            uVar11 = uVar10;
            do {
              uVar3 = uVar16 - 0x10;
              uVar12 = uVar14;
              do {
                if ((uVar12 < local_188) && (uVar11 < local_184)) {
                  bVar5 = (byte)uVar3 & 7;
                  uVar9 = (ulong)(7 - (uVar3 >> 3));
                  bVar5 = *(byte *)((long)&g_etc1_to_selector_index +
                                   (ulong)(((int)(uint)*(byte *)(lVar2 + -2 + uVar9) >> bVar5) * 2 &
                                           2U | (int)(uint)*(byte *)(lVar2 + uVar9) >> bVar5 & 1U));
                  uVar7 = ((uint)bVar5 * 0x100 - (uint)bVar5) / 3;
                  if (0xff < uVar7) {
                    uVar7 = 0xff;
                  }
                  puVar1 = (undefined2 *)
                           ((long)local_178 + (ulong)(local_180 * uVar11 + uVar12) * 4);
                  uVar6 = (undefined1)uVar7;
                  *(undefined1 *)(puVar1 + 1) = uVar6;
                  *puVar1 = CONCAT11(uVar6,uVar6);
                  *(undefined1 *)((long)puVar1 + 3) = 0xff;
                }
                uVar3 = uVar3 + 4;
                uVar12 = uVar12 + 1;
              } while (uVar16 != uVar3);
              uVar16 = uVar16 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar16 != 0x14);
            uVar14 = uVar14 + 5;
            lVar13 = lVar13 + 1;
          } while ((uint)lVar13 < *(uint *)(plVar8 + 1));
        }
        lVar4 = lVar4 + 1;
        uVar10 = uVar10 + 5;
      } while ((uint)lVar4 < *(uint *)(this + 0x128));
    }
    __snprintf_chk(local_148,0x100,2,0x100,"selector_cluster_vis_%u.png",param_1);
    basisu::save_png(local_148,(image *)&local_188,0,0);
    if (local_178 != (void *)0x0) {
      free(local_178);
    }
  }
LAB_001071cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* basisu::basisu_frontend::refine_block_endpoints_given_selectors() */

uint __thiscall
basisu::basisu_frontend::refine_block_endpoints_given_selectors(basisu_frontend *this)

{
  long lVar1;
  etc_block *peVar2;
  byte *pbVar3;
  ushort *puVar4;
  etc_block eVar5;
  undefined1 uVar6;
  void *pvVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [13];
  char cVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  char cVar21;
  sbyte sVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  void **ppvVar36;
  code *pcVar37;
  byte *pbVar38;
  uint uVar39;
  ulong uVar40;
  long in_FS_OFFSET;
  byte local_388;
  int local_380;
  uint local_334;
  long local_310;
  uint local_2f8;
  uint local_2f4;
  undefined2 local_2da;
  uint local_2d8 [4];
  undefined1 local_2c8 [16];
  void *local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  undefined8 local_258;
  long local_250;
  void *local_248;
  byte local_240;
  undefined4 *local_238;
  undefined8 local_230;
  undefined2 local_228;
  void *local_220;
  ulong local_218;
  uint uStack_210;
  uint uStack_20c;
  undefined1 local_208 [16];
  undefined8 uStack_1f0;
  uint local_1e8;
  uint uStack_1e4;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [3] [16];
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("refine_block_endpoints_given_selectors\n");
  if (0 < *(int *)(this + 0x40)) {
    lVar30 = 0;
    do {
      iVar27 = (int)lVar30 * 2;
      puVar35 = (uint *)(*(long *)(this + 0x110) + lVar30 * 8);
      lVar1 = *(long *)(this + 0x100) + (ulong)*puVar35 * 0x38;
      uVar15 = *(uint *)(lVar1 + 0x28);
      if (*(uint *)(lVar1 + 0x2c) <= uVar15) {
        basisu::elemental_vector::increase_capacity
                  ((int)lVar1 + 0x20,(bool)((char)uVar15 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar15 = *(uint *)(lVar1 + 0x28);
      }
      *(int *)(*(long *)(lVar1 + 0x20) + (ulong)uVar15 * 4) = iVar27;
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      lVar1 = *(long *)(this + 0x100) + (ulong)puVar35[1] * 0x38;
      uVar15 = *(uint *)(lVar1 + 0x28);
      if (*(uint *)(lVar1 + 0x2c) <= uVar15) {
        basisu::elemental_vector::increase_capacity
                  ((int)lVar1 + 0x20,(bool)((char)uVar15 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar15 = *(uint *)(lVar1 + 0x28);
      }
      lVar30 = lVar30 + 1;
      *(int *)(*(long *)(lVar1 + 0x20) + (ulong)uVar15 * 4) = iVar27 + 1;
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
    } while ((int)lVar30 < *(int *)(this + 0x40));
  }
  local_2f4 = 0;
  local_334 = *(uint *)(this + 0x108);
  if (local_334 == 0) {
LAB_001080b5:
    if (this[0x1d] != (basisu_frontend)0x0) {
      basisu::debug_printf
                ("Total subblock endpoints refined: %u (%3.1f%%)\n",
                 (double)(((float)local_334 * __LC32) / (float)local_2f4),(ulong)local_334);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_334;
  }
  local_310 = 0;
  local_2f8 = 0;
  local_334 = 0;
  local_2f4 = 0;
LAB_001076b0:
  puVar35 = (uint *)(local_310 + *(long *)(this + 0x100));
  local_2b8 = (void *)0x0;
  local_2b0 = 0;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  local_2c8 = (undefined1  [16])0x0;
  if (puVar35[10] != 0) {
    lVar30 = 0;
    do {
      uVar15 = *(uint *)(*(long *)(puVar35 + 8) + lVar30 * 4);
      uVar17 = (ulong)(uVar15 >> 1);
      peVar2 = (etc_block *)(*(long *)(this + 0x68) + uVar17 * 8);
      lVar1 = *(long *)(this + 0x58);
      eVar5 = peVar2[3];
      basisu::unpack_etc1(peVar2,(color_rgba *)local_1c8,false);
      uVar39 = ((byte)eVar5 >> 1 ^ 1) & 1;
      uVar40 = (ulong)uVar39;
      iVar27 = uVar39 * 0x10;
      uVar18 = (ulong)(uVar15 & 1);
      pcVar37 = (code *)(&g_etc1_pixel_indices + (uVar18 + 2) * 4);
      pbVar38 = &DAT_00120171 + uVar18 * 0x10;
      do {
        uVar28 = (ulong)*(uint *)pcVar37;
        uVar15 = *(uint *)(&local_2b0 + uVar40 * 2);
        lVar19 = uVar28 * 4;
        pbVar3 = (byte *)(uVar17 * 0x40 + lVar1 + lVar19);
        if (*(uint *)((long)&local_2b0 + uVar40 * 0x10 + 4) <= uVar15) {
          basisu::elemental_vector::increase_capacity
                    ((int)&local_2b8 + iVar27,(bool)((char)uVar15 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar15 = *(uint *)(&local_2b0 + uVar40 * 2);
        }
        *(undefined4 *)((long)(&local_2b8)[uVar40 * 2] + (ulong)uVar15 * 4) = *(undefined4 *)pbVar3;
        *(int *)(&local_2b0 + uVar40 * 2) = *(int *)(&local_2b0 + uVar40 * 2) + 1;
        if (this[0x1c] == (basisu_frontend)0x0) {
          iVar14 = (uint)*pbVar3 - (uint)(byte)((color_rgba *)local_1c8)[lVar19];
          iVar23 = (uint)pbVar3[1] - (uint)(byte)local_1c8[0][lVar19 + 1];
          iVar25 = (uint)pbVar3[2] - (uint)(byte)local_1c8[0][lVar19 + 2];
          uVar15 = iVar14 * iVar14 + iVar23 * iVar23 + iVar25 * iVar25;
        }
        else {
          iVar14 = (uint)*pbVar3 - (uint)(byte)local_1c8[0][uVar28 * 4];
          iVar23 = (uint)pbVar3[2] - (uint)(byte)local_1c8[0][uVar28 * 4 + 2];
          lVar29 = (long)(int)(((uint)pbVar3[1] - (uint)(byte)local_1c8[0][uVar28 * 4 + 1]) * 0x5c +
                               iVar14 * 0x1b + iVar23 * 9);
          lVar19 = iVar14 * 0x80 - lVar29;
          lVar26 = iVar23 * 0x80 - lVar29;
          uVar15 = ((uint)((int)(lVar19 * lVar19 >> 7) * 0x1a) >> 7) +
                   ((uint)((int)(lVar26 * lVar26 >> 7) * 3) >> 7) + (int)(lVar29 * lVar29 >> 7);
        }
        bVar20 = pbVar38[-1];
        *(ulong *)(local_2c8 + uVar40 * 8) = *(long *)(local_2c8 + uVar40 * 8) + (ulong)uVar15;
        uVar15 = *(uint *)(&local_290 + uVar40 * 2);
        uVar39 = (uint)*pbVar38 + (uint)bVar20 * 4;
        uVar28 = (ulong)(7 - (uVar39 >> 3));
        bVar20 = (byte)uVar39 & 7;
        uVar6 = *(undefined1 *)
                 ((long)&g_etc1_to_selector_index +
                 (ulong)(((int)(uint)(byte)peVar2[uVar28 - 2] >> bVar20) * 2 & 2U |
                        (int)(uint)(byte)peVar2[uVar28] >> bVar20 & 1U));
        if (*(uint *)((long)&local_290 + uVar40 * 0x10 + 4) <= uVar15) {
          basisu::elemental_vector::increase_capacity
                    (iVar27 + (int)&local_298,(bool)((char)uVar15 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar15 = *(uint *)(&local_290 + uVar40 * 2);
        }
        pcVar37 = pcVar37 + 4;
        pbVar38 = pbVar38 + 2;
        *(undefined1 *)((long)(&local_298)[uVar40 * 2] + (ulong)uVar15) = uVar6;
        *(int *)(&local_290 + uVar40 * 2) = *(int *)(&local_290 + uVar40 * 2) + 1;
      } while (pcVar37 != basisu::debug_printf + uVar18 * 0x20);
      lVar30 = lVar30 + 1;
    } while ((uint)lVar30 < puVar35[10]);
  }
  lVar30 = 0;
  local_2da = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_268 = (void *)0x0;
  local_260 = 0;
  uStack_20c = 0;
  uStack_210 = 0;
  local_218 = 0;
  local_208 = (undefined1  [16])0x0;
  uStack_1f0 = 0;
  uStack_1e4 = 0;
  local_1e8 = 0;
  local_1d8 = (undefined1  [16])0x0;
  puVar31 = &local_218;
  ppvVar36 = &local_278;
  while( true ) {
    uVar15 = *(uint *)(&local_2b0 + lVar30 * 2);
    if (uVar15 != 0) {
      local_198 = (void *)0x0;
      local_2f4 = local_2f4 + (uVar15 >> 3);
      local_190 = 0;
      local_188 = (void *)0x0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_170 = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_118 = 0xffffffffffffffff;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = 0xffffffffffffffff;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_238 = &etc1_optimizer::params::clear_optimizer_params()::s_default_scan_delta;
      local_230 = 1;
      local_1c8[0] = (undefined1  [16])0x0;
      local_168 = (undefined1  [16])0x0;
      local_250 = (ulong)uVar15 << 0x20;
      local_228 = _LC3;
      local_258 = 0x100010000000003;
      local_248 = (&local_2b8)[lVar30 * 2];
      local_220 = (&local_298)[lVar30 * 2];
      uVar39 = *(uint *)(ppvVar36 + 1);
      local_240 = -(char)lVar30 & 1;
      local_258 = CONCAT35(0x10001,CONCAT14(this[0x1c],3));
      if (uVar15 != uVar39) {
        if (uVar39 <= uVar15) {
          if (*(uint *)((long)ppvVar36 + 0xc) < uVar15) {
            basisu::elemental_vector::increase_capacity
                      ((uint)ppvVar36,SUB41(uVar15,0),(uint)(uVar39 + 1 == uVar15),
                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
            uVar39 = *(uint *)(ppvVar36 + 1);
          }
          memset((void *)((ulong)uVar39 + (long)*ppvVar36),0,(ulong)(uVar15 - uVar39));
        }
        *(uint *)(ppvVar36 + 1) = uVar15;
      }
      pvVar7 = *ppvVar36;
      *(uint *)(puVar31 + 2) = uVar15;
      puVar31[3] = (ulong)pvVar7;
      basisu::etc1_optimizer::init((params *)local_1c8,(results *)&local_258);
      cVar12 = basisu::etc1_optimizer::compute();
      if ((cVar12 != '\0') && (*puVar31 < *(ulong *)(local_2c8 + lVar30 * 8))) {
        *(undefined1 *)((long)&local_2da + lVar30) = 1;
      }
      if (local_d8 != (void *)0x0) {
        free(local_d8);
      }
      if (local_f8 != (void *)0x0) {
        free(local_f8);
      }
      if (local_128 != (void *)0x0) {
        free(local_128);
      }
      if (local_148 != (void *)0x0) {
        free(local_148);
      }
      if (local_158 != (void *)0x0) {
        free(local_158);
      }
      if (local_178 != (void *)0x0) {
        free(local_178);
      }
      if (local_188 != (void *)0x0) {
        free(local_188);
      }
      if (local_198 != (void *)0x0) {
        free(local_198);
      }
    }
    puVar31 = puVar31 + 5;
    ppvVar36 = ppvVar36 + 2;
    if (lVar30 != 0) break;
    lVar30 = 1;
  }
  cVar12 = (char)local_2da;
  lVar1 = 0;
  do {
    if (cVar12 != '\0') {
      uVar15 = 0;
      do {
        lVar19 = 0;
        if (puVar35[10] != 0) {
          do {
            while( true ) {
              uVar39 = *(uint *)(*(long *)(puVar35 + 8) + lVar19 * 4);
              puVar4 = (ushort *)(*(long *)(this + 0x68) + (ulong)(uVar39 >> 1) * 8);
              local_388 = (byte)lVar1;
              if (((*(byte *)((long)puVar4 + 3) >> 1 ^ 1) & 1) == local_388) break;
LAB_00107c17:
              lVar19 = lVar19 + 1;
              if (puVar35[10] <= (uint)lVar19) goto LAB_00107fed;
            }
            uVar39 = uVar39 & 1;
            if (lVar1 != 0) {
              iVar27 = basisu::etc_block::pack_color4((color_rgba *)&local_1e8,false,0x7f);
              cVar21 = (char)((uint)iVar27 >> 8);
              if (uVar39 == 0) {
                sVar22 = 5;
                *puVar4 = CONCAT11((char)((ushort)iVar27 >> 4) << 4,cVar21 << 4) | _LC30 & *puVar4;
                *(byte *)(puVar4 + 1) = (byte)(iVar27 << 4) | (byte)puVar4[1] & 0xf;
                bVar20 = 0x1f;
              }
              else {
                sVar22 = 2;
                *puVar4 = CONCAT11((char)((ushort)iVar27 >> 4),cVar21) & 0xf0f | _LC29 & *puVar4;
                *(byte *)(puVar4 + 1) = (byte)iVar27 & 0xf | (byte)puVar4[1] & 0xf0;
                bVar20 = 0xe3;
              }
              local_334 = local_334 + 1;
              *(byte *)((long)puVar4 + 3) =
                   bVar20 & *(byte *)((long)puVar4 + 3) | (byte)(uStack_1e4 << sVar22);
              *(undefined8 *)(puVar35 + 6) = uStack_1f0;
              puVar35[3] = uStack_1e4;
              puVar35[1] = local_1e8;
              goto LAB_00107c17;
            }
            bVar20 = *(byte *)((long)puVar4 + 1);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            uVar13 = (ushort)bVar20 * 4 & 0x3e0 | ((byte)uVar9 & 0xf8) << 7;
            uVar8 = (ushort)((int)(uint)(byte)uVar10 >> 3);
            basisu::etc_block::unpack_color5
                      (local_2d8,local_2d8 + 2,(uint *)&local_258,uVar13 | uVar8,false);
            basisu::etc_block::unpack_color5
                      (local_2d8 + 1,local_2d8 + 3,(uint *)((long)&local_258 + 4),uVar13 | uVar8,
                       (ushort)((bVar20 & 7) << 3) | (ushort)(((byte)uVar9 & 7) << 6) |
                       (byte)uVar10 & 7,false,0xff);
            uVar17 = (ulong)uVar39;
            local_1c8[0]._0_4_ = 0xff000000;
            local_2d8[uVar17] = uStack_210 & 0xff;
            local_1c8[0][7] = 0xff;
            local_2d8[uVar17 + 2] = uStack_210 >> 8 & 0xff;
            *(uint *)((long)&local_258 + uVar17 * 4) = uStack_210 >> 0x10 & 0xff;
            auVar11 = local_1c8[0]._3_13_;
            uVar34 = local_2d8[0];
            if (0xff < (int)local_2d8[0]) {
              uVar34 = 0xff;
            }
            if ((int)uVar34 < 0) {
              uVar34 = 0;
            }
            uVar33 = local_2d8[2];
            if (0xff < (int)local_2d8[2]) {
              uVar33 = 0xff;
            }
            if ((int)uVar33 < 0) {
              uVar33 = 0;
            }
            uVar32 = (uint)local_258;
            if (0xff < (int)(uint)local_258) {
              uVar32 = 0xff;
            }
            local_1c8[0][1] = (char)uVar33;
            local_1c8[0][0] = (color_rgba)(char)uVar34;
            if ((int)uVar32 < 0) {
              uVar32 = 0;
            }
            local_1c8[0][2] = (char)uVar32;
            uVar16 = local_2d8[1];
            if (0xff < (int)local_2d8[1]) {
              uVar16 = 0xff;
            }
            if ((int)uVar16 < 0) {
              uVar16 = 0;
            }
            uVar24 = local_2d8[3];
            if (0xff < (int)local_2d8[3]) {
              uVar24 = 0xff;
            }
            local_1c8[0][4] = (char)uVar16;
            if ((int)uVar24 < 0) {
              uVar24 = 0;
            }
            iVar27 = local_258._4_4_;
            if (0xff < local_258._4_4_) {
              iVar27 = 0xff;
            }
            local_1c8[0][5] = (char)uVar24;
            if (iVar27 < 0) {
              iVar27 = 0;
            }
            iVar23 = uVar16 - uVar34;
            iVar25 = uVar24 - uVar33;
            local_1c8[0]._7_9_ = auVar11._4_9_;
            local_1c8[0][6] = (char)iVar27;
            iVar27 = iVar27 - uVar32;
            iVar14 = iVar25;
            if (iVar23 <= iVar25) {
              iVar14 = iVar23;
            }
            if (iVar27 < iVar14) {
              iVar14 = iVar27;
            }
            if (iVar14 < -4) {
LAB_00107fe0:
              cVar12 = '\0';
              break;
            }
            if (iVar23 < iVar25) {
              iVar23 = iVar25;
            }
            if (iVar23 < iVar27) {
              iVar23 = iVar27;
            }
            if (3 < iVar23) goto LAB_00107fe0;
            if (((uVar15 & 1) == 0) || (cVar12 == '\0')) goto LAB_00107c17;
            *(byte *)((long)puVar4 + 3) = *(byte *)((long)puVar4 + 3) | 2;
            iVar27 = basisu::etc_block::pack_color5((color_rgba *)local_1c8,false,0x7f);
            *puVar4 = CONCAT11((char)((ushort)iVar27 >> 5) << 3,
                               ((byte)((uint)iVar27 >> 8) >> 2) << 3) | _LC1 & *puVar4;
            *(byte *)(puVar4 + 1) = (byte)(iVar27 << 3) | (byte)puVar4[1] & 7;
            uVar13 = basisu::etc_block::pack_delta3
                               ((uint)local_1c8[0][4] - (uint)(byte)local_1c8[0][0],
                                (uint)local_1c8[0][5] - (uint)local_1c8[0][1],
                                (uint)local_1c8[0][6] - (uint)local_1c8[0][2]);
            *puVar4 = CONCAT11((char)(uVar13 >> 3),(char)(uVar13 >> 6)) & 0x707 | _LC31 & *puVar4;
            *(byte *)(puVar4 + 1) = (byte)uVar13 & 7 | (byte)puVar4[1] & 0xf8;
            local_334 = local_334 + 1;
            lVar19 = lVar19 + 1;
            *(byte *)((long)puVar4 + 3) =
                 (-(uVar39 == 0) & 0x3cU) - 0x1d & *(byte *)((long)puVar4 + 3) |
                 (byte)(uStack_20c << (-(uVar39 == 0) & 3U) + 2);
            *(ulong *)(puVar35 + 4) = local_218;
            puVar35[2] = uStack_20c;
            *puVar35 = uStack_210;
          } while ((uint)lVar19 < puVar35[10]);
        }
LAB_00107fed:
        local_380 = (int)lVar1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 2 - (local_380 != 0));
    }
    if (lVar1 != 0) break;
    cVar12 = *(char *)((long)&local_2da + lVar30);
    lVar1 = lVar30;
  } while( true );
  if (local_268 != (void *)0x0) {
    free(local_268);
  }
  if (local_278 != (void *)0x0) {
    free(local_278);
  }
  if (local_288 != (void *)0x0) {
    free(local_288);
  }
  if (local_298 != (void *)0x0) {
    free(local_298);
  }
  if (local_2a8 != (void *)0x0) {
    free(local_2a8);
  }
  if (local_2b8 != (void *)0x0) {
    free(local_2b8);
  }
  local_2f8 = local_2f8 + 1;
  local_310 = local_310 + 0x38;
  if (*(uint *)(this + 0x108) <= local_2f8) goto LAB_001080b5;
  goto LAB_001076b0;
}



/* basisu::basisu_frontend::dump_endpoint_clusterization_visualization(char const*, bool) */

void __thiscall
basisu::basisu_frontend::dump_endpoint_clusterization_visualization
          (basisu_frontend *this,char *param_1,bool param_2)

{
  etc_block *this_00;
  etc_block eVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  color_rgba *pcVar16;
  long lVar17;
  uint uVar18;
  long in_FS_OFFSET;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  byte local_85;
  undefined4 local_84;
  color_rgba local_80 [8];
  color_rgba local_78 [16];
  undefined4 local_68 [8];
  undefined4 local_48 [2];
  long local_40;
  undefined4 local_38 [2];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("dump_endpoint_clusterization_visualization\n");
  iVar15 = *(int *)(this + 200);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (iVar15 == 0) goto LAB_001086fa;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_c8,SUB41(iVar15,0),(uint)(iVar15 == 1),
             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset((void *)((long)local_c8 + (local_c0 & 0xffffffff) * 4),0,
         (ulong)(uint)(iVar15 - (int)local_c0) << 2);
  local_c0 = CONCAT44(local_c0._4_4_,iVar15);
  iVar15 = *(int *)(this + 200);
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (iVar15 == 0) goto LAB_001086fa;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b8,SUB41(iVar15,0),(uint)(iVar15 == 1),
             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset((void *)((long)local_b8 + (local_b0 & 0xffffffff) * 4),0,
         (ulong)(uint)(iVar15 - (int)local_b0) << 2);
  local_b0 = CONCAT44(local_b0._4_4_,iVar15);
  if (*(int *)(this + 200) != 0) {
    lVar7 = *(long *)(this + 0xc0);
    lVar9 = 0;
    uVar13 = 0;
    do {
      uVar2 = *(uint *)(lVar7 + 8 + lVar9 * 0x10);
      *(uint *)((long)local_c8 + lVar9 * 4) = uVar2;
      if (uVar13 < uVar2) {
        uVar13 = uVar2;
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < *(uint *)(this + 200));
    if (uVar13 != 0) {
      if (*(uint *)(this + 200) == 0) {
        local_a8 = 0;
        local_a0 = 0;
        local_98 = (undefined4 *)0x0;
        local_90 = 0;
      }
      else {
        lVar7 = 0;
        do {
          *(int *)((long)local_b8 + lVar7 * 4) = (int)lVar7;
          uVar2 = *(uint *)(this + 200);
          lVar7 = lVar7 + 1;
        } while ((uint)lVar7 < uVar2);
        local_a8 = 0;
        local_a0 = 0;
        local_98 = (undefined4 *)0x0;
        local_90 = 0;
        if (uVar2 != 0) {
          uVar2 = uVar2 * 3;
          if (0x800 < uVar13) {
            uVar13 = 0x800;
          }
          uVar13 = uVar13 * 5 + 0xc;
          uVar18 = uVar2 * uVar13;
          if (uVar18 == 0) {
            local_a0 = (ulong)uVar13;
          }
          else {
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_98,SUB41(uVar18,0),(uint)(uVar18 == 1),
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            local_90 = CONCAT44(local_90._4_4_,uVar18);
            if (local_a8 == 0) {
              puVar4 = local_98;
              do {
                puVar5 = puVar4 + 1;
                *puVar4 = g_black_color;
                puVar4 = puVar5;
              } while (local_98 + uVar18 != puVar5);
            }
            else {
              iVar15 = 0;
              uVar18 = 0;
              do {
                uVar8 = 0;
                while( true ) {
                  if ((uVar8 < (uint)local_a8) && (uVar18 < local_a8._4_4_)) {
                    local_98[iVar15 + uVar8] =
                         *(undefined4 *)((ulong)((int)local_a0 * uVar18 + uVar8) * 4);
                  }
                  else {
                    local_98[iVar15 + uVar8] = g_black_color;
                  }
                  if (uVar13 == uVar8 + 1) break;
                  uVar8 = uVar8 + 1;
                }
                uVar18 = uVar18 + 1;
                iVar15 = iVar15 + uVar13;
              } while (uVar2 != uVar18);
            }
            local_a8 = CONCAT44(uVar2,uVar13);
            local_a0 = CONCAT44(local_a0._4_4_,uVar13);
            if (*(int *)(this + 200) == 0) goto LAB_001086ba;
          }
          local_a8 = CONCAT44(uVar2,uVar13);
          lVar7 = 0;
          do {
            uVar14 = (ulong)*(uint *)((long)local_b8 + lVar7 * 4);
            local_84 = 0;
            pcVar16 = (color_rgba *)(*(long *)(this + 0x100) + uVar14 * 0x38);
            iVar15 = *(int *)(pcVar16 + 8);
            local_85 = (byte)(iVar15 << 5) | (byte)(iVar15 << 2) | 2;
            iVar15 = basisu::etc_block::pack_color5(pcVar16,false,0x7f);
            local_86 = (undefined1)(iVar15 << 3);
            local_88 = CONCAT11((char)((ushort)iVar15 >> 5) << 3,
                                ((byte)((uint)iVar15 >> 8) >> 2) << 3);
            etc_block::get_block_colors((etc_block *)&local_88,local_78,0);
            uVar13 = 0;
            uVar6 = 2;
            uVar2 = (int)lVar7 * 3;
            uVar18 = uVar13;
            pcVar16 = local_78;
            uVar8 = uVar2;
            do {
              do {
                if ((uVar13 < (uint)local_a8) && (uVar8 < local_a8._4_4_)) {
                  local_98[(int)local_a0 * uVar8 + uVar13] = *(undefined4 *)pcVar16;
                }
                uVar13 = uVar13 + 1;
              } while ((uVar6 != uVar13) || (uVar8 = uVar8 + 1, uVar13 = uVar18, uVar8 != uVar2 + 2)
                      );
              uVar6 = uVar6 + 2;
              uVar13 = uVar18 + 2;
              pcVar16 = pcVar16 + 4;
              uVar18 = uVar13;
              uVar8 = uVar2;
            } while (uVar6 != 10);
            uVar13 = 0xc;
            lVar17 = 0;
            lVar9 = uVar14 * 0x10;
            plVar10 = (long *)(*(long *)(this + 0xc0) + lVar9);
            if ((int)plVar10[1] != 0) {
              do {
                uVar18 = *(uint *)(*plVar10 + lVar17 * 4);
                this_00 = (etc_block *)(*(long *)(this + 0x88) + (ulong)(uVar18 >> 1) * 8);
                lVar3 = *(long *)(this + 0x58);
                if (param_2) {
                  etc_block::get_block_low_high_colors(this_00,local_80,uVar18 & 1);
                  puVar4 = local_68;
                  do {
                    puVar5 = puVar4 + 1;
                    *puVar4 = *(undefined4 *)(local_80 + ((ulong)uVar18 & 1) * 4);
                    puVar4 = puVar5;
                  } while (local_48 != puVar5);
                }
                else {
                  eVar1 = this_00[3];
                  lVar11 = 0;
                  do {
                    *(undefined4 *)((long)local_68 + lVar11) =
                         *(undefined4 *)
                          (lVar3 + (ulong)(uVar18 >> 1) * 0x40 +
                          (ulong)*(uint *)((long)&g_etc1_pixel_indices +
                                          lVar11 + ((ulong)(uVar18 & 1) +
                                                   (ulong)((byte)eVar1 & 1) * 2) * 0x20) * 4);
                    lVar11 = lVar11 + 4;
                  } while (lVar11 != 0x20);
                }
                puVar4 = local_68 + 4;
                uVar18 = uVar2;
                do {
                  puVar5 = puVar4 + -4;
                  uVar8 = uVar13;
                  do {
                    puVar12 = puVar5;
                    if ((uVar8 < (uint)local_a8) && (uVar18 < local_a8._4_4_)) {
                      local_98[(int)local_a0 * uVar18 + uVar8] = *puVar12;
                    }
                    uVar8 = uVar8 + 1;
                    puVar5 = puVar12 + 1;
                  } while (puVar12 + 1 != puVar4);
                  puVar4 = puVar12 + 5;
                  uVar18 = uVar18 + 1;
                } while (puVar4 != local_38);
                lVar17 = lVar17 + 1;
                uVar13 = uVar13 + 5;
                plVar10 = (long *)(*(long *)(this + 0xc0) + lVar9);
              } while ((uint)lVar17 < *(uint *)(plVar10 + 1));
            }
            lVar7 = lVar7 + 1;
          } while ((uint)lVar7 < *(uint *)(this + 200));
        }
      }
LAB_001086ba:
      basisu::save_png(param_1,(image *)&local_a8,0,0);
      basisu::debug_printf("Wrote debug visualization file %s\n",param_1);
      if (local_98 != (undefined4 *)0x0) {
        free(local_98);
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
LAB_001086fa:
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::finalize() */

void __thiscall basisu::basisu_frontend::finalize(basisu_frontend *this)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar1 = *(uint *)(this + 0x40);
  if (uVar1 != 0) {
    puVar3 = *(uint **)(this + 0x110);
    lVar4 = *(long *)(this + 0x100);
    puVar5 = puVar3;
    do {
      puVar6 = puVar5 + 2;
      uVar2 = puVar5[1];
      *(undefined1 *)(lVar4 + 0x30 + (ulong)*puVar5 * 0x38) = 1;
      *(undefined1 *)(lVar4 + 0x30 + (ulong)uVar2 * 0x38) = 1;
      puVar5 = puVar6;
    } while (puVar3 + (ulong)uVar1 * 2 != puVar6);
  }
  return;
}



/* basisu::basisu_frontend::validate_endpoint_cluster_hierarchy(bool) const */

undefined8 __thiscall
basisu::basisu_frontend::validate_endpoint_cluster_hierarchy(basisu_frontend *this,bool param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0xd8) == 0) {
    return 1;
  }
  uVar1 = validate_endpoint_cluster_hierarchy(this,param_1);
  return uVar1;
}



/* basisu::basisu_frontend::validate_output() const */

undefined8 __thiscall basisu::basisu_frontend::validate_output(basisu_frontend *this)

{
  char cVar1;
  undefined8 uVar2;
  
  basisu::debug_printf("validate_output\n");
  cVar1 = check_etc1s_constraints(this);
  if (cVar1 != '\0') {
    uVar2 = validate_output(this);
    return uVar2;
  }
  return 0;
}



/* basisu::basisu_frontend::dump_debug_image(char const*, unsigned int, unsigned int, unsigned int,
   bool) */

void __thiscall
basisu::basisu_frontend::dump_debug_image
          (basisu_frontend *this,char *param_1,uint param_2,uint param_3,uint param_4,bool param_5)

{
  uint uVar1;
  ushort *puVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  color_rgba *pcVar13;
  int iVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  ulong uStack_6c;
  undefined8 local_64;
  int local_5c;
  void *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_74 = CONCAT44(param_4 * 4,param_3 * 4);
  local_78 = 0;
  local_64 = _LC37;
  local_5c = 1;
  iVar14 = (param_3 & 0x3fffffff) * (param_4 & 0x3fffffff);
  local_50 = 0;
  uStack_6c = CONCAT44(param_4,param_3) & 0x3fffffff3fffffff;
  if (iVar14 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_58,SUB41(iVar14,0),(uint)(iVar14 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    memset((void *)((long)local_58 + (local_50 & 0xffffffff) * 8),0,
           (ulong)(uint)(iVar14 - (int)local_50) << 3);
    local_50 = CONCAT44(local_50._4_4_,iVar14);
  }
  if ((param_4 != 0) && (uVar15 = 0, param_3 != 0)) {
    do {
      uVar10 = 0;
      do {
        while( true ) {
          uVar1 = param_2 + uVar10;
          puVar2 = (ushort *)
                   ((long)local_58 + (ulong)(((int)uStack_6c * uVar15 + uVar10) * local_5c) * 8);
          lVar9 = (ulong)uVar1 * 8;
          puVar7 = (undefined8 *)(*(long *)(this + 0x68) + lVar9);
          if (param_5) break;
          bVar4 = *(byte *)((long)puVar7 + 3);
          bVar5 = *(byte *)((long)puVar2 + 3) & 0xfc;
          *(byte *)((long)puVar2 + 3) =
               *(byte *)((long)puVar2 + 3) & 0xfd | ((bVar4 & 2) != 0) * '\x02' | 1;
          puVar11 = (uint *)(*(long *)(this + 0x110) + lVar9);
          uVar8 = (ulong)*puVar11;
          uVar12 = (ulong)puVar11[1];
          if ((bVar4 & 2) == 0) {
            lVar9 = *(long *)(this + 0x100);
            *(byte *)((long)puVar2 + 3) = bVar5 | 1;
            iVar14 = basisu::etc_block::pack_color4
                               ((color_rgba *)(lVar9 + 4 + uVar8 * 0x38),false,0x7f);
            *puVar2 = CONCAT11((char)((ushort)iVar14 >> 4) << 4,(char)((uint)iVar14 >> 8) << 4) |
                      _LC30 & *puVar2;
            *(byte *)(puVar2 + 1) = (byte)(iVar14 << 4) | (byte)puVar2[1] & 0xf;
            uVar6 = basisu::etc_block::pack_color4
                              ((color_rgba *)(lVar9 + 4 + uVar12 * 0x38),false,0x7f);
            *puVar2 = CONCAT11((char)(uVar6 >> 4),(char)(uVar6 >> 8)) & 0xf0f | _LC29 & *puVar2;
            bVar5 = (byte)puVar2[1] & 0xf0 | (byte)uVar6 & 0xf;
          }
          else {
            lVar9 = *(long *)(this + 0x100);
            *(byte *)((long)puVar2 + 3) = bVar5 | 3;
            pbVar3 = (byte *)(lVar9 + uVar12 * 0x38);
            pcVar13 = (color_rgba *)(lVar9 + uVar8 * 0x38);
            iVar14 = basisu::etc_block::pack_color5(pcVar13,false,0x7f);
            *puVar2 = CONCAT11((char)((ushort)iVar14 >> 5) << 3,
                               ((byte)((uint)iVar14 >> 8) >> 2) << 3) | _LC1 & *puVar2;
            *(byte *)(puVar2 + 1) = (byte)(iVar14 << 3) | (byte)puVar2[1] & 7;
            uVar6 = basisu::etc_block::pack_delta3
                              ((uint)*pbVar3 - (uint)(byte)*pcVar13,
                               (uint)pbVar3[1] - (uint)(byte)pcVar13[1],
                               (uint)pbVar3[2] - (uint)(byte)pcVar13[2]);
            *puVar2 = CONCAT11((char)(uVar6 >> 3),(char)(uVar6 >> 6)) & 0x707 | _LC31 & *puVar2;
            bVar5 = (byte)puVar2[1] & 0xf8 | (byte)uVar6 & 7;
          }
          *(byte *)(puVar2 + 1) = bVar5;
          bVar5 = *(byte *)((long)puVar2 + 3);
          uVar10 = uVar10 + 1;
          lVar9 = (ulong)((bVar4 & 2) == 0) * 4;
          bVar4 = (byte)(*(int *)(uVar8 * 0x38 + 8 + *(long *)(this + 0x100) + lVar9) << 5);
          *(byte *)((long)puVar2 + 3) = bVar4 | bVar5 & 0x1f;
          *(byte *)((long)puVar2 + 3) =
               bVar4 | bVar5 & 3 |
               (byte)(*(int *)(uVar12 * 0x38 + 8 + lVar9 + *(long *)(this + 0x100)) << 2);
          *(undefined4 *)(puVar2 + 2) =
               *(undefined4 *)
                (*(long *)(this + 0x130) + 4 +
                (ulong)*(uint *)(*(long *)(this + 0x170) + (ulong)uVar1 * 4) * 8);
          if (param_3 == uVar10) goto LAB_00108e6b;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)puVar2 = *puVar7;
      } while (param_3 != uVar10);
LAB_00108e6b:
      uVar15 = uVar15 + 1;
      param_2 = param_2 + param_3;
    } while (param_4 != uVar15);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  basisu::gpu_image::unpack((image *)&local_78);
  basisu::save_png(param_1,(image *)&local_98,0,0);
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::init_global_codebooks() */

undefined8 __thiscall basisu::basisu_frontend::init_global_codebooks(basisu_frontend *this)

{
  undefined2 *puVar1;
  long lVar2;
  ushort *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  function *pfVar8;
  byte bVar9;
  int iVar10;
  ushort uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  undefined4 uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  lVar7 = *(long *)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
            ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)(this + 0x100),
             (ulong)*(uint *)(lVar7 + 0x10),false);
  if (*(int *)(lVar7 + 0x10) != 0) {
    lVar25 = *(long *)(this + 0x100);
    lVar22 = 0;
    lVar16 = 0;
    do {
      puVar12 = (undefined2 *)(lVar25 + lVar22);
      puVar1 = (undefined2 *)(*(long *)(lVar7 + 8) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *(uint *)(puVar12 + 4) = (uint)*(byte *)(puVar1 + 2);
      *(uint *)(puVar12 + 6) = (uint)*(byte *)(puVar1 + 2);
      uVar4 = *(undefined1 *)(puVar1 + 1);
      uVar6 = *puVar1;
      *(undefined1 *)((long)puVar12 + 3) = 0xff;
      *(undefined1 *)(puVar12 + 1) = uVar4;
      *puVar12 = uVar6;
      lVar25 = *(long *)(this + 0x100);
      lVar2 = lVar25 + lVar22;
      lVar22 = lVar22 + 0x38;
      *(undefined1 *)(lVar2 + 0x30) = 1;
      *(undefined1 *)(lVar2 + 0x32) = 1;
    } while ((uint)lVar16 < *(uint *)(lVar7 + 0x10));
  }
  uVar21 = *(uint *)(lVar7 + 0x20);
  uVar17 = *(uint *)(this + 0x138);
  iVar10 = (int)this;
  if (uVar21 == uVar17) {
LAB_00109123:
    if (uVar17 == 0) goto LAB_001091f3;
  }
  else {
    if ((uVar21 < uVar17) || (uVar21 <= *(uint *)(this + 0x13c))) {
      *(uint *)(this + 0x138) = uVar21;
      uVar17 = uVar21;
      goto LAB_00109123;
    }
    basisu::elemental_vector::increase_capacity
              (iVar10 + 0x130,SUB41(uVar21,0),(uint)(uVar17 + 1 == uVar21),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    *(uint *)(this + 0x138) = uVar21;
  }
  lVar16 = 0;
  lVar25 = 0;
  do {
    uVar14 = 0;
    do {
      iVar23 = 0;
      do {
        uVar21 = (int)uVar14 + iVar23 * 2;
        bVar15 = (byte)uVar21 & 7;
        lVar22 = *(long *)(this + 0x130) + lVar25 * 8;
        uVar26 = (ulong)(7 - (uVar21 >> 3));
        iVar24 = iVar23 + 2;
        bVar5 = *(byte *)((long)&g_selector_index_to_etc1 +
                         (ulong)((int)(uint)*(byte *)(*(long *)(lVar7 + 0x18) + lVar16 + uVar14) >>
                                 ((byte)iVar23 & 0x1f) & 3));
        bVar9 = ~(byte)(1 << bVar15);
        *(byte *)(lVar22 + uVar26) =
             *(byte *)(lVar22 + uVar26) & bVar9 | (byte)((bVar5 & 1) << bVar15);
        *(byte *)(lVar22 + uVar26 + -2) =
             bVar9 & *(byte *)(lVar22 + uVar26 + -2) | (bVar5 >> 1) << bVar15;
        iVar23 = iVar24;
      } while (iVar24 != 8);
      uVar21 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar21;
    } while (uVar21 != 4);
    lVar16 = lVar16 + 0xb;
    lVar25 = lVar25 + 1;
  } while ((uint)lVar25 < *(uint *)(this + 0x138));
LAB_001091f3:
  uVar21 = *(uint *)(this + 0x40);
  uVar17 = *(uint *)(this + 0x118);
  if (uVar21 != uVar17) {
    uVar28 = uVar21;
    if ((uVar17 <= uVar21) && (*(uint *)(this + 0x11c) < uVar21)) {
      basisu::elemental_vector::increase_capacity
                (iVar10 + 0x110,SUB41(uVar21,0),(uint)(uVar17 + 1 == uVar21),
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      uVar28 = *(uint *)(this + 0x40);
    }
    uVar17 = uVar28;
    *(uint *)(this + 0x118) = uVar21;
  }
  uVar21 = *(uint *)(this + 0x80);
  uVar28 = uVar17;
  if (uVar21 != uVar17) {
    if ((uVar21 <= uVar17) && (*(uint *)(this + 0x84) < uVar17)) {
      basisu::elemental_vector::increase_capacity
                (iVar10 + 0x78,SUB41(uVar17,0),(uint)(uVar21 + 1 == uVar17),
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      uVar28 = *(uint *)(this + 0x40);
    }
    *(uint *)(this + 0x80) = uVar17;
  }
  vector<unsigned_int>::resize((vector<unsigned_int> *)(this + 0x170),(ulong)uVar28,false);
  iVar23 = 0;
  do {
    uVar17 = 0;
    basisu::debug_printf("init_global_codebooks: pass %u\n");
    uVar21 = *(uint *)(this + 0x40);
    if (uVar21 != 0) {
      do {
        uVar28 = uVar17 + 0x80;
        pfVar8 = *(function **)(this + 0x38);
        local_68 = (undefined1  [16])0x0;
        local_58 = (code *)0x0;
        if (uVar28 <= uVar21) {
          uVar21 = uVar28;
        }
        pcStack_50 = (code *)0x0;
        puVar13 = (undefined8 *)operator_new(0x18);
        *puVar13 = this;
        *(int *)(puVar13 + 2) = iVar23;
        *(uint *)(puVar13 + 1) = uVar17;
        *(uint *)((long)puVar13 + 0xc) = uVar21;
        local_68._0_8_ = puVar13;
        local_58 = std::
                   _Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>
                   ::_M_manager;
        pcStack_50 = std::
                     _Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#1}>
                     ::_M_invoke;
        basisu::job_pool::add_job(pfVar8);
        if (local_58 != (code *)0x0) {
          (*local_58)(local_68,local_68,3);
        }
        uVar21 = *(uint *)(this + 0x40);
        uVar17 = uVar28;
      } while (uVar28 < uVar21);
    }
    basisu::job_pool::wait_for_all();
    if (*(uint *)(this + 200) != 0) {
      puVar18 = *(undefined8 **)(this + 0xc0);
      puVar13 = puVar18 + (ulong)*(uint *)(this + 200) * 2;
      do {
        if ((void *)*puVar18 != (void *)0x0) {
          free((void *)*puVar18);
        }
        puVar18 = puVar18 + 2;
      } while (puVar13 != puVar18);
      *(undefined4 *)(this + 200) = 0;
    }
    uVar21 = *(uint *)(lVar7 + 0x10);
    if (uVar21 == 0) {
      lVar25 = 0;
      if (*(int *)(this + 0x40) == 0) goto LAB_00109714;
LAB_001093b1:
      do {
        iVar24 = (int)lVar25 * 2;
        lVar16 = (ulong)*(uint *)(*(long *)(this + 0x110) + lVar25 * 8) * 0x10;
        plVar20 = (long *)(*(long *)(this + 0xc0) + lVar16);
        uVar21 = *(uint *)(plVar20 + 1);
        if (*(uint *)((long)plVar20 + 0xc) <= uVar21) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar20,(bool)((char)uVar21 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar21 = *(uint *)(plVar20 + 1);
        }
        *(int *)(*plVar20 + (ulong)uVar21 * 4) = iVar24;
        plVar19 = (long *)(lVar16 + *(long *)(this + 0xc0));
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        uVar21 = *(uint *)(plVar19 + 1);
        if (*(uint *)((long)plVar19 + 0xc) <= uVar21) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar19,(bool)((char)uVar21 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar21 = *(uint *)(plVar19 + 1);
        }
        lVar25 = lVar25 + 1;
        *(int *)(*plVar19 + (ulong)uVar21 * 4) = iVar24 + 1;
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        uVar21 = *(uint *)(this + 0x40);
      } while ((uint)lVar25 < uVar21);
      uVar17 = *(uint *)(this + 0x178);
      uVar14 = (ulong)uVar17;
      if (uVar21 != uVar17) {
        uVar28 = uVar21;
        if (uVar17 <= uVar21) {
          if (*(uint *)(this + 0x17c) < uVar21) {
            basisu::elemental_vector::increase_capacity
                      ((uint)(vector<unsigned_int> *)(this + 0x170),SUB41(uVar21,0),
                       (uint)(uVar17 + 1 == uVar21),(_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar14 = (ulong)*(uint *)(this + 0x178);
          }
          memset((void *)(*(long *)(this + 0x170) + uVar14 * 4),0,(ulong)(uVar21 - (int)uVar14) << 2
                );
          uVar28 = *(uint *)(this + 0x40);
        }
        uVar14 = (ulong)uVar28;
        *(uint *)(this + 0x178) = uVar21;
      }
      if ((int)uVar14 != 0) {
        uVar21 = 0;
        do {
          uVar17 = uVar21 + 0x80;
          local_68._12_4_ = (uint)uVar14;
          if (uVar17 <= (uint)uVar14) {
            local_68._12_4_ = uVar17;
          }
          local_68._8_4_ = uVar21;
          local_68._0_8_ = this;
          local_58 = std::
                     _Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>
                     ::_M_manager;
          pcStack_50 = std::
                       _Function_handler<void(),basisu::basisu_frontend::init_global_codebooks()::{lambda()#2}>
                       ::_M_invoke;
          basisu::job_pool::add_job(*(function **)(this + 0x38));
          if (local_58 != (code *)0x0) {
            (*local_58)(local_68,local_68,3);
          }
          uVar14 = (ulong)*(uint *)(this + 0x40);
          uVar21 = uVar17;
        } while (uVar17 < *(uint *)(this + 0x40));
      }
    }
    else {
      uVar14 = 0;
      if (*(uint *)(this + 0xcc) < uVar21) {
        basisu::elemental_vector::increase_capacity
                  (iVar10 + 0xc0,SUB41(uVar21,0),(uint)(uVar21 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar14 = (ulong)*(uint *)(this + 200);
      }
      puVar13 = (undefined8 *)(uVar14 * 0x10 + *(long *)(this + 0xc0));
      puVar18 = puVar13 + (ulong)(uVar21 - (int)uVar14) * 2;
      for (; puVar13 != puVar18; puVar13 = puVar13 + 2) {
        *puVar13 = 0;
        puVar13[1] = 0;
      }
      *(uint *)(this + 200) = uVar21;
      lVar25 = 0;
      if (*(int *)(this + 0x40) != 0) goto LAB_001093b1;
LAB_00109714:
      if (*(int *)(this + 0x178) != 0) {
        *(undefined4 *)(this + 0x178) = 0;
      }
    }
    basisu::job_pool::wait_for_all();
    uVar21 = *(uint *)(this + 0x40);
    uVar17 = *(uint *)(this + 0x70);
    if (uVar21 != uVar17) {
      uVar28 = uVar21;
      if ((uVar17 <= uVar21) && (*(uint *)(this + 0x74) < uVar21)) {
        basisu::elemental_vector::increase_capacity
                  (iVar10 + 0x68,SUB41(uVar21,0),(uint)(uVar17 + 1 == uVar21),
                   (_func_void_void_ptr_void_ptr_uint *)0x8,false);
        uVar28 = *(uint *)(this + 0x40);
      }
      uVar17 = uVar28;
      *(uint *)(this + 0x70) = uVar21;
    }
    lVar25 = 0;
    if (uVar17 != 0) {
      do {
        lVar16 = *(long *)(this + 0x100);
        uVar21 = *(uint *)(*(long *)(this + 0x170) + lVar25 * 4);
        puVar3 = (ushort *)(*(long *)(this + 0x68) + lVar25 * 8);
        uVar17 = *(uint *)(*(long *)(this + 0x110) + lVar25 * 8);
        *(byte *)((long)puVar3 + 3) = *(byte *)((long)puVar3 + 3) | 2;
        lVar22 = (ulong)uVar17 * 0x38;
        iVar24 = basisu::etc_block::pack_color5((color_rgba *)(lVar16 + lVar22),false,0x7f);
        *puVar3 = CONCAT11((char)((ushort)iVar24 >> 5) << 3,((byte)((uint)iVar24 >> 8) >> 2) << 3) |
                  _LC1 & *puVar3;
        *(byte *)(puVar3 + 1) = (byte)(iVar24 << 3) | (byte)puVar3[1] & 7;
        uVar11 = basisu::etc_block::pack_delta3(0,0,0);
        *(byte *)puVar3 = (byte)*puVar3 & 0xf8 | (byte)(uVar11 >> 6) & 7;
        *(byte *)((long)puVar3 + 1) = *(byte *)((long)puVar3 + 1) & 0xf8 | (byte)(uVar11 >> 3) & 7;
        *(byte *)(puVar3 + 1) = (byte)uVar11 & 7 | (byte)puVar3[1] & 0xf8;
        iVar24 = *(int *)(*(long *)(this + 0x100) + 8 + lVar22);
        lVar25 = lVar25 + 1;
        *(byte *)((long)puVar3 + 3) =
             *(byte *)((long)puVar3 + 3) & 3 | (byte)(iVar24 << 5) | (byte)(iVar24 << 2) | 1;
        *(undefined4 *)(puVar3 + 2) =
             *(undefined4 *)(*(long *)(this + 0x130) + 4 + (ulong)uVar21 * 8);
      } while ((uint)lVar25 < *(uint *)(this + 0x40));
    }
    iVar23 = iVar23 + 1;
    if (iVar23 == 3) {
      lVar25 = 0;
      vector<basisu::vector<unsigned_int>>::resize
                ((vector<basisu::vector<unsigned_int>> *)(this + 0x120),
                 (ulong)*(uint *)(lVar7 + 0x20),false);
      if (*(int *)(this + 0x90) != 0) {
        do {
          uVar27 = (undefined4)lVar25;
          plVar20 = (long *)((ulong)*(uint *)(*(long *)(this + 0x170) + lVar25 * 4) * 0x10 +
                            *(long *)(this + 0x120));
          uVar21 = *(uint *)(plVar20 + 1);
          if (*(uint *)((long)plVar20 + 0xc) <= uVar21) {
            basisu::elemental_vector::increase_capacity
                      ((uint)plVar20,(bool)((char)uVar21 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar21 = *(uint *)(plVar20 + 1);
          }
          lVar25 = lVar25 + 1;
          *(undefined4 *)(*plVar20 + (ulong)uVar21 * 4) = uVar27;
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        } while ((uint)lVar25 < *(uint *)(this + 0x90));
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* basisu::basisu_frontend::optimize_selector_codebook() */

void __thiscall basisu::basisu_frontend::optimize_selector_codebook(basisu_frontend *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong extraout_RDX;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined4 uVar20;
  long lVar21;
  long in_FS_OFFSET;
  ulong local_f0;
  undefined8 *local_d8;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  long *local_68;
  ulong local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("optimize_selector_codebook\n");
  uVar17 = *(uint *)(this + 0x138);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (uVar17 == 0) {
    uVar2 = *(uint *)(this + 0x40);
    iVar14 = 0;
    if (uVar2 != 0) goto LAB_00109911;
LAB_0010a150:
    local_b0 = 0;
    local_b8 = (void *)0x0;
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_c8,SUB41(uVar17,0),(uint)(uVar17 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset((void *)((local_c0 & 0xffffffff) + (long)local_c8),0,(ulong)(uVar17 - (int)local_c0));
    uVar2 = *(uint *)(this + 0x40);
    local_c0 = CONCAT44(local_c0._4_4_,uVar17);
    iVar14 = *(int *)(this + 0x138);
    if (uVar2 != 0) {
LAB_00109911:
      puVar6 = *(uint **)(this + 0x170);
      puVar16 = puVar6 + uVar2;
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined1 *)((long)local_c8 + (ulong)uVar2) = 1;
      } while (puVar16 != puVar6);
    }
    local_b8 = (void *)0x0;
    local_b0 = 0;
    if (iVar14 == 0) goto LAB_0010a150;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_b8,SUB41(iVar14,0),(uint)(iVar14 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_b8 + (local_b0 & 0xffffffff) * 4),0,
           (ulong)(uint)(iVar14 - (int)local_b0) << 2);
    local_b0 = CONCAT44(local_b0._4_4_,iVar14);
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_70 = 1;
    local_68 = (long *)0x0;
    local_60 = 0;
    local_58[0] = 0x3f800000;
    local_50 = 0;
    local_48 = 0;
    if (0 < *(int *)(this + 0x138)) {
      lVar21 = 0;
      lVar18 = 0;
      uVar12 = 0;
      local_78 = &local_48;
LAB_00109a52:
      if (*(char *)((long)local_c8 + lVar18) != '\0') {
        iVar14 = (int)uVar12;
        uVar2 = *(uint *)(*(long *)(this + 0x130) + 4 + lVar18 * 8);
        plVar7 = (long *)operator_new(0x10);
        *plVar7 = 0;
        plVar7[1] = CONCAT44(iVar14,uVar2);
        plVar19 = local_68;
        if (local_60 == 0) {
          for (; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            if (*(uint *)(plVar19 + 1) == uVar2) goto LAB_00109ad2;
          }
          uVar11 = (ulong)uVar2 % local_70;
        }
        else {
          uVar11 = (ulong)uVar2 % local_70;
          puVar10 = (undefined8 *)local_78[uVar11];
          if (puVar10 != (undefined8 *)0x0) {
            uVar3 = *(uint *)((undefined8 *)*puVar10 + 1);
            puVar13 = (undefined8 *)*puVar10;
            while (uVar3 != uVar2) {
              puVar15 = (undefined8 *)*puVar13;
              if ((puVar15 == (undefined8 *)0x0) ||
                 (uVar3 = *(uint *)(puVar15 + 1), puVar10 = puVar13, puVar13 = puVar15,
                 (ulong)uVar3 % local_70 != uVar11)) goto LAB_00109b66;
            }
            plVar19 = (long *)*puVar10;
            if (plVar19 != (long *)0x0) goto LAB_00109ad2;
          }
        }
LAB_00109b66:
        local_f0 = (ulong)uVar2;
        cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                          ((ulong)local_58,local_70,local_60);
        if (cVar5 == '\0') {
          plVar19 = local_78 + uVar11;
          plVar8 = (long *)*plVar19;
          if (plVar8 != (long *)0x0) goto LAB_00109ba5;
LAB_0010a0c6:
          *plVar7 = (long)local_68;
          if (local_68 != (long *)0x0) {
            local_78[(ulong)*(uint *)(local_68 + 1) % local_70] = plVar7;
          }
          *plVar19 = (long)&local_68;
          local_68 = plVar7;
        }
        else {
          if (extraout_RDX == 1) {
            local_48 = 0;
            puVar10 = &local_48;
          }
          else {
            if (extraout_RDX >> 0x3c != 0) {
              if (extraout_RDX >> 0x3d == 0) {
                    /* WARNING: Subroutine does not return */
                std::__throw_bad_alloc();
              }
              std::__throw_bad_array_new_length();
              goto LAB_0010a1e9;
            }
            pvVar9 = operator_new(extraout_RDX * 8);
            puVar10 = (undefined8 *)memset(pvVar9,0,extraout_RDX * 8);
          }
          plVar19 = local_68;
          local_68 = (long *)0x0;
          uVar12 = 0;
          while (uVar11 = uVar12, plVar8 = plVar19, plVar19 != (long *)0x0) {
            while( true ) {
              plVar19 = (long *)*plVar8;
              uVar12 = (ulong)*(uint *)(plVar8 + 1) % extraout_RDX;
              plVar1 = puVar10 + uVar12;
              if ((long *)*plVar1 == (long *)0x0) break;
              *plVar8 = *(long *)*plVar1;
              *(long **)*plVar1 = plVar8;
              plVar8 = plVar19;
              if (plVar19 == (long *)0x0) goto LAB_0010a068;
            }
            *plVar8 = (long)local_68;
            *plVar1 = (long)&local_68;
            local_68 = plVar8;
            if (*plVar8 != 0) {
              puVar10[uVar11] = plVar8;
            }
          }
LAB_0010a068:
          if (local_78 != &local_48) {
            operator_delete(local_78,local_70 * 8);
          }
          plVar19 = puVar10 + local_f0 % extraout_RDX;
          plVar8 = (long *)*plVar19;
          local_78 = puVar10;
          local_70 = extraout_RDX;
          if (plVar8 == (long *)0x0) goto LAB_0010a0c6;
LAB_00109ba5:
          *plVar7 = *plVar8;
          *(long **)*plVar19 = plVar7;
        }
        uVar12 = (ulong)(iVar14 + 1);
        local_60 = local_60 + 1;
        *(int *)((long)local_b8 + lVar21) = iVar14;
        if (local_a0._4_4_ <= (uint)local_a0) {
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_a8,(bool)((char)local_a0 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        }
        *(int *)((long)local_a8 + (ulong)(uint)local_a0 * 4) = (int)lVar18;
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 + 1);
        goto LAB_00109a3d;
      }
      *(undefined4 *)((long)local_b8 + lVar21) = 0xffffffff;
LAB_00109a3d:
      lVar18 = lVar18 + 1;
      lVar21 = lVar21 + 4;
      if (*(int *)(this + 0x138) <= (int)lVar18) goto LAB_00109bf5;
      goto LAB_00109a52;
    }
  }
  local_78 = &local_48;
  local_48 = 0;
  local_50 = 0;
  local_58[0] = 0x3f800000;
  local_60 = 0;
  local_68 = (long *)0x0;
  local_70 = 1;
  local_a0 = 0;
  local_a8 = (void *)0x0;
  uVar12 = 0;
LAB_00109bf5:
  plVar7 = (long *)(ulong)uVar17;
  basisu::debug_printf("Original selector clusters: %u, new cluster selectors: %u\n",plVar7,uVar12);
  if (*(int *)(this + 0x178) == 0) {
LAB_0010a1e9:
    if (*(int *)(this + 0x138) != 0) {
      local_98 = (void *)0x0;
      local_90 = 0;
      if ((int)uVar12 == 0) {
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        vector<basisu::vector<unsigned_int>>::resize
                  ((vector<basisu::vector<unsigned_int>> *)&local_88,0,false);
        goto LAB_00109ce0;
      }
      goto LAB_00109dc2;
    }
LAB_00109c63:
    local_98 = (void *)0x0;
    local_90 = 0;
  }
  else {
    lVar18 = *(long *)(this + 0x170);
    lVar21 = 0;
    do {
      iVar14 = *(int *)((long)local_b8 + (ulong)*(uint *)(lVar18 + lVar21 * 4) * 4);
      if ((iVar14 < 0) || ((int)uVar12 <= iVar14)) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x2cb);
      }
      *(int *)(lVar18 + lVar21 * 4) = iVar14;
      lVar21 = lVar21 + 1;
    } while ((uint)lVar21 < *(uint *)(this + 0x178));
    if (*(int *)(this + 0x138) == 0) goto LAB_00109c63;
LAB_00109dc2:
    local_90 = 0;
    local_98 = (void *)0x0;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_98,SUB81(uVar12,0),(uint)((int)uVar12 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    local_90 = CONCAT44(local_90._4_4_,(int)uVar12);
  }
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  uVar11 = (ulong)*(uint *)(this + 0x128);
  if (*(uint *)(this + 0x128) != 0) {
    uVar11 = uVar12;
  }
  vector<basisu::vector<unsigned_int>>::resize
            ((vector<basisu::vector<unsigned_int>> *)&local_88,uVar11,false);
  lVar18 = 0;
  if ((int)uVar12 != 0) {
    do {
      if (*(int *)(this + 0x138) != 0) {
        *(undefined8 *)((long)local_98 + lVar18 * 2) =
             *(undefined8 *)(*(long *)(this + 0x130) + (long)*(int *)((long)local_a8 + lVar18) * 8);
      }
      lVar18 = lVar18 + 4;
    } while (lVar18 != uVar12 << 2);
  }
LAB_00109ce0:
  local_d8 = &local_48;
  lVar18 = 0;
  if (*(int *)(this + 0x178) != 0) {
    do {
      uVar20 = (undefined4)lVar18;
      plVar19 = (long *)((ulong)*(uint *)(*(long *)(this + 0x170) + lVar18 * 4) * 0x10 +
                        (long)local_88);
      uVar17 = *(uint *)(plVar19 + 1);
      if (*(uint *)((long)plVar19 + 0xc) <= uVar17) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar19,(bool)((char)uVar17 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar17 = *(uint *)(plVar19 + 1);
      }
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*plVar19 + (ulong)uVar17 * 4) = uVar20;
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    } while ((uint)lVar18 < *(uint *)(this + 0x178));
  }
  pvVar9 = *(void **)(this + 0x130);
  *(void **)(this + 0x130) = local_98;
  uVar4 = *(undefined8 *)(this + 0x138);
  *(undefined8 *)(this + 0x138) = local_90;
  puVar10 = *(undefined8 **)(this + 0x120);
  *(undefined8 **)(this + 0x120) = local_88;
  uVar11 = *(ulong *)(this + 0x128);
  *(ulong *)(this + 0x128) = local_80;
  if (*(int *)(this + 0x168) != 0) {
    uVar17 = 0;
    puVar16 = (uint *)(*(long *)(this + 0x160) + 8);
    do {
      if (*puVar16 != 0) {
        lVar18 = *(long *)(puVar16 + -2);
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar18 + lVar21 * 4) =
               *(undefined4 *)((long)local_b8 + (ulong)*(uint *)(lVar18 + lVar21 * 4) * 4);
          lVar21 = lVar21 + 1;
        } while ((uint)lVar21 < *puVar16);
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 4;
    } while (uVar17 < *(uint *)(this + 0x168));
  }
  local_98 = pvVar9;
  local_90 = uVar4;
  local_88 = puVar10;
  local_80 = uVar11;
  basisu::debug_printf
            ("optimize_selector_codebook: Before: %u After: %u\n",(ulong)plVar7 & 0xffffffff,uVar12)
  ;
  if (local_88 != (undefined8 *)0x0) {
    puVar15 = local_88 + (local_80 & 0xffffffff) * 2;
    puVar10 = puVar15;
    for (puVar13 = local_88; puVar13 != puVar15; puVar13 = puVar13 + 2) {
      if ((void *)*puVar13 != (void *)0x0) {
        free((void *)*puVar13);
      }
      puVar10 = local_88;
    }
    free(puVar10);
  }
  plVar19 = local_68;
  if (local_98 != (void *)0x0) {
    free(local_98);
    plVar19 = local_68;
  }
  while (plVar19 != (long *)0x0) {
    plVar7 = (long *)*plVar19;
    operator_delete(plVar19,0x10);
    plVar19 = plVar7;
  }
  memset(local_78,0,local_70 * 8);
  local_60 = 0;
  local_68 = (long *)0x0;
  if (local_78 != local_d8) {
    operator_delete(local_78,local_70 << 3);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00109ad2:
  operator_delete(plVar7,0x10);
  *(undefined4 *)((long)local_b8 + lVar21) = *(undefined4 *)((long)plVar19 + 0xc);
  goto LAB_00109a3d;
}



/* basisu::basisu_frontend::introduce_special_selector_clusters() */

void __thiscall basisu::basisu_frontend::introduce_special_selector_clusters(basisu_frontend *this)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  byte bVar18;
  long lVar19;
  long in_FS_OFFSET;
  uint local_8c;
  void *local_68;
  ulong local_60;
  byte abStack_52 [2];
  undefined4 local_50;
  int iStack_4c;
  undefined2 local_48;
  byte local_46;
  byte local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("introduce_special_selector_clusters\n");
  iVar7 = *(int *)(this + 0x40);
  uVar3 = *(uint *)(this + 0x128);
  local_68 = (void *)0x0;
  local_60 = 0;
  if (iVar7 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_68,SUB41(iVar7,0),(uint)(iVar7 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset((void *)((local_60 & 0xffffffff) + (long)local_68),0,(ulong)(uint)(iVar7 - (int)local_60)
          );
    local_60 = CONCAT44(local_60._4_4_,iVar7);
  }
  lVar19 = 0;
  local_8c = 0;
  do {
    iStack_4c = 0;
    local_50 = 0;
    bVar18 = 0;
    uVar9 = 0;
    bVar2 = *(byte *)((long)&g_selector_index_to_etc1 + lVar19);
    while( true ) {
      uVar13 = (uint)uVar9;
      uVar10 = uVar9 >> 2;
      uVar14 = uVar13 + 1;
      uVar9 = (ulong)uVar14;
      uVar13 = (int)uVar10 + (uVar13 & 3) * 4;
      bVar12 = (byte)uVar13 & 7;
      uVar10 = (ulong)(7 - (uVar13 >> 3));
      bVar5 = ~(byte)(1 << bVar12);
      *(byte *)((long)&local_50 + uVar10) = bVar18 & bVar5 | (byte)((bVar2 & 1) << bVar12);
      abStack_52[uVar10] = bVar5 & abStack_52[uVar10] | (bVar2 >> 1) << bVar12;
      if (uVar14 == 0x10) break;
      bVar18 = *(byte *)((long)&local_50 + (ulong)(7 - ((uVar14 >> 2) + (uVar14 & 3) * 4 >> 3)));
    }
    iVar7 = *(int *)(this + 0x138);
    if (0 < iVar7) {
      iVar15 = 0;
      piVar8 = (int *)(*(long *)(this + 0x130) + 4);
      do {
        if (iStack_4c == *piVar8) {
          if (iVar15 < iVar7) goto LAB_0010a3c3;
          break;
        }
        iVar15 = iVar15 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar15 != iVar7);
    }
    basisu::debug_printf("Introducing sel %u\n");
    uVar13 = *(uint *)(this + 0x138);
    uVar14 = uVar13;
    if (*(uint *)(this + 0x13c) <= uVar13) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0x130,(bool)((char)uVar13 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      uVar14 = *(uint *)(this + 0x138);
    }
    *(ulong *)(*(long *)(this + 0x130) + (ulong)uVar14 * 8) = CONCAT44(iStack_4c,local_50);
    *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
    if (*(uint *)(this + 0x128) <= uVar13) {
      vector<basisu::vector<unsigned_int>>::resize
                ((vector<basisu::vector<unsigned_int>> *)(this + 0x120),(ulong)uVar13 + 1,false);
    }
    if (*(int *)(this + 0x40) != 0) {
      lVar16 = 0;
      do {
        while (lVar11 = lVar16 * 8, *(int *)(*(long *)(this + 0x78) + 4 + lVar16 * 8) != iStack_4c)
        {
LAB_0010a4b8:
          lVar16 = lVar16 + 1;
          if (*(uint *)(this + 0x40) <= (uint)lVar16) goto LAB_0010a3c3;
        }
        uVar14 = *(uint *)(*(long *)(this + 0x170) + lVar16 * 4);
        local_45 = local_45 | 2;
        lVar1 = (ulong)*(uint *)(*(long *)(this + 0x110) + lVar16 * 8) * 0x38;
        iVar7 = basisu::etc_block::pack_color5
                          ((color_rgba *)(*(long *)(this + 0x100) + lVar1),false,0x7f);
        local_48 = CONCAT11((char)((ushort)iVar7 >> 5) << 3,((byte)((uint)iVar7 >> 8) >> 2) << 3) |
                   _LC1 & local_48;
        local_46 = (byte)(iVar7 << 3) | local_46 & 7;
        uVar6 = basisu::etc_block::pack_delta3(0,0,0);
        local_48 = CONCAT11(local_48._1_1_ & 0xf8 | (byte)(uVar6 >> 3) & 7,
                            (byte)local_48._0_1_ & 0xf8 | (byte)(uVar6 >> 6) & 7);
        local_46 = (byte)uVar6 & 7 | local_46 & 0xf8;
        iVar7 = *(int *)(*(long *)(this + 0x100) + 8 + lVar1);
        local_45 = local_45 & 3 | (byte)(iVar7 << 5) | (byte)(iVar7 << 2) | 1;
        local_44 = *(undefined4 *)(*(long *)(this + 0x130) + 4 + (ulong)uVar14 * 8);
        cVar4 = (char)lVar16 * '@';
        uVar9 = basisu::etc_block::evaluate_etc1_error
                          ((color_rgba *)&local_48,
                           (bool)((char)*(undefined8 *)(this + 0x58) + cVar4),(uint)(byte)this[0x1c]
                          );
        local_44 = iStack_4c;
        uVar10 = basisu::etc_block::evaluate_etc1_error
                           ((color_rgba *)&local_48,
                            (bool)((char)*(undefined8 *)(this + 0x58) + cVar4),
                            (uint)(byte)this[0x1c]);
        if (uVar9 <= uVar10) goto LAB_0010a4b8;
        plVar17 = (long *)((ulong)uVar13 * 0x10 + *(long *)(this + 0x120));
        *(uint *)(*(long *)(this + 0x170) + lVar16 * 4) = uVar13;
        uVar14 = *(uint *)(plVar17 + 1);
        if (*(uint *)((long)plVar17 + 0xc) <= uVar14) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar17,(bool)((char)uVar14 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar14 = *(uint *)(plVar17 + 1);
        }
        local_8c = local_8c + 1;
        *(int *)(*plVar17 + (ulong)uVar14 * 4) = (int)lVar16;
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        *(undefined1 *)((long)local_68 + lVar16) = 1;
        lVar16 = lVar16 + 1;
        *(int *)(*(long *)(this + 0x68) + 4 + lVar11) = iStack_4c;
      } while ((uint)lVar16 < *(uint *)(this + 0x40));
    }
LAB_0010a3c3:
    lVar19 = lVar19 + 1;
    if (lVar19 == 4) {
      if ((local_8c != 0) && (basisu::debug_printf("Fixing selector codebook\n"), 0 < (int)uVar3)) {
        lVar19 = 0;
        do {
          plVar17 = (long *)(*(long *)(this + 0x120) + lVar19);
          if ((int)plVar17[1] != 0) {
            lVar16 = *plVar17;
            lVar11 = 0;
            uVar9 = 0;
            do {
              uVar13 = *(uint *)(lVar16 + lVar11 * 4);
              uVar10 = uVar9;
              if (*(char *)((long)local_68 + (ulong)uVar13) == '\0') {
                uVar10 = (ulong)((int)uVar9 + 1);
                *(uint *)(lVar16 + uVar9 * 4) = uVar13;
              }
              uVar13 = *(uint *)(plVar17 + 1);
              lVar11 = lVar11 + 1;
              uVar9 = uVar10;
            } while ((uint)lVar11 < uVar13);
            uVar14 = (uint)uVar10;
            if (uVar14 != uVar13) {
              if (uVar13 <= uVar14) {
                if (*(uint *)((long)plVar17 + 0xc) < uVar14) {
                  basisu::elemental_vector::increase_capacity
                            ((uint)plVar17,SUB81(uVar10,0),(uint)(uVar13 + 1 == uVar14),
                             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                  uVar13 = *(uint *)(plVar17 + 1);
                  lVar16 = *plVar17;
                }
                memset((void *)(lVar16 + (ulong)uVar13 * 4),0,(ulong)(uVar14 - uVar13) << 2);
              }
              *(uint *)(plVar17 + 1) = uVar14;
            }
          }
          lVar19 = lVar19 + 0x10;
        } while (lVar19 != (ulong)uVar3 << 4);
      }
      basisu::debug_printf
                ("Total blocks relocated to new flat selector clusters: %u\n",(ulong)local_8c);
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block() */

void __thiscall
basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block(basisu_frontend *this)

{
  uint *puVar1;
  byte *pbVar2;
  function *pfVar3;
  void *__ptr;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  vector *pvVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  long in_FS_OFFSET;
  basisu_frontend local_e1;
  fosc_selector_struct *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  uint *local_b8;
  undefined8 local_b0;
  fosc_block_struct *local_a8;
  ulong local_a0;
  uint *local_98;
  undefined8 local_90;
  interval_timer local_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("find_optimal_selector_clusters_for_each_block\n");
  basisu::interval_timer::interval_timer(local_88);
  basisu::interval_timer::start();
  if (this[0x20] != (basisu_frontend)0x0) {
    if (*(uint *)(this + 0x128) != *(uint *)(this + 0x138)) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0x9a8);
    }
    if (*(uint *)(this + 0x168) != 0) {
      puVar7 = *(undefined8 **)(this + 0x160);
      puVar18 = puVar7 + (ulong)*(uint *)(this + 0x168) * 2;
      do {
        if (*(uint *)(puVar7 + 1) != 0) {
          puVar6 = (uint *)*puVar7;
          puVar1 = puVar6 + *(uint *)(puVar7 + 1);
          do {
            if (*(uint *)(this + 0x138) <= *puVar6) {
                    /* WARNING: Subroutine does not return */
              handle_verify_failure(0x9ad);
            }
            puVar6 = puVar6 + 1;
          } while (puVar1 != puVar6);
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 != puVar18);
    }
  }
  vector<unsigned_int>::resize
            ((vector<unsigned_int> *)(this + 0x170),(ulong)*(uint *)(this + 0x40),false);
  if (*(int *)(this + 0x18) == 0) {
    if (*(int *)(this + 0x128) != 0) {
      lVar19 = *(long *)(this + 0x120);
      lVar21 = 0;
      do {
        lVar22 = 0;
        plVar14 = (long *)(lVar19 + lVar21 * 0x10);
        if ((int)plVar14[1] != 0) {
          do {
            lVar19 = *(long *)(this + 0x130);
            uVar10 = (ulong)*(uint *)(*plVar14 + lVar22 * 4);
            lVar22 = lVar22 + 1;
            *(int *)(*(long *)(this + 0x170) + uVar10 * 4) = (int)lVar21;
            *(undefined4 *)(*(long *)(this + 0x68) + 4 + uVar10 * 8) =
                 *(undefined4 *)(lVar19 + 4 + lVar21 * 8);
            lVar19 = *(long *)(this + 0x120);
            plVar14 = (long *)(lVar19 + lVar21 * 0x10);
          } while ((uint)lVar22 < *(uint *)(plVar14 + 1));
        }
        lVar21 = lVar21 + 1;
      } while ((uint)lVar21 < *(uint *)(this + 0x128));
    }
    goto LAB_0010ac93;
  }
  uVar12 = *(uint *)(this + 0x138);
  if ((*(long *)(this + 0x30) != 0) && (local_e1 = this[0x4a], local_e1 != (basisu_frontend)0x0)) {
    uVar17 = *(uint *)(this + 0x168);
    uVar10 = (ulong)uVar17;
    local_d8 = (fosc_selector_struct *)0x0;
    local_d0 = 0;
    vector<basisu::fosc_selector_struct>::reserve
              ((vector<basisu::fosc_selector_struct> *)&local_d8,(ulong)uVar12);
    local_c8 = (void *)0x0;
    local_c0 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_c8,uVar10,false);
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    vector<unsigned_int>::reserve((vector<unsigned_int> *)&local_b8,(ulong)*(uint *)(this + 0x138));
    if (uVar17 != 0) {
      lVar21 = 0;
      lVar19 = *(long *)(this + 0x160);
      uVar17 = 0;
      do {
        *(uint *)((long)local_c8 + lVar21) = uVar17;
        plVar14 = (long *)(lVar19 + lVar21 * 4);
        if ((int)plVar14[1] != 0) {
          lVar22 = 0;
          do {
            uVar9 = 0;
            uVar12 = *(uint *)(*plVar14 + lVar22 * 4);
            lVar19 = *(long *)(this + 0x130) + (ulong)uVar12 * 8;
            uVar15 = 0;
            do {
              uVar5 = (uVar15 >> 2) + (uVar15 & 3) * 4;
              uVar16 = (ulong)(7 - (uVar5 >> 3));
              bVar8 = (byte)uVar5 & 7;
              cVar4 = (char)uVar15;
              uVar15 = uVar15 + 1;
              uVar9 = uVar9 | (uint)*(byte *)((long)&g_etc1_to_selector_index +
                                             (ulong)(((int)(uint)*(byte *)(lVar19 + -2 + uVar16) >>
                                                     bVar8) * 2 & 2U |
                                                    (int)(uint)*(byte *)(lVar19 + uVar16) >> bVar8 &
                                                    1U)) << (cVar4 * '\x02' & 0x1fU);
            } while (uVar15 != 0x10);
            uVar16 = local_d0 & 0xffffffff;
            uVar15 = (int)local_d0 + 1;
            if (((int)local_d0 != -1) && (local_d0._4_4_ < uVar15)) {
              basisu::elemental_vector::increase_capacity
                        ((uint)(vector<basisu::fosc_selector_struct> *)&local_d8,SUB41(uVar15,0),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            local_d0 = CONCAT44(local_d0._4_4_,uVar15);
            *(uint *)(local_d8 + uVar16 * 4) = uVar9;
            if (local_b0._4_4_ <= (uint)local_b0) {
              basisu::elemental_vector::increase_capacity
                        ((uint)(vector<unsigned_int> *)&local_b8,(bool)((char)local_b0 + '\x01'),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            lVar22 = lVar22 + 1;
            local_b8[(uint)local_b0] = uVar12;
            lVar19 = *(long *)(this + 0x160);
            local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 + 1);
            plVar14 = (long *)(lVar19 + lVar21 * 4);
          } while ((uint)lVar22 < *(uint *)(plVar14 + 1));
          uVar17 = uVar17 + *(uint *)(plVar14 + 1);
        }
        lVar21 = lVar21 + 4;
      } while (uVar10 * 4 != lVar21);
    }
    local_a8 = (fosc_block_struct *)0x0;
    iVar11 = *(int *)(this + 0x40);
    local_a0 = 0;
    if (iVar11 == 0) {
LAB_0010b29b:
      uVar10 = 0;
    }
    else {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_a8,SUB41(iVar11,0),(uint)(iVar11 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0xc,false);
      local_a0 = CONCAT44(local_a0._4_4_,iVar11);
      if (*(int *)(this + 0x40) == 0) goto LAB_0010b29b;
      lVar19 = 0;
      do {
        lVar22 = lVar19 * 0xc;
        bVar8 = *(byte *)(*(long *)(this + 0x150) + lVar19);
        pbVar2 = (byte *)(*(long *)(this + 0x68) + lVar19 * 8);
        lVar19 = lVar19 + 1;
        basisu::etc_block::unpack_color5
                  ((color_rgba *)(local_a8 + lVar22),
                   (ushort)(((int)(uint)pbVar2[1] >> 3) << 5) |
                   (ushort)(((int)(uint)*pbVar2 >> 3) << 10) | (ushort)((int)(uint)pbVar2[2] >> 3),
                   false);
        local_a8[lVar22 + 3] = SUB41((int)(uint)pbVar2[3] >> 5,0);
        lVar21 = *(long *)(this + 0x160);
        *(undefined4 *)(local_a8 + lVar22 + 4) = *(undefined4 *)((long)local_c8 + (ulong)bVar8 * 4);
        *(undefined4 *)(local_a8 + lVar22 + 8) = *(undefined4 *)((ulong)bVar8 * 0x10 + lVar21 + 8);
      } while ((uint)lVar19 < *(uint *)(this + 0x40));
      uVar10 = (ulong)*(uint *)(this + 0x40);
    }
    local_98 = (uint *)0x0;
    local_90 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_98,uVar10,false);
    cVar4 = basisu::opencl_find_optimal_selector_clusters_for_each_block
                      (*(opencl_context **)(this + 0x30),local_a8,uVar17,local_d8,local_b8,local_98,
                       (bool)this[0x1c]);
    if (cVar4 == '\0') {
      basisu::error_printf
                (
                "basisu_frontend::find_optimal_selector_clusters_for_each_block: opencl_find_optimal_selector_clusters_for_each_block() failed! Using CPU.\n"
                );
      *(undefined8 *)(this + 0x30) = 0;
      this[0x1b8] = (basisu_frontend)0x1;
    }
    else {
      lVar19 = 0;
      if (*(int *)(this + 0x128) != 0) {
        do {
          lVar21 = lVar19 * 0x10;
          lVar19 = lVar19 + 1;
          vector<unsigned_int>::resize
                    ((vector<unsigned_int> *)(*(long *)(this + 0x120) + lVar21),0,false);
          vector<unsigned_int>::reserve
                    ((vector<unsigned_int> *)(lVar21 + *(long *)(this + 0x120)),0x80);
        } while ((uint)lVar19 < *(uint *)(this + 0x128));
      }
      lVar19 = 0;
      if (*(int *)(this + 0x40) != 0) {
        do {
          uVar20 = (undefined4)lVar19;
          uVar12 = local_98[lVar19];
          uVar10 = (ulong)uVar12;
          *(undefined4 *)(*(long *)(this + 0x68) + 4 + lVar19 * 8) =
               *(undefined4 *)(*(long *)(this + 0x130) + 4 + uVar10 * 8);
          *(uint *)(*(long *)(this + 0x170) + lVar19 * 4) = uVar12;
          if (*(uint *)(this + 0x128) <= uVar10) {
            vector<basisu::vector<unsigned_int>>::resize
                      ((vector<basisu::vector<unsigned_int>> *)(this + 0x120),uVar10 + 1,false);
          }
          plVar14 = (long *)(uVar10 * 0x10 + *(long *)(this + 0x120));
          uVar12 = *(uint *)(plVar14 + 1);
          if (*(uint *)((long)plVar14 + 0xc) <= uVar12) {
            basisu::elemental_vector::increase_capacity
                      ((uint)plVar14,(bool)((char)uVar12 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar12 = *(uint *)(plVar14 + 1);
          }
          lVar19 = lVar19 + 1;
          *(undefined4 *)(*plVar14 + (ulong)uVar12 * 4) = uVar20;
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        } while ((uint)lVar19 < *(uint *)(this + 0x40));
      }
      local_e1 = (basisu_frontend)0x0;
    }
    if (local_98 != (uint *)0x0) {
      free(local_98);
    }
    if (local_a8 != (fosc_block_struct *)0x0) {
      free(local_a8);
    }
    if (local_b8 != (uint *)0x0) {
      free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      free(local_c8);
    }
    if (local_d8 != (fosc_selector_struct *)0x0) {
      free(local_d8);
    }
    if (local_e1 == (basisu_frontend)0x0) goto LAB_0010ac93;
    uVar12 = *(uint *)(this + 0x138);
  }
  local_a8 = (fosc_block_struct *)0x0;
  local_a0 = 0;
  iVar11 = uVar12 * 0x10;
  if (iVar11 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_a8,SUB41(iVar11,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset(local_a8 + (local_a0 & 0xffffffff),0,(ulong)(uint)(iVar11 - (int)local_a0));
    local_a0 = CONCAT44(local_a0._4_4_,iVar11);
    uVar12 = *(uint *)(this + 0x138);
  }
  if (uVar12 != 0) {
    lVar19 = 0;
    do {
      uVar17 = 0x10;
      uVar12 = (int)lVar19 << 4;
      do {
        uVar9 = uVar17 - 0x10;
        uVar15 = uVar12;
        do {
          uVar10 = (ulong)uVar15;
          uVar5 = uVar9 >> 3;
          bVar8 = (byte)uVar9 & 7;
          uVar9 = uVar9 + 4;
          lVar21 = *(long *)(this + 0x130) + lVar19 * 8;
          uVar16 = (ulong)(7 - uVar5);
          uVar15 = uVar15 + 1;
          local_a8[uVar10] =
               *(fosc_block_struct *)
                ((long)&g_etc1_to_selector_index +
                (ulong)(((int)(uint)*(byte *)(lVar21 + -2 + uVar16) >> bVar8) * 2 & 2U |
                       (int)(uint)*(byte *)(lVar21 + uVar16) >> bVar8 & 1U));
        } while (uVar17 != uVar9);
        uVar17 = uVar17 + 1;
        uVar12 = uVar12 + 4;
      } while (uVar17 != 0x14);
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < *(uint *)(this + 0x138));
  }
  uVar12 = *(uint *)(this + 0x40);
  if (uVar12 != 0) {
    uVar17 = 0;
    do {
      pfVar3 = *(function **)(this + 0x38);
      uVar15 = uVar17 + 0x800;
      local_68 = (undefined1  [16])0x0;
      local_58 = (code *)0x0;
      pcStack_50 = (code *)0x0;
      if (uVar15 <= uVar12) {
        uVar12 = uVar15;
      }
      puVar7 = (undefined8 *)operator_new(0x18);
      *puVar7 = this;
      puVar7[2] = &local_a8;
      *(uint *)(puVar7 + 1) = uVar17;
      *(uint *)((long)puVar7 + 0xc) = uVar12;
      local_68._0_8_ = puVar7;
      local_58 = std::
                 _Function_handler<void(),basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(),basisu::basisu_frontend::find_optimal_selector_clusters_for_each_block()::{lambda()#1}>
                   ::_M_invoke;
      basisu::job_pool::add_job(pfVar3);
      if (local_58 != (code *)0x0) {
        (*local_58)(local_68,local_68,3);
      }
      uVar12 = *(uint *)(this + 0x40);
      uVar17 = uVar15;
    } while (uVar15 < uVar12);
  }
  lVar19 = 0;
  basisu::job_pool::wait_for_all();
  if (*(int *)(this + 0x128) != 0) {
    do {
      while( true ) {
        pvVar13 = (vector *)(lVar19 * 0x10 + *(long *)(this + 0x120));
        if (*(int *)(pvVar13 + 8) != 0) {
          *(undefined4 *)(pvVar13 + 8) = 0;
        }
        if (0x7f < *(uint *)(pvVar13 + 0xc)) break;
        lVar19 = lVar19 + 1;
        basisu::elemental_vector::increase_capacity
                  ((uint)pvVar13,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        if (*(uint *)(this + 0x128) <= (uint)lVar19) goto LAB_0010abf6;
      }
      if (*(uint *)(pvVar13 + 0xc) != 0x80) {
        local_90 = 0;
        local_98 = (uint *)0x0;
        uVar12 = 0x80;
        if (0x7f < *(uint *)(pvVar13 + 8)) {
          uVar12 = *(uint *)(pvVar13 + 8);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)(vector<unsigned_int> *)&local_98,SUB41(uVar12,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        vector<unsigned_int>::operator=((vector<unsigned_int> *)&local_98,pvVar13);
        __ptr = *(void **)pvVar13;
        *(uint **)pvVar13 = local_98;
        *(undefined4 *)(pvVar13 + 8) = (undefined4)local_90;
        *(undefined4 *)(pvVar13 + 0xc) = local_90._4_4_;
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
      }
      lVar19 = lVar19 + 1;
    } while ((uint)lVar19 < *(uint *)(this + 0x128));
  }
LAB_0010abf6:
  lVar19 = 0;
  if (*(int *)(this + 0x40) != 0) {
    do {
      uVar20 = (undefined4)lVar19;
      uVar10 = (ulong)*(uint *)(*(long *)(this + 0x170) + lVar19 * 4);
      if (*(uint *)(this + 0x128) <= uVar10) {
        vector<basisu::vector<unsigned_int>>::resize
                  ((vector<basisu::vector<unsigned_int>> *)(this + 0x120),uVar10 + 1,false);
      }
      plVar14 = (long *)(uVar10 * 0x10 + *(long *)(this + 0x120));
      uVar12 = *(uint *)(plVar14 + 1);
      if (*(uint *)((long)plVar14 + 0xc) <= uVar12) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar14,(bool)((char)uVar12 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar12 = *(uint *)(plVar14 + 1);
      }
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar14 + (ulong)uVar12 * 4) = uVar20;
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    } while ((uint)lVar19 < *(uint *)(this + 0x40));
  }
  if (local_a8 != (fosc_block_struct *)0x0) {
    free(local_a8);
  }
LAB_0010ac93:
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("Elapsed time: %3.3f secs\n");
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<basisu::basisu_frontend::subblock_endpoint_quant_err*, long,
   __gnu_cxx::__ops::_Iter_less_iter>(basisu::basisu_frontend::subblock_endpoint_quant_err*,
   basisu::basisu_frontend::subblock_endpoint_quant_err*, long, __gnu_cxx::__ops::_Iter_less_iter)
   [clone .isra.0] */

void std::
     __introsort_loop<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,__gnu_cxx::__ops::_Iter_less_iter>
               (ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x181) {
    return;
  }
  puVar9 = param_1 + 3;
  puVar10 = param_2;
  if (param_3 == 0) {
LAB_0010b4d9:
    __heap_select<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Iter_less_iter>
              (param_1,param_2,param_2);
    do {
      uVar1 = param_1[1];
      puVar9 = param_2 + -3;
      *puVar9 = *param_1;
      param_2[-2] = uVar1;
      param_2[-1] = param_1[2];
      __adjust_heap<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,basisu::basisu_frontend::subblock_endpoint_quant_err,__gnu_cxx::__ops::_Iter_less_iter>
                (param_1,0,((long)puVar9 - (long)param_1 >> 3) * -0x5555555555555555);
      param_2 = puVar9;
    } while (0x18 < (long)puVar9 - (long)param_1);
    return;
  }
LAB_0010b2fb:
  uVar1 = param_1[3];
  param_3 = param_3 + -1;
  uVar5 = (lVar4 >> 3) * -0x5555555555555555;
  puVar6 = param_1 + (uVar5 & 0xfffffffffffffffe) + ((long)uVar5 >> 1);
  uVar5 = *puVar6;
  puVar7 = puVar10;
  param_2 = puVar9;
  if ((uVar1 < uVar5) ||
     ((uVar1 == uVar5 &&
      (((uint)param_1[5] < (uint)puVar6[2] ||
       (((uint)param_1[5] == (uint)puVar6[2] &&
        (*(uint *)((long)param_1 + 0x2c) < *(uint *)((long)puVar6 + 0x14))))))))) {
    uVar2 = puVar10[-3];
    if ((uVar5 < uVar2) ||
       ((uVar5 == uVar2 &&
        (((uint)puVar6[2] < (uint)puVar10[-1] ||
         (((uint)puVar6[2] == (uint)puVar10[-1] &&
          (*(uint *)((long)puVar6 + 0x14) < *(uint *)((long)puVar10 + -4))))))))) {
      uVar3 = puVar6[1];
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar1 = *param_1;
      *param_1 = *puVar6;
      param_1[1] = uVar3;
      param_1[2] = puVar6[2];
      *puVar6 = uVar1;
      puVar6[1] = uVar5;
      puVar6[2] = uVar2;
      goto LAB_0010b406;
    }
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (((uint)param_1[5] < (uint)puVar10[-1] ||
         (((uint)param_1[5] == (uint)puVar10[-1] &&
          (*(uint *)((long)param_1 + 0x2c) < *(uint *)((long)puVar10 + -4))))))))) {
      uVar3 = puVar10[-2];
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar1 = *param_1;
      *param_1 = puVar10[-3];
      param_1[1] = uVar3;
      param_1[2] = puVar10[-1];
      puVar10[-3] = uVar1;
      puVar10[-2] = uVar5;
      puVar10[-1] = uVar2;
      goto LAB_0010b406;
    }
  }
  else {
    uVar2 = puVar10[-3];
    if (uVar2 <= uVar1) {
      if (uVar1 == uVar2) {
        uVar8 = (uint)puVar10[-1];
        if (((uint)param_1[5] < uVar8) ||
           (((uint)param_1[5] == uVar8 &&
            (*(uint *)((long)param_1 + 0x2c) < *(uint *)((long)puVar10 + -4))))) goto LAB_0010b39f;
        if (uVar2 <= uVar5) goto LAB_0010b5e7;
      }
      else if (uVar2 <= uVar5) {
        if (uVar5 == uVar2) {
          uVar8 = (uint)puVar10[-1];
LAB_0010b5e7:
          if (((uint)puVar6[2] < uVar8) ||
             ((uVar8 == (uint)puVar6[2] &&
              (*(uint *)((long)puVar6 + 0x14) < *(uint *)((long)puVar10 + -4))))) goto LAB_0010b576;
        }
        uVar3 = puVar6[1];
        uVar5 = param_1[1];
        uVar2 = param_1[2];
        uVar1 = *param_1;
        *param_1 = *puVar6;
        param_1[1] = uVar3;
        param_1[2] = puVar6[2];
        *puVar6 = uVar1;
        puVar6[1] = uVar5;
        puVar6[2] = uVar2;
        goto LAB_0010b406;
      }
LAB_0010b576:
      uVar3 = puVar10[-2];
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar1 = *param_1;
      *param_1 = puVar10[-3];
      param_1[1] = uVar3;
      param_1[2] = puVar10[-1];
      puVar10[-3] = uVar1;
      puVar10[-2] = uVar5;
      puVar10[-1] = uVar2;
      goto LAB_0010b406;
    }
  }
LAB_0010b39f:
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  param_1[2] = param_1[5];
  param_1[3] = *param_1;
  *param_1 = uVar2;
  param_1[1] = param_1[4];
  param_1[4] = uVar1;
  param_1[5] = uVar5;
LAB_0010b406:
  uVar1 = *param_1;
  do {
    while( true ) {
      uVar5 = *param_2;
      if (uVar1 <= uVar5) break;
LAB_0010b418:
      param_2 = param_2 + 3;
    }
    if (uVar5 != uVar1) break;
    if ((uint)param_2[2] < (uint)param_1[2]) goto LAB_0010b418;
    if (((uint)param_2[2] != (uint)param_1[2]) ||
       (*(uint *)((long)param_1 + 0x14) <= *(uint *)((long)param_2 + 0x14))) break;
    param_2 = param_2 + 3;
  } while( true );
  do {
    do {
      puVar6 = puVar7;
      puVar7 = puVar6 + -3;
    } while (uVar1 < *puVar7);
  } while ((uVar1 == *puVar7) &&
          (((uint)param_1[2] < (uint)puVar6[-1] ||
           (((uint)param_1[2] == (uint)puVar6[-1] &&
            (*(uint *)((long)param_1 + 0x14) < *(uint *)((long)puVar6 + -4)))))));
  if (puVar7 <= param_2) goto LAB_0010b440;
  uVar3 = puVar6[-2];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_2 = *puVar7;
  param_2[1] = uVar3;
  param_2[2] = puVar6[-1];
  *puVar7 = uVar5;
  puVar6[-2] = uVar1;
  puVar6[-1] = uVar2;
  param_2 = param_2 + 3;
  goto LAB_0010b406;
LAB_0010b440:
  __introsort_loop<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,__gnu_cxx::__ops::_Iter_less_iter>
            (param_2,puVar10,param_3);
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x181) {
    return;
  }
  puVar10 = param_2;
  if (param_3 == 0) goto LAB_0010b4d9;
  goto LAB_0010b2fb;
}



/* basisu::basisu_frontend::compute_endpoint_subblock_error_vec() */

void __thiscall basisu::basisu_frontend::compute_endpoint_subblock_error_vec(basisu_frontend *this)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  basisu_frontend *local_48;
  uint local_40;
  uint local_3c;
  code *local_38;
  code *pcStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x188) != 0) {
    *(undefined4 *)(this + 0x188) = 0;
  }
  uVar3 = *(uint *)(this + 200);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 0x200;
      local_3c = uVar3;
      if (uVar6 <= uVar3) {
        local_3c = uVar6;
      }
      local_38 = std::
                 _Function_handler<void(),basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>
                 ::_M_manager;
      pcStack_30 = std::
                   _Function_handler<void(),basisu::basisu_frontend::compute_endpoint_subblock_error_vec()::{lambda()#1}>
                   ::_M_invoke;
      local_48 = this;
      local_40 = uVar5;
      basisu::job_pool::add_job(*(function **)(this + 0x38));
      if (local_38 != (code *)0x0) {
        (*local_38)(&local_48,&local_48,3);
      }
      uVar3 = *(uint *)(this + 200);
      uVar5 = uVar6;
    } while (uVar6 < uVar3);
  }
  basisu::job_pool::wait_for_all();
  if (*(uint *)(this + 0x188) != 0) {
    lVar2 = *(long *)(this + 0x180);
    uVar7 = (ulong)*(uint *)(this + 0x188) * 0x18;
    lVar1 = lVar2 + uVar7;
    uVar4 = ((long)uVar7 >> 3) * -0x5555555555555555;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    std::
    __introsort_loop<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar2,lVar1,(long)(int)lVar8 * 2);
    if (uVar7 < 0x181) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        std::
        __insertion_sort<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Iter_less_iter>
                  (lVar2,lVar1);
        return;
      }
      goto LAB_0010b7b3;
    }
    lVar8 = lVar2 + 0x180;
    std::
    __insertion_sort<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Iter_less_iter>
              (lVar2,lVar8);
    for (; lVar1 != lVar8; lVar8 = lVar8 + 0x18) {
      std::
      __unguarded_linear_insert<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Val_less_iter>
                (lVar8);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b7b3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::introduce_new_endpoint_clusters() */

void __thiscall basisu::basisu_frontend::introduce_new_endpoint_clusters(basisu_frontend *this)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  void *__ptr;
  _Hash_node *p_Var19;
  int iVar20;
  ulong uVar21;
  long *plVar22;
  long in_FS_OFFSET;
  _Hash_node *local_130;
  int local_110;
  ulong local_100;
  uint local_dc;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined8 *local_a8;
  long local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 *local_78;
  ulong local_70;
  undefined8 *local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("introduce_new_endpoint_clusters\n");
  generate_block_endpoint_clusters(this);
  local_110 = *(int *)(this + 0x10) - *(int *)(this + 200);
  if (0 < local_110) {
    compute_endpoint_subblock_error_vec(this);
    uVar9 = *(uint *)(this + 200);
    uVar21 = (ulong)uVar9;
    local_b0 = 1;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    local_98 = 0x3f800000;
    local_90 = 0;
    local_88[0] = 0;
    local_d8 = (undefined4 *)0x0;
    local_d0 = 0;
    local_b8 = local_88;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_d8,uVar21,false);
    if (uVar9 != 0) {
      puVar15 = (undefined4 *)(*(long *)(this + 0xc0) + 8);
      puVar10 = local_d8;
      do {
        uVar1 = *puVar15;
        puVar11 = puVar10 + 1;
        puVar15 = puVar15 + 4;
        *puVar10 = uVar1;
        puVar10 = puVar11;
      } while (local_d8 + uVar21 != puVar11);
    }
    local_70 = 1;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    local_58 = 0x3f800000;
    local_50 = 0;
    local_48 = 0;
    local_78 = &local_48;
    do {
      do {
        do {
          do {
            do {
              if (*(int *)(this + 0x188) == 0) goto LAB_0010bc29;
              uVar16 = *(int *)(this + 0x188) - 1;
              lVar12 = *(long *)(this + 0x180) + (ulong)uVar16 * 0x18;
              uVar2 = *(uint *)(lVar12 + 8);
              iVar3 = *(int *)(lVar12 + 0x10);
              iVar20 = *(int *)(lVar12 + 0x14);
              *(uint *)(this + 0x188) = uVar16;
              lVar12 = std::
                       _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                       ::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                               *)&local_78,(uint *)(ulong)uVar2);
            } while (lVar12 != 0);
            p_Var19 = (_Hash_node *)(ulong)uVar2;
            uVar16 = iVar20 + iVar3 * 2;
            local_dc = uVar16;
          } while ((uint)local_d8[(long)p_Var19] < 3);
          lVar12 = std::
                   _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                   ::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                           *)&local_b8,(uint *)(ulong)uVar16);
        } while (lVar12 != 0);
        uVar8 = uVar16 ^ 1;
        local_130 = (_Hash_node *)(ulong)uVar8;
        lVar12 = std::
                 _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                 ::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                         *)&local_b8,(uint *)(ulong)uVar8);
      } while (lVar12 != 0);
      uVar4 = *(uint *)(this + 200);
      vector<basisu::vector<unsigned_int>>::resize
                ((vector<basisu::vector<unsigned_int>> *)(this + 0xc0),(ulong)uVar4 + 1,false);
      vector<unsigned_int>::push_back
                ((vector<unsigned_int> *)((ulong)uVar4 * 0x10 + *(long *)(this + 0xc0)),&local_dc);
      vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
                ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)(this + 0x100),
                 (ulong)*(uint *)(this + 0x108) + 1,false);
      puVar14 = local_a8;
      if (local_a0 == 0) {
        for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
          if (uVar16 == *(uint *)(puVar14 + 1)) goto LAB_0010bada;
        }
        local_100 = (ulong)uVar16 % local_b0;
      }
      else {
        local_100 = (ulong)uVar16 % local_b0;
        plVar22 = (long *)local_b8[local_100];
        if (plVar22 != (long *)0x0) {
          uVar4 = *(uint *)((long *)*plVar22 + 1);
          plVar7 = (long *)*plVar22;
          while (uVar16 != uVar4) {
            plVar5 = (long *)*plVar7;
            if ((plVar5 == (long *)0x0) ||
               (uVar4 = *(uint *)(plVar5 + 1), plVar22 = plVar7, plVar7 = plVar5,
               (ulong)uVar4 % local_b0 != local_100)) goto LAB_0010bebd;
          }
          if (*plVar22 != 0) goto LAB_0010bada;
        }
      }
LAB_0010bebd:
      puVar14 = (undefined8 *)operator_new(0x10);
      *puVar14 = 0;
      *(uint *)(puVar14 + 1) = uVar16;
      std::
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::_M_insert_unique_node((ulong)&local_b8,local_100,(_Hash_node *)(ulong)uVar16,(ulong)puVar14)
      ;
LAB_0010bada:
      local_c8 = (void *)(CONCAT44(local_c8._4_4_,uVar16) ^ 1);
      vector<unsigned_int>::push_back
                ((vector<unsigned_int> *)
                 ((ulong)(*(int *)(this + 200) - 1) * 0x10 + *(long *)(this + 0xc0)),
                 (uint *)&local_c8);
      puVar14 = local_a8;
      if (local_a0 == 0) {
        for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
          if (uVar8 == *(uint *)(puVar14 + 1)) goto LAB_0010bb85;
        }
      }
      else {
        plVar22 = (long *)local_b8[(ulong)local_130 % local_b0];
        if (plVar22 != (long *)0x0) {
          uVar16 = *(uint *)((long *)*plVar22 + 1);
          plVar7 = (long *)*plVar22;
          while (uVar8 != uVar16) {
            plVar5 = (long *)*plVar7;
            if ((plVar5 == (long *)0x0) ||
               (uVar16 = *(uint *)(plVar5 + 1), plVar22 = plVar7, plVar7 = plVar5,
               (ulong)local_130 % local_b0 != (ulong)uVar16 % local_b0)) goto LAB_0010bf16;
          }
          if (*plVar22 != 0) goto LAB_0010bb85;
        }
      }
LAB_0010bf16:
      uVar17 = (ulong)local_130 % local_b0;
      puVar14 = (undefined8 *)operator_new(0x10);
      *puVar14 = 0;
      *(uint *)(puVar14 + 1) = uVar8;
      std::
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::_M_insert_unique_node((ulong)&local_b8,uVar17,local_130,(ulong)puVar14);
LAB_0010bb85:
      uVar16 = local_d8[(long)p_Var19];
      if (uVar16 < 2) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x4ac);
      }
      local_d8[(long)p_Var19] = uVar16 - 2;
      puVar14 = local_68;
      if (local_60 == 0) {
        for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
          if (uVar2 == *(uint *)(puVar14 + 1)) goto LAB_0010bc19;
        }
      }
      else {
        plVar22 = (long *)local_78[(ulong)p_Var19 % local_70];
        if (plVar22 != (long *)0x0) {
          uVar16 = *(uint *)((long *)*plVar22 + 1);
          plVar7 = (long *)*plVar22;
          while (uVar2 != uVar16) {
            plVar5 = (long *)*plVar7;
            if ((plVar5 == (long *)0x0) ||
               (uVar16 = *(uint *)(plVar5 + 1), plVar22 = plVar7, plVar7 = plVar5,
               (ulong)p_Var19 % local_70 != (ulong)uVar16 % local_70)) goto LAB_0010bf6d;
          }
          if (*plVar22 != 0) goto LAB_0010bc19;
        }
      }
LAB_0010bf6d:
      uVar17 = (ulong)p_Var19 % local_70;
      puVar14 = (undefined8 *)operator_new(0x10);
      *(uint *)(puVar14 + 1) = uVar2;
      *puVar14 = 0;
      std::
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::_M_insert_unique_node((ulong)&local_78,uVar17,p_Var19,(ulong)puVar14);
LAB_0010bc19:
      local_110 = local_110 + -1;
    } while (local_110 != 0);
LAB_0010bc29:
    basisu::debug_printf("Introduced %i new endpoint clusters\n");
    lVar12 = 0;
    if (uVar9 != 0) {
      do {
        local_c0 = 0;
        local_c8 = (void *)0x0;
        plVar22 = (long *)(*(long *)(this + 0xc0) + lVar12);
        if ((int)plVar22[1] != 0) {
          lVar18 = 0;
          uVar17 = 0;
          do {
            while( true ) {
              uVar9 = *(uint *)(*plVar22 + lVar18 * 4);
              lVar13 = std::
                       _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                       ::find((_Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
                               *)&local_b8,(uint *)(ulong)uVar9);
              if (lVar13 != 0) break;
              if (local_c0._4_4_ <= (uint)uVar17) {
                basisu::elemental_vector::increase_capacity
                          ((uint)&local_c8,(bool)((char)uVar17 + '\x01'),1,
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                uVar17 = local_c0 & 0xffffffff;
              }
              lVar18 = lVar18 + 1;
              *(uint *)((long)local_c8 + uVar17 * 4) = uVar9;
              uVar17 = (ulong)((int)local_c0 + 1U);
              local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + 1U);
              uVar9 = *(uint *)(plVar22 + 1);
              if (uVar9 <= (uint)lVar18) goto LAB_0010bcf0;
            }
            uVar9 = *(uint *)(plVar22 + 1);
            lVar18 = lVar18 + 1;
          } while ((uint)lVar18 < uVar9);
LAB_0010bcf0:
          uVar16 = (uint)uVar17;
          __ptr = local_c8;
          if (uVar9 != uVar16) {
            if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              handle_verify_failure(0x4c7);
            }
            __ptr = (void *)*plVar22;
            *(uint *)(plVar22 + 1) = uVar16;
            *plVar22 = (long)local_c8;
            *(uint *)((long)plVar22 + 0xc) = local_c0._4_4_;
          }
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar21 << 4 != lVar12);
    }
    generate_block_endpoint_clusters(this);
    puVar14 = local_68;
    while (puVar14 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar14;
      operator_delete(puVar14,0x10);
      puVar14 = puVar6;
    }
    memset(local_78,0,local_70 * 8);
    local_60 = 0;
    local_68 = (undefined8 *)0x0;
    if (local_78 != &local_48) {
      operator_delete(local_78,local_70 * 8);
    }
    puVar14 = local_a8;
    if (local_d8 != (undefined4 *)0x0) {
      free(local_d8);
      puVar14 = local_a8;
    }
    while (puVar14 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar14;
      operator_delete(puVar14,0x10);
      puVar14 = puVar6;
    }
    memset(local_b8,0,local_b0 * 8);
    local_a0 = 0;
    local_a8 = (undefined8 *)0x0;
    if (local_b8 != local_88) {
      operator_delete(local_b8,local_b0 * 8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::generate_endpoint_codebook(unsigned int) */

void __thiscall
basisu::basisu_frontend::generate_endpoint_codebook(basisu_frontend *this,uint param_1)

{
  uint *puVar1;
  etc_block *peVar2;
  etc_block eVar3;
  function *pfVar4;
  uint *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint *puVar12;
  color_rgba *pcVar13;
  ulong uVar14;
  cl_pixel_cluster *pcVar15;
  bool bVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  bool bVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  color_rgba *pcVar26;
  uint uVar27;
  long *plVar28;
  long in_FS_OFFSET;
  bool bVar29;
  ulong local_1c8;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  uint *local_148;
  undefined8 local_140;
  uint *local_138;
  undefined8 local_130;
  uint *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  cl_pixel_cluster *local_108;
  undefined8 local_100;
  etc_block *local_f8;
  undefined8 local_f0;
  interval_timer local_e8 [32];
  undefined1 local_c8 [16];
  color_rgba *local_b8;
  undefined1 local_a8 [16];
  int *local_98;
  interval_timer local_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("generate_endpoint_codebook\n");
  basisu::interval_timer::interval_timer(local_e8);
  basisu::interval_timer::start();
  vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
            ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)(this + 0x100),
             (ulong)*(uint *)(this + 200),false);
  bVar16 = *(long *)(this + 0x30) != 0 && param_1 == 0;
  if (bVar16) {
    local_168 = (void *)0x0;
    uVar9 = *(uint *)(this + 200);
    uVar18 = (ulong)uVar9;
    local_160 = 0;
    bVar21 = SUB41(uVar9,0);
    if (uVar9 != 0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_168,bVar21,(uint)(uVar9 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x10,false);
      local_160 = CONCAT44(local_160._4_4_,uVar9);
    }
    local_b8 = (color_rgba *)0x0;
    local_c8 = (undefined1  [16])0x0;
    if ((ulong)(uint)(*(int *)(this + 0x40) << 4) == 0) {
      local_98 = (int *)0x0;
      pcVar13 = (color_rgba *)0x0;
      local_a8 = (undefined1  [16])0x0;
    }
    else {
      uVar14 = (ulong)(uint)(*(int *)(this + 0x40) << 4) * 4;
      pcVar13 = (color_rgba *)operator_new(uVar14);
      local_98 = (int *)0x0;
      local_b8 = pcVar13 + uVar14;
      local_a8 = (undefined1  [16])0x0;
      local_c8._8_8_ = pcVar13;
      local_c8._0_8_ = pcVar13;
      if ((ulong)(uint)(*(int *)(this + 0x40) << 4) != 0) {
        uVar14 = (ulong)(uint)(*(int *)(this + 0x40) << 4) * 4;
        local_a8._8_8_ = operator_new(uVar14);
        local_98 = (int *)(local_a8._8_8_ + uVar14);
        local_a8._0_8_ = local_a8._8_8_;
      }
    }
    local_158 = (void *)0x0;
    local_150 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_158,uVar18,false);
    basisu::interval_timer::interval_timer(local_88);
    basisu::interval_timer::start();
    local_148 = (uint *)0x0;
    local_140 = 0;
    local_138 = (uint *)0x0;
    local_130 = 0;
    vector<unsigned_int>::reserve((vector<unsigned_int> *)&local_148,0x10000);
    vector<unsigned_int>::reserve((vector<unsigned_int> *)&local_138,0x10000);
    pcVar26 = pcVar13;
    if (*(int *)(this + 200) == 0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = 0;
      uVar14 = local_1c8;
      do {
        local_1c8 = uVar14;
        plVar28 = (long *)(*(long *)(this + 0xc0) + local_1c8 * 0x10);
        iVar10 = (int)plVar28[1];
        uVar22 = iVar10 * 8;
        uVar27 = (uint)local_140;
        if (uVar22 != (uint)local_140) {
          if ((uint)local_140 <= uVar22) {
            if (local_140._4_4_ < uVar22) {
              basisu::elemental_vector::increase_capacity
                        ((uint)(vector<unsigned_int> *)&local_148,SUB41(uVar22,0),
                         (uint)((uint)local_140 + 1 == uVar22),
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            memset(local_148 + (uint)local_140,0,(ulong)(uVar22 - (uint)local_140) << 2);
          }
          local_140 = CONCAT44(local_140._4_4_,uVar22);
          iVar10 = (int)plVar28[1];
          uVar27 = iVar10 * 8;
        }
        if ((uint)local_130 != uVar27) {
          if ((uint)local_130 <= uVar27) {
            if (local_130._4_4_ < uVar27) {
              basisu::elemental_vector::increase_capacity
                        ((uint)(vector<unsigned_int> *)&local_138,SUB41(uVar27,0),
                         (uint)((uint)local_130 + 1 == uVar27),
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            }
            memset(local_138 + (local_130 & 0xffffffff),0,(ulong)(uVar27 - (int)local_130) << 2);
          }
          local_130 = CONCAT44(local_130._4_4_,uVar27);
          iVar10 = (int)plVar28[1];
        }
        lVar17 = 0;
        uVar22 = 0;
        if (iVar10 != 0) {
          do {
            uVar27 = *(uint *)(*plVar28 + lVar17 * 4);
            if ((uVar27 & 1) == 0) {
              uVar14 = (ulong)uVar22;
              uVar22 = uVar22 + 0x10;
              puVar11 = (undefined8 *)((ulong)(uVar27 >> 1) * 0x40 + *(long *)(this + 0x58));
              uVar6 = puVar11[1];
              puVar12 = local_148 + uVar14;
              *(undefined8 *)puVar12 = *puVar11;
              *(undefined8 *)(puVar12 + 2) = uVar6;
              uVar6 = puVar11[3];
              *(undefined8 *)(puVar12 + 4) = puVar11[2];
              *(undefined8 *)(puVar12 + 6) = uVar6;
              uVar6 = puVar11[5];
              *(undefined8 *)(puVar12 + 8) = puVar11[4];
              *(undefined8 *)(puVar12 + 10) = uVar6;
              uVar6 = puVar11[7];
              *(undefined8 *)(puVar12 + 0xc) = puVar11[6];
              *(undefined8 *)(puVar12 + 0xe) = uVar6;
            }
            lVar17 = lVar17 + 1;
          } while ((uint)lVar17 < *(uint *)(plVar28 + 1));
        }
        puVar12 = radix_sort<unsigned_int>((uint)local_140,local_148,local_138,0,3);
        local_108 = (cl_pixel_cluster *)((ulong)local_108 & 0xffffffff00000000);
        local_f8 = (etc_block *)((ulong)local_f8 & 0xffffffff00000000);
        uVar14 = (long)pcVar13 - (long)pcVar26 >> 2;
        uVar23 = uVar14;
        if ((uint)local_140 != 0) {
          uVar22 = *puVar12;
          lVar17 = 0;
          if (uVar22 == 0) {
            iVar10 = 0;
            goto LAB_0010c5d8;
          }
          do {
            local_108 = (cl_pixel_cluster *)CONCAT44(local_108._4_4_,uVar22);
            iVar10 = 1;
            while( true ) {
              local_f8 = (etc_block *)CONCAT44(local_f8._4_4_,iVar10);
              lVar17 = lVar17 + 1;
              if ((uint)local_140 <= (uint)lVar17) {
                if (local_b8 == pcVar13) {
                  std::vector<basisu::color_rgba,std::allocator<basisu::color_rgba>>::
                  _M_realloc_insert<basisu::color_rgba_const&>
                            ((vector<basisu::color_rgba,std::allocator<basisu::color_rgba>> *)
                             local_c8,pcVar13,&local_108);
                }
                else {
                  *(uint *)pcVar13 = (uint)local_108;
                  local_c8._8_8_ = pcVar13 + 4;
                }
                if ((int *)local_a8._8_8_ == local_98) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>>::
                  _M_realloc_insert<unsigned_int_const&>
                            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_a8,
                             local_a8._8_8_,&local_f8);
                  uVar23 = (long)(local_c8._8_8_ - local_c8._0_8_) >> 2;
                  pcVar13 = (color_rgba *)local_c8._8_8_;
                  pcVar26 = (color_rgba *)local_c8._0_8_;
                }
                else {
                  *(int *)local_a8._8_8_ = iVar10;
                  local_a8._8_8_ = (int *)(local_a8._8_8_ + 4);
                  uVar23 = (long)(local_c8._8_8_ - local_c8._0_8_) >> 2;
                  pcVar13 = (color_rgba *)local_c8._8_8_;
                  pcVar26 = (color_rgba *)local_c8._0_8_;
                }
                goto LAB_0010c6e8;
              }
              uVar22 = puVar12[lVar17];
              if ((uint)local_108 != uVar22) break;
LAB_0010c5d8:
              iVar10 = iVar10 + 1;
              if (iVar10 == 0) {
                iVar10 = -1;
              }
            }
            if (local_b8 == pcVar13) {
              std::vector<basisu::color_rgba,std::allocator<basisu::color_rgba>>::
              _M_realloc_insert<basisu::color_rgba_const&>
                        ((vector<basisu::color_rgba,std::allocator<basisu::color_rgba>> *)local_c8,
                         pcVar13,&local_108);
            }
            else {
              *(uint *)pcVar13 = (uint)local_108;
              local_c8._8_8_ = pcVar13 + 4;
            }
            if ((int *)local_a8._8_8_ == local_98) {
              std::vector<unsigned_int,std::allocator<unsigned_int>>::
              _M_realloc_insert<unsigned_int_const&>
                        ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_a8,
                         local_a8._8_8_,&local_f8);
              pcVar13 = (color_rgba *)local_c8._8_8_;
            }
            else {
              *(int *)local_a8._8_8_ = iVar10;
              local_a8._8_8_ = (int *)(local_a8._8_8_ + 4);
              pcVar13 = (color_rgba *)local_c8._8_8_;
            }
          } while( true );
        }
LAB_0010c6e8:
        uVar22 = (int)uVar23 - (int)uVar14;
        puVar19 = (ulong *)(local_1c8 * 0x10 + (long)local_168);
        puVar19[1] = uVar14;
        *puVar19 = (ulong)uVar22;
        *(uint *)((long)local_158 + local_1c8 * 4) = uVar22;
        uVar14 = local_1c8 + 1;
        local_1c8 = uVar23;
      } while ((uint)uVar14 < *(uint *)(this + 200));
    }
    basisu::interval_timer::get_elapsed_secs();
    basisu::debug_printf("Total hash time: %3.3f secs\n");
    basisu::debug_printf("Total unique colors: %llu\n",local_1c8);
    local_128 = (uint *)0x0;
    local_120 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_128,uVar18,false);
    puVar12 = local_128;
    pvVar7 = local_158;
    uVar14 = 0;
    if (uVar9 == 0) {
      local_118 = (void *)0x0;
      local_110 = 0;
      vector<unsigned_int>::resize((vector<unsigned_int> *)&local_118,0,false);
      local_108 = (cl_pixel_cluster *)0x0;
      local_100 = 0;
      if (*(uint *)(this + 0x18) < 2) {
        local_f8 = (etc_block *)0x0;
        uVar22 = 0x10;
        local_f0 = 0;
      }
      else {
        local_f8 = (etc_block *)0x0;
        uVar22 = 0x40;
        local_f0 = 0;
        if (*(uint *)(this + 0x18) == 6) {
          uVar22 = 0xa5;
        }
      }
    }
    else {
      do {
        uVar23 = uVar14;
        local_128[uVar23] = (uint)uVar23;
        uVar14 = uVar23 + 1;
      } while (uVar18 != uVar14);
      puVar1 = local_128 + uVar14;
      uVar18 = (long)(uVar14 * 4) >> 2;
      lVar17 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      std::
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (local_128,puVar1,(long)(int)lVar17 * 2,local_158);
      if (uVar14 * 4 < 0x41) {
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (puVar12,puVar1,pvVar7);
      }
      else {
        puVar25 = puVar12 + 0x10;
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (puVar12,puVar25,pvVar7);
        for (; puVar1 != puVar25; puVar25 = puVar25 + 1) {
          uVar22 = *puVar25;
          uVar18 = (ulong)puVar25[-1];
          puVar12 = (uint *)((long)pvVar7 + (ulong)uVar22 * 4);
          puVar24 = puVar25;
          puVar5 = puVar25;
          if (*puVar12 < *(uint *)((long)pvVar7 + uVar18 * 4)) {
            do {
              *puVar5 = (uint)uVar18;
              uVar18 = (ulong)puVar5[-2];
              puVar24 = puVar5 + -1;
              puVar5 = puVar5 + -1;
            } while (*puVar12 < *(uint *)((long)pvVar7 + uVar18 * 4));
          }
          *puVar24 = uVar22;
        }
      }
      local_118 = (void *)0x0;
      local_110 = 0;
      vector<unsigned_int>::resize((vector<unsigned_int> *)&local_118,uVar14,false);
      uVar18 = 0;
      do {
        *(int *)((long)local_118 + (ulong)local_128[uVar18] * 4) = (int)uVar18;
        bVar29 = uVar18 != uVar23;
        uVar18 = uVar18 + 1;
      } while (bVar29);
      local_108 = (cl_pixel_cluster *)0x0;
      local_100 = 0;
      uVar27 = (uint)(uVar9 == 1);
      basisu::elemental_vector::increase_capacity
                ((uint)&local_108,bVar21,uVar27,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
      local_100 = CONCAT44(local_100._4_4_,uVar9);
      puVar12 = local_128;
      pcVar15 = local_108;
      do {
        uVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = (undefined8 *)((long)local_168 + (ulong)uVar22 * 0x10);
        uVar6 = puVar11[1];
        *(undefined8 *)pcVar15 = *puVar11;
        *(undefined8 *)(pcVar15 + 8) = uVar6;
        pcVar15 = pcVar15 + 0x10;
      } while (puVar12 != local_128 + uVar14);
      uVar22 = 0x10;
      if ((1 < *(uint *)(this + 0x18)) && (uVar22 = 0xa5, *(uint *)(this + 0x18) != 6)) {
        uVar22 = 0x40;
        uVar27 = (uint)(uVar9 == 1);
      }
      local_f8 = (etc_block *)0x0;
      local_f0 = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)&local_f8,bVar21,uVar27,(_func_void_void_ptr_void_ptr_uint *)0x8,false);
      local_f0 = CONCAT44(local_f0._4_4_,uVar9);
    }
    uVar6 = local_a8._0_8_;
    cVar8 = basisu::opencl_encode_etc1s_pixel_clusters
                      (*(opencl_context **)(this + 0x30),local_f8,uVar9,local_108,local_1c8,pcVar26,
                       (uint *)local_a8._0_8_,(bool)this[0x1c],uVar22);
    if (cVar8 == '\0') {
      basisu::error_printf
                (
                "basisu_frontend::generate_endpoint_codebook: opencl_encode_etc1s_pixel_clusters() failed! Using CPU.\n"
                );
      *(undefined8 *)(this + 0x30) = 0;
      this[0x1b8] = (basisu_frontend)0x1;
    }
    else {
      lVar17 = 0;
      if (*(int *)(this + 200) != 0) {
        do {
          peVar2 = local_f8 + (ulong)*(uint *)((long)local_118 + lVar17 * 4) * 8;
          lVar20 = lVar17 + 1;
          pcVar13 = (color_rgba *)(*(long *)(this + 0x100) + lVar17 * 0x38);
          pcVar13[0x32] = (color_rgba)0x1;
          basisu::etc_block::unpack_color5
                    (pcVar13,(ushort)(((int)(uint)(byte)peVar2[1] >> 3) << 5) |
                             (ushort)(((int)(uint)(byte)*peVar2 >> 3) << 10) |
                             (ushort)((int)(uint)(byte)peVar2[2] >> 3),false);
          eVar3 = peVar2[3];
          *(undefined8 *)(pcVar13 + 0x10) = 0;
          *(int *)(pcVar13 + 8) = (int)(uint)(byte)eVar3 >> 5;
          lVar17 = lVar20;
        } while ((uint)lVar20 < *(uint *)(this + 200));
      }
      bVar16 = false;
    }
    if (local_f8 != (etc_block *)0x0) {
      free(local_f8);
    }
    if (local_108 != (cl_pixel_cluster *)0x0) {
      free(local_108);
    }
    if (local_118 != (void *)0x0) {
      free(local_118);
    }
    if (local_128 != (uint *)0x0) {
      free(local_128);
    }
    if (local_138 != (uint *)0x0) {
      free(local_138);
    }
    if (local_148 != (uint *)0x0) {
      free(local_148);
    }
    if (local_158 != (void *)0x0) {
      free(local_158);
    }
    if ((uint *)uVar6 != (uint *)0x0) {
      operator_delete((void *)uVar6,(long)local_98 - uVar6);
    }
    if (pcVar26 != (color_rgba *)0x0) {
      operator_delete(pcVar26,(long)local_b8 - (long)pcVar26);
    }
    if (local_168 != (void *)0x0) {
      free(local_168);
    }
    if (!bVar16) goto LAB_0010c1bf;
  }
  uVar9 = *(uint *)(this + 200);
  if (uVar9 != 0) {
    uVar22 = 0;
    do {
      uVar27 = uVar22 + 0x80;
      pfVar4 = *(function **)(this + 0x38);
      local_68 = (undefined1  [16])0x0;
      local_58 = (code *)0x0;
      if (uVar27 <= uVar9) {
        uVar9 = uVar27;
      }
      pcStack_50 = (code *)0x0;
      puVar11 = (undefined8 *)operator_new(0x18);
      *puVar11 = this;
      *(uint *)(puVar11 + 2) = param_1;
      *(uint *)(puVar11 + 1) = uVar22;
      *(uint *)((long)puVar11 + 0xc) = uVar9;
      local_68._0_8_ = puVar11;
      local_58 = std::
                 _Function_handler<void(),basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}>
                 ::_M_manager;
      pcStack_50 = std::
                   _Function_handler<void(),basisu::basisu_frontend::generate_endpoint_codebook(unsigned_int)::{lambda()#1}>
                   ::_M_invoke;
      basisu::job_pool::add_job(pfVar4);
      if (local_58 != (code *)0x0) {
        (*local_58)(local_68,local_68,3);
      }
      uVar9 = *(uint *)(this + 200);
      uVar22 = uVar27;
    } while (uVar27 < uVar9);
  }
  basisu::job_pool::wait_for_all();
LAB_0010c1bf:
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("Elapsed time: %3.3f secs\n");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::refine_endpoint_clusterization() */

uint __thiscall basisu::basisu_frontend::refine_endpoint_clusterization(basisu_frontend *this)

{
  uint uVar1;
  undefined4 uVar2;
  function *pfVar3;
  uint *puVar4;
  void *pvVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  cl_block_info_struct *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  uint *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  basisu_frontend bVar28;
  long lVar29;
  long in_FS_OFFSET;
  vector<basisu::vector<unsigned_int>> *local_118;
  void *local_108;
  undefined8 local_100;
  uint *local_f8;
  undefined8 local_f0;
  cl_block_info_struct *local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  cl_endpoint_cluster_struct *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint *local_98;
  ulong local_90;
  interval_timer local_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("refine_endpoint_clusterization\n");
  if (this[0x49] != (basisu_frontend)0x0) {
    compute_endpoint_clusters_within_each_parent_cluster(this);
  }
  local_108 = (void *)0x0;
  iVar22 = *(int *)(this + 0x40);
  local_100 = 0;
  if (iVar22 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_108,SUB41(iVar22,0),(uint)(iVar22 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    local_100 = CONCAT44(local_100._4_4_,iVar22);
  }
  if (0 < *(int *)(this + 200)) {
    iVar22 = 0;
    puVar19 = (uint *)(*(long *)(this + 0xc0) + 8);
    do {
      if (*puVar19 != 0) {
        lVar29 = *(long *)(puVar19 + -2);
        lVar13 = 0;
        do {
          uVar27 = *(uint *)(lVar29 + lVar13 * 4);
          lVar13 = lVar13 + 1;
          *(int *)((long)local_108 + (ulong)(uVar27 & 1) * 4 + (ulong)(uVar27 >> 1) * 8) = iVar22;
        } while ((uint)lVar13 < *puVar19);
      }
      iVar22 = iVar22 + 1;
      puVar19 = puVar19 + 4;
    } while (iVar22 < *(int *)(this + 200));
  }
  basisu::interval_timer::interval_timer(local_88);
  basisu::interval_timer::start();
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  vector<unsigned_int>::resize
            ((vector<unsigned_int> *)&local_f8,(ulong)*(uint *)(this + 0x40),false);
  if (*(long *)(this + 0x30) == 0) {
    uVar27 = *(uint *)(this + 0x40);
LAB_0010ce74:
    if (uVar27 != 0) {
      uVar20 = 0;
      do {
        pfVar3 = *(function **)(this + 0x38);
        uVar26 = uVar20 + 0x400;
        local_68 = (undefined1  [16])0x0;
        local_58 = (code *)0x0;
        pcStack_50 = (code *)0x0;
        if (uVar26 <= uVar27) {
          uVar27 = uVar26;
        }
        puVar7 = (undefined8 *)operator_new(0x20);
        *puVar7 = this;
        *(uint *)(puVar7 + 1) = uVar20;
        *(uint *)((long)puVar7 + 0xc) = uVar27;
        puVar7[2] = (vector<unsigned_int> *)&local_f8;
        puVar7[3] = &local_108;
        local_68._0_8_ = puVar7;
        local_58 = std::
                   _Function_handler<void(),basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>
                   ::_M_manager;
        pcStack_50 = std::
                     _Function_handler<void(),basisu::basisu_frontend::refine_endpoint_clusterization()::{lambda()#1}>
                     ::_M_invoke;
        basisu::job_pool::add_job(pfVar3);
        if (local_58 != (code *)0x0) {
          (*local_58)(local_68,local_68,3);
        }
        uVar27 = *(uint *)(this + 0x40);
        uVar20 = uVar26;
      } while (uVar26 < uVar27);
    }
    basisu::job_pool::wait_for_all();
  }
  else {
    bVar28 = this[0x49];
    uVar27 = *(uint *)(this + 0x40);
    if (bVar28 == (basisu_frontend)0x0) goto LAB_0010ce74;
    local_e8 = (cl_block_info_struct *)0x0;
    uVar20 = *(uint *)(this + 0xf8);
    local_e0 = 0;
    if (uVar27 != 0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_e8,SUB41(uVar27,0),(uint)(uVar27 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x7,false);
      local_e0 = CONCAT44(local_e0._4_4_,uVar27);
    }
    uVar11 = (ulong)uVar20;
    local_d8 = (undefined4 *)0x0;
    local_d0 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_d8,uVar11,false);
    if (uVar20 == 0) {
      local_c8 = (void *)0x0;
      local_c0 = 0;
      vector<unsigned_int>::resize((vector<unsigned_int> *)&local_c8,0,false);
      if (*(int *)(this + 200) != 0) goto LAB_0010d813;
      local_b8 = (cl_endpoint_cluster_struct *)0x0;
      local_b0 = 0;
      uVar27 = 0;
    }
    else {
      puVar14 = (undefined4 *)(*(long *)(this + 0xf0) + 8);
      puVar8 = local_d8;
      do {
        uVar2 = *puVar14;
        puVar9 = puVar8 + 1;
        puVar14 = puVar14 + 4;
        *puVar8 = uVar2;
        puVar8 = puVar9;
      } while (local_d8 + uVar11 != puVar9);
      local_c8 = (void *)0x0;
      local_c0 = 0;
      uVar27 = 0;
      vector<unsigned_int>::resize((vector<unsigned_int> *)&local_c8,uVar11,false);
      lVar29 = 0;
      do {
        *(uint *)((long)local_c8 + lVar29) = uVar27;
        uVar27 = uVar27 + *(int *)((long)local_d8 + lVar29);
        lVar29 = lVar29 + 4;
      } while (uVar11 * 4 - lVar29 != 0);
      if (uVar27 < *(uint *)(this + 200)) {
LAB_0010d813:
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x6d4);
      }
      local_b8 = (cl_endpoint_cluster_struct *)0x0;
      local_b0 = 0;
      if (uVar27 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_b8,SUB41(uVar27,0),(uint)(uVar27 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x7,false);
        local_b0 = CONCAT44(local_b0._4_4_,uVar27);
      }
      lVar29 = 0;
      do {
        uVar20 = *(uint *)((long)local_d8 + lVar29);
        uVar26 = *(uint *)((long)local_c8 + lVar29);
        if (uVar20 != 0) {
          lVar13 = 0;
          do {
            uVar15 = (ulong)uVar26;
            uVar1 = *(uint *)(*(long *)(*(long *)(this + 0xf0) + lVar29 * 4) + lVar13);
            lVar13 = lVar13 + 4;
            puVar14 = (undefined4 *)(*(long *)(this + 0x100) + (ulong)uVar1 * 0x38);
            uVar26 = uVar26 + 1;
            uVar2 = puVar14[2];
            lVar12 = uVar15 * 7;
            *(undefined4 *)(local_b8 + lVar12) = *puVar14;
            local_b8[lVar12 + 4] = SUB41(uVar2,0);
            *(short *)(local_b8 + lVar12 + 5) = (short)uVar1;
          } while ((ulong)uVar20 << 2 != lVar13);
        }
        lVar29 = lVar29 + 4;
      } while (uVar11 * 4 - lVar29 != 0);
    }
    uVar11 = 0;
    if (*(int *)(this + 0x40) != 0) {
      lVar29 = *(long *)(this + 0xe0);
      lVar12 = 0;
      lVar13 = *(long *)(this + 0x100);
      pcVar10 = local_e8;
      do {
        uVar2 = local_d8[*(byte *)(lVar29 + lVar12)];
        *(short *)pcVar10 =
             (short)*(undefined4 *)((long)local_c8 + (ulong)*(byte *)(lVar29 + lVar12) * 4);
        uVar20 = *(uint *)((long)local_108 + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *(short *)(pcVar10 + 2) = (short)uVar2;
        *(short *)(pcVar10 + 4) = (short)uVar20;
        pcVar10[6] = SUB41(*(undefined4 *)(lVar13 + 8 + (ulong)uVar20 * 0x38),0);
        pcVar10 = pcVar10 + 7;
      } while ((uint)lVar12 < *(uint *)(this + 0x40));
      uVar11 = (ulong)*(uint *)(this + 0x40);
    }
    local_a8 = (void *)0x0;
    local_a0 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_a8,uVar11,false);
    if (*(int *)(this + 0x40) == 0) {
      uVar20 = 0;
    }
    else {
      lVar29 = 0;
      do {
        *(undefined4 *)((long)local_a8 + lVar29 * 4) = *(undefined4 *)((long)local_108 + lVar29 * 8)
        ;
        uVar20 = *(uint *)(this + 0x40);
        lVar29 = lVar29 + 1;
      } while ((uint)lVar29 < uVar20);
    }
    local_98 = (uint *)0x0;
    local_90 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_98,(ulong)uVar20,false);
    puVar19 = local_98;
    pvVar5 = local_a8;
    uVar20 = *(uint *)(this + 0x40);
    if (uVar20 != 0) {
      uVar11 = 0;
      do {
        local_98[uVar11] = (uint)uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar20);
      puVar16 = local_98 + uVar11;
      uVar15 = (long)(uVar11 * 4) >> 2;
      lVar29 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      std::
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (local_98,puVar16,(long)(int)lVar29 * 2,local_a8);
      if (uVar11 * 4 < 0x41) {
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (puVar19,puVar16,pvVar5);
      }
      else {
        puVar21 = puVar19 + 0x10;
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (puVar19,puVar21,pvVar5);
        for (; puVar16 != puVar21; puVar21 = puVar21 + 1) {
          uVar20 = *puVar21;
          uVar11 = (ulong)puVar21[-1];
          puVar19 = (uint *)((long)pvVar5 + (ulong)uVar20 * 4);
          puVar23 = puVar21;
          puVar4 = puVar21;
          if (*puVar19 < *(uint *)((long)pvVar5 + uVar11 * 4)) {
            do {
              *puVar4 = (uint)uVar11;
              uVar11 = (ulong)puVar4[-2];
              puVar23 = puVar4 + -1;
              puVar4 = puVar4 + -1;
            } while (*puVar19 < *(uint *)((long)pvVar5 + uVar11 * 4));
          }
          *puVar23 = uVar20;
        }
      }
    }
    cVar6 = basisu::opencl_refine_endpoint_clusterization
                      (*(opencl_context **)(this + 0x30),local_e8,uVar27,local_b8,local_98,local_f8,
                       (bool)this[0x1c]);
    if (cVar6 == '\0') {
      basisu::error_printf
                (
                "basisu_frontend::refine_endpoint_clusterization: opencl_refine_endpoint_clusterization() failed! Using CPU.\n"
                );
      *(undefined8 *)(this + 0x30) = 0;
      this[0x1b8] = (basisu_frontend)0x1;
    }
    else {
      bVar28 = (basisu_frontend)0x0;
    }
    if (local_98 != (uint *)0x0) {
      free(local_98);
    }
    if (local_a8 != (void *)0x0) {
      free(local_a8);
    }
    if (local_b8 != (cl_endpoint_cluster_struct *)0x0) {
      free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      free(local_c8);
    }
    if (local_d8 != (undefined4 *)0x0) {
      free(local_d8);
    }
    if (local_e8 != (cl_block_info_struct *)0x0) {
      free(local_e8);
    }
    if (bVar28 != (basisu_frontend)0x0) {
      uVar27 = *(uint *)(this + 0x40);
      goto LAB_0010ce74;
    }
  }
  local_118 = (vector<basisu::vector<unsigned_int>> *)&local_98;
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("refine_endpoint_clusterization time: %3.3f secs\n");
  local_98 = (uint *)0x0;
  local_90 = 0;
  vector<basisu::vector<unsigned_int>>::resize(local_118,(ulong)*(uint *)(this + 200),false);
  uVar27 = *(uint *)(this + 0x40);
  if (uVar27 != 0) {
    lVar29 = 0;
    uVar27 = 0;
    do {
      iVar22 = (int)lVar29 * 2;
      uVar20 = *(uint *)((long)local_108 + lVar29 * 8);
      uVar26 = local_f8[lVar29];
      plVar24 = (long *)((long)local_98 + (ulong)uVar26 * 2 * 8);
      uVar1 = *(uint *)(plVar24 + 1);
      if (*(uint *)((long)plVar24 + 0xc) <= uVar1) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar24,(bool)((char)uVar1 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar1 = *(uint *)(plVar24 + 1);
      }
      *(int *)(*plVar24 + (ulong)uVar1 * 4) = iVar22;
      plVar17 = (long *)((long)local_98 + (ulong)uVar26 * 2 * 8);
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      uVar1 = *(uint *)(plVar17 + 1);
      if (*(uint *)((long)plVar17 + 0xc) <= uVar1) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar17,(bool)((char)uVar1 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar1 = *(uint *)(plVar17 + 1);
      }
      *(int *)(*plVar17 + (ulong)uVar1 * 4) = iVar22 + 1;
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      lVar29 = lVar29 + 1;
      uVar27 = uVar27 + (uVar20 != uVar26);
    } while ((uint)lVar29 < *(uint *)(this + 0x40));
  }
  basisu::debug_printf("total_subblocks_reassigned: %u\n",(ulong)uVar27);
  if (*(uint *)(this + 0xcc) < (uint)local_90) {
    puVar7 = *(undefined8 **)(this + 0xc0);
    if (puVar7 != (undefined8 *)0x0) {
      puVar25 = puVar7 + (ulong)*(uint *)(this + 200) * 2;
      if (puVar7 != puVar25) {
        do {
          if ((void *)*puVar7 != (void *)0x0) {
            free((void *)*puVar7);
          }
          puVar7 = puVar7 + 2;
        } while (puVar25 != puVar7);
        puVar25 = *(undefined8 **)(this + 0xc0);
      }
      free(puVar25);
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined8 *)(this + 200) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((uint)(vector<basisu::vector<unsigned_int>> *)(this + 0xc0),SUB41((uint)local_90,0),0
               ,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
  }
  else {
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)(this + 0xc0),0,false);
  }
  if ((uint)local_90 == 0) {
    *(undefined4 *)(this + 200) = 0;
    puVar19 = local_98;
    if (local_98 == (uint *)0x0) goto LAB_0010d1d6;
  }
  else {
    puVar7 = (undefined8 *)((long)local_98 + (local_90 & 0xffffffff) * 2 * 8);
    puVar19 = local_98;
    puVar25 = *(undefined8 **)(this + 0xc0);
    do {
      uVar2 = *(undefined4 *)((long)puVar19 + 8);
      puVar18 = (undefined8 *)((long)puVar19 + 0x10);
      *puVar25 = 0;
      puVar25[1] = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)puVar25,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar20 = *(uint *)((long)puVar19 + 8);
      *(uint *)(puVar25 + 1) = uVar20;
      if (((void *)*puVar25 != (void *)0x0) && (*(void **)puVar19 != (void *)0x0)) {
        memcpy((void *)*puVar25,*(void **)puVar19,(ulong)uVar20 * 4);
      }
      puVar19 = (uint *)puVar18;
      puVar25 = puVar25 + 2;
    } while (puVar18 != puVar7);
    *(uint *)(this + 200) = (uint)local_90;
    if (local_98 == (uint *)0x0) goto LAB_0010d1d6;
    puVar7 = (undefined8 *)((long)local_98 + (local_90 & 0xffffffff) * 2 * 8);
    puVar19 = (uint *)puVar7;
    for (puVar16 = local_98; puVar16 != (uint *)puVar7; puVar16 = (uint *)((long)puVar16 + 0x10)) {
      if (*(void **)puVar16 != (void *)0x0) {
        free(*(void **)puVar16);
      }
      puVar19 = local_98;
    }
  }
  free(puVar19);
LAB_0010d1d6:
  if (local_f8 != (uint *)0x0) {
    free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    free(local_108);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::eliminate_redundant_or_empty_endpoint_clusters() */

void __thiscall
basisu::basisu_frontend::eliminate_redundant_or_empty_endpoint_clusters(basisu_frontend *this)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  void *pvVar16;
  int iVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uVar22;
  void *pvVar23;
  int iVar24;
  undefined4 *puVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  long in_FS_OFFSET;
  void *local_78;
  ulong local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  void *pvStack_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("eliminate_redundant_or_empty_endpoint_clusters\n");
  iVar24 = *(int *)(this + 200);
  local_78 = (void *)0x0;
  local_70 = 0;
  if (iVar24 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_78,SUB41(iVar24,0),(uint)(iVar24 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_78 + (local_70 & 0xffffffff) * 4),0,
           (ulong)(uint)(iVar24 - (int)local_70) << 2);
    pvVar23 = local_78;
    local_70 = CONCAT44(local_70._4_4_,iVar24);
    if (*(int *)(this + 200) != 0) {
      lVar7 = 0;
      do {
        *(int *)((long)local_78 + lVar7 * 4) = (int)lVar7;
        uVar6 = *(uint *)(this + 200);
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar6);
      uVar5 = *(undefined8 *)(this + 0x100);
      if (uVar6 != 0) {
        uVar8 = 0;
        do {
          *(int *)((long)local_78 + uVar8 * 4) = (int)uVar8;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar6);
        uVar8 = uVar8 * 4;
        pvVar16 = (void *)((long)local_78 + uVar8);
        lVar7 = 0x3f;
        if ((long)uVar8 >> 2 != 0) {
          for (; (ulong)((long)uVar8 >> 2) >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        std::
        __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (local_78,pvVar16,(long)(int)lVar7 * 2,uVar5);
        if (uVar8 < 0x41) {
          std::
          __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                    (pvVar23,pvVar16,uVar5);
        }
        else {
          pvVar14 = (void *)((long)pvVar23 + 0x40);
          std::
          __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                    (pvVar23,pvVar14,uVar5);
          for (; pvVar16 != pvVar14; pvVar14 = (void *)((long)pvVar14 + 4)) {
            std::
            __unguarded_linear_insert<unsigned_int*,__gnu_cxx::__ops::_Val_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                      (pvVar14,uVar5);
          }
        }
        uVar8 = (ulong)*(uint *)(this + 200);
        goto LAB_0010d95f;
      }
    }
  }
  uVar8 = 0;
LAB_0010d95f:
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  vector<basisu::vector<unsigned_int>>::resize
            ((vector<basisu::vector<unsigned_int>> *)&puStack_68,uVar8,false);
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
            ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)&pvStack_58,
             (ulong)*(uint *)(this + 200),false);
  uVar6 = *(uint *)(this + 200);
  if (uVar6 != 0) {
    lVar7 = 0;
    do {
      puVar13 = (undefined8 *)(lVar7 * 0x10 + (long)puStack_68);
      uVar8 = (ulong)*(uint *)((long)local_78 + lVar7 * 4);
      puVar18 = (undefined8 *)(uVar8 * 0x10 + *(long *)(this + 0xc0));
      if (puVar18 != puVar13) {
        uVar22 = (ulong)*(uint *)(puVar18 + 1);
        pvVar23 = (void *)*puVar13;
        if (*(uint *)((long)puVar13 + 0xc) < *(uint *)(puVar18 + 1)) {
          if (pvVar23 != (void *)0x0) {
            free(pvVar23);
            *puVar13 = 0;
            puVar13[1] = 0;
            uVar22 = (ulong)*(uint *)(puVar18 + 1);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar13,SUB81(uVar22,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false)
          ;
          uVar22 = (ulong)*(uint *)(puVar18 + 1);
          pvVar23 = (void *)*puVar13;
        }
        else if (*(int *)(puVar13 + 1) != 0) {
          *(undefined4 *)(puVar13 + 1) = 0;
          uVar22 = (ulong)*(uint *)(puVar18 + 1);
        }
        if ((pvVar23 != (void *)0x0) && ((void *)*puVar18 != (void *)0x0)) {
          memcpy(pvVar23,(void *)*puVar18,uVar22 * 4);
          uVar22 = (ulong)*(uint *)(puVar18 + 1);
        }
        *(int *)(puVar13 + 1) = (int)uVar22;
      }
      puVar13 = (undefined8 *)(*(long *)(this + 0x100) + uVar8 * 0x38);
      puVar18 = (undefined8 *)((long)pvStack_58 + lVar7 * 0x38);
      *puVar18 = *puVar13;
      *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar13 + 1);
      *(undefined4 *)((long)puVar18 + 0xc) = *(undefined4 *)((long)puVar13 + 0xc);
      puVar18[2] = puVar13[2];
      puVar18[3] = puVar13[3];
      if (puVar18 + 4 != puVar13 + 4) {
        uVar8 = (ulong)*(uint *)(puVar13 + 5);
        pvVar23 = (void *)puVar18[4];
        if (*(uint *)((long)puVar18 + 0x2c) < *(uint *)(puVar13 + 5)) {
          if (pvVar23 != (void *)0x0) {
            free(pvVar23);
            puVar18[4] = 0;
            puVar18[5] = 0;
            uVar8 = (ulong)*(uint *)(puVar13 + 5);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)(puVar18 + 4),SUB81(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          uVar8 = (ulong)*(uint *)(puVar13 + 5);
          pvVar23 = (void *)puVar18[4];
        }
        else if (*(int *)(puVar18 + 5) != 0) {
          *(undefined4 *)(puVar18 + 5) = 0;
          uVar8 = (ulong)*(uint *)(puVar13 + 5);
        }
        if ((pvVar23 != (void *)0x0) && ((void *)puVar13[4] != (void *)0x0)) {
          memcpy(pvVar23,(void *)puVar13[4],uVar8 * 4);
          uVar8 = (ulong)*(uint *)(puVar13 + 5);
        }
        *(int *)(puVar18 + 5) = (int)uVar8;
      }
      lVar7 = lVar7 + 1;
      *(undefined1 *)(puVar18 + 6) = *(undefined1 *)(puVar13 + 6);
      *(undefined1 *)((long)puVar18 + 0x31) = *(undefined1 *)((long)puVar13 + 0x31);
      *(undefined1 *)((long)puVar18 + 0x32) = *(undefined1 *)((long)puVar13 + 0x32);
      uVar6 = *(uint *)(this + 200);
    } while ((uint)lVar7 < uVar6);
  }
  puVar13 = *(undefined8 **)(this + 0xc0);
  *(undefined8 **)(this + 0xc0) = puStack_68;
  *(ulong *)(this + 200) = uStack_60;
  pvVar23 = *(void **)(this + 0x100);
  *(void **)(this + 0x100) = pvStack_58;
  uVar8 = *(ulong *)(this + 0x108);
  *(ulong *)(this + 0x108) = uStack_50;
  puStack_68 = puVar13;
  uStack_60 = CONCAT44(*(undefined4 *)(this + 0xcc),uVar6);
  pvStack_58 = pvVar23;
  uStack_50 = uVar8;
  vector<basisu::vector<unsigned_int>>::resize
            ((vector<basisu::vector<unsigned_int>> *)&puStack_68,0,false);
  vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
            ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)&pvStack_58,0,false);
  iVar24 = *(int *)(this + 200);
  iVar28 = (int)uStack_60;
  if (0 < iVar24) {
    uVar8 = uStack_60 & 0xffffffff;
    iVar28 = 0;
    do {
      while( true ) {
        lVar7 = (long)iVar28;
        iVar27 = iVar28 + 1;
        puVar13 = (undefined8 *)(*(long *)(this + 0xc0) + lVar7 * 0x10);
        iVar21 = *(int *)(puVar13 + 1);
        if (iVar21 != 0) break;
LAB_0010dc6b:
        iVar28 = iVar27;
        if (iVar24 <= iVar27) goto LAB_0010df6e;
      }
      lVar15 = lVar7 * 0x38;
      iVar17 = iVar27;
      if (iVar27 < iVar24) {
        lVar1 = *(long *)(this + 0x100) + lVar15;
        lVar12 = *(long *)(this + 0x100) + 0x38 + lVar15;
        do {
          lVar10 = 0;
          while( true ) {
            if (((*(char *)(lVar1 + lVar10) != *(char *)(lVar12 + lVar10) ||
                 *(char *)(lVar1 + 1 + lVar10) != *(char *)(lVar10 + 1 + lVar12)) ||
                 *(char *)(lVar1 + 2 + lVar10) != *(char *)(lVar10 + 2 + lVar12)) ||
               (*(char *)(lVar1 + 3 + lVar10) != *(char *)(lVar10 + 3 + lVar12)))
            goto joined_r0x0010e0ec;
            if (lVar10 == 4) break;
            lVar10 = 4;
          }
          if ((*(int *)(lVar1 + 8) != *(int *)(lVar12 + 8)) ||
             (*(int *)(lVar1 + 0xc) != *(int *)(lVar12 + 0xc))) break;
          iVar17 = iVar17 + 1;
          lVar12 = lVar12 + 0x38;
        } while (iVar17 != iVar24);
      }
joined_r0x0010e0ec:
      if (uStack_60._4_4_ <= (uint)uVar8) {
        basisu::elemental_vector::increase_capacity
                  ((uint)(vector<basisu::vector<unsigned_int>> *)&puStack_68,
                   (bool)((char)uVar8 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar8 = uStack_60 & 0xffffffff;
        iVar21 = *(int *)(puVar13 + 1);
      }
      puVar18 = puStack_68 + uVar8 * 2;
      *puVar18 = 0;
      puVar18[1] = 0;
      basisu::elemental_vector::increase_capacity
                ((uint)puVar18,SUB41(iVar21,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar6 = *(uint *)(puVar13 + 1);
      *(uint *)(puVar18 + 1) = uVar6;
      if (((void *)*puVar18 != (void *)0x0) && ((void *)*puVar13 != (void *)0x0)) {
        memcpy((void *)*puVar18,(void *)*puVar13,(ulong)uVar6 * 4);
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 + 1);
      puVar25 = (undefined4 *)(lVar15 + *(long *)(this + 0x100));
      if (uStack_50._4_4_ <= (uint)uStack_50) {
        basisu::elemental_vector::increase_capacity
                  ((uint)(vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)&pvStack_58
                   ,(bool)((char)uStack_50 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x38,
                   true);
      }
      uVar5 = *(undefined8 *)(puVar25 + 6);
      puVar2 = (undefined4 *)((long)pvStack_58 + (ulong)(uint)uStack_50 * 0x38);
      uVar3 = *puVar25;
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar25 + 4);
      *(undefined8 *)(puVar2 + 6) = uVar5;
      *puVar2 = uVar3;
      puVar2[1] = puVar25[1];
      uVar5 = *(undefined8 *)(puVar25 + 2);
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 2) = uVar5;
      uVar3 = puVar25[10];
      *(undefined8 *)(puVar2 + 10) = 0;
      basisu::elemental_vector::increase_capacity
                ((int)puVar2 + 0x20,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false)
      ;
      uVar6 = puVar25[10];
      puVar2[10] = uVar6;
      if ((*(void **)(puVar2 + 8) != (void *)0x0) && (*(void **)(puVar25 + 8) != (void *)0x0)) {
        memcpy(*(void **)(puVar2 + 8),*(void **)(puVar25 + 8),(ulong)uVar6 * 4);
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + 1);
      uVar8 = uStack_60 & 0xffffffff;
      *(undefined2 *)(puVar2 + 0xc) = *(undefined2 *)(puVar25 + 0xc);
      *(undefined1 *)((long)puVar2 + 0x32) = *(undefined1 *)((long)puVar25 + 0x32);
      if (iVar17 <= iVar27) {
        iVar24 = *(int *)(this + 200);
        iVar27 = iVar17;
        goto LAB_0010dc6b;
      }
      lVar15 = lVar7 * 0x10 + 0x10;
      lVar7 = (lVar7 + 2 + (ulong)((iVar17 - iVar28) - 2)) * 0x10;
      do {
        while( true ) {
          uVar6 = *(uint *)((undefined8 *)(*(long *)(this + 0xc0) + lVar15) + 1);
          if (uVar6 == 0) break;
          uVar22 = (ulong)uVar6;
          pvVar23 = *(void **)(*(long *)(this + 0xc0) + lVar15);
          plVar19 = puStack_68 + (ulong)((int)uVar8 - 1) * 2;
          uVar4 = *(uint *)(plVar19 + 1);
          uVar8 = (ulong)uVar4;
          if (uVar22 + uVar8 < 0x100000000) {
            uVar26 = uVar4 + uVar6;
            if (!CARRY4(uVar4,uVar6)) {
              uVar9 = uVar8;
              uVar11 = uVar22;
              if (*(uint *)((long)plVar19 + 0xc) < uVar26) {
                basisu::elemental_vector::increase_capacity
                          ((uint)plVar19,SUB41(uVar26,0),(uint)(uVar6 == 1),
                           (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                uVar9 = (ulong)*(uint *)(plVar19 + 1);
                uVar11 = (ulong)(uVar26 - *(uint *)(plVar19 + 1));
              }
              memset((void *)(*plVar19 + uVar9 * 4),0,uVar11 << 2);
            }
            *(uint *)(plVar19 + 1) = uVar26;
          }
          lVar15 = lVar15 + 0x10;
          memcpy((void *)(*plVar19 + uVar8 * 4),pvVar23,uVar22 * 4);
          uVar8 = uStack_60 & 0xffffffff;
          if (lVar15 == lVar7) goto LAB_0010df54;
        }
        lVar15 = lVar15 + 0x10;
      } while (lVar15 != lVar7);
LAB_0010df54:
      iVar24 = *(int *)(this + 200);
      iVar28 = iVar17;
    } while (iVar17 < iVar24);
LAB_0010df6e:
    iVar28 = (int)uVar8;
  }
  if (iVar24 != iVar28) {
    if (this[0x1d] != (basisu_frontend)0x0) {
      basisu::debug_printf
                ("Eliminated %u redundant or empty clusters\n",(ulong)(uint)(iVar24 - iVar28));
      iVar28 = (int)uStack_60;
    }
    puVar13 = *(undefined8 **)(this + 0xc0);
    pvVar23 = *(void **)(this + 0x100);
    uVar8 = *(ulong *)(this + 200);
    *(undefined8 **)(this + 0xc0) = puStack_68;
    *(void **)(this + 0x100) = pvStack_58;
    uVar22 = *(ulong *)(this + 0x108);
    *(ulong *)(this + 0x108) = uStack_50;
    *(ulong *)(this + 200) = CONCAT44(uStack_60._4_4_,iVar28);
    puStack_68 = puVar13;
    uStack_60 = uVar8;
    pvStack_58 = pvVar23;
    uStack_50 = uVar22;
  }
  if (pvStack_58 != (void *)0x0) {
    pvVar23 = (void *)((long)pvStack_58 + (uStack_50 & 0xffffffff) * 0x38);
    for (pvVar16 = pvStack_58; pvVar23 != pvVar16; pvVar16 = (void *)((long)pvVar16 + 0x38)) {
      if (*(void **)((long)pvVar16 + 0x20) != (void *)0x0) {
        free(*(void **)((long)pvVar16 + 0x20));
      }
    }
    free(pvStack_58);
  }
  if (puStack_68 != (undefined8 *)0x0) {
    puVar20 = puStack_68 + (uStack_60 & 0xffffffff) * 2;
    puVar13 = puVar20;
    for (puVar18 = puStack_68; puVar18 != puVar20; puVar18 = puVar18 + 2) {
      if ((void *)*puVar18 != (void *)0x0) {
        free((void *)*puVar18);
      }
      puVar13 = puStack_68;
    }
    free(puVar13);
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned int> const&,
   basisu::vector<int>&, bool, basisu::vector<unsigned int>*) */

void __thiscall
basisu::basisu_frontend::reoptimize_remapped_endpoints
          (basisu_frontend *this,vector *param_1,vector *param_2,bool param_3,vector *param_4)

{
  long lVar1;
  function *pfVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long lVar26;
  void *__ptr;
  undefined4 *puVar27;
  undefined4 uVar28;
  long lVar29;
  undefined8 *puVar30;
  long in_FS_OFFSET;
  vector *local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  void *local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  undefined4 *local_88;
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  undefined1 local_68 [16];
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = param_4;
  basisu::debug_printf("reoptimize_remapped_endpoints\n");
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  vector<basisu::vector<unsigned_int>>::resize
            ((vector<basisu::vector<unsigned_int>> *)&local_b8,(ulong)*(uint *)(this + 200),false);
  if (*(int *)(param_1 + 8) != 0) {
    lVar29 = 0;
    do {
      uVar28 = (undefined4)lVar29;
      plVar21 = local_b8 + (ulong)*(uint *)(*(long *)param_1 + lVar29 * 4) * 2;
      uVar14 = *(uint *)(plVar21 + 1);
      if (*(uint *)((long)plVar21 + 0xc) <= uVar14) {
        basisu::elemental_vector::increase_capacity
                  ((uint)plVar21,(bool)((char)uVar14 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar14 = *(uint *)(plVar21 + 1);
      }
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar21 + (ulong)uVar14 * 4) = uVar28;
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    } while ((uint)lVar29 < *(uint *)(param_1 + 8));
  }
  local_a8 = (void *)0x0;
  iVar9 = (uint)local_b0;
  local_a0 = 0;
  if ((uint)local_b0 == 0) {
    local_98 = (void *)0x0;
    local_90 = 0;
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_a8,SUB81(local_b0,0),(uint)((uint)local_b0 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset((void *)((local_a0 & 0xffffffff) + (long)local_a8),0,(ulong)(uint)(iVar9 - (int)local_a0)
          );
    iVar5 = (uint)local_b0;
    local_a0 = CONCAT44(local_a0._4_4_,iVar9);
    local_98 = (void *)0x0;
    local_90 = 0;
    if ((uint)local_b0 != 0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_98,SUB81(local_b0,0),(uint)((uint)local_b0 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      memset((void *)((local_90 & 0xffffffff) + (long)local_98),0,
             (ulong)(uint)(iVar5 - (int)local_90));
      local_90 = CONCAT44(local_90._4_4_,iVar5);
      if ((uint)local_b0 != 0) {
        uVar14 = 0;
        do {
          pfVar2 = *(function **)(this + 0x38);
          uVar19 = uVar14 + 0x100;
          local_68 = (undefined1  [16])0x0;
          local_58 = (code *)0x0;
          pcStack_50 = (code *)0x0;
          uVar20 = (uint)local_b0;
          if (uVar19 <= (uint)local_b0) {
            uVar20 = uVar19;
          }
          puVar10 = (undefined8 *)operator_new(0x30);
          *puVar10 = this;
          *(uint *)(puVar10 + 1) = uVar14;
          *(uint *)((long)puVar10 + 0xc) = uVar20;
          puVar10[2] = &local_98;
          puVar10[3] = &local_a8;
          puVar10[4] = (vector<basisu::vector<unsigned_int>> *)&local_b8;
          puVar10[5] = &local_c0;
          local_68._0_8_ = puVar10;
          local_58 = std::
                     _Function_handler<void(),basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)::{lambda()#1}>
                     ::_M_manager;
          pcStack_50 = std::
                       _Function_handler<void(),basisu::basisu_frontend::reoptimize_remapped_endpoints(basisu::vector<unsigned_int>const&,basisu::vector<int>&,bool,basisu::vector<unsigned_int>*)::{lambda()#1}>
                       ::_M_invoke;
          basisu::job_pool::add_job(pfVar2);
          if (local_58 != (code *)0x0) {
            (*local_58)(local_68,local_68,3);
          }
          uVar14 = uVar19;
        } while (uVar19 < (uint)local_b0);
      }
    }
  }
  basisu::job_pool::wait_for_all();
  uVar14 = *(uint *)(this + 200);
  uVar20 = *(uint *)(param_2 + 8);
  if (uVar14 != uVar20) {
    if (uVar14 < uVar20) {
      *(uint *)(param_2 + 8) = uVar14;
      uVar20 = uVar14;
    }
    else {
      if (*(uint *)(param_2 + 0xc) < uVar14) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_2,SUB41(uVar14,0),(uint)(uVar20 + 1 == uVar14),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar20 = *(uint *)(param_2 + 8);
      }
      memset((void *)(*(long *)param_2 + (ulong)uVar20 * 4),0,(ulong)(uVar14 - uVar20) << 2);
      *(uint *)(param_2 + 8) = uVar14;
      uVar20 = uVar14;
    }
  }
  if (uVar20 != 0) {
    uVar11 = 0;
    lVar29 = *(long *)param_2;
    do {
      *(undefined4 *)(lVar29 + uVar11 * 4) = 0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 8));
  }
  uVar11 = (ulong)*(uint *)(this + 200);
  uVar14 = 0;
  uVar20 = 0;
  if (*(uint *)(this + 200) != 0) {
    lVar29 = 0;
    uVar20 = 0;
    uVar14 = 0;
    uVar11 = 0;
    do {
      if (*(char *)((long)local_a8 + lVar29) == '\0') {
        uVar11 = (ulong)((int)uVar11 + 1);
      }
      else {
        *(uint *)(*(long *)param_2 + lVar29 * 4) = uVar20;
        uVar20 = uVar20 + 1;
      }
      uVar14 = (uVar14 + 1) - (uint)(*(char *)((long)local_98 + lVar29) == '\0');
      lVar29 = lVar29 + 1;
    } while ((uint)lVar29 < *(uint *)(this + 200));
  }
  basisu::debug_printf("Total unused clusters: %u\n",uVar11);
  basisu::debug_printf("Total improved_clusters: %u\n",(ulong)uVar14);
  basisu::debug_printf("Total endpoint clusters: %u\n",(ulong)uVar20);
  if (param_3) {
    lVar23 = 0;
    lVar29 = 0;
    local_88 = (undefined4 *)0x0;
    local_80 = 0;
    vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
              ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)&local_88,
               (long)(int)uVar20,false);
    if (*(int *)(this + 200) != 0) {
      do {
        iVar9 = *(int *)(*(long *)param_2 + lVar29 * 4);
        if (-1 < iVar9) {
          puVar30 = (undefined8 *)(*(long *)(this + 0x100) + lVar23);
          puVar10 = (undefined8 *)(local_88 + (long)iVar9 * 0xe);
          *puVar10 = *puVar30;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar30 + 1);
          *(undefined4 *)((long)puVar10 + 0xc) = *(undefined4 *)((long)puVar30 + 0xc);
          puVar10[2] = puVar30[2];
          puVar10[3] = puVar30[3];
          vector<unsigned_int>::operator=
                    ((vector<unsigned_int> *)(puVar10 + 4),(vector *)(puVar30 + 4));
          *(undefined1 *)(puVar10 + 6) = *(undefined1 *)(puVar30 + 6);
          *(undefined1 *)((long)puVar10 + 0x31) = *(undefined1 *)((long)puVar30 + 0x31);
          *(undefined1 *)((long)puVar10 + 0x32) = *(undefined1 *)((long)puVar30 + 0x32);
        }
        lVar29 = lVar29 + 1;
        lVar23 = lVar23 + 0x38;
      } while ((uint)lVar29 < *(uint *)(this + 200));
    }
    basisu::debug_printf("basisu_frontend::reoptimize_remapped_endpoints: stage 1\n");
    local_78 = (undefined8 *)0x0;
    lVar29 = 0;
    local_70 = 0;
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)&local_78,(long)(int)uVar20,false);
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar9 = *(int *)(*(long *)param_2 + (ulong)*(uint *)(*(long *)param_1 + lVar29 * 4) * 4);
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0xc9c);
        }
        if ((int)local_70 <= iVar9) {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0xc9e);
        }
        lVar23 = (long)iVar9;
        iVar5 = (int)lVar29 * 2;
        plVar21 = local_78 + lVar23 * 2;
        uVar14 = *(uint *)(plVar21 + 1);
        if (*(uint *)((long)plVar21 + 0xc) <= uVar14) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar21,(bool)((char)uVar14 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar14 = *(uint *)(plVar21 + 1);
        }
        *(int *)(*plVar21 + (ulong)uVar14 * 4) = iVar5;
        plVar15 = local_78 + lVar23 * 2;
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        uVar14 = *(uint *)(plVar15 + 1);
        if (*(uint *)((long)plVar15 + 0xc) <= uVar14) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar15,(bool)((char)uVar14 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar14 = *(uint *)(plVar15 + 1);
        }
        *(int *)(*plVar15 + (ulong)uVar14 * 4) = iVar5 + 1;
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        if ((int)(uint)local_80 <= iVar9) {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0xca3);
        }
        puVar27 = local_88 + lVar23 * 0xe;
        uVar14 = puVar27[10];
        if ((uint)puVar27[0xb] <= uVar14) {
          basisu::elemental_vector::increase_capacity
                    ((int)puVar27 + 0x20,(bool)((char)uVar14 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar14 = puVar27[10];
        }
        *(int *)(*(long *)(puVar27 + 8) + (ulong)uVar14 * 4) = iVar5;
        puVar16 = local_88 + lVar23 * 0xe;
        puVar27[10] = puVar27[10] + 1;
        uVar14 = puVar16[10];
        if ((uint)puVar16[0xb] <= uVar14) {
          basisu::elemental_vector::increase_capacity
                    ((int)puVar16 + 0x20,(bool)((char)uVar14 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar14 = puVar16[10];
        }
        *(int *)(*(long *)(puVar16 + 8) + (ulong)uVar14 * 4) = iVar5 + 1;
        puVar16[10] = puVar16[10] + 1;
        *(ulong *)(*(long *)(this + 0x110) + lVar29 * 8) = CONCAT44(iVar9,iVar9);
        lVar29 = lVar29 + 1;
      } while ((uint)lVar29 < *(uint *)(param_1 + 8));
    }
    basisu::debug_printf("basisu_frontend::reoptimize_remapped_endpoints: stage 2\n");
    vector<basisu::vector<unsigned_int>>::operator=
              ((vector<basisu::vector<unsigned_int>> *)(this + 0xc0),(vector *)&local_78);
    if (*(uint *)(this + 0x10c) < (uint)local_80) {
      pvVar18 = *(void **)(this + 0x100);
      if (pvVar18 != (void *)0x0) {
        __ptr = (void *)((long)pvVar18 + (ulong)*(uint *)(this + 0x108) * 0x38);
        if (pvVar18 != __ptr) {
          do {
            if (*(void **)((long)pvVar18 + 0x20) != (void *)0x0) {
              free(*(void **)((long)pvVar18 + 0x20));
            }
            pvVar18 = (void *)((long)pvVar18 + 0x38);
          } while (__ptr != pvVar18);
          __ptr = *(void **)(this + 0x100);
        }
        free(__ptr);
        *(undefined8 *)(this + 0x100) = 0;
        *(undefined8 *)(this + 0x108) = 0;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)
                       (this + 0x100),SUB41((uint)local_80,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x38,true);
    }
    else {
      vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
                ((vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *)(this + 0x100),0,
                 false);
    }
    if ((uint)local_80 != 0) {
      puVar27 = local_88 + (local_80 & 0xffffffff) * 0xe;
      puVar16 = *(undefined4 **)(this + 0x100);
      puVar24 = local_88;
      do {
        uVar3 = *(undefined8 *)(puVar24 + 4);
        uVar6 = *(undefined8 *)(puVar24 + 6);
        *puVar16 = *puVar24;
        uVar28 = puVar24[1];
        puVar25 = puVar24 + 0xe;
        *(undefined8 *)(puVar16 + 4) = uVar3;
        *(undefined8 *)(puVar16 + 6) = uVar6;
        puVar16[1] = uVar28;
        uVar3 = *(undefined8 *)(puVar24 + 2);
        *(undefined8 *)(puVar16 + 8) = 0;
        *(undefined8 *)(puVar16 + 2) = uVar3;
        uVar28 = puVar24[10];
        *(undefined8 *)(puVar16 + 10) = 0;
        basisu::elemental_vector::increase_capacity
                  ((int)puVar16 + 0x20,SUB41(uVar28,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        uVar14 = puVar24[10];
        puVar16[10] = uVar14;
        if ((*(void **)(puVar16 + 8) != (void *)0x0) && (*(void **)(puVar24 + 8) != (void *)0x0)) {
          memcpy(*(void **)(puVar16 + 8),*(void **)(puVar24 + 8),(ulong)uVar14 * 4);
        }
        *(undefined2 *)(puVar16 + 0xc) = *(undefined2 *)(puVar24 + 0xc);
        *(undefined1 *)((long)puVar16 + 0x32) = *(undefined1 *)((long)puVar24 + 0x32);
        puVar16 = puVar16 + 0xe;
        puVar24 = puVar25;
      } while (puVar25 != puVar27);
    }
    *(uint *)(this + 0x108) = (uint)local_80;
    eliminate_redundant_or_empty_endpoint_clusters(this);
    basisu::debug_printf("basisu_frontend::reoptimize_remapped_endpoints: stage 3\n");
    if (*(int *)(this + 200) != 0) {
      uVar14 = 0;
      puVar12 = (uint *)(*(long *)(this + 0xc0) + 8);
      do {
        if (*puVar12 != 0) {
          lVar29 = *(long *)(puVar12 + -2);
          lVar23 = *(long *)(this + 0x110);
          lVar13 = 0;
          lVar26 = *(long *)param_1;
          lVar4 = *(long *)param_2;
          do {
            lVar1 = lVar13 * 4;
            lVar13 = lVar13 + 1;
            uVar11 = (ulong)(*(uint *)(lVar29 + lVar1) >> 1);
            *(ulong *)(lVar23 + uVar11 * 8) = CONCAT44(uVar14,uVar14);
            *(uint *)(lVar4 + (ulong)*(uint *)(lVar26 + uVar11 * 4) * 4) = uVar14;
          } while ((uint)lVar13 < *puVar12);
        }
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 4;
      } while (uVar14 < *(uint *)(this + 200));
    }
    lVar29 = 0;
    basisu::debug_printf("basisu_frontend::reoptimize_remapped_endpoints: stage 4\n");
    uVar7 = _LC1;
    if (*(int *)(this + 0x70) != 0) {
      do {
        lVar23 = *(long *)(this + 0x100);
        uVar14 = *(uint *)(*(long *)(this + 0x110) + lVar29 * 8);
        puVar17 = (ushort *)(*(long *)(this + 0x68) + lVar29 * 8);
        *(byte *)((long)puVar17 + 3) = *(byte *)((long)puVar17 + 3) | 2;
        lVar26 = (ulong)uVar14 * 0x38;
        iVar9 = basisu::etc_block::pack_color5((color_rgba *)(lVar23 + lVar26),false,0x7f);
        *puVar17 = CONCAT11((char)((ushort)iVar9 >> 5) << 3,((byte)((uint)iVar9 >> 8) >> 2) << 3) |
                   *puVar17 & uVar7;
        *(byte *)(puVar17 + 1) = (byte)(iVar9 << 3) | (byte)puVar17[1] & 7;
        uVar8 = basisu::etc_block::pack_delta3(0,0,0);
        *puVar17 = CONCAT11((char)(uVar8 >> 3),(char)(uVar8 >> 6)) & 0x707 | _LC31 & *puVar17;
        *(byte *)(puVar17 + 1) = (byte)uVar8 & 7 | (byte)puVar17[1] & 0xf8;
        lVar23 = lVar29 * 8 + *(long *)(this + 0x68);
        iVar9 = *(int *)(*(long *)(this + 0x100) + 8 + lVar26);
        lVar29 = lVar29 + 1;
        *(byte *)(lVar23 + 3) = *(byte *)(lVar23 + 3) & 3 | (byte)(iVar9 << 5) | (byte)(iVar9 << 2);
      } while ((uint)lVar29 < *(uint *)(this + 0x70));
    }
    basisu::debug_printf("Final (post-RDO) endpoint clusters: %u\n",(ulong)*(uint *)(this + 200));
    if (local_78 != (undefined8 *)0x0) {
      puVar22 = local_78 + (local_70 & 0xffffffff) * 2;
      puVar10 = puVar22;
      for (puVar30 = local_78; puVar30 != puVar22; puVar30 = puVar30 + 2) {
        if ((void *)*puVar30 != (void *)0x0) {
          free((void *)*puVar30);
        }
        puVar10 = local_78;
      }
      free(puVar10);
    }
    if (local_88 != (undefined4 *)0x0) {
      puVar27 = local_88 + (local_80 & 0xffffffff) * 0xe;
      puVar16 = puVar27;
      for (puVar24 = local_88; puVar24 != puVar27; puVar24 = puVar24 + 0xe) {
        if (*(void **)(puVar24 + 8) != (void *)0x0) {
          free(*(void **)(puVar24 + 8));
        }
        puVar16 = local_88;
      }
      free(puVar16);
    }
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_b8 != (undefined8 *)0x0) {
    puVar22 = local_b8 + (local_b0 & 0xffffffff) * 2;
    puVar10 = puVar22;
    for (puVar30 = local_b8; puVar30 != puVar22; puVar30 = puVar30 + 2) {
      if ((void *)*puVar30 != (void *)0x0) {
        free((void *)*puVar30);
      }
      puVar10 = local_b8;
    }
    free(puVar10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_frontend::generate_selector_clusters() */

void __thiscall basisu::basisu_frontend::generate_selector_clusters(basisu_frontend *this)

{
  vector<basisu::vector<unsigned_int>> *this_00;
  long lVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  function *pfVar4;
  undefined8 uVar5;
  job_pool *pjVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  ulong uVar16;
  void *pvVar17;
  uint uVar18;
  void *pvVar19;
  char cVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  long in_FS_OFFSET;
  void *local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("generate_selector_clusters\n");
  iVar3 = *(int *)(this + 0x40);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (iVar3 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_c8,SUB41(iVar3,0),(uint)(iVar3 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x48,true);
    pvVar9 = (void *)((long)local_c8 + (local_c0 & 0xffffffff) * 0x48);
    pvVar17 = (void *)((long)pvVar9 + (ulong)(uint)(iVar3 - (int)local_c0) * 0x48);
    for (; pvVar9 != pvVar17; pvVar9 = (void *)((long)pvVar9 + 0x48)) {
      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
    }
    uVar18 = *(uint *)(this + 0x40);
    local_c0 = CONCAT44(local_c0._4_4_,iVar3);
    if (uVar18 != 0) {
      uVar8 = 0;
      do {
        pfVar4 = *(function **)(this + 0x38);
        uVar23 = uVar8 + 0x1000;
        local_88 = (undefined1  [16])0x0;
        local_78 = (code *)0x0;
        pcStack_70 = (code *)0x0;
        if (uVar23 <= uVar18) {
          uVar18 = uVar23;
        }
        puVar10 = (undefined8 *)operator_new(0x18);
        *puVar10 = this;
        puVar10[2] = &local_c8;
        *(uint *)(puVar10 + 1) = uVar8;
        *(uint *)((long)puVar10 + 0xc) = uVar18;
        local_88._0_8_ = puVar10;
        local_78 = std::
                   _Function_handler<void(),basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>
                   ::_M_manager;
        pcStack_70 = std::
                     _Function_handler<void(),basisu::basisu_frontend::generate_selector_clusters()::{lambda()#1}>
                     ::_M_invoke;
        basisu::job_pool::add_job(pfVar4);
        if (local_78 != (code *)0x0) {
          (*local_78)(local_88,local_88,3);
        }
        uVar18 = *(uint *)(this + 0x40);
        uVar8 = uVar23;
      } while (uVar23 < uVar18);
    }
  }
  basisu::job_pool::wait_for_all();
  local_98 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  if (*(int *)(this + 0x40) != 0) {
    lVar22 = 0;
    uVar8 = 0;
    uVar18 = 0;
    do {
      pauVar2 = (undefined1 (*) [16])((long)local_c8 + lVar22 * 0x48);
      local_88 = *pauVar2;
      uVar5 = *(undefined8 *)pauVar2[4];
      local_78 = *(code **)pauVar2[1];
      pcStack_70 = *(code **)(pauVar2[1] + 8);
      local_68 = *(undefined8 *)pauVar2[2];
      uStack_60 = *(undefined8 *)(pauVar2[2] + 8);
      local_58 = *(undefined8 *)pauVar2[3];
      uStack_50 = *(undefined8 *)(pauVar2[3] + 8);
      uVar23 = uVar8;
      if (uVar18 <= uVar8) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_a8,(bool)((char)uVar8 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x48,true);
        uVar23 = (uint)local_a0;
      }
      uVar8 = uVar23 + 1;
      lVar22 = lVar22 + 1;
      puVar10 = (undefined8 *)((long)local_a8 + (ulong)uVar23 * 0x48);
      *puVar10 = local_88._0_8_;
      puVar10[1] = local_88._8_8_;
      puVar10[2] = local_78;
      puVar10[3] = pcStack_70;
      local_a0 = CONCAT44(local_a0._4_4_,uVar8);
      puVar10[4] = local_68;
      puVar10[5] = uStack_60;
      puVar10[8] = uVar5;
      puVar10[6] = local_58;
      puVar10[7] = uStack_50;
      uVar18 = local_a0._4_4_;
    } while ((uint)lVar22 < *(uint *)(this + 0x40));
  }
  uVar18 = (-(uint)(*(uint *)(this + 0x18) < 2) & 0x10) + 0x10;
  if (*(uint *)(this + 0x14) < 0x100) {
    uVar18 = 0;
  }
  basisu::debug_printf("Using selector parent codebook size %u\n",(ulong)uVar18);
  uVar8 = 0;
  if (this[0x21] != (basisu_frontend)0x0) {
    uVar23 = std::thread::hardware_concurrency();
    uVar8 = 8;
    if ((int)uVar23 < 9) {
      uVar8 = uVar23;
    }
  }
  pjVar6 = *(job_pool **)(this + 0x38);
  if ((pjVar6 != (job_pool *)0x0) &&
     (uVar23 = (int)(*(long *)(pjVar6 + 8) - *(long *)pjVar6 >> 3) + 1, (int)uVar23 < (int)uVar8)) {
    uVar8 = uVar23;
  }
  uVar23 = 0;
  if (this[0x4a] != (basisu_frontend)0x0) {
    uVar23 = uVar18;
  }
  this_00 = (vector<basisu::vector<unsigned_int>> *)(this + 0x140);
  bVar7 = generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<16u,float>>>
                    ((tree_vector_quant *)&local_b8,*(uint *)(this + 0x14),uVar23,
                     (vector *)(this + 0x120),(vector *)this_00,uVar8,pjVar6,false);
  if (!bVar7) {
                    /* WARNING: Subroutine does not return */
    handle_verify_failure(0x8d8);
  }
  uVar18 = *(uint *)(this + 0x148);
  if (this[0x4a] == (basisu_frontend)0x0) {
    uVar8 = *(uint *)(this + 0x128);
    goto LAB_0010f2a3;
  }
  if (uVar18 == 0) {
    vector<basisu::vector<unsigned_int>>::resize(this_00,0,false);
    vector<basisu::vector<unsigned_int>>::resize(this_00,1,false);
    uVar18 = 0;
    if (*(int *)(this + 0x40) != 0) {
      do {
        plVar14 = *(long **)(this + 0x140);
        uVar8 = *(uint *)(plVar14 + 1);
        if (*(uint *)((long)plVar14 + 0xc) <= uVar8) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar14,(bool)((char)uVar8 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar8 = *(uint *)(plVar14 + 1);
        }
        *(uint *)(*plVar14 + (ulong)uVar8 * 4) = uVar18;
        uVar18 = uVar18 + 1;
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        uVar8 = *(uint *)(this + 0x40);
      } while (uVar18 < uVar8);
      goto LAB_0010f0e1;
    }
    if (*(int *)(this + 0x158) != 0) {
      *(undefined4 *)(this + 0x158) = 0;
    }
  }
  else {
    uVar8 = *(uint *)(this + 0x40);
LAB_0010f0e1:
    if (*(int *)(this + 0x158) != 0) {
      *(undefined4 *)(this + 0x158) = 0;
    }
    if (uVar8 != 0) {
      uVar13 = 0;
      if (*(uint *)(this + 0x15c) < uVar8) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x150,SUB41(uVar8,0),(uint)(uVar8 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar13 = (ulong)*(uint *)(this + 0x158);
      }
      memset((void *)(uVar13 + *(long *)(this + 0x150)),0,(ulong)(uVar8 - (int)uVar13));
      *(uint *)(this + 0x158) = uVar8;
      uVar13 = 0;
      do {
        *(undefined1 *)(*(long *)(this + 0x150) + uVar13) = 0xff;
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(this + 0x158));
    }
  }
  lVar22 = 0;
  if (*(int *)(this + 0x148) != 0) {
    do {
      lVar11 = 0;
      plVar14 = (long *)(lVar22 * 0x10 + *(long *)(this + 0x140));
      if ((int)plVar14[1] != 0) {
        do {
          lVar1 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          *(char *)(*(long *)(this + 0x150) + (ulong)*(uint *)(*plVar14 + lVar1)) = (char)lVar22;
        } while ((uint)lVar11 < *(uint *)(plVar14 + 1));
      }
      lVar22 = lVar22 + 1;
    } while ((uint)lVar22 < *(uint *)(this + 0x148));
  }
  if (*(uint *)(this + 0x40) != 0) {
    pcVar12 = *(char **)(this + 0x150);
    pcVar15 = pcVar12 + *(uint *)(this + 0x40);
    do {
      if (*pcVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        handle_verify_failure(0x8f3);
      }
      pcVar12 = pcVar12 + 1;
    } while (pcVar15 != pcVar12);
  }
  uVar8 = *(uint *)(this + 0x128);
  if (uVar8 != 0) {
    plVar14 = *(long **)(this + 0x120);
    plVar21 = plVar14 + (ulong)uVar8 * 2;
    do {
      if (*(uint *)(plVar14 + 1) != 0) {
        uVar13 = 0;
        cVar20 = '\0';
        do {
          uVar16 = (ulong)*(uint *)(*plVar14 + uVar13 * 4);
          if (uVar13 == 0) {
            cVar20 = *(char *)(*(long *)(this + 0x150) + uVar16);
          }
          else if (*(char *)(*(long *)(this + 0x150) + uVar16) != cVar20) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0x905);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != *(uint *)(plVar14 + 1));
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar21);
  }
  uVar18 = *(uint *)(this + 0x148);
LAB_0010f2a3:
  basisu::debug_printf
            ("Total selector clusters: %u, total parent selector clusters: %u\n",(ulong)uVar8,
             (ulong)uVar18);
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    pvVar19 = (void *)((local_b0 & 0xffffffff) * 0x70 + (long)local_b8);
    pvVar9 = pvVar19;
    for (pvVar17 = local_b8; pvVar17 != pvVar19; pvVar17 = (void *)((long)pvVar17 + 0x70)) {
      if (*(void **)((long)pvVar17 + 0x58) != (void *)0x0) {
        free(*(void **)((long)pvVar17 + 0x58));
      }
      pvVar9 = local_b8;
    }
    free(pvVar9);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_frontend::generate_endpoint_clusters() */

void __thiscall basisu::basisu_frontend::generate_endpoint_clusters(basisu_frontend *this)

{
  vector<basisu::vector<unsigned_int>> *this_00;
  long lVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  long *plVar14;
  
  basisu::debug_printf("Begin endpoint quantization\n");
  uVar5 = *(uint *)(this + 0x10);
  uVar6 = 0;
  if (this[0x21] != (basisu_frontend)0x0) {
    uVar6 = std::thread::hardware_concurrency();
    if (8 < (int)uVar6) {
      uVar6 = 8;
    }
  }
  plVar8 = *(long **)(this + 0x38);
  if ((plVar8 != (long *)0x0) &&
     (uVar4 = (int)(plVar8[1] - *plVar8 >> 3) + 1, (int)uVar4 < (int)uVar6)) {
    uVar6 = uVar4;
  }
  basisu::debug_printf("max_threads: %u\n",(ulong)uVar6);
  uVar4 = 0;
  this_00 = (vector<basisu::vector<unsigned_int>> *)(this + 0xd0);
  if (this[0x49] != (basisu_frontend)0x0) {
    uVar4 = (uint)(0xff < uVar5) << 4;
  }
  bVar3 = generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<6u,float>>>
                    ((tree_vector_quant *)(this + 0x98),*(uint *)(this + 0x10),uVar4,
                     (vector *)(this + 0xc0),(vector *)this_00,uVar6,*(job_pool **)(this + 0x38),
                     true);
  if (!bVar3) {
                    /* WARNING: Subroutine does not return */
    handle_verify_failure(0x391);
  }
  if (this[0x49] == (basisu_frontend)0x0) goto LAB_0010f5e9;
  if (*(int *)(this + 0xd8) == 0) {
    vector<basisu::vector<unsigned_int>>::resize(this_00,0,false);
    vector<basisu::vector<unsigned_int>>::resize(this_00,1,false);
    uVar5 = 0;
    if (*(int *)(this + 0x40) != 0) {
      do {
        plVar8 = *(long **)(this + 0xd0);
        iVar2 = uVar5 * 2;
        uVar6 = *(uint *)(plVar8 + 1);
        if (*(uint *)((long)plVar8 + 0xc) <= uVar6) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar8,(bool)((char)uVar6 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar6 = *(uint *)(plVar8 + 1);
        }
        *(int *)(*plVar8 + (ulong)uVar6 * 4) = iVar2;
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        plVar8 = *(long **)(this + 0xd0);
        uVar6 = *(uint *)(plVar8 + 1);
        if (*(uint *)((long)plVar8 + 0xc) <= uVar6) {
          basisu::elemental_vector::increase_capacity
                    ((uint)plVar8,(bool)((char)uVar6 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar6 = *(uint *)(plVar8 + 1);
        }
        uVar5 = uVar5 + 1;
        *(int *)(*plVar8 + (ulong)uVar6 * 4) = iVar2 + 1;
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        uVar6 = *(uint *)(this + 0x40);
      } while (uVar5 < uVar6);
      goto LAB_0010f4c5;
    }
    if (*(int *)(this + 0xe8) != 0) {
      *(undefined4 *)(this + 0xe8) = 0;
      goto LAB_0010f4e7;
    }
    if (*(int *)(this + 0xd8) != 0) goto LAB_0010f4f1;
  }
  else {
    uVar6 = *(uint *)(this + 0x40);
LAB_0010f4c5:
    if (*(int *)(this + 0xe8) != 0) {
      *(undefined4 *)(this + 0xe8) = 0;
    }
    if (uVar6 != 0) {
      if (*(uint *)(this + 0xec) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0xe0,SUB41(uVar6,0),(uint)(uVar6 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      }
      memset((void *)((ulong)*(uint *)(this + 0xe8) + *(long *)(this + 0xe0)),0,
             (ulong)(uVar6 - *(uint *)(this + 0xe8)));
      *(uint *)(this + 0xe8) = uVar6;
      uVar11 = 0;
      do {
        *(undefined1 *)(*(long *)(this + 0xe0) + uVar11) = 0xff;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(this + 0xe8));
    }
LAB_0010f4e7:
    if (*(int *)(this + 0xd8) != 0) {
LAB_0010f4f1:
      lVar12 = 0;
      do {
        lVar9 = 0;
        plVar8 = (long *)(lVar12 * 0x10 + *(long *)(this + 0xd0));
        if ((int)plVar8[1] != 0) {
          do {
            lVar1 = lVar9 * 4;
            lVar9 = lVar9 + 1;
            *(char *)(*(long *)(this + 0xe0) + (ulong)(*(uint *)(*plVar8 + lVar1) >> 1)) =
                 (char)lVar12;
          } while ((uint)lVar9 < *(uint *)(plVar8 + 1));
        }
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(this + 0xd8));
    }
    if (*(uint *)(this + 0x40) != 0) {
      pcVar7 = *(char **)(this + 0xe0);
      pcVar10 = pcVar7 + *(uint *)(this + 0x40);
      do {
        if (*pcVar7 == -1) {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0x3b1);
        }
        pcVar7 = pcVar7 + 1;
      } while (pcVar10 != pcVar7);
    }
  }
  if (*(uint *)(this + 200) != 0) {
    plVar8 = *(long **)(this + 0xc0);
    plVar14 = plVar8 + (ulong)*(uint *)(this + 200) * 2;
    do {
      if (*(uint *)(plVar8 + 1) != 0) {
        uVar11 = 0;
        cVar13 = '\0';
        do {
          uVar5 = *(uint *)(*plVar8 + uVar11 * 4) >> 1;
          if (*(uint *)(this + 0xe8) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0x3be);
          }
          if (uVar11 == 0) {
            cVar13 = *(char *)(*(long *)(this + 0xe0) + (ulong)uVar5);
          }
          else if (*(char *)(*(long *)(this + 0xe0) + (ulong)uVar5) != cVar13) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0x3c6);
          }
          uVar11 = uVar11 + 1;
        } while (*(uint *)(plVar8 + 1) != uVar11);
      }
      plVar8 = plVar8 + 2;
    } while (plVar14 != plVar8);
  }
LAB_0010f5e9:
  if (this[0x1d] == (basisu_frontend)0x0) {
    return;
  }
  basisu::debug_printf
            ("Total endpoint clusters: %u, parent clusters: %u\n",(ulong)*(uint *)(this + 200),
             (ulong)*(uint *)(this + 0xd8));
  return;
}



/* basisu::basisu_frontend::compress() */

undefined8 __thiscall basisu::basisu_frontend::compress(basisu_frontend *this)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  basisu_frontend bVar10;
  char acStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basisu_frontend::compress\n");
  *(ulong *)(this + 0x40) = CONCAT44(*(int *)this << 4,*(undefined4 *)this);
  init_etc1_images(this);
  if (*(long *)(this + 0x28) == 0) {
    init_endpoint_training_vectors(this);
    generate_endpoint_clusters(this);
    if (*(int *)(this + 0x4c) != 0) {
      uVar8 = 0;
      if (this[0x20] == (basisu_frontend)0x0) goto LAB_0010f96e;
      do {
        cVar3 = check_etc1s_constraints(this);
        if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0xba);
        }
        if ((*(int *)(this + 0xd8) != 0) &&
           (cVar3 = validate_endpoint_cluster_hierarchy(this,false), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
          handle_verify_failure(0xbc);
        }
        if (uVar8 != 0) goto LAB_0010fa03;
        bVar10 = this[0x20];
        while( true ) {
          if (((bVar10 != (basisu_frontend)0x0) && (*(int *)(this + 0xd8) != 0)) &&
             (cVar3 = validate_endpoint_cluster_hierarchy(this,false), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0xc6);
          }
LAB_0010f96e:
          generate_endpoint_codebook(this,uVar8);
          if ((this[0x1e] != (basisu_frontend)0x0) && (this[0x1f] != (basisu_frontend)0x0)) {
            __snprintf_chk(acStack_138,0x100,2,0x100,"endpoint_cluster_vis_pre_%u.png",uVar8);
            dump_endpoint_clusterization_visualization(this,acStack_138,false);
          }
          bVar10 = this[0x48];
          if (bVar10 != (basisu_frontend)0x0) {
            iVar4 = refine_endpoint_clusterization(this);
            if (((*(int *)(this + 0x24) == 3) && (uVar8 == 0)) && (*(int *)(this + 0x4c) == 1)) {
              eliminate_redundant_or_empty_endpoint_clusters(this);
              generate_endpoint_codebook(this,1);
            }
            if ((this[0x1e] != (basisu_frontend)0x0) && (this[0x1f] != (basisu_frontend)0x0)) {
              __snprintf_chk(acStack_138,0x100,2,0x100,"endpoint_cluster_vis_post_%u.png",uVar8);
              dump_endpoint_clusterization_visualization(this,acStack_138,false);
              __snprintf_chk(acStack_138,0x100,2,0x100,"endpoint_cluster_colors_vis_post_%u.png",
                             uVar8);
              dump_endpoint_clusterization_visualization(this,acStack_138,true);
            }
            bVar10 = (basisu_frontend)(iVar4 == 0);
          }
          if (((this[0x20] != (basisu_frontend)0x0) && (*(int *)(this + 0xd8) != 0)) &&
             (cVar3 = validate_endpoint_cluster_hierarchy(this,false), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0xef);
          }
          eliminate_redundant_or_empty_endpoint_clusters(this);
          if (((this[0x20] != (basisu_frontend)0x0) && (*(int *)(this + 0xd8) != 0)) &&
             (cVar3 = validate_endpoint_cluster_hierarchy(this,false), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
            handle_verify_failure(0xf6);
          }
          if (this[0x1d] != (basisu_frontend)0x0) {
            basisu::debug_printf("Total endpoint clusters: %u\n");
          }
          if ((bVar10 != (basisu_frontend)0x0) ||
             (uVar8 = uVar8 + 1, *(uint *)(this + 0x4c) <= uVar8)) goto LAB_0010fa70;
          if (this[0x20] != (basisu_frontend)0x0) break;
LAB_0010fa03:
          introduce_new_endpoint_clusters(this);
          bVar10 = this[0x20];
        }
      } while( true );
    }
LAB_0010fa70:
    if ((this[0x20] != (basisu_frontend)0x0) &&
       (cVar3 = check_etc1s_constraints(this), cVar3 == '\0')) {
                    /* WARNING: Subroutine does not return */
      handle_verify_failure(0x102);
    }
    generate_block_endpoint_clusters(this);
    create_initial_packed_texture(this);
    generate_selector_clusters(this);
    if (this[0x4a] != (basisu_frontend)0x0) {
      compute_selector_clusters_within_each_parent_cluster(this);
    }
    if (*(int *)(this + 0x18) == 0) {
      create_optimized_selector_codebook(this,0);
      find_optimal_selector_clusters_for_each_block(this);
      introduce_special_selector_clusters(this);
    }
    else {
      uVar8 = *(uint *)(this + 0x50);
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          create_optimized_selector_codebook(this,uVar9);
          find_optimal_selector_clusters_for_each_block(this);
          introduce_special_selector_clusters(this);
          if (((3 < *(uint *)(this + 0x18)) || (*(int *)(this + 0x24) == 3)) &&
             (iVar4 = refine_block_endpoints_given_selectors(this), iVar4 == 0)) break;
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
    }
    optimize_selector_codebook(this);
    if (this[0x1d] != (basisu_frontend)0x0) {
      basisu::debug_printf("Total selector clusters: %u\n",(ulong)*(uint *)(this + 0x128));
    }
  }
  else {
    init_global_codebooks(this);
  }
  uVar8 = *(uint *)(this + 0x40);
  if (uVar8 != 0) {
    puVar1 = *(uint **)(this + 0x110);
    lVar2 = *(long *)(this + 0x100);
    puVar5 = puVar1;
    do {
      puVar6 = puVar5 + 2;
      uVar9 = puVar5[1];
      *(undefined1 *)(lVar2 + 0x30 + (ulong)*puVar5 * 0x38) = 1;
      *(undefined1 *)(lVar2 + 0x30 + (ulong)uVar9 * 0x38) = 1;
      puVar5 = puVar6;
    } while (puVar6 != puVar1 + (ulong)uVar8 * 2);
  }
  if (this[0x20] != (basisu_frontend)0x0) {
    basisu::debug_printf("validate_output\n");
    cVar3 = check_etc1s_constraints(this);
    if ((cVar3 == '\0') || (cVar3 = validate_output(this), cVar3 == '\0')) {
      uVar7 = 0;
      goto LAB_0010f897;
    }
  }
  basisu::debug_printf("basisu_frontend::compress: Done\n");
  uVar7 = 1;
LAB_0010f897:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* basisu::vector<std::pair<basisu::vec<6u, float>, unsigned long> >::object_mover(void*, void*,
   unsigned int) */

void basisu::vector<std::pair<basisu::vec<6u,float>,unsigned_long>>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((ulong)param_3 * 0x20 + (long)param_2);
  if (param_2 != pvVar3) {
    do {
      pvVar2 = (void *)((long)param_2 + 0x20);
      pvVar1 = memmove(param_1,param_2,0x18);
      param_1 = (void *)((long)pvVar1 + 0x20);
      *(undefined8 *)((long)pvVar1 + 0x18) = *(undefined8 *)((long)param_2 + 0x18);
      param_2 = pvVar2;
    } while (pvVar3 != pvVar2);
  }
  return;
}



/* basisu::vector<std::pair<basisu::vec<16u, float>, unsigned long> >::object_mover(void*, void*,
   unsigned int) */

void basisu::vector<std::pair<basisu::vec<16u,float>,unsigned_long>>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((long)param_2 + (ulong)param_3 * 0x48);
  if (param_2 != pvVar1) {
    do {
      pvVar3 = (void *)((long)param_2 + 0x48);
      pvVar2 = memmove(param_1,param_2,0x40);
      param_1 = (void *)((long)pvVar2 + 0x48);
      *(undefined8 *)((long)pvVar2 + 0x40) = *(undefined8 *)((long)param_2 + 0x40);
      param_2 = pvVar3;
    } while (pvVar1 != pvVar3);
  }
  return;
}



/* std::_Function_handler<void (),
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,
   float> > >(basisu::tree_vector_quant<basisu::vec<16u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x58);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      puVar3[10] = puVar1[10];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x58);
    }
    return 0;
  }
  *param_1 = (long)&basisu::
                    generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
                    ::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Function_handler<void (),
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,
   float> > >(basisu::tree_vector_quant<basisu::vec<6u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = *param_2;
    }
    else if (param_3 == 2) {
      puVar1 = (undefined8 *)*param_2;
      puVar3 = (undefined8 *)operator_new(0x58);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      puVar3[10] = puVar1[10];
      *param_1 = (long)puVar3;
    }
    else if ((param_3 == 3) && ((void *)*param_1 != (void *)0x0)) {
      operator_delete((void *)*param_1,0x58);
    }
    return 0;
  }
  *param_1 = (long)&basisu::
                    generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
                    ::{lambda()#1}::typeinfo;
  return 0;
}



/* std::_Hashtable<basisu::vec<16u, float>, std::pair<basisu::vec<16u, float> const,
   basisu::weighted_block_group>, std::allocator<std::pair<basisu::vec<16u, float> const,
   basisu::weighted_block_group> >, std::__detail::_Select1st, std::equal_to<basisu::vec<16u, float>
   >, basisu::bit_hasher<basisu::vec<16u, float> >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_rehash_aux(unsigned long,
   std::integral_constant<bool, true>) [clone .isra.0] */

void std::
     _Hashtable<basisu::vec<16u,float>,std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<16u,float>>,basisu::bit_hasher<basisu::vec<16u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
     ::_M_rehash_aux(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *__s;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 == 1) {
    __s = param_1 + 6;
    param_1[6] = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      if (param_2 >> 0x3d != 0) {
        std::__throw_bad_array_new_length();
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_alloc();
    }
    __s = (undefined8 *)operator_new(param_2 * 8);
    memset(__s,0,param_2 * 8);
  }
  plVar4 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = 0;
    do {
      while( true ) {
        plVar2 = (long *)*plVar4;
        uVar3 = plVar4[0xc];
        plVar1 = __s + uVar3 % param_2;
        if ((long *)*plVar1 != (long *)0x0) break;
        *plVar4 = param_1[2];
        param_1[2] = plVar4;
        *plVar1 = (long)(param_1 + 2);
        if (*plVar4 != 0) {
          __s[uVar5] = plVar4;
        }
        plVar4 = plVar2;
        uVar5 = uVar3 % param_2;
        if (plVar2 == (long *)0x0) goto LAB_001109c4;
      }
      *plVar4 = *(long *)*plVar1;
      *(long **)*plVar1 = plVar4;
      plVar4 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_001109c4:
  if ((undefined8 *)*param_1 != param_1 + 6) {
    operator_delete((undefined8 *)*param_1,param_1[1] << 3);
  }
  param_1[1] = param_2;
  *param_1 = __s;
  return;
}



/* std::_Hashtable<basisu::vec<6u, float>, std::pair<basisu::vec<6u, float> const,
   basisu::weighted_block_group>, std::allocator<std::pair<basisu::vec<6u, float> const,
   basisu::weighted_block_group> >, std::__detail::_Select1st, std::equal_to<basisu::vec<6u, float>
   >, basisu::bit_hasher<basisu::vec<6u, float> >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_rehash_aux(unsigned long,
   std::integral_constant<bool, true>) [clone .isra.0] */

void std::
     _Hashtable<basisu::vec<6u,float>,std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<6u,float>>,basisu::bit_hasher<basisu::vec<6u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
     ::_M_rehash_aux(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *__s;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 == 1) {
    __s = param_1 + 6;
    param_1[6] = 0;
  }
  else {
    if (param_2 >> 0x3c != 0) {
      if (param_2 >> 0x3d != 0) {
        std::__throw_bad_array_new_length();
      }
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_alloc();
    }
    __s = (undefined8 *)operator_new(param_2 * 8);
    memset(__s,0,param_2 * 8);
  }
  plVar4 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar4 != (long *)0x0) {
    uVar5 = 0;
    do {
      while( true ) {
        plVar2 = (long *)*plVar4;
        uVar3 = plVar4[7];
        plVar1 = __s + uVar3 % param_2;
        if ((long *)*plVar1 != (long *)0x0) break;
        *plVar4 = param_1[2];
        param_1[2] = plVar4;
        *plVar1 = (long)(param_1 + 2);
        if (*plVar4 != 0) {
          __s[uVar5] = plVar4;
        }
        plVar4 = plVar2;
        uVar5 = uVar3 % param_2;
        if (plVar2 == (long *)0x0) goto LAB_00110ad4;
      }
      *plVar4 = *(long *)*plVar1;
      *(long **)*plVar1 = plVar4;
      plVar4 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_00110ad4:
  if ((undefined8 *)*param_1 != param_1 + 6) {
    operator_delete((undefined8 *)*param_1,param_1[1] << 3);
  }
  param_1[1] = param_2;
  *param_1 = __s;
  return;
}



/* basisu::vector<basisu::tree_vector_quant<basisu::vec<16u, float>
   >::tsvq_node>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::tree_vector_quant<basisu::vec<16u,float>>::tsvq_node>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((ulong)param_3 * 0x70 + (long)param_2);
  if ((undefined4 *)param_2 != puVar5) {
    do {
      while( true ) {
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_2;
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + 8);
        *(undefined4 *)param_1 = uVar2;
        memmove((undefined4 *)((long)param_1 + 0x10),(undefined4 *)((long)param_2 + 0x10),0x40);
        uVar4 = *(undefined8 *)((long)param_2 + 0x50);
        *(undefined8 *)((long)param_1 + 0x58) = 0;
        *(undefined8 *)((long)param_1 + 0x50) = uVar4;
        uVar2 = *(undefined4 *)((long)param_2 + 0x60);
        *(undefined8 *)((long)param_1 + 0x60) = 0;
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x58,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        uVar3 = *(uint *)((long)param_2 + 0x60);
        *(uint *)((long)param_1 + 0x60) = uVar3;
        if (*(void **)((long)param_1 + 0x58) != (void *)0x0) break;
LAB_00110b6d:
        __ptr = *(void **)((long)param_2 + 0x58);
        *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)((long)param_2 + 0x68);
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        param_2 = (void *)((long)param_2 + 0x70);
        param_1 = (void *)((long)param_1 + 0x70);
        if (puVar5 == (undefined4 *)param_2) {
          return;
        }
      }
      if (*(void **)((long)param_2 + 0x58) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x58),*(void **)((long)param_2 + 0x58),(ulong)uVar3 * 4);
        goto LAB_00110b6d;
      }
      puVar1 = (undefined4 *)((long)param_2 + 0x68);
      param_2 = (void *)((long)param_2 + 0x70);
      *(undefined4 *)((long)param_1 + 0x68) = *puVar1;
      param_1 = (undefined4 *)((long)param_1 + 0x70);
    } while (puVar5 != (undefined4 *)param_2);
  }
  return;
}



/* basisu::vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::object_mover(void*, void*,
   unsigned int) */

void basisu::vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)((long)param_2 + (ulong)param_3 * 0x38);
  if ((undefined4 *)param_2 != puVar1) {
    do {
      while( true ) {
                    /* WARNING: Load size is inaccurate */
        uVar4 = *(undefined8 *)((long)param_2 + 0x10);
        uVar5 = *(undefined8 *)((long)param_2 + 0x18);
        *(undefined4 *)param_1 = *param_2;
        uVar2 = *(undefined4 *)((long)param_2 + 4);
        *(undefined8 *)((long)param_1 + 0x10) = uVar4;
        *(undefined8 *)((long)param_1 + 0x18) = uVar5;
        *(undefined4 *)((long)param_1 + 4) = uVar2;
        uVar4 = *(undefined8 *)((long)param_2 + 8);
        *(undefined8 *)((long)param_1 + 0x20) = 0;
        *(undefined8 *)((long)param_1 + 8) = uVar4;
        uVar2 = *(undefined4 *)((long)param_2 + 0x28);
        *(undefined8 *)((long)param_1 + 0x28) = 0;
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x20,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        uVar3 = *(uint *)((long)param_2 + 0x28);
        *(uint *)((long)param_1 + 0x28) = uVar3;
        if (*(void **)((long)param_1 + 0x20) != (void *)0x0) break;
LAB_00110c69:
        __ptr = *(void **)((long)param_2 + 0x20);
        *(undefined2 *)((long)param_1 + 0x30) = *(undefined2 *)((long)param_2 + 0x30);
        *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        param_2 = (void *)((long)param_2 + 0x38);
        param_1 = (void *)((long)param_1 + 0x38);
        if (puVar1 == (undefined4 *)param_2) {
          return;
        }
      }
      if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x20),*(void **)((long)param_2 + 0x20),(ulong)uVar3 << 2);
        goto LAB_00110c69;
      }
      puVar6 = (undefined4 *)((long)param_2 + 0x38);
      *(undefined2 *)((long)param_1 + 0x30) = *(undefined2 *)((long)param_2 + 0x30);
      *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)((long)param_2 + 0x32);
      param_1 = (undefined4 *)((long)param_1 + 0x38);
      param_2 = puVar6;
    } while (puVar1 != puVar6);
  }
  return;
}



/* basisu::vector<basisu::tree_vector_quant<basisu::vec<6u, float>
   >::tsvq_node>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::tree_vector_quant<basisu::vec<6u,float>>::tsvq_node>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  void *__ptr;
  undefined8 uVar5;
  
  puVar2 = (undefined4 *)((long)param_2 + (ulong)param_3 * 0x48);
  if ((undefined4 *)param_2 != puVar2) {
    do {
      while( true ) {
                    /* WARNING: Load size is inaccurate */
        uVar3 = *param_2;
        *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + 8);
        *(undefined4 *)param_1 = uVar3;
        memmove((undefined4 *)((long)param_1 + 0x10),(undefined4 *)((long)param_2 + 0x10),0x18);
        uVar5 = *(undefined8 *)((long)param_2 + 0x28);
        *(undefined8 *)((long)param_1 + 0x30) = 0;
        *(undefined8 *)((long)param_1 + 0x28) = uVar5;
        uVar3 = *(undefined4 *)((long)param_2 + 0x38);
        *(undefined8 *)((long)param_1 + 0x38) = 0;
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x30,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        uVar4 = *(uint *)((long)param_2 + 0x38);
        *(uint *)((long)param_1 + 0x38) = uVar4;
        if (*(void **)((long)param_1 + 0x30) != (void *)0x0) break;
LAB_00110d55:
        __ptr = *(void **)((long)param_2 + 0x30);
        *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)((long)param_2 + 0x40);
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        param_2 = (void *)((long)param_2 + 0x48);
        param_1 = (void *)((long)param_1 + 0x48);
        if (puVar2 == (undefined4 *)param_2) {
          return;
        }
      }
      if (*(void **)((long)param_2 + 0x30) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x30),*(void **)((long)param_2 + 0x30),(ulong)uVar4 * 4);
        goto LAB_00110d55;
      }
      puVar1 = (undefined4 *)((long)param_2 + 0x40);
      param_2 = (void *)((long)param_2 + 0x48);
      *(undefined4 *)((long)param_1 + 0x40) = *puVar1;
      param_1 = (undefined4 *)((long)param_1 + 0x48);
    } while (puVar2 != (undefined4 *)param_2);
  }
  return;
}



/* std::pair<std::__detail::_Node_iterator<std::pair<basisu::vec<6u, float> const,
   basisu::weighted_block_group>, false, true>, bool> std::_Hashtable<basisu::vec<6u, float>,
   std::pair<basisu::vec<6u, float> const, basisu::weighted_block_group>,
   std::allocator<std::pair<basisu::vec<6u, float> const, basisu::weighted_block_group> >,
   std::__detail::_Select1st, std::equal_to<basisu::vec<6u, float> >,
   basisu::bit_hasher<basisu::vec<6u, float> >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_emplace<std::pair<basisu::vec<6u,
   float>, basisu::weighted_block_group> >(std::integral_constant<bool, true>,
   std::pair<basisu::vec<6u, float>, basisu::weighted_block_group>&&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<basisu::vec<6u,float>,std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<6u,float>>,basisu::bit_hasher<basisu::vec<6u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::_M_emplace<std::pair<basisu::vec<6u,float>,basisu::weighted_block_group>>
          (long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 extraout_RDX;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  plVar7 = (long *)operator_new(0x40);
  lVar10 = *param_2;
  lVar3 = param_2[1];
  lVar4 = param_2[5];
  *plVar7 = 0;
  plVar7[1] = lVar10;
  plVar7[2] = lVar3;
  plVar7[3] = param_2[2];
  lVar10 = param_2[3];
  plVar7[5] = 0;
  plVar7[4] = lVar10;
  plVar7[6] = 0;
  basisu::elemental_vector::increase_capacity
            ((int)plVar7 + 0x28,SUB41((int)lVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false
            );
  uVar6 = *(uint *)(param_2 + 5);
  *(uint *)(plVar7 + 6) = uVar6;
  if (((void *)plVar7[5] != (void *)0x0) && ((void *)param_2[4] != (void *)0x0)) {
    memcpy((void *)plVar7[5],(void *)param_2[4],(ulong)uVar6 * 4);
  }
  if (param_1[3] == 0) {
    for (plVar8 = (long *)param_1[2]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      lVar10 = 8;
      while (*(float *)((long)plVar7 + lVar10) == *(float *)((long)plVar8 + lVar10)) {
        lVar10 = lVar10 + 4;
        if (lVar10 == 0x20) goto LAB_00110edd;
      }
    }
  }
  uVar6 = basisu::hash_hsieh((uchar *)(plVar7 + 1),0x18);
  uVar1 = param_1[1];
  uVar14 = (ulong)uVar6;
  uVar11 = uVar14 % uVar1;
  if ((param_1[3] != 0) &&
     (puVar13 = *(undefined8 **)(*param_1 + uVar11 * 8), puVar13 != (undefined8 *)0x0)) {
    uVar9 = ((undefined8 *)*puVar13)[7];
    puVar2 = (undefined8 *)*puVar13;
    do {
      puVar12 = puVar2;
      if (uVar14 == uVar9) {
        lVar10 = 8;
        while (*(float *)((long)plVar7 + lVar10) == *(float *)((long)puVar12 + lVar10)) {
          lVar10 = lVar10 + 4;
          if (lVar10 == 0x20) {
            plVar8 = (long *)*puVar13;
            if (plVar8 != (long *)0x0) goto LAB_00110edd;
            goto LAB_00110fb0;
          }
        }
      }
      puVar2 = (undefined8 *)*puVar12;
    } while ((puVar2 != (undefined8 *)0x0) &&
            (uVar9 = puVar2[7], puVar13 = puVar12, uVar11 == uVar9 % uVar1));
  }
LAB_00110fb0:
  cVar5 = std::__detail::_Prime_rehash_policy::_M_need_rehash((ulong)(param_1 + 4),uVar1,param_1[3])
  ;
  if (cVar5 != '\0') {
    _M_rehash_aux(param_1,extraout_RDX);
    uVar11 = uVar14 % (ulong)param_1[1];
  }
  lVar10 = *param_1;
  plVar7[7] = uVar14;
  plVar8 = (long *)(lVar10 + uVar11 * 8);
  if ((long *)*plVar8 == (long *)0x0) {
    lVar3 = param_1[2];
    param_1[2] = (long)plVar7;
    *plVar7 = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar10 + (*(ulong *)(lVar3 + 0x38) % (ulong)param_1[1]) * 8) = plVar7;
    }
    *plVar8 = (long)(param_1 + 2);
  }
  else {
    *plVar7 = *(long *)*plVar8;
    *(long **)*plVar8 = plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar15 = 1;
LAB_00110efe:
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = plVar7;
  return auVar16;
LAB_00110edd:
  uVar15 = 0;
  if ((void *)plVar7[5] != (void *)0x0) {
    free((void *)plVar7[5]);
  }
  operator_delete(plVar7,0x40);
  plVar7 = plVar8;
  goto LAB_00110efe;
}



/* std::pair<std::__detail::_Node_iterator<std::pair<basisu::vec<16u, float> const,
   basisu::weighted_block_group>, false, true>, bool> std::_Hashtable<basisu::vec<16u, float>,
   std::pair<basisu::vec<16u, float> const, basisu::weighted_block_group>,
   std::allocator<std::pair<basisu::vec<16u, float> const, basisu::weighted_block_group> >,
   std::__detail::_Select1st, std::equal_to<basisu::vec<16u, float> >,
   basisu::bit_hasher<basisu::vec<16u, float> >, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<true, false, true> >::_M_emplace<std::pair<basisu::vec<16u,
   float>, basisu::weighted_block_group> >(std::integral_constant<bool, true>,
   std::pair<basisu::vec<16u, float>, basisu::weighted_block_group>&&) [clone .isra.0] */

undefined1  [16]
std::
_Hashtable<basisu::vec<16u,float>,std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<16u,float>>,basisu::bit_hasher<basisu::vec<16u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
::_M_emplace<std::pair<basisu::vec<16u,float>,basisu::weighted_block_group>>
          (long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 extraout_RDX;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  
  plVar12 = (long *)operator_new(0x68);
  lVar15 = *param_2;
  lVar3 = param_2[1];
  lVar4 = param_2[2];
  lVar5 = param_2[3];
  *plVar12 = 0;
  lVar9 = param_2[10];
  plVar12[1] = lVar15;
  plVar12[2] = lVar3;
  lVar3 = param_2[4];
  lVar6 = param_2[5];
  lVar7 = param_2[6];
  lVar8 = param_2[7];
  lVar15 = param_2[8];
  plVar12[3] = lVar4;
  plVar12[4] = lVar5;
  plVar12[5] = lVar3;
  plVar12[6] = lVar6;
  plVar12[7] = lVar7;
  plVar12[8] = lVar8;
  plVar12[9] = lVar15;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  basisu::elemental_vector::increase_capacity
            ((int)plVar12 + 0x50,SUB41((int)lVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
             false);
  uVar11 = *(uint *)(param_2 + 10);
  *(uint *)(plVar12 + 0xb) = uVar11;
  if (((void *)plVar12[10] != (void *)0x0) && ((void *)param_2[9] != (void *)0x0)) {
    memcpy((void *)plVar12[10],(void *)param_2[9],(ulong)uVar11 * 4);
  }
  if (param_1[3] == 0) {
    for (plVar13 = (long *)param_1[2]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      lVar15 = 8;
      while (*(float *)((long)plVar12 + lVar15) == *(float *)((long)plVar13 + lVar15)) {
        lVar15 = lVar15 + 4;
        if (lVar15 == 0x48) goto LAB_00111120;
      }
    }
  }
  uVar11 = basisu::hash_hsieh((uchar *)(plVar12 + 1),0x40);
  uVar1 = param_1[1];
  uVar18 = (ulong)uVar11;
  uVar16 = uVar18 % uVar1;
  if ((param_1[3] != 0) &&
     (puVar19 = *(undefined8 **)(*param_1 + uVar16 * 8), puVar19 != (undefined8 *)0x0)) {
    uVar14 = ((undefined8 *)*puVar19)[0xc];
    puVar2 = (undefined8 *)*puVar19;
    do {
      puVar17 = puVar2;
      if (uVar18 == uVar14) {
        lVar15 = 8;
        while (*(float *)((long)plVar12 + lVar15) == *(float *)((long)puVar17 + lVar15)) {
          lVar15 = lVar15 + 4;
          if (lVar15 == 0x48) {
            plVar13 = (long *)*puVar19;
            if (plVar13 != (long *)0x0) goto LAB_00111120;
            goto LAB_00111200;
          }
        }
      }
      puVar2 = (undefined8 *)*puVar17;
    } while ((puVar2 != (undefined8 *)0x0) &&
            (uVar14 = puVar2[0xc], puVar19 = puVar17, uVar16 == uVar14 % uVar1));
  }
LAB_00111200:
  cVar10 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                     ((ulong)(param_1 + 4),uVar1,param_1[3]);
  if (cVar10 != '\0') {
    _M_rehash_aux(param_1,extraout_RDX);
    uVar16 = uVar18 % (ulong)param_1[1];
  }
  lVar15 = *param_1;
  plVar12[0xc] = uVar18;
  plVar13 = (long *)(lVar15 + uVar16 * 8);
  if ((long *)*plVar13 == (long *)0x0) {
    lVar3 = param_1[2];
    param_1[2] = (long)plVar12;
    *plVar12 = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar15 + (*(ulong *)(lVar3 + 0x60) % (ulong)param_1[1]) * 8) = plVar12;
    }
    *plVar13 = (long)(param_1 + 2);
  }
  else {
    *plVar12 = *(long *)*plVar13;
    *(long **)*plVar13 = plVar12;
  }
  param_1[3] = param_1[3] + 1;
  uVar20 = 1;
LAB_00111141:
  auVar21._8_8_ = uVar20;
  auVar21._0_8_ = plVar12;
  return auVar21;
LAB_00111120:
  uVar20 = 0;
  if ((void *)plVar12[10] != (void *)0x0) {
    free((void *)plVar12[10]);
  }
  operator_delete(plVar12,0x68);
  plVar12 = plVar13;
  goto LAB_00111141;
}



/* basisu::image::image(unsigned int, unsigned int, unsigned int) */

void __thiscall basisu::image::image(image *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar8 = param_2 * param_3;
    if (uVar8 != 0) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0x10,SUB41(uVar8,0),(uint)(uVar8 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      *(uint *)(this + 0x18) = uVar8;
      if (*(long *)this == 0) {
        puVar1 = *(undefined4 **)(this + 0x10);
        puVar3 = puVar1;
        do {
          puVar4 = puVar3 + 1;
          *puVar3 = g_black_color;
          puVar3 = puVar4;
        } while (puVar1 + uVar8 != puVar4);
      }
      else {
        lVar5 = *(long *)(this + 0x10);
        uVar8 = *(uint *)this;
        iVar6 = 0;
        uVar7 = 0;
        while( true ) {
          uVar2 = 0;
          while( true ) {
            puVar1 = (undefined4 *)(lVar5 + (ulong)(iVar6 + uVar2) * 4);
            if ((uVar2 < uVar8) && (uVar7 < *(uint *)(this + 4))) {
              *puVar1 = *(undefined4 *)((ulong)(*(int *)(this + 8) * uVar7 + uVar2) * 4);
            }
            else {
              *puVar1 = g_black_color;
            }
            if (param_1 == uVar2 + 1) break;
            uVar2 = uVar2 + 1;
            uVar8 = *(uint *)this;
            lVar5 = *(long *)(this + 0x10);
          }
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + param_3;
          if (param_2 <= uVar7) break;
          uVar8 = *(uint *)this;
          lVar5 = *(long *)(this + 0x10);
        }
      }
    }
    *(uint *)this = param_1;
    *(uint *)(this + 4) = param_2;
    *(uint *)(this + 8) = param_3;
  }
  return;
}



/* basisu::etc_block::get_block_colors_etc1s(basisu::color_rgba*) const */

void __thiscall basisu::etc_block::get_block_colors_etc1s(etc_block *this,color_rgba *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  color_rgba cVar7;
  int iVar8;
  color_rgba cVar9;
  color_rgba cVar10;
  long in_FS_OFFSET;
  color_rgba local_24;
  byte local_23;
  byte local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::etc_block::unpack_color5
            (&local_24,
             (ushort)(((int)(uint)(byte)this[1] >> 3) << 5) |
             (ushort)(((int)(uint)(byte)*this >> 3) << 10) | (ushort)((int)(uint)(byte)this[2] >> 3)
             ,true);
  uVar2 = (uint)local_23;
  lVar4 = (long)((int)(uint)(byte)this[3] >> 5) * 0x10;
  iVar1 = *(int *)(&g_etc1_inten_tables + (long)((int)(uint)(byte)this[3] >> 5) * 2);
  iVar8 = (uint)local_22 + iVar1;
  if (iVar8 < 0) {
    iVar8 = 0;
    if ((int)(iVar1 + uVar2) < 0) {
LAB_001115d4:
      cVar10 = SUB41(iVar8,0);
      cVar7 = (color_rgba)0x0;
      iVar6 = iVar1 + (uint)(byte)local_24;
      if (-1 < iVar6) goto LAB_00111499;
      cVar9 = (color_rgba)0x0;
    }
    else {
LAB_00111480:
      iVar3 = iVar1 + uVar2;
      cVar10 = SUB41(iVar8,0);
      cVar7 = SUB41(iVar3,0);
      cVar9 = (color_rgba)0x0;
      iVar6 = iVar1 + (uint)(byte)local_24;
      if (-1 < iVar6) goto LAB_0011148a;
    }
  }
  else {
    iVar3 = iVar1 + uVar2;
    iVar6 = iVar1 + (uint)(byte)local_24;
    if (iVar8 < 0x100) {
      if (iVar3 < 0) goto LAB_001115d4;
      if (iVar3 < 0x100) goto LAB_00111480;
    }
    else {
      cVar10 = (color_rgba)0xff;
      if (iVar3 < 0x100) goto LAB_0011148a;
      iVar8 = -1;
    }
    cVar10 = SUB41(iVar8,0);
    iVar3 = -1;
LAB_0011148a:
    cVar7 = SUB41(iVar3,0);
    cVar9 = (color_rgba)0xff;
    if (iVar6 < 0x100) {
LAB_00111499:
      cVar9 = SUB41(iVar6,0);
    }
  }
  uVar5 = (uint)(byte)local_24;
  param_1[2] = cVar10;
  *param_1 = cVar9;
  param_1[1] = cVar7;
  param_1[3] = (color_rgba)0xff;
  iVar1 = *(int *)((long)&g_etc1_inten_tables + lVar4 + 4);
  iVar8 = (uint)local_22 + iVar1;
  if (iVar8 < 0) {
    iVar3 = iVar1 + uVar2;
    if (iVar3 < 0) {
      iVar8 = 0;
LAB_001116dd:
      iVar3 = 0;
    }
    else {
      iVar8 = 0;
    }
    if ((int)(iVar1 + uVar5) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_0011164d:
      cVar10 = (color_rgba)((char)iVar1 + (char)local_24);
    }
  }
  else {
    iVar3 = iVar1 + uVar2;
    if (iVar8 < 0x100) {
      if (iVar3 < 0) goto LAB_001116dd;
      if (0xff < iVar3) goto LAB_00111635;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar1 + uVar5)) goto LAB_0011163b;
    }
    else {
      iVar8 = -1;
      if (0xff < iVar3) {
        iVar8 = -1;
LAB_00111635:
        iVar3 = -1;
      }
LAB_0011163b:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar1 + uVar5) < 0x100) goto LAB_0011164d;
    }
  }
  param_1[6] = SUB41(iVar8,0);
  param_1[4] = cVar10;
  param_1[5] = SUB41(iVar3,0);
  param_1[7] = (color_rgba)0xff;
  iVar1 = *(int *)(basisu::etc_block::unpack_color5 + lVar4);
  iVar8 = (uint)local_22 + iVar1;
  if (iVar8 < 0) {
    iVar3 = iVar1 + uVar2;
    if (iVar3 < 0) {
      iVar8 = 0;
LAB_001116bd:
      iVar3 = 0;
    }
    else {
      iVar8 = 0;
    }
    if ((int)(iVar1 + uVar5) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00111685:
      cVar10 = (color_rgba)((char)iVar1 + (char)local_24);
    }
  }
  else {
    iVar3 = iVar1 + uVar2;
    if (iVar8 < 0x100) {
      if (iVar3 < 0) goto LAB_001116bd;
      if (0xff < iVar3) goto LAB_0011166d;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar1 + uVar5)) goto LAB_00111673;
    }
    else {
      iVar8 = -1;
      if (0xff < iVar3) {
        iVar8 = -1;
LAB_0011166d:
        iVar3 = -1;
      }
LAB_00111673:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar1 + uVar5) < 0x100) goto LAB_00111685;
    }
  }
  param_1[8] = cVar10;
  param_1[9] = SUB41(iVar3,0);
  param_1[10] = SUB41(iVar8,0);
  param_1[0xb] = (color_rgba)0xff;
  iVar1 = *(int *)(&DAT_00120034 + lVar4);
  iVar8 = (uint)local_22 + iVar1;
  if (iVar8 < 0) {
    iVar3 = uVar2 + iVar1;
    if (iVar3 < 0) {
      iVar8 = 0;
LAB_0011169c:
      iVar3 = 0;
      if (-1 < (int)(iVar1 + uVar5)) goto LAB_00111618;
    }
    else {
      iVar8 = 0;
      iVar6 = uVar5 + iVar1;
      if (-1 < iVar6) goto LAB_00111590;
    }
    iVar6 = 0;
  }
  else {
    iVar3 = uVar2 + iVar1;
    if (iVar8 < 0x100) {
      if (iVar3 < 0) goto LAB_0011169c;
      if (0xff < iVar3) goto LAB_00111602;
      iVar6 = 0;
      if ((int)(iVar1 + uVar5) < 0) goto LAB_00111590;
    }
    else {
      iVar8 = -1;
      if (0xff < iVar3) {
        iVar8 = -1;
LAB_00111602:
        iVar3 = -1;
      }
    }
    iVar6 = -1;
    if (0xff < (int)(iVar1 + uVar5)) goto LAB_00111590;
LAB_00111618:
    iVar6 = iVar1 + uVar5;
  }
LAB_00111590:
  param_1[0xc] = SUB41(iVar6,0);
  param_1[0xd] = SUB41(iVar3,0);
  param_1[0xe] = SUB41(iVar8,0);
  param_1[0xf] = (color_rgba)0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<unsigned int>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<unsigned_int>::resize(vector<unsigned_int> *this,ulong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = *(uint *)(this + 8);
    uVar2 = (uint)param_1;
    if (uVar1 != uVar2) {
      if (uVar1 <= uVar2) {
        if (*(uint *)(this + 0xc) < uVar2) {
          if (uVar1 + 1 == uVar2) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar1 = *(uint *)(this + 8);
        }
        memset((void *)(*(long *)this + (ulong)uVar1 * 4),0,(ulong)(uVar2 - uVar1) << 2);
      }
      *(uint *)(this + 8) = uVar2;
    }
    return;
  }
  return;
}



/* basisu::vector<unsigned int>::push_back(unsigned int const&) */

void __thiscall basisu::vector<unsigned_int>::push_back(vector<unsigned_int> *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar1 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,
               false);
    uVar1 = *(uint *)(this + 8);
  }
  *(uint *)(*(long *)this + (ulong)uVar1 * 4) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}



/* basisu::vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize(unsigned long, bool)
    */

void __thiscall
basisu::vector<basisu::basisu_frontend::endpoint_cluster_etc_params>::resize
          (vector<basisu::basisu_frontend::endpoint_cluster_etc_params> *this,ulong param_1,
          bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_1 >> 0x20 == 0) {
    uVar4 = *(uint *)(this + 8);
    uVar5 = (uint)param_1;
    if (uVar4 != uVar5) {
      if (uVar5 < uVar4) {
        lVar6 = *(long *)this + param_1 * 0x38;
        lVar2 = lVar6 + (ulong)(uVar4 - uVar5) * 0x38;
        do {
          if (*(void **)(lVar6 + 0x20) != (void *)0x0) {
            free(*(void **)(lVar6 + 0x20));
          }
          lVar6 = lVar6 + 0x38;
        } while (lVar2 != lVar6);
        *(uint *)(this + 8) = uVar5;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar5) {
          if (uVar4 + 1 == uVar5) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x38,true);
          uVar4 = *(uint *)(this + 8);
        }
        puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar4 * 0x38);
        puVar1 = puVar3 + (ulong)(uVar5 - uVar4) * 7;
        for (; puVar3 != puVar1; puVar3 = puVar3 + 7) {
          puVar3[4] = 0;
          puVar3[5] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
          *(undefined2 *)(puVar3 + 6) = 0;
          *(undefined1 *)((long)puVar3 + 0x32) = 0;
        }
        *(uint *)(this + 8) = uVar5;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<basisu::vector<unsigned int> >::resize(unsigned long, bool) */

void __thiscall
basisu::vector<basisu::vector<unsigned_int>>::resize
          (vector<basisu::vector<unsigned_int>> *this,ulong param_1,bool param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  if (param_1 >> 0x20 == 0) {
    uVar2 = *(uint *)(this + 8);
    if (uVar2 != uVar4) {
      if (uVar4 < uVar2) {
        puVar3 = (undefined8 *)(param_1 * 0x10 + *(long *)this);
        puVar1 = puVar3 + (ulong)(uVar2 - uVar4) * 2;
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            free((void *)*puVar3);
          }
          puVar3 = puVar3 + 2;
        } while (puVar1 != puVar3);
        *(uint *)(this + 8) = uVar4;
      }
      else {
        if (*(uint *)(this + 0xc) < uVar4) {
          if (uVar2 + 1 == uVar4) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x10,false);
          uVar2 = *(uint *)(this + 8);
        }
        puVar1 = (undefined8 *)((ulong)uVar2 * 0x10 + *(long *)this);
        puVar3 = puVar1 + (ulong)(uVar4 - uVar2) * 2;
        for (; puVar1 != puVar3; puVar1 = puVar1 + 2) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(this + 8) = uVar4;
      }
    }
    return;
  }
  return;
}



/* basisu::vector<unsigned int>::reserve(unsigned long) */

void __thiscall basisu::vector<unsigned_int>::reserve(vector<unsigned_int> *this,ulong param_1)

{
  void *__ptr;
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        return;
      }
      goto LAB_0011211b;
    }
    if (uVar2 < *(uint *)(this + 0xc)) {
      local_38 = 0;
      local_30 = 0;
      uVar1 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar2) {
        uVar1 = uVar2;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      operator=((vector<unsigned_int> *)&local_38,(vector *)this);
      __ptr = *(void **)this;
      *(undefined8 *)this = local_38;
      *(undefined8 *)(this + 8) = local_30;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011211b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* unsigned int* basisu::radix_sort<unsigned int>(unsigned int, unsigned int*, unsigned int*,
   unsigned int, unsigned int) */

uint * basisu::radix_sort<unsigned_int>
                 (uint param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  long in_FS_OFFSET;
  uint local_1448 [257];
  uint local_1044 [255];
  int aiStack_c48 [512];
  uint auStack_448 [258];
  long local_40;
  
  uVar12 = (ulong)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __memset_chk(local_1448 + 0x100,0,(ulong)param_5 << 10,0x1000);
  if (param_5 == 4) {
    lVar14 = (ulong)(param_1 & 0xfffffffe) * 4;
    if (param_2 != param_2 + param_1) {
      puVar8 = (uint *)((long)param_2 + uVar12);
      do {
        uVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        local_1448[(ulong)(uVar16 & 0xff) + 0x100] = local_1448[(ulong)(uVar16 & 0xff) + 0x100] + 1;
        aiStack_c48[uVar16 >> 8 & 0xff] = aiStack_c48[uVar16 >> 8 & 0xff] + 1;
        local_1448[(ulong)((uVar16 >> 0x18) + 0x300) + 0x100] =
             local_1448[(ulong)((uVar16 >> 0x18) + 0x300) + 0x100] + 1;
        auStack_448[(ulong)(uVar16 >> 0x10 & 0xff) - 0x100] =
             auStack_448[(ulong)(uVar16 >> 0x10 & 0xff) - 0x100] + 1;
      } while ((uint *)((long)(param_2 + param_1) + uVar12) != puVar8);
      puVar8 = param_2 + (param_1 & 0xfffffffe);
      goto LAB_001121f5;
    }
  }
  else {
    if (param_5 != 3) {
      if (param_5 == 2) {
        lVar14 = (ulong)(param_1 & 0xfffffffe) * 4;
        puVar4 = (uint *)((long)param_2 + uVar12);
        puVar8 = param_2 + (param_1 & 0xfffffffe);
        if (param_2 != puVar8) {
          do {
            uVar16 = *puVar4;
            uVar9 = puVar4[1];
            puVar4 = puVar4 + 2;
            aiStack_c48[uVar16 >> 8 & 0xff] = aiStack_c48[uVar16 >> 8 & 0xff] + 1;
            local_1448[(ulong)(uVar16 & 0xff) + 0x100] =
                 local_1448[(ulong)(uVar16 & 0xff) + 0x100] + 1;
            aiStack_c48[uVar9 >> 8 & 0xff] = aiStack_c48[uVar9 >> 8 & 0xff] + 1;
            local_1448[(ulong)(uVar9 & 0xff) + 0x100] =
                 local_1448[(ulong)(uVar9 & 0xff) + 0x100] + 1;
          } while ((uint *)((long)puVar8 + uVar12) != puVar4);
        }
        if ((param_1 & 1) != 0) {
          uVar16 = *(uint *)((long)puVar8 + uVar12);
          local_1448[(ulong)(uVar16 & 0xff) + 0x100] =
               local_1448[(ulong)(uVar16 & 0xff) + 0x100] + 1;
          aiStack_c48[uVar16 >> 8 & 0xff] = aiStack_c48[uVar16 >> 8 & 0xff] + 1;
        }
      }
      else {
        puVar4 = (uint *)0x0;
        if (param_5 != 1) {
LAB_00112390:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return puVar4;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar14 = (ulong)(param_1 & 0xfffffffe) * 4;
        puVar8 = param_2 + (param_1 & 0xfffffffe);
        pbVar2 = (byte *)((long)param_2 + uVar12);
        if (param_2 != puVar8) {
          do {
            pbVar3 = pbVar2 + 8;
            local_1448[(ulong)*pbVar2 + 0x100] = local_1448[(ulong)*pbVar2 + 0x100] + 1;
            local_1448[(ulong)pbVar2[4] + 0x100] = local_1448[(ulong)pbVar2[4] + 0x100] + 1;
            pbVar2 = pbVar3;
          } while ((byte *)(uVar12 + (long)puVar8) != pbVar3);
        }
        if ((param_1 & 1) != 0) {
          local_1448[(ulong)*(byte *)((long)puVar8 + (ulong)param_4) + 0x100] =
               local_1448[(ulong)*(byte *)((long)puVar8 + (ulong)param_4) + 0x100] + 1;
        }
      }
      goto LAB_001121f5;
    }
    lVar14 = (ulong)(param_1 & 0xfffffffe) * 4;
    if (param_2 + param_1 != param_2) {
      puVar8 = (uint *)((long)param_2 + uVar12);
      do {
        uVar16 = *puVar8;
        puVar8 = puVar8 + 1;
        local_1448[(ulong)(uVar16 & 0xff) + 0x100] = local_1448[(ulong)(uVar16 & 0xff) + 0x100] + 1;
        aiStack_c48[uVar16 >> 8 & 0xff] = aiStack_c48[uVar16 >> 8 & 0xff] + 1;
        auStack_448[(ulong)(uVar16 >> 0x10 & 0xff) - 0x100] =
             auStack_448[(ulong)(uVar16 >> 0x10 & 0xff) - 0x100] + 1;
      } while ((uint *)((long)(param_2 + param_1) + uVar12) != puVar8);
    }
  }
  puVar8 = (uint *)((long)param_2 + lVar14);
LAB_001121f5:
  uVar16 = 0;
  puVar17 = local_1448 + 0x101;
  puVar4 = param_3;
  do {
    puVar11 = param_2;
    uVar9 = 0;
    puVar6 = local_1448 + 1;
    puVar13 = puVar17;
    do {
      puVar6[-1] = uVar9;
      uVar1 = puVar13[-1];
      puVar7 = puVar6 + 2;
      *puVar6 = uVar9 + uVar1;
      uVar9 = uVar9 + uVar1 + *puVar13;
      puVar6 = puVar7;
      puVar13 = puVar13 + 2;
    } while (puVar7 != local_1448 + 0x101);
    bVar5 = (char)uVar16 * '\b';
    for (puVar6 = puVar11; puVar8 != puVar6; puVar6 = puVar6 + 2) {
      while( true ) {
        uVar9 = *puVar6;
        uVar15 = *(uint *)((long)puVar6 + uVar12) >> (bVar5 & 0x1f) & 0xff;
        uVar10 = *(uint *)((long)puVar6 + uVar12 + 4) >> (bVar5 & 0x1f) & 0xff;
        uVar1 = local_1448[uVar15];
        if (uVar15 != uVar10) break;
        puVar4[uVar1] = uVar9;
        uVar9 = puVar6[1];
        puVar6 = puVar6 + 2;
        local_1448[uVar15] = uVar1 + 2;
        puVar4[uVar1 + 1] = uVar9;
        if (puVar8 == puVar6) goto LAB_001122f3;
      }
      local_1448[uVar15] = uVar1 + 1;
      uVar15 = local_1448[uVar10];
      puVar4[uVar1] = uVar9;
      local_1448[uVar10] = uVar15 + 1;
      puVar4[uVar15] = puVar6[1];
    }
LAB_001122f3:
    if ((param_1 & 1) != 0) {
      puVar4[local_1448[*(uint *)((long)puVar8 + uVar12) >> (bVar5 & 0x1f) & 0xff]] = *puVar8;
    }
    uVar16 = uVar16 + 1;
    puVar17 = puVar17 + 0x100;
    if (param_5 <= uVar16) goto LAB_00112390;
    puVar8 = (uint *)((long)puVar4 + lVar14);
    param_2 = puVar4;
    puVar4 = puVar11;
  } while( true );
}



/* basisu::vector<basisu::fosc_selector_struct>::reserve(unsigned long) */

void __thiscall
basisu::vector<basisu::fosc_selector_struct>::reserve
          (vector<basisu::fosc_selector_struct> *this,ulong param_1)

{
  void *__ptr;
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        return;
      }
      goto LAB_0011264c;
    }
    if (uVar2 < *(uint *)(this + 0xc)) {
      local_38 = (void *)0x0;
      local_30 = 0;
      uVar1 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar2) {
        uVar1 = uVar2;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar2 = *(uint *)(this + 8);
      if (local_30._4_4_ < uVar2) {
        if (local_38 != (void *)0x0) {
          free(local_38);
          local_38 = (void *)0x0;
          uVar2 = *(uint *)(this + 8);
          local_30 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_38,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      }
      else if ((int)local_30 != 0) {
        local_30 = (ulong)local_30._4_4_ << 0x20;
      }
      if (local_38 != (void *)0x0) {
        if (*(void **)this == (void *)0x0) {
          *(void **)this = local_38;
          *(uint *)(this + 0xc) = local_30._4_4_;
          goto LAB_001125d8;
        }
        memcpy(local_38,*(void **)this,(ulong)*(uint *)(this + 8) << 2);
      }
      __ptr = *(void **)this;
      *(void **)this = local_38;
      *(uint *)(this + 0xc) = local_30._4_4_;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
LAB_001125d8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011264c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<basisu::color_rgba, std::allocator<basisu::color_rgba>
   >::_M_realloc_insert<basisu::color_rgba const&>(__gnu_cxx::__normal_iterator<basisu::color_rgba*,
   std::vector<basisu::color_rgba, std::allocator<basisu::color_rgba> > >, basisu::color_rgba
   const&) */

void __thiscall
std::vector<basisu::color_rgba,std::allocator<basisu::color_rgba>>::
_M_realloc_insert<basisu::color_rgba_const&>
          (vector<basisu::color_rgba,std::allocator<basisu::color_rgba>> *this,undefined4 *param_2,
          undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  
  puVar2 = *(undefined4 **)(this + 8);
  puVar3 = *(undefined4 **)this;
  uVar5 = (long)puVar2 - (long)puVar3 >> 2;
  if (uVar5 == 0x1fffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar3 == puVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00112770;
    uVar7 = 0x1fffffffffffffff;
    if (uVar5 + 1 < 0x2000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 2;
LAB_0011277a:
    puVar6 = (undefined4 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined4 *)((long)puVar6 + ((long)param_2 - (long)puVar3)) = *param_3;
    if (param_2 != puVar3) {
LAB_001126e7:
      puVar4 = puVar6;
      puVar8 = puVar3;
      do {
        puVar9 = puVar4;
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar1;
        puVar4 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined4 *)(((long)param_2 - (long)puVar3) + (long)puVar6));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar2) goto LAB_00112737;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00112770:
      uVar7 = 0x7ffffffffffffffc;
      goto LAB_0011277a;
    }
    if (uVar7 != 0) {
      if (0x1fffffffffffffff < uVar7) {
        uVar7 = 0x1fffffffffffffff;
      }
      uVar7 = uVar7 * 4;
      goto LAB_0011277a;
    }
    lVar10 = 0;
    puVar6 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x4;
    *(undefined4 *)((long)param_2 - (long)puVar3) = *param_3;
    if (param_2 != puVar3) goto LAB_001126e7;
  }
  memcpy(puVar9,param_2,(long)puVar2 - (long)param_2);
  puVar9 = (undefined4 *)((long)puVar9 + ((long)puVar2 - (long)param_2));
LAB_00112737:
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete(puVar3,*(long *)(this + 0x10) - (long)puVar3);
  }
  *(undefined4 **)this = puVar6;
  *(undefined4 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<unsigned int, std::allocator<unsigned int> >::_M_realloc_insert<unsigned int
   const&>(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_realloc_insert<unsigned_int_const&>
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,void *param_2,undefined4 *param_3
          )

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 2;
  if (uVar2 == 0x1fffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_001128c0;
    uVar3 = 0x1fffffffffffffff;
    if (uVar2 + 1 < 0x2000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 2;
LAB_001128ca:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_001128c0:
      uVar3 = 0x7ffffffffffffffc;
      goto LAB_001128ca;
    }
    if (uVar3 != 0) {
      if (0x1fffffffffffffff < uVar3) {
        uVar3 = 0x1fffffffffffffff;
      }
      uVar3 = uVar3 * 4;
      goto LAB_001128ca;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 4);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined4 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_0011289b;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_0011289b:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* basisu::tree_vector_quant<basisu::vec<6u, float>
   >::retrieve(basisu::vector<basisu::vector<unsigned int> >&) const */

void __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::retrieve
          (tree_vector_quant<basisu::vec<6u,float>> *this,vector *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  void *__ptr;
  uint uVar9;
  
  if (*(int *)(this + 8) == 0) {
    return;
  }
  lVar7 = 0;
  do {
    while (lVar1 = *(long *)this + lVar7 * 0x48, -1 < *(int *)(lVar1 + 0x28)) {
LAB_001129c0:
      lVar7 = lVar7 + 1;
      if (*(uint *)(this + 8) <= (uint)lVar7) {
        return;
      }
    }
    uVar2 = *(uint *)(param_1 + 8);
    uVar8 = (ulong)uVar2;
    uVar9 = uVar2 + 1;
    if (uVar2 < 0xffffffff) {
      lVar5 = 0x10;
      if (*(uint *)(param_1 + 0xc) < uVar9) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_1,SUB41(uVar9,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar2 = *(uint *)(param_1 + 8);
        lVar5 = (ulong)(uVar9 - uVar2) << 4;
      }
      lVar4 = *(long *)param_1;
      puVar3 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar4);
      puVar6 = (undefined8 *)(lVar5 + (long)puVar3);
      for (; puVar3 != puVar6; puVar3 = puVar3 + 2) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
    }
    else {
      puVar6 = *(undefined8 **)param_1;
      puVar3 = puVar6 + 0x1fffffffe;
      do {
        if ((void *)*puVar6 != (void *)0x0) {
          free((void *)*puVar6);
        }
        puVar6 = puVar6 + 2;
      } while (puVar3 != puVar6);
      lVar4 = *(long *)param_1;
    }
    *(uint *)(param_1 + 8) = uVar9;
    puVar3 = (undefined8 *)(uVar8 * 0x10 + lVar4);
    if (puVar3 == (undefined8 *)(lVar1 + 0x30)) goto LAB_001129c0;
    uVar8 = (ulong)*(uint *)(lVar1 + 0x38);
    __ptr = (void *)*puVar3;
    if (*(uint *)((long)puVar3 + 0xc) < *(uint *)(lVar1 + 0x38)) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar8 = (ulong)*(uint *)(lVar1 + 0x38);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)puVar3,SUB81(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar8 = (ulong)*(uint *)(lVar1 + 0x38);
      __ptr = (void *)*puVar3;
    }
    else if (*(int *)(puVar3 + 1) != 0) {
      *(undefined4 *)(puVar3 + 1) = 0;
      uVar8 = (ulong)*(uint *)(lVar1 + 0x38);
    }
    if ((__ptr != (void *)0x0) && (*(void **)(lVar1 + 0x30) != (void *)0x0)) {
      memcpy(__ptr,*(void **)(lVar1 + 0x30),uVar8 * 4);
      uVar8 = (ulong)*(uint *)(lVar1 + 0x38);
    }
    *(int *)(puVar3 + 1) = (int)uVar8;
    lVar7 = lVar7 + 1;
    if (*(uint *)(this + 8) <= (uint)lVar7) {
      return;
    }
  } while( true );
}



/* basisu::vector<basisu::vector<unsigned int> >::reserve(unsigned long) */

void __thiscall
basisu::vector<basisu::vector<unsigned_int>>::reserve
          (vector<basisu::vector<unsigned_int>> *this,ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar8 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar8) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
        return;
      }
      goto LAB_00112dcf;
    }
    if (uVar8 < *(uint *)(this + 0xc)) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      uVar3 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar8) {
        uVar3 = uVar8;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_48,SUB41(uVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
      uVar8 = *(uint *)(this + 8);
      if (local_40._4_4_ < uVar8) {
        if (local_48 != (undefined8 *)0x0) {
          puVar5 = local_48 + (local_40 & 0xffffffff) * 2;
          puVar7 = puVar5;
          for (puVar4 = local_48; puVar4 != puVar5; puVar4 = puVar4 + 2) {
            if ((void *)*puVar4 != (void *)0x0) {
              free((void *)*puVar4);
            }
            puVar7 = local_48;
          }
          free(puVar7);
          local_48 = (undefined8 *)0x0;
          uVar8 = *(uint *)(this + 8);
          local_40 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_48,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x10,false)
        ;
      }
      else {
        resize((vector<basisu::vector<unsigned_int>> *)&local_48,0,false);
      }
      uVar8 = *(uint *)(this + 8);
      puVar7 = *(undefined8 **)this;
      if (uVar8 == 0) {
        uVar8 = local_40._4_4_;
        local_40 = (ulong)local_40._4_4_ << 0x20;
        *(undefined8 **)this = local_48;
        *(uint *)(this + 0xc) = uVar8;
        local_48 = puVar7;
        if (puVar7 != (undefined8 *)0x0) goto LAB_00112cd2;
      }
      else {
        puVar4 = local_48;
        puVar5 = puVar7;
        do {
          uVar2 = *(undefined4 *)(puVar5 + 1);
          puVar6 = puVar5 + 2;
          *puVar4 = 0;
          puVar4[1] = 0;
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar4,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar3 = *(uint *)(puVar5 + 1);
          *(uint *)(puVar4 + 1) = uVar3;
          if (((void *)*puVar4 != (void *)0x0) && ((void *)*puVar5 != (void *)0x0)) {
            memcpy((void *)*puVar4,(void *)*puVar5,(ulong)uVar3 << 2);
          }
          puVar4 = puVar4 + 2;
          puVar5 = puVar6;
        } while (puVar6 != puVar7 + (ulong)uVar8 * 2);
        uVar1 = *(ulong *)(this + 8);
        puVar4 = *(undefined8 **)this;
        *(undefined8 **)this = local_48;
        *(uint *)(this + 0xc) = local_40._4_4_;
        local_48 = puVar4;
        local_40 = uVar1;
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = puVar4 + (uVar1 & 0xffffffff) * 2;
          puVar7 = puVar5;
          for (; puVar4 != puVar5; puVar4 = puVar4 + 2) {
            if ((void *)*puVar4 != (void *)0x0) {
              free((void *)*puVar4);
            }
            puVar7 = local_48;
          }
LAB_00112cd2:
          free(puVar7);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112dcf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<6u, float> >::retrieve(unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&) const */

void __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::retrieve
          (tree_vector_quant<basisu::vec<6u,float>> *this,uint param_1,vector *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__ptr;
  uint uVar9;
  long in_FS_OFFSET;
  void *local_58;
  uint local_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_50 = 0;
  uStack_4c = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  if (*(uint *)(param_2 + 8) != 0) {
    puVar8 = *(undefined8 **)param_2;
    puVar5 = puVar8 + (ulong)*(uint *)(param_2 + 8) * 2;
    do {
      if ((void *)*puVar8 != (void *)0x0) {
        free((void *)*puVar8);
      }
      puVar8 = puVar8 + 2;
    } while (puVar5 != puVar8);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  vector<basisu::vector<unsigned_int>>::reserve
            ((vector<basisu::vector<unsigned_int>> *)param_2,(ulong)param_1);
  uVar4 = 0;
  while( true ) {
    while ((lVar1 = *(long *)this + uVar4 * 0x48, -1 < *(int *)(lVar1 + 0x28) &&
           (*(int *)(lVar1 + 0x40) + 1 < (int)param_1))) {
      uVar3 = *(undefined4 *)(lVar1 + 0x2c);
      if (uStack_4c <= local_50) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_58,(bool)((char)local_50 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      }
      *(undefined4 *)((long)local_58 + (ulong)local_50 * 4) = uVar3;
      uVar4 = (ulong)*(uint *)(lVar1 + 0x28);
      local_50 = local_50 + 1;
    }
    uVar2 = *(uint *)(param_2 + 8);
    uVar4 = (ulong)uVar2;
    uVar9 = uVar2 + 1;
    if (uVar2 < 0xffffffff) {
      lVar7 = 0x10;
      if (*(uint *)(param_2 + 0xc) < uVar9) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_2,SUB41(uVar9,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar2 = *(uint *)(param_2 + 8);
        lVar7 = (ulong)(uVar9 - uVar2) << 4;
      }
      lVar6 = *(long *)param_2;
      puVar5 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar6);
      puVar8 = (undefined8 *)(lVar7 + (long)puVar5);
      for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
    }
    else {
      puVar8 = *(undefined8 **)param_2;
      puVar5 = puVar8 + 0x1fffffffe;
      do {
        if ((void *)*puVar8 != (void *)0x0) {
          free((void *)*puVar8);
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar5);
      lVar6 = *(long *)param_2;
    }
    *(uint *)(param_2 + 8) = uVar9;
    puVar5 = (undefined8 *)(uVar4 * 0x10 + lVar6);
    if (puVar5 != (undefined8 *)(lVar1 + 0x30)) {
      uVar4 = (ulong)*(uint *)(lVar1 + 0x38);
      __ptr = (void *)*puVar5;
      if (*(uint *)((long)puVar5 + 0xc) < *(uint *)(lVar1 + 0x38)) {
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar4 = (ulong)*(uint *)(lVar1 + 0x38);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)puVar5,SUB81(uVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar4 = (ulong)*(uint *)(lVar1 + 0x38);
        __ptr = (void *)*puVar5;
      }
      else if (*(int *)(puVar5 + 1) != 0) {
        *(undefined4 *)(puVar5 + 1) = 0;
        uVar4 = (ulong)*(uint *)(lVar1 + 0x38);
      }
      if ((__ptr != (void *)0x0) && (*(void **)(lVar1 + 0x30) != (void *)0x0)) {
        memcpy(__ptr,*(void **)(lVar1 + 0x30),uVar4 * 4);
        uVar4 = (ulong)*(uint *)(lVar1 + 0x38);
      }
      *(int *)(puVar5 + 1) = (int)uVar4;
    }
    if (local_50 == 0) break;
    local_50 = local_50 - 1;
    uVar4 = (ulong)*(uint *)((long)local_58 + (ulong)local_50 * 4);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::tree_vector_quant<basisu::vec<16u, float>
   >::retrieve(basisu::vector<basisu::vector<unsigned int> >&) const */

void __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::retrieve
          (tree_vector_quant<basisu::vec<16u,float>> *this,vector *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  void *__ptr;
  uint uVar9;
  long lVar10;
  
  if (*(int *)(this + 8) == 0) {
    return;
  }
  lVar10 = 0;
  uVar9 = 0;
LAB_001130f2:
  do {
    lVar7 = *(long *)this + lVar10;
    if (*(int *)(lVar7 + 0x50) < 0) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar6 = (ulong)uVar1;
      uVar8 = uVar1 + 1;
      if (uVar1 < 0xffffffff) {
        lVar4 = 0x10;
        if (*(uint *)(param_1 + 0xc) < uVar8) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_1,SUB41(uVar8,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,false)
          ;
          uVar1 = *(uint *)(param_1 + 8);
          lVar4 = (ulong)(uVar8 - uVar1) << 4;
        }
        lVar3 = *(long *)param_1;
        puVar2 = (undefined8 *)((ulong)uVar1 * 0x10 + lVar3);
        puVar5 = (undefined8 *)(lVar4 + (long)puVar2);
        for (; puVar2 != puVar5; puVar2 = puVar2 + 2) {
          *puVar2 = 0;
          puVar2[1] = 0;
        }
      }
      else {
        puVar5 = *(undefined8 **)param_1;
        puVar2 = puVar5 + 0x1fffffffe;
        do {
          if ((void *)*puVar5 != (void *)0x0) {
            free((void *)*puVar5);
          }
          puVar5 = puVar5 + 2;
        } while (puVar2 != puVar5);
        lVar3 = *(long *)param_1;
      }
      *(uint *)(param_1 + 8) = uVar8;
      puVar2 = (undefined8 *)(uVar6 * 0x10 + lVar3);
      if (puVar2 != (undefined8 *)(lVar7 + 0x58)) {
        uVar6 = (ulong)*(uint *)(lVar7 + 0x60);
        __ptr = (void *)*puVar2;
        if (*(uint *)((long)puVar2 + 0xc) < *(uint *)(lVar7 + 0x60)) {
          if (__ptr != (void *)0x0) {
            free(__ptr);
            *puVar2 = 0;
            puVar2[1] = 0;
            uVar6 = (ulong)*(uint *)(lVar7 + 0x60);
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)puVar2,SUB81(uVar6,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar6 = (ulong)*(uint *)(lVar7 + 0x60);
          __ptr = (void *)*puVar2;
        }
        else if (*(int *)(puVar2 + 1) != 0) {
          *(undefined4 *)(puVar2 + 1) = 0;
          uVar6 = (ulong)*(uint *)(lVar7 + 0x60);
        }
        if ((__ptr != (void *)0x0) && (*(void **)(lVar7 + 0x58) != (void *)0x0)) {
          memcpy(__ptr,*(void **)(lVar7 + 0x58),uVar6 * 4);
          uVar6 = (ulong)*(uint *)(lVar7 + 0x60);
        }
        *(int *)(puVar2 + 1) = (int)uVar6;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x70;
        if (*(uint *)(this + 8) <= uVar9) {
          return;
        }
        goto LAB_001130f2;
      }
    }
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 0x70;
    if (*(uint *)(this + 8) <= uVar9) {
      return;
    }
  } while( true );
}



/* basisu::tree_vector_quant<basisu::vec<16u, float> >::retrieve(unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&) const */

void __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::retrieve
          (tree_vector_quant<basisu::vec<16u,float>> *this,uint param_1,vector *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  void *__ptr;
  long lVar10;
  long in_FS_OFFSET;
  void *local_58;
  uint local_50;
  uint uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (void *)0x0;
  local_50 = 0;
  uStack_4c = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  if (*(uint *)(param_2 + 8) != 0) {
    puVar7 = *(undefined8 **)param_2;
    puVar5 = puVar7 + (ulong)*(uint *)(param_2 + 8) * 2;
    do {
      if ((void *)*puVar7 != (void *)0x0) {
        free((void *)*puVar7);
      }
      puVar7 = puVar7 + 2;
    } while (puVar5 != puVar7);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  vector<basisu::vector<unsigned_int>>::reserve
            ((vector<basisu::vector<unsigned_int>> *)param_2,(ulong)param_1);
  uVar4 = 0;
  while( true ) {
    while ((lVar8 = uVar4 * 0x70 + *(long *)this, -1 < *(int *)(lVar8 + 0x50) &&
           (*(int *)(lVar8 + 0x68) + 1 < (int)param_1))) {
      uVar3 = *(undefined4 *)(lVar8 + 0x54);
      if (uStack_4c <= local_50) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_58,(bool)((char)local_50 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      }
      *(undefined4 *)((long)local_58 + (ulong)local_50 * 4) = uVar3;
      uVar4 = (ulong)*(uint *)(lVar8 + 0x50);
      local_50 = local_50 + 1;
    }
    uVar1 = *(uint *)(param_2 + 8);
    uVar9 = uVar1 + 1;
    if (uVar1 < 0xffffffff) {
      lVar6 = 0x10;
      uVar2 = uVar1;
      if (*(uint *)(param_2 + 0xc) < uVar9) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_2,SUB41(uVar9,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
        uVar2 = *(uint *)(param_2 + 8);
        lVar6 = (ulong)(uVar9 - uVar2) << 4;
      }
      lVar10 = *(long *)param_2;
      puVar5 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar10);
      puVar7 = (undefined8 *)(lVar6 + (long)puVar5);
      for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
        *puVar5 = 0;
        puVar5[1] = 0;
      }
    }
    else {
      puVar5 = *(undefined8 **)param_2;
      puVar7 = puVar5 + 0x1fffffffe;
      do {
        if ((void *)*puVar5 != (void *)0x0) {
          free((void *)*puVar5);
        }
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar7);
      lVar10 = *(long *)param_2;
    }
    *(uint *)(param_2 + 8) = uVar9;
    puVar5 = (undefined8 *)(lVar10 + (ulong)uVar1 * 0x10);
    if (puVar5 != (undefined8 *)(lVar8 + 0x58)) {
      uVar4 = (ulong)*(uint *)(lVar8 + 0x60);
      __ptr = (void *)*puVar5;
      if (*(uint *)((long)puVar5 + 0xc) < *(uint *)(lVar8 + 0x60)) {
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar4 = (ulong)*(uint *)(lVar8 + 0x60);
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)puVar5,SUB81(uVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar4 = (ulong)*(uint *)(lVar8 + 0x60);
        __ptr = (void *)*puVar5;
      }
      else if (*(int *)(puVar5 + 1) != 0) {
        *(undefined4 *)(puVar5 + 1) = 0;
        uVar4 = (ulong)*(uint *)(lVar8 + 0x60);
      }
      if ((__ptr != (void *)0x0) && (*(void **)(lVar8 + 0x58) != (void *)0x0)) {
        memcpy(__ptr,*(void **)(lVar8 + 0x58),uVar4 * 4);
        uVar4 = (ulong)*(uint *)(lVar8 + 0x60);
      }
      *(int *)(puVar5 + 1) = (int)uVar4;
    }
    if (local_50 == 0) break;
    local_50 = local_50 - 1;
    uVar4 = (ulong)*(uint *)((long)local_58 + (ulong)local_50 * 4);
  }
  if (local_58 != (void *)0x0) {
    free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<basisu::tree_vector_quant<basisu::vec<6u, float> >::tsvq_node>::reserve(unsigned
   long) */

void __thiscall
basisu::vector<basisu::tree_vector_quant<basisu::vec<6u,float>>::tsvq_node>::reserve
          (vector<basisu::tree_vector_quant<basisu::vec<6u,float>>::tsvq_node> *this,ulong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  undefined4 *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar8 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar8) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x48,true);
        return;
      }
      goto LAB_00113850;
    }
    if (uVar8 < *(uint *)(this + 0xc)) {
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      uVar5 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar8) {
        uVar5 = uVar8;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_48,SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x48,true);
      uVar8 = *(uint *)(this + 8);
      if (local_40._4_4_ < uVar8) {
        if (local_48 != (undefined4 *)0x0) {
          puVar9 = local_48 + (local_40 & 0xffffffff) * 0x12;
          puVar7 = puVar9;
          for (puVar6 = local_48; puVar6 != puVar9; puVar6 = puVar6 + 0x12) {
            if (*(void **)(puVar6 + 0xc) != (void *)0x0) {
              free(*(void **)(puVar6 + 0xc));
            }
            puVar7 = local_48;
          }
          free(puVar7);
          local_48 = (undefined4 *)0x0;
          uVar8 = *(uint *)(this + 8);
          local_40 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_48,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x48,true);
        uVar8 = *(uint *)(this + 8);
      }
      else if ((int)local_40 != 0) {
        puVar9 = local_48 + (local_40 & 0xffffffff) * 0x12;
        puVar7 = local_48;
        do {
          if (*(void **)(puVar7 + 0xc) != (void *)0x0) {
            free(*(void **)(puVar7 + 0xc));
          }
          puVar7 = puVar7 + 0x12;
        } while (puVar9 != puVar7);
        local_40 = local_40 & 0xffffffff00000000;
        uVar8 = *(uint *)(this + 8);
      }
      puVar9 = *(undefined4 **)this;
      if (uVar8 == 0) {
        uVar8 = local_40._4_4_;
        local_40 = (ulong)local_40._4_4_ << 0x20;
        *(undefined4 **)this = local_48;
        *(uint *)(this + 0xc) = uVar8;
        local_48 = puVar9;
        if (puVar9 != (undefined4 *)0x0) goto LAB_0011377b;
      }
      else {
        puVar7 = puVar9 + 4;
        puVar6 = local_48;
        do {
          uVar2 = puVar7[-4];
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + -2);
          *puVar6 = uVar2;
          memmove(puVar6 + 4,puVar7,0x18);
          uVar4 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(puVar6 + 0xc) = 0;
          *(undefined8 *)(puVar6 + 10) = uVar4;
          uVar2 = puVar7[10];
          *(undefined8 *)(puVar6 + 0xe) = 0;
          basisu::elemental_vector::increase_capacity
                    ((int)puVar6 + 0x30,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          uVar5 = puVar7[10];
          puVar6[0xe] = uVar5;
          if ((*(void **)(puVar6 + 0xc) != (void *)0x0) && (*(void **)(puVar7 + 8) != (void *)0x0))
          {
            memcpy(*(void **)(puVar6 + 0xc),*(void **)(puVar7 + 8),(ulong)uVar5 * 4);
          }
          puVar1 = puVar7 + 0xc;
          puVar7 = puVar7 + 0x12;
          puVar6[0x10] = *puVar1;
          puVar6 = puVar6 + 0x12;
        } while (puVar9 + (ulong)(uVar8 - 1) * 0x12 + 0x16 != puVar7);
        uVar3 = *(ulong *)(this + 8);
        puVar7 = *(undefined4 **)this;
        *(undefined4 **)this = local_48;
        *(uint *)(this + 0xc) = local_40._4_4_;
        local_48 = puVar7;
        local_40 = uVar3;
        if (puVar7 != (undefined4 *)0x0) {
          puVar6 = puVar7 + (uVar3 & 0xffffffff) * 0x12;
          puVar9 = puVar6;
          for (; puVar7 != puVar6; puVar7 = puVar7 + 0x12) {
            if (*(void **)(puVar7 + 0xc) != (void *)0x0) {
              free(*(void **)(puVar7 + 0xc));
            }
            puVar9 = local_48;
          }
LAB_0011377b:
          free(puVar9);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00113850:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<6u, float> >::prepare_root() const */

void basisu::tree_vector_quant<basisu::vec<6u,float>>::prepare_root(void)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  long in_RSI;
  uint uVar8;
  float *in_RDI;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  in_RDI[10] = -NAN;
  in_RDI[0xb] = -NAN;
  in_RDI[0xe] = 0.0;
  in_RDI[0xf] = 0.0;
  iVar3 = *(int *)(in_RSI + 0x18);
  uVar8 = (int)in_RDI + 0x30;
  in_RDI[2] = 0.0;
  in_RDI[3] = 0.0;
  in_RDI[8] = 0.0;
  in_RDI[9] = 0.0;
  in_RDI[0xc] = 0.0;
  in_RDI[0xd] = 0.0;
  in_RDI[0x10] = -NAN;
  if (iVar3 == 0) {
    fVar11 = 0.0;
    fVar4 = 0.0;
    fVar13 = 0.0;
  }
  else {
    basisu::elemental_vector::increase_capacity
              (uVar8,SUB41(iVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    if (*(int *)(in_RSI + 0x18) == 0) {
      fVar13 = (float)*(ulong *)(in_RDI + 2);
      fVar4 = 0.0;
      fVar11 = in_RDI[4] * in_RDI[4];
    }
    else {
      fVar11 = in_RDI[0xe];
      lVar10 = 0;
      fVar4 = 0.0;
      do {
        pfVar7 = (float *)(lVar10 * 0x20 + *(long *)(in_RSI + 0x10));
        uVar9 = *(ulong *)(pfVar7 + 6);
        if ((uint)in_RDI[0xf] <= (uint)fVar11) {
          basisu::elemental_vector::increase_capacity
                    (uVar8,(bool)(SUB41(fVar11,0) + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          fVar11 = in_RDI[0xe];
        }
        *(int *)(*(long *)(in_RDI + 0xc) + (ulong)(uint)fVar11 * 4) = (int)lVar10;
        fVar11 = (float)((int)in_RDI[0xe] + 1);
        in_RDI[0xe] = fVar11;
        fVar13 = (float)uVar9;
        lVar5 = 0;
        do {
          *(ulong *)((long)local_58 + lVar5) =
               CONCAT44((float)((ulong)*(undefined8 *)((long)pfVar7 + lVar5) >> 0x20) * fVar13,
                        (float)*(undefined8 *)((long)pfVar7 + lVar5) * fVar13);
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0x18);
        lVar5 = 0;
        do {
          uVar2 = *(undefined8 *)((long)in_RDI + lVar5 + 0x10);
          *(ulong *)((long)in_RDI + lVar5 + 0x10) =
               CONCAT44((float)((ulong)uVar2 >> 0x20) +
                        (float)((ulong)*(undefined8 *)((long)local_58 + lVar5) >> 0x20),
                        (float)uVar2 + (float)*(undefined8 *)((long)local_58 + lVar5));
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0x18);
        fVar12 = *pfVar7;
        uVar9 = uVar9 + *(long *)(in_RDI + 2);
        pfVar6 = pfVar7 + 1;
        *(ulong *)(in_RDI + 2) = uVar9;
        fVar12 = fVar12 * fVar12;
        do {
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          fVar12 = fVar12 + fVar1 * fVar1;
        } while (pfVar6 != pfVar7 + 6);
        lVar10 = lVar10 + 1;
        fVar4 = fVar4 + fVar13 * fVar12;
      } while ((uint)lVar10 < *(uint *)(in_RSI + 0x18));
      fVar13 = (float)uVar9;
      fVar11 = in_RDI[4] * in_RDI[4];
    }
  }
  pfVar7 = in_RDI + 5;
  do {
    fVar12 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    fVar11 = fVar11 + fVar12 * fVar12;
  } while (pfVar7 != in_RDI + 10);
  fVar12 = _LC6 / fVar13;
  *in_RDI = fVar4 - fVar11 / fVar13;
  pfVar7 = in_RDI + 4;
  do {
    pfVar6 = pfVar7 + 2;
    *(ulong *)pfVar7 =
         CONCAT44((float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar12,
                  (float)*(undefined8 *)pfVar7 * fVar12);
    pfVar7 = pfVar6;
  } while (pfVar6 != in_RDI + 10);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::vector<basisu::tree_vector_quant<basisu::vec<16u, float> >::tsvq_node>::reserve(unsigned
   long) */

void __thiscall
basisu::vector<basisu::tree_vector_quant<basisu::vec<16u,float>>::tsvq_node>::reserve
          (vector<basisu::tree_vector_quant<basisu::vec<16u,float>>::tsvq_node> *this,ulong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined4 *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar9 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar9) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,true);
        return;
      }
      goto LAB_00113e5d;
    }
    if (uVar9 < *(uint *)(this + 0xc)) {
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      uVar5 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar9) {
        uVar5 = uVar9;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_48,SUB41(uVar5,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,true);
      uVar9 = *(uint *)(this + 8);
      if (local_40._4_4_ < uVar9) {
        if (local_48 != (undefined4 *)0x0) {
          puVar6 = local_48 + (local_40 & 0xffffffff) * 0x1c;
          puVar7 = puVar6;
          for (puVar8 = local_48; puVar8 != puVar6; puVar8 = puVar8 + 0x1c) {
            if (*(void **)(puVar8 + 0x16) != (void *)0x0) {
              free(*(void **)(puVar8 + 0x16));
            }
            puVar7 = local_48;
          }
          free(puVar7);
          local_48 = (undefined4 *)0x0;
          uVar9 = *(uint *)(this + 8);
          local_40 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_48,SUB41(uVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,true);
        uVar9 = *(uint *)(this + 8);
      }
      else if ((int)local_40 != 0) {
        puVar8 = local_48 + (local_40 & 0xffffffff) * 0x1c;
        puVar7 = local_48;
        do {
          if (*(void **)(puVar7 + 0x16) != (void *)0x0) {
            free(*(void **)(puVar7 + 0x16));
          }
          puVar7 = puVar7 + 0x1c;
        } while (puVar8 != puVar7);
        local_40 = local_40 & 0xffffffff00000000;
        uVar9 = *(uint *)(this + 8);
      }
      puVar7 = *(undefined4 **)this;
      if (uVar9 == 0) {
        uVar9 = local_40._4_4_;
        local_40 = (ulong)local_40._4_4_ << 0x20;
        *(undefined4 **)this = local_48;
        *(uint *)(this + 0xc) = uVar9;
        local_48 = puVar7;
        if (puVar7 != (undefined4 *)0x0) goto LAB_00113d8b;
      }
      else {
        puVar8 = puVar7 + 4;
        puVar6 = local_48;
        do {
          uVar2 = puVar8[-4];
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar8 + -2);
          *puVar6 = uVar2;
          memmove(puVar6 + 4,puVar8,0x40);
          uVar4 = *(undefined8 *)(puVar8 + 0x10);
          *(undefined8 *)(puVar6 + 0x16) = 0;
          *(undefined8 *)(puVar6 + 0x14) = uVar4;
          uVar2 = puVar8[0x14];
          *(undefined8 *)(puVar6 + 0x18) = 0;
          basisu::elemental_vector::increase_capacity
                    ((int)puVar6 + 0x58,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          uVar5 = puVar8[0x14];
          puVar6[0x18] = uVar5;
          if ((*(void **)(puVar6 + 0x16) != (void *)0x0) &&
             (*(void **)(puVar8 + 0x12) != (void *)0x0)) {
            memcpy(*(void **)(puVar6 + 0x16),*(void **)(puVar8 + 0x12),(ulong)uVar5 * 4);
          }
          puVar1 = puVar8 + 0x16;
          puVar8 = puVar8 + 0x1c;
          puVar6[0x1a] = *puVar1;
          puVar6 = puVar6 + 0x1c;
        } while (puVar7 + (ulong)(uVar9 - 1) * 0x1c + 0x20 != puVar8);
        uVar3 = *(ulong *)(this + 8);
        puVar8 = *(undefined4 **)this;
        *(undefined4 **)this = local_48;
        *(uint *)(this + 0xc) = local_40._4_4_;
        local_48 = puVar8;
        local_40 = uVar3;
        if (puVar8 != (undefined4 *)0x0) {
          puVar6 = puVar8 + (uVar3 & 0xffffffff) * 0x1c;
          puVar7 = puVar6;
          for (; puVar8 != puVar6; puVar8 = puVar8 + 0x1c) {
            if (*(void **)(puVar8 + 0x16) != (void *)0x0) {
              free(*(void **)(puVar8 + 0x16));
            }
            puVar7 = local_48;
          }
LAB_00113d8b:
          free(puVar7);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00113e5d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<16u, float> >::prepare_root() const */

void basisu::tree_vector_quant<basisu::vec<16u,float>>::prepare_root(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float *pfVar12;
  long in_RSI;
  uint uVar13;
  float *in_RDI;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float local_88 [18];
  long local_40;
  
  fVar11 = 0.0;
  fVar8 = 0.0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  uVar13 = (int)in_RDI + 0x58;
  in_RDI[2] = 0.0;
  in_RDI[3] = 0.0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x10) = (undefined1  [16])0x0;
  in_RDI[0x14] = -NAN;
  in_RDI[0x15] = -NAN;
  in_RDI[0x18] = 0.0;
  in_RDI[0x19] = 0.0;
  iVar3 = *(int *)(in_RSI + 0x18);
  in_RDI[0x16] = 0.0;
  in_RDI[0x17] = 0.0;
  in_RDI[0x1a] = -NAN;
  if (iVar3 != 0) {
    basisu::elemental_vector::increase_capacity
              (uVar13,SUB41(iVar3,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    fVar8 = 0.0;
    if (*(int *)(in_RSI + 0x18) == 0) {
      fVar11 = (float)*(ulong *)(in_RDI + 2);
      fVar8 = 0.0;
    }
    else {
      fVar11 = in_RDI[0x18];
      lVar16 = 0;
      uVar15 = 0;
      do {
        pfVar12 = (float *)(*(long *)(in_RSI + 0x10) + lVar16);
        uVar14 = *(ulong *)(pfVar12 + 0x10);
        if ((uint)in_RDI[0x19] <= (uint)fVar11) {
          basisu::elemental_vector::increase_capacity
                    (uVar13,(bool)(SUB41(fVar11,0) + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          fVar11 = in_RDI[0x18];
        }
        *(uint *)(*(long *)(in_RDI + 0x16) + (ulong)(uint)fVar11 * 4) = uVar15;
        fVar11 = (float)((int)in_RDI[0x18] + 1);
        in_RDI[0x18] = fVar11;
        fVar17 = (float)uVar14;
        lVar9 = 0;
        do {
          pfVar10 = (float *)((long)pfVar12 + lVar9);
          fVar18 = pfVar10[1];
          fVar2 = pfVar10[2];
          fVar4 = pfVar10[3];
          *(float *)((long)local_88 + lVar9) = *pfVar10 * fVar17;
          *(float *)((long)local_88 + lVar9 + 4) = fVar18 * fVar17;
          *(float *)((long)local_88 + lVar9 + 8) = fVar2 * fVar17;
          *(float *)((long)local_88 + lVar9 + 0xc) = fVar4 * fVar17;
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != 0x40);
        lVar9 = 0;
        do {
          pfVar10 = (float *)((long)in_RDI + lVar9 + 0x10);
          fVar18 = pfVar10[1];
          fVar2 = pfVar10[2];
          fVar4 = pfVar10[3];
          fVar5 = *(float *)((long)local_88 + lVar9 + 4);
          fVar6 = *(float *)((long)local_88 + lVar9 + 8);
          fVar7 = *(float *)((long)local_88 + lVar9 + 0xc);
          pfVar1 = (float *)((long)in_RDI + lVar9 + 0x10);
          *pfVar1 = *pfVar10 + *(float *)((long)local_88 + lVar9);
          pfVar1[1] = fVar18 + fVar5;
          pfVar1[2] = fVar2 + fVar6;
          pfVar1[3] = fVar4 + fVar7;
          lVar9 = lVar9 + 0x10;
        } while (lVar9 != 0x40);
        fVar18 = *pfVar12;
        uVar14 = uVar14 + *(long *)(in_RDI + 2);
        pfVar10 = pfVar12 + 1;
        *(ulong *)(in_RDI + 2) = uVar14;
        fVar18 = fVar18 * fVar18;
        do {
          fVar2 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          fVar18 = fVar18 + fVar2 * fVar2;
        } while (pfVar10 != pfVar12 + 0x10);
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x48;
        fVar8 = fVar8 + fVar17 * fVar18;
      } while (uVar15 < *(uint *)(in_RSI + 0x18));
      if ((long)uVar14 < 0) {
        fVar11 = (float)uVar14;
      }
      else {
        fVar11 = (float)(long)uVar14;
      }
    }
  }
  pfVar12 = in_RDI + 5;
  fVar17 = in_RDI[4] * in_RDI[4];
  do {
    fVar18 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    fVar17 = fVar17 + fVar18 * fVar18;
  } while (in_RDI + 0x14 != pfVar12);
  fVar18 = _LC6 / fVar11;
  *in_RDI = fVar8 - fVar17 / fVar11;
  pfVar12 = in_RDI + 4;
  do {
    pfVar10 = pfVar12 + 4;
    *pfVar12 = *pfVar12 * fVar18;
    pfVar12[1] = pfVar12[1] * fVar18;
    pfVar12[2] = pfVar12[2] * fVar18;
    pfVar12[3] = pfVar12[3] * fVar18;
    pfVar12 = pfVar10;
  } while (in_RDI + 0x14 != pfVar10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<6u, float>
   >::refine_split(basisu::tree_vector_quant<basisu::vec<6u, float> >::tsvq_node const&,
   basisu::vec<6u, float>&, unsigned long&, float&, basisu::vector<unsigned int>&, basisu::vec<6u,
   float>&, unsigned long&, float&, basisu::vector<unsigned int>&) const */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::refine_split
          (tree_vector_quant<basisu::vec<6u,float>> *this,tsvq_node *param_1,vec *param_2,
          ulong *param_3,float *param_4,vector *param_5,vec *param_6,ulong *param_7,float *param_8,
          vector *param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  long *plVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_d0;
  int local_cc;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  vector<unsigned_int>::reserve((vector<unsigned_int> *)param_5,(ulong)*(uint *)(param_1 + 0x38));
  vector<unsigned_int>::reserve((vector<unsigned_int> *)param_9,(ulong)*(uint *)(param_1 + 0x38));
  local_cc = 6;
  local_d0 = _LC52;
  do {
    if (*(int *)(param_5 + 8) != 0) {
      *(undefined4 *)(param_5 + 8) = 0;
    }
    if (*(int *)(param_9 + 8) != 0) {
      *(undefined4 *)(param_9 + 8) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    local_a8 = (undefined1  [8])0x0;
    local_88 = (undefined1  [8])0x0;
    *param_3 = 0;
    _local_b8 = (undefined1  [16])0x0;
    *param_7 = 0;
    _local_98 = (undefined1  [16])0x0;
    if (iVar2 == 0) {
LAB_001147bd:
      if (*(int *)(param_5 + 8) != 0) {
        *(undefined4 *)(param_5 + 8) = 0;
      }
      iVar2 = *(int *)(param_9 + 8);
      local_a8 = (undefined1  [8])0x0;
      _local_b8 = (undefined1  [16])0x0;
      *param_3 = 0;
      if (iVar2 != 0) {
        *(undefined4 *)(param_9 + 8) = 0;
      }
      local_88 = (undefined1  [8])0x0;
      _local_98 = (undefined1  [16])0x0;
      *param_7 = 0;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar14 = 0;
        fVar18 = 0.0;
        fVar17 = 0.0;
        do {
          puVar1 = (uint *)(*(long *)(param_1 + 0x30) + lVar14 * 4);
          pauVar8 = (undefined1 (*) [16])((ulong)*puVar1 * 0x20 + *(long *)(this + 0x10));
          uVar12 = *(ulong *)(pauVar8[1] + 8);
          if ((int)lVar14 != 0) {
            lVar4 = 0;
LAB_00114892:
            if (*(float *)(*pauVar8 + lVar4) == *(float *)(local_78 + lVar4)) goto code_r0x001148a8;
            fVar15 = (float)uVar12;
            lVar4 = 0;
            do {
              *(ulong *)((long)local_58 + lVar4) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar8 + lVar4) >> 0x20) * fVar15,
                            (float)*(undefined8 *)(*pauVar8 + lVar4) * fVar15);
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0x18);
            plVar10 = local_58;
            puVar6 = (undefined8 *)local_b8;
            do {
              lVar4 = *plVar10;
              puVar5 = puVar6 + 1;
              plVar10 = plVar10 + 1;
              *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)lVar4 >> 0x20),
                                 (float)*puVar6 + (float)lVar4);
              puVar6 = puVar5;
            } while (&local_a0 != puVar5);
            pfVar11 = (float *)(*pauVar8 + 4);
            fVar16 = *(float *)*pauVar8 * *(float *)*pauVar8;
            *param_3 = *param_3 + uVar12;
            do {
              fVar19 = *pfVar11;
              pfVar11 = pfVar11 + 1;
              fVar16 = fVar16 + fVar19 * fVar19;
            } while ((float *)(pauVar8[1] + 8) != pfVar11);
            uVar3 = *(uint *)(param_5 + 8);
            fVar17 = fVar17 + fVar16 * fVar15;
            if (*(uint *)(param_5 + 0xc) <= uVar3) {
              basisu::elemental_vector::increase_capacity
                        ((uint)param_5,(bool)((char)uVar3 + '\x01'),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
              uVar3 = *(uint *)(param_5 + 8);
            }
            *(uint *)(*(long *)param_5 + (ulong)uVar3 * 4) = *puVar1;
            *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
            goto LAB_00114976;
          }
LAB_001148b2:
          local_78 = *pauVar8;
          local_68 = *(undefined8 *)pauVar8[1];
          fVar15 = (float)uVar12;
          lVar4 = 0;
          do {
            *(ulong *)((long)local_58 + lVar4) =
                 CONCAT44((float)((ulong)*(undefined8 *)(*pauVar8 + lVar4) >> 0x20) * fVar15,
                          (float)*(undefined8 *)(*pauVar8 + lVar4) * fVar15);
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0x18);
          plVar10 = local_58;
          puVar6 = (undefined8 *)local_98;
          do {
            lVar4 = *plVar10;
            plVar10 = plVar10 + 1;
            *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)lVar4 >> 0x20),
                               (float)*puVar6 + (float)lVar4);
            puVar6 = puVar6 + 1;
          } while (local_58 + 3 != plVar10);
          pfVar11 = (float *)(*pauVar8 + 4);
          fVar16 = *(float *)*pauVar8 * *(float *)*pauVar8;
          *param_7 = *param_7 + uVar12;
          do {
            fVar19 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar16 = fVar16 + fVar19 * fVar19;
          } while (pfVar11 != (float *)(pauVar8[1] + 8));
          uVar3 = *(uint *)(param_9 + 8);
          fVar18 = fVar18 + fVar15 * fVar16;
          if (*(uint *)(param_9 + 0xc) <= uVar3) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_9,(bool)((char)uVar3 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar3 = *(uint *)(param_9 + 8);
          }
          *(uint *)(*(long *)param_9 + (ulong)uVar3 * 4) = *puVar1;
          *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 1;
LAB_00114976:
          lVar14 = lVar14 + 1;
        } while ((uint)lVar14 < *(uint *)(param_1 + 0x38));
        uVar12 = *param_3;
        if ((uVar12 != 0) && (uVar13 = *param_7, uVar13 != 0)) goto LAB_00114456;
      }
      uVar9 = 0;
      goto LAB_00114b66;
    }
    lVar14 = 0;
    fVar18 = 0.0;
    fVar17 = 0.0;
    do {
      while( true ) {
        fVar15 = 0.0;
        puVar1 = (uint *)(*(long *)(param_1 + 0x30) + lVar14 * 4);
        pfVar11 = (float *)((ulong)*puVar1 * 0x20 + *(long *)(this + 0x10));
        lVar4 = 0;
        uVar12 = *(ulong *)(pfVar11 + 6);
        do {
          fVar16 = *(float *)(param_2 + lVar4) - *(float *)((long)pfVar11 + lVar4);
          lVar4 = lVar4 + 4;
          fVar15 = fVar15 + fVar16 * fVar16;
        } while (lVar4 != 0x18);
        lVar4 = 0;
        fVar16 = 0.0;
        do {
          fVar19 = *(float *)(param_6 + lVar4) - *(float *)((long)pfVar11 + lVar4);
          lVar4 = lVar4 + 4;
          fVar16 = fVar16 + fVar19 * fVar19;
        } while (lVar4 != 0x18);
        fVar19 = (float)uVar12;
        lVar4 = 0;
        if (fVar15 < fVar16) break;
        do {
          *(ulong *)((long)local_58 + lVar4) =
               CONCAT44((float)((ulong)*(undefined8 *)((long)pfVar11 + lVar4) >> 0x20) * fVar19,
                        (float)*(undefined8 *)((long)pfVar11 + lVar4) * fVar19);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x18);
        puVar6 = (undefined8 *)local_98;
        plVar10 = local_58;
        do {
          lVar4 = *plVar10;
          puVar5 = puVar6 + 1;
          plVar10 = plVar10 + 1;
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)lVar4 >> 0x20),
                             (float)*puVar6 + (float)lVar4);
          puVar6 = puVar5;
        } while (&local_80 != puVar5);
        fVar15 = *pfVar11 * *pfVar11;
        *param_7 = *param_7 + uVar12;
        pfVar7 = pfVar11 + 1;
        do {
          fVar16 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar15 = fVar15 + fVar16 * fVar16;
        } while (pfVar7 != pfVar11 + 6);
        uVar3 = *(uint *)(param_9 + 8);
        fVar18 = fVar18 + fVar15 * fVar19;
        if (*(uint *)(param_9 + 0xc) <= uVar3) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_9,(bool)((char)uVar3 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar3 = *(uint *)(param_9 + 8);
        }
        lVar14 = lVar14 + 1;
        *(uint *)(*(long *)param_9 + (ulong)uVar3 * 4) = *puVar1;
        *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 1;
        if (*(uint *)(param_1 + 0x38) <= (uint)lVar14) goto LAB_0011442b;
      }
      do {
        *(ulong *)((long)local_58 + lVar4) =
             CONCAT44((float)((ulong)*(undefined8 *)((long)pfVar11 + lVar4) >> 0x20) * fVar19,
                      (float)*(undefined8 *)((long)pfVar11 + lVar4) * fVar19);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      puVar6 = (undefined8 *)local_b8;
      plVar10 = local_58;
      do {
        lVar4 = *plVar10;
        puVar5 = puVar6 + 1;
        plVar10 = plVar10 + 1;
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + (float)((ulong)lVar4 >> 0x20),
                           (float)*puVar6 + (float)lVar4);
        puVar6 = puVar5;
      } while (&local_a0 != puVar5);
      fVar15 = *pfVar11 * *pfVar11;
      *param_3 = *param_3 + uVar12;
      pfVar7 = pfVar11 + 1;
      do {
        fVar16 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar15 = fVar15 + fVar16 * fVar16;
      } while (pfVar11 + 6 != pfVar7);
      uVar3 = *(uint *)(param_5 + 8);
      fVar17 = fVar17 + fVar15 * fVar19;
      if (*(uint *)(param_5 + 0xc) <= uVar3) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_5,(bool)((char)uVar3 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar3 = *(uint *)(param_5 + 8);
      }
      lVar14 = lVar14 + 1;
      *(uint *)(*(long *)param_5 + (ulong)uVar3 * 4) = *puVar1;
      *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    } while ((uint)lVar14 < *(uint *)(param_1 + 0x38));
LAB_0011442b:
    uVar12 = *param_3;
    if ((uVar12 == 0) || (uVar13 = *param_7, uVar13 == 0)) goto LAB_001147bd;
LAB_00114456:
    fVar15 = (float)local_b8._0_4_ * (float)local_b8._0_4_;
    puVar6 = (undefined8 *)local_b8;
    do {
      pfVar11 = (float *)((long)puVar6 + 4);
      puVar6 = (undefined8 *)((long)puVar6 + 4);
      fVar15 = fVar15 + *pfVar11 * *pfVar11;
    } while (puVar6 != (undefined8 *)(local_a8 + 4));
    fVar16 = (float)local_98._0_4_ * (float)local_98._0_4_;
    *param_4 = fVar17 - fVar15 / (float)uVar12;
    puVar6 = (undefined8 *)local_98;
    do {
      pfVar11 = (float *)((long)puVar6 + 4);
      puVar6 = (undefined8 *)((long)puVar6 + 4);
      fVar16 = fVar16 + *pfVar11 * *pfVar11;
    } while ((undefined8 *)(local_88 + 4) != puVar6);
    fVar17 = _LC6 / (float)uVar12;
    *param_8 = fVar18 - fVar16 / (float)uVar13;
    puVar6 = (undefined8 *)local_b8;
    do {
      puVar5 = puVar6 + 1;
      *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar17,(float)*puVar6 * fVar17);
      puVar6 = puVar5;
    } while (&local_a0 != puVar5);
    fVar18 = _LC6 / (float)uVar13;
    puVar6 = (undefined8 *)local_98;
    do {
      puVar5 = puVar6 + 1;
      *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar18,(float)*puVar6 * fVar18);
      puVar6 = puVar5;
    } while (puVar5 != &local_80);
    *(undefined1 (*) [8])(param_2 + 0x10) = local_a8;
    *(undefined1 (*) [8])param_2 = local_b8;
    *(undefined8 *)(param_2 + 8) = uStack_b0;
    *(undefined1 (*) [8])(param_6 + 0x10) = local_88;
    *(undefined1 (*) [8])param_6 = local_98;
    *(undefined8 *)(param_6 + 8) = uStack_90;
    fVar18 = *param_4 + *param_8;
  } while (((_LC53 <= fVar18) && (_LC54 <= (local_d0 - fVar18) / fVar18)) &&
          (local_cc = local_cc + -1, local_d0 = fVar18, local_cc != 0));
  uVar9 = 1;
LAB_00114b66:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
code_r0x001148a8:
  lVar4 = lVar4 + 4;
  if (lVar4 == 0x18) goto LAB_001148b2;
  goto LAB_00114892;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int, unsigned
   int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned
   int*, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int,
   unsigned int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  size_t __n;
  uint *puVar6;
  uint *puVar7;
  
  if (param_1 == param_2) {
    return;
  }
  puVar6 = param_1 + 1;
  do {
    if (param_2 == puVar6) {
      return;
    }
    while( true ) {
      uVar2 = *puVar6;
      puVar7 = puVar6 + 1;
      puVar1 = (uint *)(param_3 + (ulong)uVar2 * 4);
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(param_3 + (ulong)*param_1 * 4)) break;
      uVar5 = (ulong)puVar6[-1];
      puVar4 = puVar6;
      if (uVar3 < *(uint *)(param_3 + uVar5 * 4)) {
        do {
          puVar6 = puVar4 + -1;
          *puVar4 = (uint)uVar5;
          uVar5 = (ulong)puVar4[-2];
          puVar4 = puVar6;
        } while (*puVar1 < *(uint *)(param_3 + uVar5 * 4));
      }
      *puVar6 = uVar2;
      puVar6 = puVar7;
      if (param_2 == puVar7) {
        return;
      }
    }
    __n = (long)puVar6 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *puVar6 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)puVar6),param_1,__n);
    }
    *param_1 = uVar2;
    puVar6 = puVar7;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  size_t __n;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  
  if (param_1 == param_2) {
    return;
  }
  if (param_2 != param_1 + 1) {
    puVar7 = param_1 + 2;
    do {
      uVar3 = puVar7[-1];
      puVar6 = puVar7 + -1;
      lVar1 = param_3 + (ulong)*param_1 * 0x38;
      lVar5 = 4;
      lVar2 = param_3 + (ulong)uVar3 * 0x38;
      do {
        lVar4 = lVar5 + -4;
        do {
          if (*(byte *)(lVar2 + lVar4) < *(byte *)(lVar1 + lVar4)) goto LAB_00114e38;
        } while ((*(byte *)(lVar2 + lVar4) == *(byte *)(lVar1 + lVar4)) &&
                (lVar4 = lVar4 + 1, lVar5 != lVar4));
        if (((*(char *)(lVar2 + -4 + lVar5) != *(char *)(lVar1 + -4 + lVar5) ||
             *(char *)(lVar2 + -3 + lVar5) != *(char *)(lVar1 + -3 + lVar5)) ||
             *(char *)(lVar2 + -2 + lVar5) != *(char *)(lVar1 + -2 + lVar5)) ||
           (*(char *)(lVar2 + -1 + lVar5) != *(char *)(lVar1 + -1 + lVar5))) goto LAB_00114d40;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      if ((*(uint *)(lVar2 + 8) < *(uint *)(lVar1 + 8)) ||
         ((*(uint *)(lVar2 + 8) == *(uint *)(lVar1 + 8) &&
          (*(uint *)(lVar2 + 0xc) < *(uint *)(lVar1 + 0xc))))) {
LAB_00114e38:
        __n = (long)puVar6 - (long)param_1;
        if ((long)__n < 5) {
          if (__n == 4) {
            puVar7[-1] = *param_1;
          }
        }
        else {
          memmove((void *)((long)puVar6 + (4 - __n)),param_1,__n);
        }
        *param_1 = uVar3;
      }
      else {
LAB_00114d40:
        while( true ) {
          lVar5 = 4;
          lVar1 = param_3 + (ulong)puVar6[-1] * 0x38;
          do {
            lVar4 = lVar5 + -4;
            do {
              if (*(byte *)(lVar2 + lVar4) < *(byte *)(lVar1 + lVar4)) goto LAB_00114e00;
            } while ((*(byte *)(lVar2 + lVar4) == *(byte *)(lVar1 + lVar4)) &&
                    (lVar4 = lVar4 + 1, lVar5 != lVar4));
            if (((*(char *)(lVar2 + -3 + lVar5) != *(char *)(lVar1 + -3 + lVar5) ||
                 *(char *)(lVar2 + -4 + lVar5) != *(char *)(lVar1 + -4 + lVar5)) ||
                 *(char *)(lVar2 + -2 + lVar5) != *(char *)(lVar1 + -2 + lVar5)) ||
               (*(char *)(lVar2 + -1 + lVar5) != *(char *)(lVar1 + -1 + lVar5))) goto LAB_00114db5;
            lVar5 = lVar5 + 4;
          } while (lVar5 != 0xc);
          if ((*(uint *)(lVar1 + 8) <= *(uint *)(lVar2 + 8)) &&
             ((*(uint *)(lVar2 + 8) != *(uint *)(lVar1 + 8) ||
              (*(uint *)(lVar1 + 0xc) <= *(uint *)(lVar2 + 0xc))))) break;
LAB_00114e00:
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
        }
LAB_00114db5:
        *puVar6 = uVar3;
      }
      bVar8 = param_2 != puVar7;
      puVar7 = puVar7 + 1;
    } while (bVar8);
  }
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* basisu::tree_vector_quant<basisu::vec<16u, float>
   >::refine_split(basisu::tree_vector_quant<basisu::vec<16u, float> >::tsvq_node const&,
   basisu::vec<16u, float>&, unsigned long&, float&, basisu::vector<unsigned int>&, basisu::vec<16u,
   float>&, unsigned long&, float&, basisu::vector<unsigned int>&) const */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::refine_split
          (tree_vector_quant<basisu::vec<16u,float>> *this,tsvq_node *param_1,vec *param_2,
          ulong *param_3,float *param_4,vector *param_5,vec *param_6,ulong *param_7,float *param_8,
          vector *param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_150;
  int local_14c;
  undefined1 local_148 [4];
  float fStack_144;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [4];
  float fStack_104;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  vector<unsigned_int>::reserve((vector<unsigned_int> *)param_5,(ulong)*(uint *)(param_1 + 0x60));
  vector<unsigned_int>::reserve((vector<unsigned_int> *)param_9,(ulong)*(uint *)(param_1 + 0x60));
  local_14c = 6;
  local_150 = _LC52;
  do {
    if (*(int *)(param_5 + 8) != 0) {
      *(undefined4 *)(param_5 + 8) = 0;
    }
    if (*(int *)(param_9 + 8) != 0) {
      *(undefined4 *)(param_9 + 8) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x60);
    _local_148 = (undefined1  [16])0x0;
    *param_3 = 0;
    local_138 = (undefined1  [16])0x0;
    *param_7 = 0;
    local_128 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    _local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    if (iVar2 == 0) {
LAB_0011549f:
      if (*(int *)(param_5 + 8) != 0) {
        *(undefined4 *)(param_5 + 8) = 0;
      }
      iVar2 = *(int *)(param_9 + 8);
      _local_148 = (undefined1  [16])0x0;
      *param_3 = 0;
      local_138 = (undefined1  [16])0x0;
      local_128 = (undefined1  [16])0x0;
      local_118 = (undefined1  [16])0x0;
      if (iVar2 != 0) {
        *(undefined4 *)(param_9 + 8) = 0;
      }
      _local_108 = (undefined1  [16])0x0;
      *param_7 = 0;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      if (*(int *)(param_1 + 0x60) != 0) {
        lVar13 = 0;
        fVar17 = 0.0;
        fVar16 = 0.0;
        do {
          puVar1 = (uint *)(*(long *)(param_1 + 0x58) + lVar13 * 4);
          pfVar7 = (float *)(*(long *)(this + 0x10) + (ulong)*puVar1 * 0x48);
          uVar12 = *(ulong *)(pfVar7 + 0x10);
          if ((int)lVar13 != 0) {
            lVar5 = 0;
LAB_00115570:
            if (*(float *)((long)pfVar7 + lVar5) == *(float *)(lVar5 + (long)&local_c8))
            goto code_r0x00115586;
            fVar14 = (float)uVar12;
            lVar5 = 0;
            do {
              pfVar8 = (float *)((long)pfVar7 + lVar5);
              fVar15 = pfVar8[1];
              fVar18 = pfVar8[2];
              fVar4 = pfVar8[3];
              *(float *)((long)local_88 + lVar5) = *pfVar8 * fVar14;
              *(float *)((long)local_88 + lVar5 + 4) = fVar15 * fVar14;
              *(float *)((long)local_88 + lVar5 + 8) = fVar18 * fVar14;
              *(float *)((long)local_88 + lVar5 + 0xc) = fVar4 * fVar14;
              lVar5 = lVar5 + 0x10;
              pfVar8 = (float *)local_148;
              pfVar10 = local_88;
            } while (lVar5 != 0x40);
            do {
              fVar15 = pfVar10[1];
              fVar18 = pfVar10[2];
              fVar4 = pfVar10[3];
              pfVar6 = pfVar8 + 4;
              *pfVar8 = *pfVar8 + *pfVar10;
              pfVar8[1] = pfVar8[1] + fVar15;
              pfVar8[2] = pfVar8[2] + fVar18;
              pfVar8[3] = pfVar8[3] + fVar4;
              pfVar8 = pfVar6;
              pfVar10 = pfVar10 + 4;
            } while (pfVar6 != (float *)local_108);
            fVar15 = *pfVar7 * *pfVar7;
            *param_3 = *param_3 + uVar12;
            pfVar8 = pfVar7 + 1;
            do {
              fVar18 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              fVar15 = fVar15 + fVar18 * fVar18;
            } while (pfVar7 + 0x10 != pfVar8);
            uVar3 = *(uint *)(param_5 + 8);
            fVar16 = fVar16 + fVar15 * fVar14;
            if (*(uint *)(param_5 + 0xc) <= uVar3) {
              basisu::elemental_vector::increase_capacity
                        ((uint)param_5,(bool)((char)uVar3 + '\x01'),1,
                         (_func_void_void_ptr_void_ptr_uint *)0x4,false);
              uVar3 = *(uint *)(param_5 + 8);
            }
            *(uint *)(*(long *)param_5 + (ulong)uVar3 * 4) = *puVar1;
            *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
            goto LAB_0011565a;
          }
LAB_00115590:
          local_c8 = *(undefined8 *)pfVar7;
          uStack_c0 = *(undefined8 *)(pfVar7 + 2);
          local_b8 = *(undefined8 *)(pfVar7 + 4);
          uStack_b0 = *(undefined8 *)(pfVar7 + 6);
          local_a8 = *(undefined8 *)(pfVar7 + 8);
          uStack_a0 = *(undefined8 *)(pfVar7 + 10);
          local_98 = *(undefined8 *)(pfVar7 + 0xc);
          uStack_90 = *(undefined8 *)(pfVar7 + 0xe);
          fVar14 = (float)uVar12;
          lVar5 = 0;
          do {
            pfVar8 = (float *)((long)pfVar7 + lVar5);
            fVar15 = pfVar8[1];
            fVar18 = pfVar8[2];
            fVar4 = pfVar8[3];
            *(float *)((long)local_88 + lVar5) = *pfVar8 * fVar14;
            *(float *)((long)local_88 + lVar5 + 4) = fVar15 * fVar14;
            *(float *)((long)local_88 + lVar5 + 8) = fVar18 * fVar14;
            *(float *)((long)local_88 + lVar5 + 0xc) = fVar4 * fVar14;
            lVar5 = lVar5 + 0x10;
            pfVar8 = (float *)local_108;
            pfVar10 = local_88;
          } while (lVar5 != 0x40);
          do {
            fVar15 = pfVar10[1];
            fVar18 = pfVar10[2];
            fVar4 = pfVar10[3];
            pfVar6 = pfVar8 + 4;
            *pfVar8 = *pfVar8 + *pfVar10;
            pfVar8[1] = pfVar8[1] + fVar15;
            pfVar8[2] = pfVar8[2] + fVar18;
            pfVar8[3] = pfVar8[3] + fVar4;
            pfVar8 = pfVar6;
            pfVar10 = pfVar10 + 4;
          } while (pfVar6 != (float *)&local_c8);
          fVar15 = *pfVar7 * *pfVar7;
          *param_7 = *param_7 + uVar12;
          pfVar8 = pfVar7 + 1;
          do {
            fVar18 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            fVar15 = fVar15 + fVar18 * fVar18;
          } while (pfVar8 != pfVar7 + 0x10);
          uVar3 = *(uint *)(param_9 + 8);
          fVar17 = fVar17 + fVar14 * fVar15;
          if (*(uint *)(param_9 + 0xc) <= uVar3) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_9,(bool)((char)uVar3 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar3 = *(uint *)(param_9 + 8);
          }
          *(uint *)(*(long *)param_9 + (ulong)uVar3 * 4) = *puVar1;
          *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 1;
LAB_0011565a:
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < *(uint *)(param_1 + 0x60));
        uVar12 = *param_3;
        if ((uVar12 != 0) && (uVar11 = *param_7, uVar11 != 0)) goto LAB_00115156;
      }
      uVar9 = 0;
      goto LAB_0011583a;
    }
    fVar17 = 0.0;
    lVar13 = 0;
    fVar16 = 0.0;
    do {
      while( true ) {
        fVar14 = 0.0;
        puVar1 = (uint *)(*(long *)(param_1 + 0x58) + lVar13 * 4);
        pfVar7 = (float *)(*(long *)(this + 0x10) + (ulong)*puVar1 * 0x48);
        lVar5 = 0;
        uVar12 = *(ulong *)(pfVar7 + 0x10);
        do {
          fVar15 = *(float *)(param_2 + lVar5) - *(float *)((long)pfVar7 + lVar5);
          lVar5 = lVar5 + 4;
          fVar14 = fVar14 + fVar15 * fVar15;
        } while (lVar5 != 0x40);
        lVar5 = 0;
        fVar15 = 0.0;
        do {
          fVar18 = *(float *)(param_6 + lVar5) - *(float *)((long)pfVar7 + lVar5);
          lVar5 = lVar5 + 4;
          fVar15 = fVar15 + fVar18 * fVar18;
        } while (lVar5 != 0x40);
        fVar18 = (float)uVar12;
        lVar5 = 0;
        if (fVar14 < fVar15) break;
        do {
          pfVar8 = (float *)((long)pfVar7 + lVar5);
          fVar14 = pfVar8[1];
          fVar15 = pfVar8[2];
          fVar4 = pfVar8[3];
          *(float *)((long)local_88 + lVar5) = *pfVar8 * fVar18;
          *(float *)((long)local_88 + lVar5 + 4) = fVar14 * fVar18;
          *(float *)((long)local_88 + lVar5 + 8) = fVar15 * fVar18;
          *(float *)((long)local_88 + lVar5 + 0xc) = fVar4 * fVar18;
          lVar5 = lVar5 + 0x10;
          pfVar8 = (float *)local_108;
          pfVar10 = local_88;
        } while (lVar5 != 0x40);
        do {
          fVar14 = pfVar10[1];
          fVar15 = pfVar10[2];
          fVar4 = pfVar10[3];
          pfVar6 = pfVar8 + 4;
          *pfVar8 = *pfVar8 + *pfVar10;
          pfVar8[1] = pfVar8[1] + fVar14;
          pfVar8[2] = pfVar8[2] + fVar15;
          pfVar8[3] = pfVar8[3] + fVar4;
          pfVar8 = pfVar6;
          pfVar10 = pfVar10 + 4;
        } while ((float *)&local_c8 != pfVar6);
        fVar14 = *pfVar7 * *pfVar7;
        *param_7 = *param_7 + uVar12;
        pfVar8 = pfVar7 + 1;
        do {
          fVar15 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          fVar14 = fVar14 + fVar15 * fVar15;
        } while (pfVar7 + 0x10 != pfVar8);
        uVar3 = *(uint *)(param_9 + 8);
        fVar17 = fVar17 + fVar14 * fVar18;
        if (*(uint *)(param_9 + 0xc) <= uVar3) {
          basisu::elemental_vector::increase_capacity
                    ((uint)param_9,(bool)((char)uVar3 + '\x01'),1,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar3 = *(uint *)(param_9 + 8);
        }
        lVar13 = lVar13 + 1;
        *(uint *)(*(long *)param_9 + (ulong)uVar3 * 4) = *puVar1;
        *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 1;
        if (*(uint *)(param_1 + 0x60) <= (uint)lVar13) goto LAB_00115123;
      }
      do {
        pfVar8 = (float *)((long)pfVar7 + lVar5);
        fVar14 = pfVar8[1];
        fVar15 = pfVar8[2];
        fVar4 = pfVar8[3];
        *(float *)((long)local_88 + lVar5) = *pfVar8 * fVar18;
        *(float *)((long)local_88 + lVar5 + 4) = fVar14 * fVar18;
        *(float *)((long)local_88 + lVar5 + 8) = fVar15 * fVar18;
        *(float *)((long)local_88 + lVar5 + 0xc) = fVar4 * fVar18;
        lVar5 = lVar5 + 0x10;
        pfVar8 = (float *)local_148;
        pfVar10 = local_88;
      } while (lVar5 != 0x40);
      do {
        fVar14 = pfVar10[1];
        fVar15 = pfVar10[2];
        fVar4 = pfVar10[3];
        pfVar6 = pfVar8 + 4;
        *pfVar8 = *pfVar8 + *pfVar10;
        pfVar8[1] = pfVar8[1] + fVar14;
        pfVar8[2] = pfVar8[2] + fVar15;
        pfVar8[3] = pfVar8[3] + fVar4;
        pfVar8 = pfVar6;
        pfVar10 = pfVar10 + 4;
      } while ((float *)local_108 != pfVar6);
      fVar14 = *pfVar7 * *pfVar7;
      *param_3 = *param_3 + uVar12;
      pfVar8 = pfVar7 + 1;
      do {
        fVar15 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar14 = fVar14 + fVar15 * fVar15;
      } while (pfVar7 + 0x10 != pfVar8);
      uVar3 = *(uint *)(param_5 + 8);
      fVar16 = fVar16 + fVar14 * fVar18;
      if (*(uint *)(param_5 + 0xc) <= uVar3) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_5,(bool)((char)uVar3 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar3 = *(uint *)(param_5 + 8);
      }
      lVar13 = lVar13 + 1;
      *(uint *)(*(long *)param_5 + (ulong)uVar3 * 4) = *puVar1;
      *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    } while ((uint)lVar13 < *(uint *)(param_1 + 0x60));
LAB_00115123:
    uVar12 = *param_3;
    if ((uVar12 == 0) || (uVar11 = *param_7, uVar11 == 0)) goto LAB_0011549f;
LAB_00115156:
    pfVar7 = (float *)(local_148 + 4);
    fVar14 = (float)local_148 * (float)local_148;
    do {
      fVar15 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      fVar14 = fVar14 + fVar15 * fVar15;
    } while ((float *)local_108 != pfVar7);
    fVar15 = (float)local_108 * (float)local_108;
    *param_4 = fVar16 - fVar14 / (float)uVar12;
    pfVar7 = (float *)(local_108 + 4);
    do {
      fVar16 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      fVar15 = fVar15 + fVar16 * fVar16;
    } while (pfVar7 != (float *)&local_c8);
    fVar16 = _LC6 / (float)uVar12;
    *param_8 = fVar17 - fVar15 / (float)uVar11;
    pfVar7 = (float *)local_148;
    do {
      pfVar8 = pfVar7 + 4;
      *pfVar7 = *pfVar7 * fVar16;
      pfVar7[1] = pfVar7[1] * fVar16;
      pfVar7[2] = pfVar7[2] * fVar16;
      pfVar7[3] = pfVar7[3] * fVar16;
      pfVar7 = pfVar8;
    } while ((float *)local_108 != pfVar8);
    fVar17 = _LC6 / (float)uVar11;
    pfVar7 = (float *)local_108;
    do {
      pfVar8 = pfVar7 + 4;
      *pfVar7 = *pfVar7 * fVar17;
      pfVar7[1] = pfVar7[1] * fVar17;
      pfVar7[2] = pfVar7[2] * fVar17;
      pfVar7[3] = pfVar7[3] * fVar17;
      pfVar7 = pfVar8;
    } while (pfVar8 != (float *)&local_c8);
    *(undefined8 *)param_2 = _local_148;
    *(undefined8 *)(param_2 + 8) = uStack_140;
    *(undefined8 *)(param_2 + 0x10) = local_138._0_8_;
    *(undefined8 *)(param_2 + 0x18) = local_138._8_8_;
    *(undefined8 *)(param_2 + 0x20) = local_128._0_8_;
    *(undefined8 *)(param_2 + 0x28) = local_128._8_8_;
    *(undefined8 *)(param_2 + 0x30) = local_118._0_8_;
    *(undefined8 *)(param_2 + 0x38) = local_118._8_8_;
    *(undefined8 *)param_6 = _local_108;
    *(undefined8 *)(param_6 + 8) = uStack_100;
    *(undefined8 *)(param_6 + 0x10) = local_f8._0_8_;
    *(undefined8 *)(param_6 + 0x18) = local_f8._8_8_;
    *(undefined8 *)(param_6 + 0x20) = local_e8._0_8_;
    *(undefined8 *)(param_6 + 0x28) = local_e8._8_8_;
    fVar17 = _LC53;
    *(undefined8 *)(param_6 + 0x30) = local_d8._0_8_;
    *(undefined8 *)(param_6 + 0x38) = local_d8._8_8_;
    fVar16 = *param_4 + *param_8;
  } while (((fVar17 <= fVar16) && (_LC54 <= (local_150 - fVar16) / fVar16)) &&
          (local_14c = local_14c + -1, local_150 = fVar16, local_14c != 0));
  uVar9 = 1;
LAB_0011583a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
code_r0x00115586:
  lVar5 = lVar5 + 4;
  if (lVar5 == 0x40) goto LAB_00115590;
  goto LAB_00115570;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__heap_select<basisu::basisu_frontend::subblock_endpoint_quant_err*,
   __gnu_cxx::__ops::_Iter_less_iter>(basisu::basisu_frontend::subblock_endpoint_quant_err*,
   basisu::basisu_frontend::subblock_endpoint_quant_err*,
   basisu::basisu_frontend::subblock_endpoint_quant_err*, __gnu_cxx::__ops::_Iter_less_iter) */

void std::
     __heap_select<basisu::basisu_frontend::subblock_endpoint_quant_err*,__gnu_cxx::__ops::_Iter_less_iter>
               (ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  
  if (0x18 < (long)param_2 - (long)param_1) {
    for (lVar3 = (((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555 + -2) / 2;
        __adjust_heap<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,basisu::basisu_frontend::subblock_endpoint_quant_err,__gnu_cxx::__ops::_Iter_less_iter>
                  (), lVar3 != 0; lVar3 = lVar3 + -1) {
    }
  }
  if (param_2 < param_3) {
    do {
      while ((*param_1 <= *param_2 &&
             ((*param_2 != *param_1 ||
              (((uint)param_1[2] <= (uint)param_2[2] &&
               (((uint)param_2[2] != (uint)param_1[2] ||
                (*(uint *)((long)param_1 + 0x14) <= *(uint *)((long)param_2 + 0x14)))))))))) {
        param_2 = param_2 + 3;
        if (param_3 <= param_2) {
          return;
        }
      }
      uVar1 = param_1[1];
      puVar2 = param_2 + 3;
      *param_2 = *param_1;
      param_2[1] = uVar1;
      param_2[2] = param_1[2];
      __adjust_heap<basisu::basisu_frontend::subblock_endpoint_quant_err*,long,basisu::basisu_frontend::subblock_endpoint_quant_err,__gnu_cxx::__ops::_Iter_less_iter>
                ();
      param_2 = puVar2;
    } while (puVar2 < param_3);
  }
  return;
}



/* std::_Hashtable<unsigned int, unsigned int, std::allocator<unsigned int>,
   std::__detail::_Identity, std::equal_to<unsigned int>, std::hash<unsigned int>,
   std::__detail::_Mod_range_hashing, std::__detail::_Default_ranged_hash,
   std::__detail::_Prime_rehash_policy, std::__detail::_Hashtable_traits<false, true, true>
   >::_M_insert_unique_node(unsigned long, unsigned long, std::__detail::_Hash_node<unsigned int,
   false>*, unsigned long) */

ulong std::
      _Hashtable<unsigned_int,unsigned_int,std::allocator<unsigned_int>,std::__detail::_Identity,std::equal_to<unsigned_int>,std::hash<unsigned_int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>
      ::_M_insert_unique_node(ulong param_1,ulong param_2,_Hash_node *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  void *__s;
  ulong extraout_RDX;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    (param_1 + 0x20,*(ulong *)(param_1 + 8),*(ulong *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    __s = *(void **)param_1;
    plVar5 = (long *)((long)__s + param_2 * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  else {
    if (extraout_RDX == 1) {
      __s = (void *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
                    /* WARNING: Subroutine does not return */
        std::__throw_bad_alloc();
      }
      __s = operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar4 = 0;
    while (uVar7 = uVar4, plVar6 = plVar5, plVar5 != (long *)0x0) {
      while( true ) {
        plVar5 = (long *)*plVar6;
        uVar4 = (ulong)*(uint *)(plVar6 + 1) % extraout_RDX;
        plVar1 = (long *)((long)__s + uVar4 * 8);
        if ((long *)*plVar1 == (long *)0x0) break;
        *plVar6 = *(long *)*plVar1;
        *(long **)*plVar1 = plVar6;
        plVar6 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00115aa0;
      }
      *plVar6 = *(long *)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar6;
      *plVar1 = param_1 + 0x10;
      if (*plVar6 != 0) {
        *(long **)((long)__s + uVar7 * 8) = plVar6;
      }
    }
LAB_00115aa0:
    if (*(void **)param_1 != (void *)(param_1 + 0x30)) {
      operator_delete(*(void **)param_1,*(long *)(param_1 + 8) << 3);
    }
    *(ulong *)(param_1 + 8) = extraout_RDX;
    *(void **)param_1 = __s;
    plVar5 = (long *)((long)__s + ((ulong)param_3 % extraout_RDX) * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_4;
    if (*(long *)param_4 != 0) {
      *(ulong *)((long)__s + ((ulong)*(uint *)(*(long *)param_4 + 8) % *(ulong *)(param_1 + 8)) * 8)
           = param_4;
    }
    *plVar5 = param_1 + 0x10;
  }
  else {
    *(undefined8 *)param_4 = *puVar2;
    *(ulong *)*plVar5 = param_4;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return param_4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__unguarded_linear_insert<unsigned int*,
   __gnu_cxx::__ops::_Val_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*,
   __gnu_cxx::__ops::_Val_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __unguarded_linear_insert<unsigned_int*,__gnu_cxx::__ops::_Val_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *param_1;
  lVar1 = param_2 + (ulong)uVar3 * 0x38;
  while( true ) {
    lVar5 = 4;
    lVar2 = param_2 + (ulong)param_1[-1] * 0x38;
    do {
      lVar4 = lVar5 + -4;
      do {
        if (*(byte *)(lVar1 + lVar4) < *(byte *)(lVar2 + lVar4)) goto LAB_00115c18;
      } while ((*(byte *)(lVar1 + lVar4) == *(byte *)(lVar2 + lVar4)) &&
              (lVar4 = lVar4 + 1, lVar5 != lVar4));
      if (((*(char *)(lVar1 + -3 + lVar5) != *(char *)(lVar2 + -3 + lVar5) ||
           *(char *)(lVar1 + -4 + lVar5) != *(char *)(lVar2 + -4 + lVar5)) ||
           *(char *)(lVar1 + -2 + lVar5) != *(char *)(lVar2 + -2 + lVar5)) ||
         (*(char *)(lVar1 + -1 + lVar5) != *(char *)(lVar2 + -1 + lVar5))) goto LAB_00115bf1;
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0xc);
    if ((*(uint *)(lVar2 + 8) <= *(uint *)(lVar1 + 8)) &&
       ((*(uint *)(lVar1 + 8) != *(uint *)(lVar2 + 8) ||
        (*(uint *)(lVar2 + 0xc) <= *(uint *)(lVar1 + 0xc))))) break;
LAB_00115c18:
    *param_1 = param_1[-1];
    param_1 = param_1 + -1;
  }
LAB_00115bf1:
  *param_1 = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::vec<6u, float> basisu::compute_pca_from_covar<6u, basisu::vec<6u, float>
   >(basisu::matrix<6u, 6u, float>&) */

void __thiscall
basisu::compute_pca_from_covar<6u,basisu::vec<6u,float>>(basisu *this,matrix *param_1)

{
  matrix *pmVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  matrix *pmVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  float fVar10;
  int iVar13;
  double dVar11;
  double dVar12;
  double dVar14;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98 [4];
  undefined8 local_78 [3];
  float local_60 [2];
  float local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = &local_b8;
  iVar7 = (int)_LC57;
  iVar13 = _LC57._4_4_;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = CONCAT44((float)iVar13 * _LC59._4_4_ * _UNK_0011db54 + _UNK_0011db5c,
                       (float)iVar7 * (float)_LC59 * _LC70 + _LC72);
    puVar3 = puVar4;
    iVar7 = iVar7 + (int)_LC58;
    iVar13 = iVar13 + _LC58._4_4_;
  } while (&local_a0 != puVar4);
  iVar7 = 8;
  local_98[2] = local_a8;
  local_98[0] = local_b8;
  local_98[1] = uStack_b0;
  do {
    pmVar8 = param_1;
    pfVar6 = (float *)local_78;
    dVar14 = 0.0;
    do {
      lVar5 = 0;
      dVar11 = 0.0;
      do {
        pmVar1 = pmVar8 + lVar5;
        pfVar9 = (float *)((long)&local_b8 + lVar5);
        lVar5 = lVar5 + 4;
        dVar11 = dVar11 + (double)(*(float *)pmVar1 * *pfVar9);
      } while (lVar5 != 0x18);
      pmVar8 = pmVar8 + 0x18;
      *pfVar6 = (float)dVar11;
      dVar12 = (double)((ulong)dVar11 & _LC62);
      if ((double)((ulong)dVar11 & _LC62) <= dVar14) {
        dVar12 = dVar14;
      }
      pfVar6 = pfVar6 + 1;
      dVar14 = dVar12;
    } while (pmVar8 != param_1 + 0x90);
    if (dVar12 != 0.0) {
      pfVar6 = (float *)local_78;
      do {
        pfVar9 = pfVar6 + 2;
        *(ulong *)pfVar6 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * (float)(_LC63 / dVar12),
                      (float)*(undefined8 *)pfVar6 * (float)(_LC63 / dVar12));
        pfVar6 = pfVar9;
      } while (local_60 != pfVar9);
    }
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)((long)local_78 + lVar5);
      *(ulong *)((long)local_58 + lVar5) =
           CONCAT44((float)((ulong)*(undefined8 *)((long)local_98 + lVar5) >> 0x20) -
                    (float)((ulong)uVar2 >> 0x20),
                    (float)*(undefined8 *)((long)local_98 + lVar5) - (float)uVar2);
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x18);
    fVar10 = local_58[0] * local_58[0];
    local_98[0] = local_b8;
    local_98[1] = uStack_b0;
    local_98[2] = local_a8;
    local_b8 = local_78[0];
    uVar2 = local_b8;
    uStack_b0 = local_78[1];
    local_a8 = (undefined1  [8])local_78[2];
    pfVar6 = local_58;
    do {
      pfVar9 = pfVar6 + 1;
      pfVar6 = pfVar6 + 1;
      fVar10 = fVar10 + *pfVar9 * *pfVar9;
    } while (pfVar6 != local_58 + 5);
  } while ((_LC64 <= fVar10) && (iVar7 = iVar7 + -1, iVar7 != 0));
  local_b8._0_4_ = (float)local_78[0];
  fVar10 = (float)local_b8 * (float)local_b8;
  puVar3 = &local_b8;
  do {
    pfVar6 = (float *)((long)puVar3 + 4);
    puVar3 = (undefined8 *)((long)puVar3 + 4);
    fVar10 = fVar10 + *pfVar6 * *pfVar6;
  } while ((undefined8 *)(local_a8 + 4) != puVar3);
  local_b8 = uVar2;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  if (fVar10 != 0.0) {
    fVar10 = _LC6 / fVar10;
    puVar3 = &local_b8;
    do {
      puVar4 = puVar3 + 1;
      *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) * fVar10,(float)*puVar3 * fVar10);
      puVar3 = puVar4;
    } while (&local_a0 != puVar4);
  }
  *(undefined1 (*) [8])(this + 0x10) = local_a8;
  *(undefined8 *)this = local_b8;
  *(undefined8 *)(this + 8) = uStack_b0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<6u, float>
   >::compute_split_axis(basisu::tree_vector_quant<basisu::vec<6u, float> >::tsvq_node const&) const
    */

tsvq_node * basisu::tree_vector_quant<basisu::vec<6u,float>>::compute_split_axis(tsvq_node *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  matrix *pmVar5;
  long lVar6;
  matrix *pmVar7;
  int iVar8;
  long in_RDX;
  long lVar9;
  matrix *pmVar10;
  long in_RSI;
  matrix *pmVar11;
  long lVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float local_f8 [8];
  float local_d8 [8];
  matrix local_b8 [24];
  matrix amStack_a0 [120];
  matrix local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pmVar10 = local_b8;
  do {
    *(undefined1 (*) [16])pmVar10 = (undefined1  [16])0x0;
    pmVar5 = pmVar10 + 0x30;
    *(undefined1 (*) [16])(pmVar10 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pmVar10 + 0x20) = (undefined1  [16])0x0;
    pmVar10 = pmVar5;
  } while (pmVar5 != local_28);
  if (*(uint *)(in_RDX + 0x38) != 0) {
    puVar13 = *(uint **)(in_RDX + 0x30);
    lVar12 = *(long *)(in_RSI + 0x10);
    puVar1 = puVar13 + *(uint *)(in_RDX + 0x38);
    do {
      lVar6 = 0;
      lVar9 = (ulong)*puVar13 * 0x20 + lVar12;
      do {
        uVar2 = *(undefined8 *)(lVar9 + lVar6);
        uVar3 = *(undefined8 *)(in_RDX + 0x10 + lVar6);
        *(ulong *)((long)local_f8 + lVar6) =
             CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                      (float)uVar2 - (float)uVar3);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x18);
      fVar14 = (float)*(ulong *)(lVar9 + 0x18);
      lVar6 = 0;
      do {
        *(ulong *)((long)local_d8 + lVar6) =
             CONCAT44((float)((ulong)*(undefined8 *)((long)local_f8 + lVar6) >> 0x20) * fVar14,
                      (float)*(undefined8 *)((long)local_f8 + lVar6) * fVar14);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x18);
      lVar6 = 0;
      pmVar10 = local_b8;
      do {
        fVar14 = local_f8[lVar6];
        lVar9 = lVar6;
        do {
          *(float *)(pmVar10 + lVar9 * 4) =
               local_d8[lVar9] * fVar14 + *(float *)(pmVar10 + lVar9 * 4);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 != 6);
        lVar6 = lVar6 + 1;
        pmVar10 = pmVar10 + 0x18;
      } while (lVar6 != 6);
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1);
  }
  uVar4 = *(ulong *)(in_RDX + 8);
  pmVar10 = amStack_a0;
  iVar8 = 0;
  pmVar5 = local_b8;
  pmVar11 = local_b8;
  do {
    do {
      pmVar7 = pmVar5;
      *(float *)pmVar7 = *(float *)pmVar7 * (_LC6 / (float)uVar4);
      pmVar5 = pmVar7 + 4;
    } while (pmVar7 + 4 != pmVar10);
    iVar8 = iVar8 + 1;
    pmVar11 = pmVar11 + 0x1c;
    pmVar10 = pmVar7 + 0x1c;
    pmVar5 = pmVar11;
  } while (iVar8 != 6);
  lVar6 = 1;
  pmVar10 = local_b8;
  pmVar5 = local_b8;
  lVar12 = lVar6;
  pmVar11 = local_b8;
  do {
    do {
      lVar9 = lVar6 * 4;
      lVar6 = lVar6 + 1;
      *(undefined4 *)(pmVar10 + 0x18) = *(undefined4 *)(pmVar11 + lVar9);
      pmVar10 = pmVar10 + 0x18;
    } while ((int)lVar6 != 6);
    lVar6 = lVar12 + 1;
    pmVar10 = pmVar5 + 0x1c;
    pmVar11 = pmVar11 + 0x18;
    pmVar5 = pmVar10;
    lVar12 = lVar6;
  } while (lVar6 != 6);
  compute_pca_from_covar<6u,basisu::vec<6u,float>>((basisu *)param_1,local_b8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::vec<16u, float> basisu::compute_pca_from_covar<16u, basisu::vec<16u, float>
   >(basisu::matrix<16u, 16u, float>&) */

basisu * __thiscall
basisu::compute_pca_from_covar<16u,basisu::vec<16u,float>>(basisu *this,matrix *param_1)

{
  matrix *pmVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  matrix *pmVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  int iVar16;
  double dVar14;
  double dVar15;
  int iVar17;
  int iVar18;
  double dVar19;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  float local_78 [18];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar10 = (float *)&local_138;
  iVar12 = (int)_LC57;
  iVar16 = _LC57._4_4_;
  iVar17 = _UNK_0011db08;
  iVar18 = _UNK_0011db0c;
  do {
    pfVar8 = pfVar10 + 4;
    *pfVar10 = (float)iVar12 * _LC68 * _LC70 + _LC72;
    pfVar10[1] = (float)iVar16 * _LC68 * _LC70 + _LC72;
    pfVar10[2] = (float)iVar17 * _LC68 * _LC70 + _LC72;
    pfVar10[3] = (float)iVar18 * _LC68 * _LC70 + _LC72;
    pfVar10 = pfVar8;
    iVar12 = iVar12 + (int)_LC37;
    iVar16 = iVar16 + _LC37._4_4_;
    iVar17 = iVar17 + _UNK_0011db18;
    iVar18 = iVar18 + _UNK_0011db1c;
  } while ((float *)&local_f8 != pfVar8);
  iVar12 = 8;
  local_f8 = local_138;
  uStack_f0 = uStack_130;
  local_c8 = local_108;
  uStack_c0 = uStack_100;
  local_e8 = local_128;
  uStack_e0 = uStack_120;
  local_d8 = local_118;
  uStack_d0 = uStack_110;
  do {
    pmVar11 = param_1;
    pfVar10 = (float *)&local_b8;
    dVar19 = 0.0;
    do {
      lVar9 = 0;
      dVar14 = 0.0;
      do {
        pmVar1 = pmVar11 + lVar9;
        pfVar8 = (float *)((long)&local_138 + lVar9);
        lVar9 = lVar9 + 4;
        dVar14 = dVar14 + (double)(*(float *)pmVar1 * *pfVar8);
      } while (lVar9 != 0x40);
      pfVar8 = pfVar10 + 1;
      pmVar11 = pmVar11 + 0x40;
      *pfVar10 = (float)dVar14;
      dVar15 = (double)((ulong)dVar14 & _LC62);
      if ((double)((ulong)dVar14 & _LC62) <= dVar19) {
        dVar15 = dVar19;
      }
      pfVar10 = pfVar8;
      dVar19 = dVar15;
    } while (pfVar8 != local_78);
    if (dVar15 != 0.0) {
      fVar13 = (float)(_LC63 / dVar15);
      pfVar10 = (float *)&local_b8;
      do {
        pfVar8 = pfVar10 + 4;
        *pfVar10 = *pfVar10 * fVar13;
        pfVar10[1] = pfVar10[1] * fVar13;
        pfVar10[2] = pfVar10[2] * fVar13;
        pfVar10[3] = pfVar10[3] * fVar13;
        pfVar10 = pfVar8;
      } while (local_78 != pfVar8);
    }
    lVar9 = 0;
    do {
      fVar13 = *(float *)((long)&local_f8 + lVar9 + 4);
      fVar2 = *(float *)((long)&uStack_f0 + lVar9);
      fVar3 = *(float *)((long)&uStack_f0 + lVar9 + 4);
      fVar4 = *(float *)((long)&local_b8 + lVar9 + 4);
      fVar5 = *(float *)((long)&uStack_b0 + lVar9);
      fVar6 = *(float *)((long)&uStack_b0 + lVar9 + 4);
      *(float *)((long)local_78 + lVar9) =
           *(float *)((long)&local_f8 + lVar9) - *(float *)((long)&local_b8 + lVar9);
      *(float *)((long)local_78 + lVar9 + 4) = fVar13 - fVar4;
      *(float *)((long)local_78 + lVar9 + 8) = fVar2 - fVar5;
      *(float *)((long)local_78 + lVar9 + 0xc) = fVar3 - fVar6;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x40);
    local_f8 = local_138;
    uStack_f0 = uStack_130;
    fVar13 = local_78[0] * local_78[0];
    local_e8 = local_128;
    uStack_e0 = uStack_120;
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    local_c8 = local_108;
    uStack_c0 = uStack_100;
    local_138 = local_b8;
    uVar7 = local_138;
    uStack_130 = uStack_b0;
    local_128 = local_a8;
    uStack_120 = uStack_a0;
    local_118 = local_98;
    uStack_110 = uStack_90;
    local_108 = local_88;
    uStack_100 = uStack_80;
    pfVar10 = local_78 + 1;
    do {
      fVar2 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      fVar13 = fVar13 + fVar2 * fVar2;
    } while (local_78 + 0x10 != pfVar10);
  } while ((_LC64 <= fVar13) && (iVar12 = iVar12 + -1, iVar12 != 0));
  local_138._0_4_ = (float)local_b8;
  pfVar10 = (float *)((long)&local_138 + 4);
  fVar13 = (float)local_138 * (float)local_138;
  do {
    fVar2 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    fVar13 = fVar13 + fVar2 * fVar2;
  } while ((float *)&local_f8 != pfVar10);
  local_138 = uVar7;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  if (fVar13 != 0.0) {
    fVar13 = _LC6 / fVar13;
    pfVar10 = (float *)&local_138;
    do {
      pfVar8 = pfVar10 + 4;
      *pfVar10 = *pfVar10 * fVar13;
      pfVar10[1] = pfVar10[1] * fVar13;
      pfVar10[2] = pfVar10[2] * fVar13;
      pfVar10[3] = pfVar10[3] * fVar13;
      pfVar10 = pfVar8;
    } while ((float *)&local_f8 != pfVar8);
  }
  *(undefined8 *)this = local_138;
  *(undefined8 *)(this + 8) = uStack_130;
  *(undefined8 *)(this + 0x10) = local_128;
  *(undefined8 *)(this + 0x18) = uStack_120;
  *(undefined8 *)(this + 0x20) = local_118;
  *(undefined8 *)(this + 0x28) = uStack_110;
  *(undefined8 *)(this + 0x30) = local_108;
  *(undefined8 *)(this + 0x38) = uStack_100;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<16u, float>
   >::compute_split_axis(basisu::tree_vector_quant<basisu::vec<16u, float> >::tsvq_node const&)
   const */

tsvq_node *
basisu::tree_vector_quant<basisu::vec<16u,float>>::compute_split_axis(tsvq_node *param_1)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  long lVar11;
  matrix *pmVar12;
  int iVar13;
  long lVar14;
  matrix *pmVar15;
  long in_RDX;
  matrix *pmVar16;
  long in_RSI;
  matrix *pmVar17;
  uint *puVar18;
  long in_FS_OFFSET;
  float fVar19;
  float local_4a8 [32];
  matrix local_428 [64];
  matrix local_3e8 [968];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pmVar16 = local_428;
  for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined8 *)pmVar16 = 0;
    pmVar16 = pmVar16 + 8;
  }
  if (*(uint *)(in_RDX + 0x60) != 0) {
    puVar18 = *(uint **)(in_RDX + 0x58);
    lVar14 = *(long *)(in_RSI + 0x10);
    puVar1 = puVar18 + *(uint *)(in_RDX + 0x60);
    do {
      lVar11 = lVar14 + (ulong)*puVar18 * 0x48;
      lVar10 = 0;
      do {
        pfVar2 = (float *)(lVar11 + lVar10);
        fVar19 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar6 = pfVar2[3];
        pfVar3 = (float *)(in_RDX + 0x10 + lVar10);
        fVar7 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        *(float *)((long)local_4a8 + lVar10) = *pfVar2 - *pfVar3;
        *(float *)((long)local_4a8 + lVar10 + 4) = fVar19 - fVar7;
        *(float *)((long)local_4a8 + lVar10 + 8) = fVar5 - fVar8;
        *(float *)((long)local_4a8 + lVar10 + 0xc) = fVar6 - fVar9;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x40);
      fVar19 = (float)*(ulong *)(lVar11 + 0x40);
      lVar11 = 0;
      do {
        *(float *)((long)local_4a8 + lVar11 + 0x40) = *(float *)((long)local_4a8 + lVar11) * fVar19;
        *(float *)((long)local_4a8 + lVar11 + 0x44) =
             *(float *)((long)local_4a8 + lVar11 + 4) * fVar19;
        *(float *)((long)local_4a8 + lVar11 + 0x48) =
             *(float *)((long)local_4a8 + lVar11 + 8) * fVar19;
        *(float *)((long)local_4a8 + lVar11 + 0x4c) =
             *(float *)((long)local_4a8 + lVar11 + 0xc) * fVar19;
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x40);
      lVar11 = 0;
      pmVar16 = local_428;
      do {
        fVar19 = local_4a8[lVar11];
        lVar10 = lVar11;
        do {
          *(float *)(pmVar16 + lVar10 * 4) =
               local_4a8[lVar10 + 0x10] * fVar19 + *(float *)(pmVar16 + lVar10 * 4);
          lVar10 = lVar10 + 1;
        } while ((int)lVar10 != 0x10);
        lVar11 = lVar11 + 1;
        pmVar16 = pmVar16 + 0x40;
      } while (lVar11 != 0x10);
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
  }
  uVar4 = *(ulong *)(in_RDX + 8);
  iVar13 = 0;
  pmVar16 = local_3e8;
  pmVar15 = local_428;
  pmVar17 = local_428;
  do {
    do {
      pmVar12 = pmVar15;
      *(float *)pmVar12 = *(float *)pmVar12 * (_LC6 / (float)uVar4);
      pmVar15 = pmVar12 + 4;
    } while (pmVar12 + 4 != pmVar16);
    iVar13 = iVar13 + 1;
    pmVar17 = pmVar17 + 0x44;
    pmVar16 = pmVar12 + 0x44;
    pmVar15 = pmVar17;
  } while (iVar13 != 0x10);
  lVar14 = 1;
  lVar11 = lVar14;
  pmVar16 = local_428;
  pmVar15 = local_428;
  do {
    do {
      lVar10 = lVar14 + 1;
      *(undefined4 *)(pmVar15 + lVar14 * 0x40) = *(undefined4 *)(pmVar16 + lVar14 * 4);
      lVar14 = lVar10;
    } while ((int)lVar10 != 0x10);
    lVar14 = lVar11 + 1;
    pmVar16 = pmVar16 + 0x40;
    pmVar15 = pmVar15 + 4;
    lVar11 = lVar14;
  } while (lVar14 != 0x10);
  compute_pca_from_covar<16u,basisu::vec<16u,float>>((basisu *)param_1,local_428);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int, unsigned
   int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, long, long,
   unsigned int, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int,
   unsigned int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (long param_1,long param_2,ulong param_3,uint param_4,long param_5)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)(param_3 - 1) / 2;
  lVar6 = param_2;
  if (param_2 < lVar7) {
    do {
      lVar2 = (lVar6 + 1) * 2;
      lVar4 = (lVar6 + 1) * 8;
      puVar3 = (uint *)(param_1 + lVar4);
      uVar5 = *puVar3;
      if (*(uint *)(param_5 + (ulong)uVar5 * 4) <
          *(uint *)(param_5 + (ulong)*(uint *)(param_1 + -4 + lVar4) * 4)) {
        lVar2 = lVar2 + -1;
        puVar3 = (uint *)(param_1 + lVar2 * 4);
        uVar5 = *puVar3;
      }
      *(uint *)(param_1 + lVar6 * 4) = uVar5;
      lVar6 = lVar2;
    } while (lVar2 < lVar7);
    if ((param_3 & 1) == 0) goto LAB_00116770;
  }
  else {
    puVar3 = (uint *)(param_1 + param_2 * 4);
    lVar2 = param_2;
    if ((param_3 & 1) != 0) goto LAB_00116756;
LAB_00116770:
    if ((long)(param_3 - 2) / 2 == lVar2) {
      lVar6 = lVar2 * 2;
      lVar2 = lVar6 + 1;
      *puVar3 = *(uint *)(param_1 + -4 + (lVar6 + 2) * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
    }
  }
  lVar6 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  if (param_2 < lVar2) {
    while( true ) {
      lVar7 = lVar6 >> 1;
      puVar1 = (uint *)(param_1 + lVar7 * 4);
      puVar3 = (uint *)(param_1 + lVar2 * 4);
      uVar5 = *puVar1;
      if (*(uint *)(param_5 + (ulong)param_4 * 4) <= *(uint *)(param_5 + (ulong)uVar5 * 4)) break;
      *puVar3 = uVar5;
      lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar2 = lVar7;
      if (lVar7 <= param_2) {
        *puVar1 = param_4;
        return;
      }
    }
  }
LAB_00116756:
  *puVar3 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int, unsigned
   int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned
   int*, long, __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned int>(unsigned int,
   unsigned int*, unsigned int const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (ulong *param_1,uint *param_2,long param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 0x41) {
    return;
  }
  puVar1 = (uint *)((long)param_1 + 4);
  puVar12 = param_2;
  if (param_3 != 0) {
    do {
      uVar7 = (ulong)*(uint *)((long)param_1 + 4);
      param_3 = param_3 + -1;
      puVar6 = (uint *)((long)param_1 + (lVar4 >> 3) * 4);
      uVar10 = *param_1;
      uVar2 = *puVar6;
      uVar3 = *(uint *)(param_4 + uVar7 * 4);
      uVar14 = (uint)uVar10;
      uVar8 = *(uint *)(param_4 + (ulong)puVar12[-1] * 4);
      uVar9 = uVar10 & 0xffffffff;
      uVar11 = *(uint *)(param_4 + (ulong)uVar2 * 4);
      puVar5 = puVar12;
      param_2 = puVar1;
      if (uVar3 < uVar11) {
        if (uVar11 < uVar8) {
LAB_001168f6:
          *(uint *)param_1 = uVar2;
          *puVar6 = uVar14;
          uVar10 = (ulong)*(uint *)((long)param_1 + 4);
          uVar9 = (ulong)puVar12[-1];
          uVar7 = (ulong)(uint)*param_1;
        }
        else {
          if (uVar8 <= uVar3) goto LAB_0011683e;
LAB_001168b0:
          *(uint *)param_1 = puVar12[-1];
          puVar12[-1] = uVar14;
          uVar10 = (ulong)*(uint *)((long)param_1 + 4);
          uVar7 = (ulong)(uint)*param_1;
        }
      }
      else {
        if (uVar8 <= uVar3) {
          if (uVar11 < uVar8) goto LAB_001168b0;
          goto LAB_001168f6;
        }
LAB_0011683e:
        *param_1 = CONCAT44(uVar14,(int)(uVar10 >> 0x20));
        uVar10 = uVar9;
        uVar9 = (ulong)puVar12[-1];
      }
      while( true ) {
        uVar11 = (uint)uVar9;
        uVar8 = (uint)uVar10;
        uVar2 = *(uint *)(param_4 + uVar7 * 4);
        uVar3 = *(uint *)(param_4 + uVar10 * 4);
        while (uVar3 < uVar2) {
          uVar8 = param_2[1];
          param_2 = param_2 + 1;
          uVar3 = *(uint *)(param_4 + (ulong)uVar8 * 4);
        }
        uVar3 = *(uint *)(param_4 + uVar9 * 4);
        puVar6 = puVar5;
        while (puVar5 = puVar6 + -1, uVar2 < uVar3) {
          uVar11 = puVar6[-2];
          puVar6 = puVar5;
          uVar3 = *(uint *)(param_4 + (ulong)uVar11 * 4);
        }
        if (puVar5 <= param_2) break;
        *param_2 = uVar11;
        *puVar5 = uVar8;
        uVar7 = (ulong)(uint)*param_1;
        uVar10 = (ulong)param_2[1];
        param_2 = param_2 + 1;
        uVar9 = (ulong)puVar6[-2];
      }
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_2,puVar12,param_3,param_4);
      lVar4 = (long)param_2 - (long)param_1;
      if (lVar4 < 0x41) {
        return;
      }
      puVar12 = param_2;
    } while (param_3 != 0);
  }
  for (lVar13 = (lVar4 >> 2) + -2 >> 1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_1,lVar13,lVar4 >> 2,*(undefined4 *)((long)param_1 + lVar13 * 4),param_4),
      lVar13 != 0; lVar13 = lVar13 + -1) {
  }
  do {
    param_2 = param_2 + -1;
    uVar2 = *param_2;
    *param_2 = (uint)*param_1;
    __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<unsigned_int>(unsigned_int,unsigned_int*,unsigned_int_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
              (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar2,param_4);
  } while (4 < (long)param_2 - (long)param_1);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, long, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (long param_1,long param_2,ulong param_3,uint param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = (long)(param_3 - 1) / 2;
  lVar3 = param_2;
  if (param_2 < lVar1) {
    do {
      lVar8 = (lVar3 + 1) * 2;
      lVar6 = (lVar3 + 1) * 8;
      puVar5 = (uint *)(param_1 + lVar6);
      lVar6 = param_5 + (ulong)*(uint *)(param_1 + -4 + lVar6) * 0x38;
      lVar2 = param_5 + (ulong)*puVar5 * 0x38;
      lVar7 = 4;
      do {
        lVar4 = lVar7 + -4;
        do {
          if (*(byte *)(lVar2 + lVar4) < *(byte *)(lVar6 + lVar4)) goto LAB_00116aa0;
        } while ((*(byte *)(lVar2 + lVar4) == *(byte *)(lVar6 + lVar4)) &&
                (lVar4 = lVar4 + 1, lVar4 != lVar7));
        if ((*(char *)(lVar2 + -2 + lVar7) != *(char *)(lVar6 + -2 + lVar7) ||
             (*(char *)(lVar2 + -3 + lVar7) != *(char *)(lVar6 + -3 + lVar7) ||
             *(char *)(lVar2 + -4 + lVar7) != *(char *)(lVar6 + -4 + lVar7))) ||
           (*(char *)(lVar2 + -1 + lVar7) != *(char *)(lVar6 + -1 + lVar7))) goto LAB_00116a64;
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0xc);
      if ((*(uint *)(lVar2 + 8) < *(uint *)(lVar6 + 8)) ||
         ((*(uint *)(lVar2 + 8) == *(uint *)(lVar6 + 8) &&
          (*(uint *)(lVar2 + 0xc) < *(uint *)(lVar6 + 0xc))))) {
LAB_00116aa0:
        lVar8 = lVar8 + -1;
        puVar5 = (uint *)(param_1 + lVar8 * 4);
        *(uint *)(param_1 + lVar3 * 4) = *puVar5;
        lVar3 = lVar8;
      }
      else {
LAB_00116a64:
        *(uint *)(param_1 + lVar3 * 4) = *puVar5;
        lVar3 = lVar8;
      }
    } while (lVar3 < lVar1);
    if ((param_3 & 1) == 0) goto LAB_00116b94;
  }
  else {
    puVar5 = (uint *)(param_1 + param_2 * 4);
    if ((param_3 & 1) != 0) goto LAB_00116b7a;
LAB_00116b94:
    if ((long)(param_3 - 2) / 2 == lVar3) {
      lVar1 = lVar3 * 2;
      lVar3 = lVar1 + 1;
      *puVar5 = *(uint *)(param_1 + -4 + (lVar1 + 2) * 4);
      puVar5 = (uint *)(param_1 + lVar3 * 4);
    }
  }
  lVar1 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  if (param_2 < lVar3) {
    lVar6 = param_5 + (ulong)param_4 * 0x38;
    do {
      lVar2 = lVar1 >> 1;
      puVar5 = (uint *)(param_1 + lVar2 * 4);
      lVar8 = 4;
      lVar1 = param_5 + (ulong)*puVar5 * 0x38;
      do {
        lVar7 = lVar8 + -4;
        do {
          if (*(byte *)(lVar1 + lVar7) < *(byte *)(lVar6 + lVar7)) goto LAB_00116bf8;
        } while ((*(byte *)(lVar1 + lVar7) == *(byte *)(lVar6 + lVar7)) &&
                (lVar7 = lVar7 + 1, lVar7 != lVar8));
        if (((*(char *)(lVar1 + -3 + lVar8) != *(char *)(lVar6 + -3 + lVar8) ||
             *(char *)(lVar1 + -4 + lVar8) != *(char *)(lVar6 + -4 + lVar8)) ||
             *(char *)(lVar1 + -2 + lVar8) != *(char *)(lVar6 + -2 + lVar8)) ||
           (*(char *)(lVar1 + -1 + lVar8) != *(char *)(lVar6 + -1 + lVar8))) goto LAB_00116b76;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      if ((*(uint *)(lVar6 + 8) <= *(uint *)(lVar1 + 8)) &&
         ((*(uint *)(lVar1 + 8) != *(uint *)(lVar6 + 8) ||
          (*(uint *)(lVar6 + 0xc) <= *(uint *)(lVar1 + 0xc))))) {
LAB_00116b76:
        puVar5 = (uint *)(param_1 + lVar3 * 4);
        break;
      }
LAB_00116bf8:
      *(uint *)(param_1 + lVar3 * 4) = *puVar5;
      lVar1 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
      lVar3 = lVar2;
    } while (param_2 < lVar2);
  }
LAB_00116b7a:
  *puVar5 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned
   int, unsigned int*, basisu::basisu_frontend::endpoint_cluster_etc_params
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,uint *param_2,long param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0x40 < lVar7) {
    puVar1 = param_1 + 1;
    puVar4 = param_2;
    if (param_3 != 0) {
LAB_00116c6b:
      param_3 = param_3 + -1;
      lVar11 = 4;
      uVar3 = param_1[lVar7 >> 3];
      uVar5 = (ulong)param_1[1];
      lVar13 = param_4 + (ulong)uVar3 * 0x38;
      lVar6 = param_4 + uVar5 * 0x38;
      do {
        lVar8 = lVar11 + -4;
        do {
          param_2 = puVar1;
          puVar12 = puVar4;
          if (*(byte *)(lVar6 + lVar8) < *(byte *)(lVar13 + lVar8)) goto LAB_00116ffb;
        } while ((*(byte *)(lVar6 + lVar8) == *(byte *)(lVar13 + lVar8)) &&
                (lVar8 = lVar8 + 1, lVar11 != lVar8));
        if (((*(char *)(lVar6 + -3 + lVar11) != *(char *)(lVar13 + -3 + lVar11) ||
             *(char *)(lVar6 + -4 + lVar11) != *(char *)(lVar13 + -4 + lVar11)) ||
             *(char *)(lVar6 + -2 + lVar11) != *(char *)(lVar13 + -2 + lVar11)) ||
           (*(char *)(lVar6 + -1 + lVar11) != *(char *)(lVar13 + -1 + lVar11))) goto LAB_00116d0f;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0xc);
      if ((*(uint *)(lVar6 + 8) < *(uint *)(lVar13 + 8)) ||
         ((*(uint *)(lVar6 + 8) == *(uint *)(lVar13 + 8) &&
          (*(uint *)(lVar6 + 0xc) < *(uint *)(lVar13 + 0xc))))) {
LAB_00116ffb:
        uVar10 = puVar4[-1];
        lVar8 = 4;
        lVar11 = param_4 + (ulong)uVar10 * 0x38;
        do {
          lVar9 = lVar8 + -4;
          do {
            if (*(byte *)(lVar13 + lVar9) < *(byte *)(lVar11 + lVar9)) goto LAB_00116df2;
          } while ((*(byte *)(lVar13 + lVar9) == *(byte *)(lVar11 + lVar9)) &&
                  (lVar9 = lVar9 + 1, lVar8 != lVar9));
          if ((*(char *)(lVar13 + -2 + lVar8) != *(char *)(lVar11 + -2 + lVar8) ||
               (*(char *)(lVar13 + -4 + lVar8) != *(char *)(lVar11 + -4 + lVar8) ||
               *(char *)(lVar13 + -3 + lVar8) != *(char *)(lVar11 + -3 + lVar8))) ||
             (*(char *)(lVar13 + -1 + lVar8) != *(char *)(lVar11 + -1 + lVar8))) {
            lVar8 = 4;
            goto LAB_0011707e;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0xc);
        if ((*(uint *)(lVar13 + 8) < *(uint *)(lVar11 + 8)) ||
           ((lVar8 = 4, *(uint *)(lVar13 + 8) == *(uint *)(lVar11 + 8) &&
            (*(uint *)(lVar13 + 0xc) < *(uint *)(lVar11 + 0xc))))) goto LAB_00116df2;
LAB_0011707e:
        do {
          lVar7 = lVar8 + -4;
          do {
            if (*(byte *)(lVar6 + lVar7) < *(byte *)(lVar11 + lVar7)) goto LAB_0011719a;
          } while ((*(byte *)(lVar6 + lVar7) == *(byte *)(lVar11 + lVar7)) &&
                  (lVar7 = lVar7 + 1, lVar8 != lVar7));
          if (((*(char *)(lVar6 + -3 + lVar8) != *(char *)(lVar11 + -3 + lVar8) ||
               *(char *)(lVar6 + -4 + lVar8) != *(char *)(lVar11 + -4 + lVar8)) ||
               *(char *)(lVar6 + -2 + lVar8) != *(char *)(lVar11 + -2 + lVar8)) ||
             (*(char *)(lVar6 + -1 + lVar8) != *(char *)(lVar11 + -1 + lVar8))) goto LAB_001170e2;
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0xc);
        if ((*(uint *)(lVar6 + 8) < *(uint *)(lVar11 + 8)) ||
           ((*(uint *)(lVar6 + 8) == *(uint *)(lVar11 + 8) &&
            (*(uint *)(lVar6 + 0xc) < *(uint *)(lVar11 + 0xc))))) goto LAB_0011719a;
LAB_001170e2:
        uVar3 = *param_1;
      }
      else {
LAB_00116d0f:
        uVar10 = puVar4[-1];
        lVar8 = 4;
        lVar11 = param_4 + (ulong)uVar10 * 0x38;
        do {
          lVar9 = lVar8 + -4;
          do {
            if (*(byte *)(lVar6 + lVar9) < *(byte *)(lVar11 + lVar9)) goto LAB_0011711e;
          } while ((*(byte *)(lVar6 + lVar9) == *(byte *)(lVar11 + lVar9)) &&
                  (lVar9 = lVar9 + 1, lVar8 != lVar9));
          if ((*(char *)(lVar6 + -2 + lVar8) != *(char *)(lVar11 + -2 + lVar8) ||
               (*(char *)(lVar6 + -3 + lVar8) != *(char *)(lVar11 + -3 + lVar8) ||
               *(char *)(lVar6 + -4 + lVar8) != *(char *)(lVar11 + -4 + lVar8))) ||
             (*(char *)(lVar6 + -1 + lVar8) != *(char *)(lVar11 + -1 + lVar8))) {
            lVar8 = 4;
            goto LAB_00116d92;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != 0xc);
        if ((*(uint *)(lVar11 + 8) <= *(uint *)(lVar6 + 8)) &&
           ((lVar8 = 4, *(uint *)(lVar6 + 8) != *(uint *)(lVar11 + 8) ||
            (*(uint *)(lVar11 + 0xc) <= *(uint *)(lVar6 + 0xc))))) {
LAB_00116d92:
          do {
            lVar6 = lVar8 + -4;
            do {
              if (*(byte *)(lVar13 + lVar6) < *(byte *)(lVar11 + lVar6)) goto LAB_0011719a;
            } while ((*(byte *)(lVar13 + lVar6) == *(byte *)(lVar11 + lVar6)) &&
                    (lVar6 = lVar6 + 1, lVar8 != lVar6));
            if (((*(char *)(lVar13 + -3 + lVar8) != *(char *)(lVar11 + -3 + lVar8) ||
                 *(char *)(lVar13 + -4 + lVar8) != *(char *)(lVar11 + -4 + lVar8)) ||
                 *(char *)(lVar13 + -2 + lVar8) != *(char *)(lVar11 + -2 + lVar8)) ||
               (*(char *)(lVar13 + -1 + lVar8) != *(char *)(lVar11 + -1 + lVar8)))
            goto LAB_00116df2;
            lVar8 = lVar8 + 4;
          } while (lVar8 != 0xc);
          if ((*(uint *)(lVar13 + 8) < *(uint *)(lVar11 + 8)) ||
             ((*(uint *)(lVar13 + 8) == *(uint *)(lVar11 + 8) &&
              (*(uint *)(lVar13 + 0xc) < *(uint *)(lVar11 + 0xc))))) {
LAB_0011719a:
            uVar3 = *param_1;
            *param_1 = uVar10;
            puVar4[-1] = uVar3;
            uVar5 = (ulong)*param_1;
            goto LAB_00116e10;
          }
LAB_00116df2:
          uVar10 = *param_1;
          *param_1 = uVar3;
          param_1[lVar7 >> 3] = uVar10;
          uVar5 = (ulong)*param_1;
          goto LAB_00116e10;
        }
LAB_0011711e:
        uVar3 = *param_1;
      }
      *(ulong *)param_1 = CONCAT44(uVar3,param_1[1]);
LAB_00116e10:
      do {
        lVar7 = param_4 + uVar5 * 0x38;
        while( true ) {
          uVar3 = *param_2;
          lVar13 = param_4 + (ulong)uVar3 * 0x38;
          lVar6 = 0;
          do {
            lVar11 = lVar6;
            do {
              if (*(byte *)(lVar13 + lVar11) < *(byte *)(lVar7 + lVar11)) goto LAB_00116f60;
            } while ((*(byte *)(lVar13 + lVar11) == *(byte *)(lVar7 + lVar11)) &&
                    (lVar11 = lVar11 + 1, lVar11 != lVar6 + 4));
            if (((*(char *)(lVar13 + 1 + lVar6) != *(char *)(lVar7 + 1 + lVar6) ||
                 *(char *)(lVar13 + lVar6) != *(char *)(lVar7 + lVar6)) ||
                 *(char *)(lVar13 + 2 + lVar6) != *(char *)(lVar7 + 2 + lVar6)) ||
               (*(char *)(lVar13 + 3 + lVar6) != *(char *)(lVar7 + 3 + lVar6))) goto LAB_00116e9a;
            lVar6 = lVar6 + 4;
          } while (lVar6 != 8);
          if ((*(uint *)(lVar7 + 8) <= *(uint *)(lVar13 + 8)) &&
             ((*(uint *)(lVar13 + 8) != *(uint *)(lVar7 + 8) ||
              (*(uint *)(lVar7 + 0xc) <= *(uint *)(lVar13 + 0xc))))) break;
LAB_00116f60:
          param_2 = param_2 + 1;
        }
LAB_00116e9a:
        do {
          puVar2 = puVar12 + -1;
          puVar12 = puVar12 + -1;
          lVar13 = param_4 + (ulong)*puVar2 * 0x38;
          lVar6 = 0;
          do {
            lVar11 = lVar6;
            do {
              if (*(byte *)(lVar7 + lVar11) < *(byte *)(lVar13 + lVar11)) goto LAB_00116e9a;
            } while ((*(byte *)(lVar7 + lVar11) == *(byte *)(lVar13 + lVar11)) &&
                    (lVar11 = lVar11 + 1, lVar11 != lVar6 + 4));
            if (((*(char *)(lVar7 + lVar6) != *(char *)(lVar13 + lVar6) ||
                 *(char *)(lVar7 + 1 + lVar6) != *(char *)(lVar13 + 1 + lVar6)) ||
                 *(char *)(lVar7 + 2 + lVar6) != *(char *)(lVar13 + 2 + lVar6)) ||
               (*(char *)(lVar7 + 3 + lVar6) != *(char *)(lVar13 + 3 + lVar6)))
            goto joined_r0x00116f14;
            lVar6 = lVar6 + 4;
          } while (lVar6 != 8);
        } while ((*(uint *)(lVar7 + 8) < *(uint *)(lVar13 + 8)) ||
                ((*(uint *)(lVar7 + 8) == *(uint *)(lVar13 + 8) &&
                 (*(uint *)(lVar7 + 0xc) < *(uint *)(lVar13 + 0xc)))));
joined_r0x00116f14:
        if (puVar12 <= param_2) goto LAB_00116fa1;
        *param_2 = *puVar2;
        *puVar12 = uVar3;
        uVar5 = (ulong)*param_1;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_001171dd:
    for (lVar13 = (lVar7 >> 2) + -2 >> 1;
        __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (param_1,lVar13,lVar7 >> 2,param_1[lVar13],param_4), lVar13 != 0;
        lVar13 = lVar13 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar3 = *param_2;
      *param_2 = *param_1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar3,param_4);
    } while (4 < (long)param_2 - (long)param_1);
  }
  return;
LAB_00116fa1:
  __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<basisu::basisu_frontend::endpoint_cluster_etc_params>(unsigned_int,unsigned_int*,basisu::basisu_frontend::endpoint_cluster_etc_params_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
            (param_2,puVar4,param_3,param_4);
  lVar7 = (long)param_2 - (long)param_1;
  if (lVar7 < 0x41) {
    return;
  }
  puVar4 = param_2;
  if (param_3 == 0) goto LAB_001171dd;
  goto LAB_00116c6b;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__insertion_sort<unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned int*,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (uint *param_1,uint *param_2,long param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  uint *puVar5;
  uint *puVar6;
  
  if (param_1 == param_2) {
    return;
  }
  puVar5 = param_1 + 1;
  do {
    if (param_2 == puVar5) {
      return;
    }
    while( true ) {
      uVar3 = *puVar5;
      puVar6 = puVar5 + 1;
      fVar1 = *(float *)(param_3 + (ulong)uVar3 * 4);
      if (fVar1 < *(float *)(param_3 + (ulong)*param_1 * 4)) break;
      uVar4 = (ulong)puVar5[-1];
      fVar2 = *(float *)(param_3 + uVar4 * 4);
      while (fVar1 < fVar2) {
        *puVar5 = (uint)uVar4;
        uVar4 = (ulong)puVar5[-2];
        puVar5 = puVar5 + -1;
        fVar2 = *(float *)(param_3 + uVar4 * 4);
      }
      *puVar5 = uVar3;
      puVar5 = puVar6;
      if (param_2 == puVar6) {
        return;
      }
    }
    __n = (long)puVar5 - (long)param_1;
    if ((long)__n < 5) {
      if (__n == 4) {
        *puVar5 = *param_1;
      }
    }
    else {
      memmove((void *)((4 - __n) + (long)puVar5),param_1,__n);
    }
    *param_1 = uVar3;
    puVar5 = puVar6;
  } while( true );
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__adjust_heap<unsigned int*, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, long, long, unsigned int,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (long param_1,long param_2,ulong param_3,uint param_4,long param_5)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)(param_3 - 1) / 2;
  lVar8 = param_2;
  if (param_2 < lVar9) {
    do {
      lVar4 = (lVar8 + 1) * 2;
      lVar6 = (lVar8 + 1) * 8;
      puVar5 = (uint *)(param_1 + lVar6);
      uVar7 = *puVar5;
      fVar3 = *(float *)(param_5 + (ulong)*(uint *)(param_1 + -4 + lVar6) * 4);
      pfVar1 = (float *)(param_5 + (ulong)uVar7 * 4);
      if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
        lVar4 = lVar4 + -1;
        puVar5 = (uint *)(param_1 + lVar4 * 4);
        uVar7 = *puVar5;
      }
      *(uint *)(param_1 + lVar8 * 4) = uVar7;
      lVar8 = lVar4;
    } while (lVar4 < lVar9);
    if ((param_3 & 1) == 0) goto LAB_00117450;
  }
  else {
    puVar5 = (uint *)(param_1 + param_2 * 4);
    lVar4 = param_2;
    if ((param_3 & 1) != 0) goto LAB_0011742d;
LAB_00117450:
    if ((long)(param_3 - 2) / 2 == lVar4) {
      lVar8 = lVar4 * 2;
      lVar4 = lVar8 + 1;
      *puVar5 = *(uint *)(param_1 + -4 + (lVar8 + 2) * 4);
      puVar5 = (uint *)(param_1 + lVar4 * 4);
    }
  }
  lVar8 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  if (param_2 < lVar4) {
    fVar3 = *(float *)(param_5 + (ulong)param_4 * 4);
    while( true ) {
      lVar9 = lVar8 >> 1;
      puVar2 = (uint *)(param_1 + lVar9 * 4);
      puVar5 = (uint *)(param_1 + lVar4 * 4);
      uVar7 = *puVar2;
      pfVar1 = (float *)(param_5 + (ulong)uVar7 * 4);
      if (fVar3 < *pfVar1 || fVar3 == *pfVar1) break;
      *puVar5 = uVar7;
      lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      lVar4 = lVar9;
      if (lVar9 <= param_2) {
        *puVar2 = param_4;
        return;
      }
    }
  }
LAB_0011742d:
  *puVar5 = param_4;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__introsort_loop<unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}> >(unsigned int*, unsigned int*, long,
   __gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned int, unsigned int*, float
   const*)::{lambda(unsigned int, unsigned int)#1}>) */

void std::
     __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
               (ulong *param_1,uint *param_2,long param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (0x40 < lVar7) {
    puVar1 = (uint *)((long)param_1 + 4);
    puVar12 = param_2;
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        puVar2 = (uint *)((long)param_1 + (lVar7 >> 3) * 4);
        uVar6 = *param_1;
        uVar10 = *puVar2;
        fVar4 = *(float *)(param_4 + (ulong)puVar12[-1] * 4);
        uVar14 = (uint)uVar6;
        fVar15 = *(float *)(param_4 + (ulong)*(uint *)((long)param_1 + 4) * 4);
        fVar5 = *(float *)(param_4 + (ulong)uVar10 * 4);
        puVar8 = puVar12;
        param_2 = puVar1;
        if (fVar5 <= fVar15) {
          if (fVar4 <= fVar15) {
            if (fVar5 < fVar4) goto LAB_001175b9;
            goto LAB_00117606;
          }
LAB_0011752e:
          *param_1 = CONCAT44(uVar14,(int)(uVar6 >> 0x20));
          uVar9 = (ulong)puVar12[-1];
          uVar11 = uVar6 & 0xffffffff;
        }
        else if (fVar5 < fVar4) {
LAB_00117606:
          *(uint *)param_1 = uVar10;
          *puVar2 = uVar14;
          uVar11 = (ulong)*(uint *)((long)param_1 + 4);
          uVar9 = (ulong)puVar12[-1];
          fVar15 = *(float *)(param_4 + (ulong)(uint)*param_1 * 4);
        }
        else {
          if (fVar4 <= fVar15) goto LAB_0011752e;
LAB_001175b9:
          *(uint *)param_1 = puVar12[-1];
          puVar12[-1] = uVar14;
          uVar11 = (ulong)*(uint *)((long)param_1 + 4);
          fVar15 = *(float *)(param_4 + (ulong)(uint)*param_1 * 4);
          uVar9 = uVar6 & 0xffffffff;
        }
        while( true ) {
          uVar14 = (uint)uVar9;
          uVar10 = (uint)uVar11;
          pfVar3 = (float *)(param_4 + uVar11 * 4);
          if (*pfVar3 <= fVar15 && fVar15 != *pfVar3) {
            do {
              uVar10 = param_2[1];
              param_2 = param_2 + 1;
              pfVar3 = (float *)(param_4 + (ulong)uVar10 * 4);
            } while (*pfVar3 <= fVar15 && fVar15 != *pfVar3);
          }
          fVar4 = *(float *)(param_4 + uVar9 * 4);
          while (puVar8 = puVar8 + -1, fVar15 < fVar4) {
            uVar14 = puVar8[-1];
            fVar4 = *(float *)(param_4 + (ulong)uVar14 * 4);
          }
          if (puVar8 <= param_2) break;
          *param_2 = uVar14;
          *puVar8 = uVar10;
          fVar15 = *(float *)(param_4 + (ulong)(uint)*param_1 * 4);
          uVar9 = (ulong)puVar8[-1];
          uVar11 = (ulong)param_2[1];
          param_2 = param_2 + 1;
        }
        __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (param_2,puVar12,param_3,param_4);
        lVar7 = (long)param_2 - (long)param_1;
        if (lVar7 < 0x41) {
          return;
        }
        puVar12 = param_2;
      } while (param_3 != 0);
    }
    for (lVar13 = (lVar7 >> 2) + -2 >> 1;
        __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (param_1,lVar13,lVar7 >> 2,*(undefined4 *)((long)param_1 + lVar13 * 4),param_4),
        lVar13 != 0; lVar13 = lVar13 + -1) {
    }
    do {
      param_2 = param_2 + -1;
      uVar10 = *param_2;
      *param_2 = (uint)*param_1;
      __adjust_heap<unsigned_int*,long,unsigned_int,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (param_1,0,(long)param_2 - (long)param_1 >> 2,uVar10,param_4);
    } while (4 < (long)param_2 - (long)param_1);
  }
  return;
}



/* basisu::tree_vector_quant<basisu::vec<16u, float>
   >::prep_split(basisu::tree_vector_quant<basisu::vec<16u, float> >::tsvq_node const&,
   basisu::vec<16u, float>&, basisu::vec<16u, float>&) const */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::prep_split
          (tree_vector_quant<basisu::vec<16u,float>> *this,tsvq_node *param_1,vec *param_2,
          vec *param_3)

{
  long lVar1;
  vec *pvVar2;
  tsvq_node *ptVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  unkuint9 Var10;
  uint *puVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  uint *puVar20;
  uint *puVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  long in_FS_OFFSET;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  void *local_228;
  ulong local_220;
  void *local_218;
  undefined8 local_210;
  float local_208;
  undefined4 auStack_204 [15];
  undefined1 local_1c8 [4];
  float afStack_1c4 [3];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [4];
  float afStack_184 [3];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
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
  float local_c8 [16];
  float local_88 [2];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48 [2];
  long local_40;
  
  uVar4 = *(uint *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar4 == 2) {
    puVar21 = *(uint **)(param_1 + 0x58);
    lVar17 = *(long *)(this + 0x10);
    pvVar2 = (vec *)(lVar17 + (ulong)*puVar21 * 0x48);
    if (pvVar2 != param_2) {
      memmove(param_2,pvVar2,0x40);
    }
    pvVar2 = (vec *)(lVar17 + (ulong)puVar21[1] * 0x48);
    if (pvVar2 != param_3) {
      memmove(param_3,pvVar2,0x40);
    }
  }
  else {
    compute_split_axis((tsvq_node *)&local_208);
    _local_1c8 = (undefined1  [16])0x0;
    local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    _local_188 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_168 = (undefined1  [16])0x0;
    local_158 = (undefined1  [16])0x0;
    if (uVar4 == 0) {
      local_148 = CONCAT44(_LC93,_LC93);
      uStack_140 = CONCAT44(_LC93,_LC93);
      local_138 = CONCAT44(_LC93,_LC93);
      uStack_130 = CONCAT44(_LC93,_LC93);
      local_128 = CONCAT44(_LC93,_LC93);
      uStack_120 = CONCAT44(_LC93,_LC93);
      local_118 = CONCAT44(_LC93,_LC93);
      uStack_110 = CONCAT44(_LC93,_LC93);
      local_108 = CONCAT44(_LC95,_LC95);
      uStack_100 = CONCAT44(_LC95,_LC95);
      local_f8 = CONCAT44(_LC95,_LC95);
      uStack_f0 = CONCAT44(_LC95,_LC95);
      local_e8 = CONCAT44(_LC95,_LC95);
      uStack_e0 = CONCAT44(_LC95,_LC95);
      local_d8 = CONCAT44(_LC95,_LC95);
      uStack_d0 = CONCAT44(_LC95,_LC95);
    }
    else {
      puVar21 = *(uint **)(param_1 + 0x58);
      dVar28 = 0.0;
      lVar17 = *(long *)(this + 0x10);
      dVar29 = 0.0;
      puVar20 = puVar21;
      do {
        lVar1 = lVar17 + (ulong)*puVar20 * 0x48;
        Var10 = (unkuint9)*(ulong *)(lVar1 + 0x40);
        fVar27 = (float)(unkint9)Var10;
        lVar23 = 0;
        do {
          pfVar16 = (float *)(lVar1 + lVar23);
          fVar26 = pfVar16[1];
          fVar5 = pfVar16[2];
          fVar6 = pfVar16[3];
          ptVar3 = param_1 + lVar23 + 0x10;
          fVar7 = *(float *)(ptVar3 + 4);
          fVar8 = *(float *)(ptVar3 + 8);
          fVar9 = *(float *)(ptVar3 + 0xc);
          *(float *)((long)local_88 + lVar23) = *pfVar16 - *(float *)ptVar3;
          *(float *)((long)local_88 + lVar23 + 4) = fVar26 - fVar7;
          *(float *)((long)&uStack_80 + lVar23) = fVar5 - fVar8;
          *(float *)((long)&uStack_80 + lVar23 + 4) = fVar6 - fVar9;
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != 0x40);
        lVar23 = 4;
        fVar26 = local_88[0] * local_208;
        do {
          ptVar3 = (tsvq_node *)&local_208 + lVar23;
          pfVar16 = (float *)((long)local_88 + lVar23);
          lVar23 = lVar23 + 4;
          fVar26 = fVar26 + *(float *)ptVar3 * *pfVar16;
        } while (lVar23 != 0x40);
        lVar23 = 0;
        if (fVar26 < 0.0) {
          lVar23 = 0;
          do {
            pfVar16 = (float *)(lVar1 + lVar23);
            fVar26 = pfVar16[1];
            fVar5 = pfVar16[2];
            fVar6 = pfVar16[3];
            *(float *)((long)local_88 + lVar23) = *pfVar16 * fVar27;
            *(float *)((long)local_88 + lVar23 + 4) = fVar26 * fVar27;
            *(float *)((long)&uStack_80 + lVar23) = fVar5 * fVar27;
            *(float *)((long)&uStack_80 + lVar23 + 4) = fVar6 * fVar27;
            lVar23 = lVar23 + 0x10;
            pfVar16 = (float *)local_1c8;
            pfVar19 = local_88;
          } while (lVar23 != 0x40);
          do {
            fVar27 = pfVar19[1];
            fVar26 = pfVar19[2];
            fVar5 = pfVar19[3];
            pfVar24 = pfVar16 + 4;
            *pfVar16 = *pfVar16 + *pfVar19;
            pfVar16[1] = pfVar16[1] + fVar27;
            pfVar16[2] = pfVar16[2] + fVar26;
            pfVar16[3] = pfVar16[3] + fVar5;
            pfVar16 = pfVar24;
            pfVar19 = pfVar19 + 4;
          } while ((float *)local_188 != pfVar24);
          dVar29 = dVar29 + (double)(unkint9)Var10;
        }
        else {
          do {
            pfVar16 = (float *)(lVar1 + lVar23);
            fVar26 = pfVar16[1];
            fVar5 = pfVar16[2];
            fVar6 = pfVar16[3];
            *(float *)((long)local_88 + lVar23) = *pfVar16 * fVar27;
            *(float *)((long)local_88 + lVar23 + 4) = fVar26 * fVar27;
            *(float *)((long)&uStack_80 + lVar23) = fVar5 * fVar27;
            *(float *)((long)&uStack_80 + lVar23 + 4) = fVar6 * fVar27;
            lVar23 = lVar23 + 0x10;
            pfVar16 = (float *)local_188;
            pfVar19 = local_88;
          } while (lVar23 != 0x40);
          do {
            fVar27 = pfVar19[1];
            fVar26 = pfVar19[2];
            fVar5 = pfVar19[3];
            pfVar24 = pfVar19 + 4;
            *pfVar16 = *pfVar16 + *pfVar19;
            pfVar16[1] = pfVar16[1] + fVar27;
            pfVar16[2] = pfVar16[2] + fVar26;
            pfVar16[3] = pfVar16[3] + fVar5;
            pfVar16 = pfVar16 + 4;
            pfVar19 = pfVar24;
          } while (pfVar24 != local_48);
          dVar28 = dVar28 + (double)(unkint9)Var10;
        }
        puVar20 = puVar20 + 1;
      } while (puVar21 + uVar4 != puVar20);
      if ((0.0 < dVar29) && (0.0 < dVar28)) {
        lVar17 = 0;
        fVar27 = (float)(_LC63 / dVar29);
        do {
          fVar26 = *(float *)(local_1c8 + lVar17 + 4);
          fVar5 = *(float *)(local_1c8 + lVar17 + 8);
          fVar6 = *(float *)(local_1c8 + lVar17 + 0xc);
          *(float *)((long)local_88 + lVar17) = *(float *)(local_1c8 + lVar17) * fVar27;
          *(float *)((long)local_88 + lVar17 + 4) = fVar26 * fVar27;
          *(float *)((long)&uStack_80 + lVar17) = fVar5 * fVar27;
          *(float *)((long)&uStack_80 + lVar17 + 4) = fVar6 * fVar27;
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x40);
        dVar28 = _LC63 / dVar28;
        lVar17 = 0;
        *(ulong *)param_2 = CONCAT44(local_88[1],local_88[0]);
        *(undefined8 *)(param_2 + 8) = uStack_80;
        *(undefined8 *)(param_2 + 0x10) = local_78;
        *(undefined8 *)(param_2 + 0x18) = uStack_70;
        *(undefined8 *)(param_2 + 0x20) = local_68;
        *(undefined8 *)(param_2 + 0x28) = uStack_60;
        *(undefined8 *)(param_2 + 0x30) = local_58;
        *(undefined8 *)(param_2 + 0x38) = uStack_50;
        fVar27 = (float)dVar28;
        do {
          fVar26 = *(float *)(local_188 + lVar17 + 4);
          fVar5 = *(float *)(local_188 + lVar17 + 8);
          fVar6 = *(float *)(local_188 + lVar17 + 0xc);
          *(float *)((long)local_88 + lVar17) = *(float *)((long)local_188 + lVar17) * fVar27;
          *(float *)((long)local_88 + lVar17 + 4) = fVar26 * fVar27;
          *(float *)((long)&uStack_80 + lVar17) = fVar5 * fVar27;
          *(float *)((long)&uStack_80 + lVar17 + 4) = fVar6 * fVar27;
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x40);
        *(ulong *)param_3 = CONCAT44(local_88[1],local_88[0]);
        *(undefined8 *)(param_3 + 8) = uStack_80;
        *(undefined8 *)(param_3 + 0x10) = local_78;
        *(undefined8 *)(param_3 + 0x18) = uStack_70;
        *(undefined8 *)(param_3 + 0x20) = local_68;
        *(undefined8 *)(param_3 + 0x28) = uStack_60;
        *(undefined8 *)(param_3 + 0x30) = local_58;
        *(undefined8 *)(param_3 + 0x38) = uStack_50;
        goto LAB_00117946;
      }
      puVar20 = puVar21 + uVar4;
      local_148 = CONCAT44(_LC93,_LC93);
      uStack_140 = CONCAT44(_LC93,_LC93);
      local_138 = CONCAT44(_LC93,_LC93);
      uStack_130 = CONCAT44(_LC93,_LC93);
      local_128 = CONCAT44(_LC93,_LC93);
      uStack_120 = CONCAT44(_LC93,_LC93);
      local_118 = CONCAT44(_LC93,_LC93);
      uStack_110 = CONCAT44(_LC93,_LC93);
      local_108 = CONCAT44(_LC95,_LC95);
      uStack_100 = CONCAT44(_LC95,_LC95);
      local_f8 = CONCAT44(_LC95,_LC95);
      uStack_f0 = CONCAT44(_LC95,_LC95);
      local_e8 = CONCAT44(_LC95,_LC95);
      uStack_e0 = CONCAT44(_LC95,_LC95);
      local_d8 = CONCAT44(_LC95,_LC95);
      uStack_d0 = CONCAT44(_LC95,_LC95);
      do {
        lVar1 = lVar17 + (ulong)*puVar21 * 0x48;
        lVar23 = 0;
        do {
          auVar25 = minps(*(undefined1 (*) [16])((long)&local_148 + lVar23),
                          *(undefined1 (*) [16])(lVar1 + lVar23));
          *(undefined1 (*) [16])((long)local_88 + lVar23) = auVar25;
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != 0x40);
        local_148 = CONCAT44(local_88[1],local_88[0]);
        lVar23 = 0;
        uStack_140 = uStack_80;
        local_138 = local_78;
        uStack_130 = uStack_70;
        local_128 = local_68;
        uStack_120 = uStack_60;
        local_118 = local_58;
        uStack_110 = uStack_50;
        do {
          auVar25 = maxps(*(undefined1 (*) [16])((long)&local_108 + lVar23),
                          *(undefined1 (*) [16])(lVar1 + lVar23));
          *(undefined1 (*) [16])((long)local_88 + lVar23) = auVar25;
          lVar23 = lVar23 + 0x10;
        } while (lVar23 != 0x40);
        local_108 = CONCAT44(local_88[1],local_88[0]);
        puVar21 = puVar21 + 1;
        uStack_100 = uStack_80;
        local_f8 = local_78;
        uStack_f0 = uStack_70;
        local_e8 = local_68;
        uStack_e0 = uStack_60;
        local_d8 = local_58;
        uStack_d0 = uStack_50;
      } while (puVar20 != puVar21);
    }
    lVar17 = 0;
    do {
      fVar27 = *(float *)((long)&local_108 + lVar17 + 4);
      fVar26 = *(float *)((long)&uStack_100 + lVar17);
      fVar5 = *(float *)((long)&uStack_100 + lVar17 + 4);
      fVar6 = *(float *)((long)&local_148 + lVar17 + 4);
      fVar7 = *(float *)((long)&uStack_140 + lVar17);
      fVar8 = *(float *)((long)&uStack_140 + lVar17 + 4);
      *(float *)((long)local_c8 + lVar17) =
           *(float *)((long)&local_108 + lVar17) - *(float *)(lVar17 + (long)&local_148);
      *(float *)((long)local_c8 + lVar17 + 4) = fVar27 - fVar6;
      *(float *)((long)local_c8 + lVar17 + 8) = fVar26 - fVar7;
      *(float *)((long)local_c8 + lVar17 + 0xc) = fVar5 - fVar8;
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != 0x40);
    uVar15 = 0;
    uVar22 = 0xffffffff;
    fVar27 = 0.0;
    do {
      if (fVar27 < local_c8[uVar15]) {
        uVar22 = uVar15 & 0xffffffff;
        fVar27 = local_c8[uVar15];
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x10);
    uVar14 = 0;
    if ((int)uVar22 < 0) goto LAB_0011794b;
    local_228 = (void *)0x0;
    local_220 = 0;
    if (uVar4 == 0) {
LAB_00117f8f:
      uVar15 = 0;
    }
    else {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_228,SUB41(uVar4,0),(uint)(uVar4 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      memset((void *)((long)local_228 + (local_220 & 0xffffffff) * 4),0,
             (ulong)(uVar4 - (int)local_220) << 2);
      uVar15 = (ulong)*(uint *)(param_1 + 0x60);
      local_220 = CONCAT44(local_220._4_4_,uVar4);
      if (*(uint *)(param_1 + 0x60) == 0) goto LAB_00117f8f;
      lVar17 = *(long *)(param_1 + 0x58);
      lVar1 = *(long *)(this + 0x10);
      lVar23 = 0;
      do {
        *(undefined4 *)((long)local_228 + lVar23) =
             *(undefined4 *)(lVar1 + (ulong)*(uint *)(lVar17 + lVar23) * 0x48 + uVar22 * 4);
        lVar23 = lVar23 + 4;
      } while (uVar15 * 4 - lVar23 != 0);
    }
    local_218 = (void *)0x0;
    local_210 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_218,uVar15,false);
    pvVar13 = local_218;
    pvVar12 = local_228;
    uVar4 = *(uint *)(param_1 + 0x60);
    if (uVar4 == 0) {
LAB_00117fb5:
      *(undefined8 *)param_2 = local_148;
      *(undefined8 *)(param_2 + 8) = uStack_140;
      *(undefined8 *)(param_2 + 0x10) = local_138;
      *(undefined8 *)(param_2 + 0x18) = uStack_130;
      *(undefined8 *)(param_2 + 0x20) = local_128;
      *(undefined8 *)(param_2 + 0x28) = uStack_120;
      *(undefined8 *)(param_2 + 0x30) = local_118;
      *(undefined8 *)(param_2 + 0x38) = uStack_110;
      *(undefined8 *)param_3 = local_108;
      *(undefined8 *)(param_3 + 8) = uStack_100;
      *(undefined8 *)(param_3 + 0x10) = local_f8;
      *(undefined8 *)(param_3 + 0x18) = uStack_f0;
      *(undefined8 *)(param_3 + 0x20) = local_e8;
      *(undefined8 *)(param_3 + 0x28) = uStack_e0;
      *(undefined8 *)(param_3 + 0x30) = local_d8;
      *(undefined8 *)(param_3 + 0x38) = uStack_d0;
    }
    else {
      uVar15 = 0;
      do {
        *(int *)((long)local_218 + uVar15 * 4) = (int)uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar4);
      uVar15 = uVar15 * 4;
      puVar21 = (uint *)((long)local_218 + uVar15);
      lVar17 = 0x3f;
      if ((long)uVar15 >> 2 != 0) {
        for (; (ulong)((long)uVar15 >> 2) >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      std::
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (local_218,puVar21,(long)(int)lVar17 * 2,local_228);
      if (uVar15 < 0x41) {
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (pvVar13,puVar21,pvVar12);
      }
      else {
        puVar20 = (uint *)((long)pvVar13 + 0x40);
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (pvVar13,puVar20,pvVar12);
        for (; puVar21 != puVar20; puVar20 = puVar20 + 1) {
          uVar4 = *puVar20;
          uVar15 = (ulong)puVar20[-1];
          fVar27 = *(float *)((long)pvVar12 + (ulong)uVar4 * 4);
          fVar26 = *(float *)((long)pvVar12 + uVar15 * 4);
          puVar11 = puVar20;
          while (fVar27 < fVar26) {
            *puVar11 = (uint)uVar15;
            uVar15 = (ulong)puVar11[-2];
            puVar11 = puVar11 + -1;
            fVar26 = *(float *)((long)pvVar12 + uVar15 * 4);
          }
          *puVar11 = uVar4;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x60);
      _local_1c8 = (undefined1  [16])0x0;
      local_1b8 = (undefined1  [16])0x0;
      local_1a8 = (undefined1  [16])0x0;
      local_198 = (undefined1  [16])0x0;
      _local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_168 = (undefined1  [16])0x0;
      local_158 = (undefined1  [16])0x0;
      if (uVar4 == 0) goto LAB_00117fb5;
      dVar28 = 0.0;
      lVar17 = *(long *)(this + 0x10);
      lVar1 = *(long *)(param_1 + 0x58);
      uVar15 = 0;
      dVar29 = 0.0;
      do {
        lVar23 = lVar17 + (ulong)*(uint *)(lVar1 + uVar15 * 4) * 0x48;
        Var10 = (unkuint9)*(ulong *)(lVar23 + 0x40);
        fVar27 = (float)(unkint9)Var10;
        lVar18 = 0;
        if ((uint)uVar15 < uVar4 >> 1) {
          do {
            pfVar16 = (float *)(lVar23 + lVar18);
            fVar26 = pfVar16[1];
            fVar5 = pfVar16[2];
            fVar6 = pfVar16[3];
            *(float *)((long)local_88 + lVar18) = *pfVar16 * fVar27;
            *(float *)((long)local_88 + lVar18 + 4) = fVar26 * fVar27;
            *(float *)((long)&uStack_80 + lVar18) = fVar5 * fVar27;
            *(float *)((long)&uStack_80 + lVar18 + 4) = fVar6 * fVar27;
            lVar18 = lVar18 + 0x10;
            pfVar16 = local_88;
            pfVar19 = (float *)local_1c8;
          } while (lVar18 != 0x40);
          do {
            fVar27 = pfVar16[1];
            fVar26 = pfVar16[2];
            fVar5 = pfVar16[3];
            pfVar24 = pfVar19 + 4;
            *pfVar19 = *pfVar19 + *pfVar16;
            pfVar19[1] = pfVar19[1] + fVar27;
            pfVar19[2] = pfVar19[2] + fVar26;
            pfVar19[3] = pfVar19[3] + fVar5;
            pfVar16 = pfVar16 + 4;
            pfVar19 = pfVar24;
          } while (pfVar24 != (float *)local_188);
          dVar29 = dVar29 + (double)(unkint9)Var10;
        }
        else {
          do {
            pfVar16 = (float *)(lVar23 + lVar18);
            fVar26 = pfVar16[1];
            fVar5 = pfVar16[2];
            fVar6 = pfVar16[3];
            *(float *)((long)local_88 + lVar18) = *pfVar16 * fVar27;
            *(float *)((long)local_88 + lVar18 + 4) = fVar26 * fVar27;
            *(float *)((long)&uStack_80 + lVar18) = fVar5 * fVar27;
            *(float *)((long)&uStack_80 + lVar18 + 4) = fVar6 * fVar27;
            lVar18 = lVar18 + 0x10;
            pfVar16 = local_88;
            pfVar19 = (float *)local_188;
          } while (lVar18 != 0x40);
          do {
            fVar27 = pfVar16[1];
            fVar26 = pfVar16[2];
            fVar5 = pfVar16[3];
            pfVar24 = pfVar19 + 4;
            *pfVar19 = *pfVar19 + *pfVar16;
            pfVar19[1] = pfVar19[1] + fVar27;
            pfVar19[2] = pfVar19[2] + fVar26;
            pfVar19[3] = pfVar19[3] + fVar5;
            pfVar16 = pfVar16 + 4;
            pfVar19 = pfVar24;
          } while (pfVar24 != (float *)&local_148);
          dVar28 = dVar28 + (double)(unkint9)Var10;
        }
        uVar15 = uVar15 + 1;
      } while (uVar4 != uVar15);
      if ((dVar29 <= 0.0) || (dVar28 <= 0.0)) goto LAB_00117fb5;
      lVar17 = 0;
      fVar27 = (float)(_LC63 / dVar29);
      do {
        fVar26 = *(float *)(local_1c8 + lVar17 + 4);
        fVar5 = *(float *)(local_1c8 + lVar17 + 8);
        fVar6 = *(float *)(local_1c8 + lVar17 + 0xc);
        *(float *)((long)local_88 + lVar17) = *(float *)(local_1c8 + lVar17) * fVar27;
        *(float *)((long)local_88 + lVar17 + 4) = fVar26 * fVar27;
        *(float *)((long)&uStack_80 + lVar17) = fVar5 * fVar27;
        *(float *)((long)&uStack_80 + lVar17 + 4) = fVar6 * fVar27;
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != 0x40);
      dVar28 = _LC63 / dVar28;
      lVar17 = 0;
      *(ulong *)param_2 = CONCAT44(local_88[1],local_88[0]);
      *(undefined8 *)(param_2 + 8) = uStack_80;
      *(undefined8 *)(param_2 + 0x10) = local_78;
      *(undefined8 *)(param_2 + 0x18) = uStack_70;
      *(undefined8 *)(param_2 + 0x20) = local_68;
      *(undefined8 *)(param_2 + 0x28) = uStack_60;
      *(undefined8 *)(param_2 + 0x30) = local_58;
      *(undefined8 *)(param_2 + 0x38) = uStack_50;
      fVar27 = (float)dVar28;
      do {
        fVar26 = *(float *)(local_188 + lVar17 + 4);
        fVar5 = *(float *)(local_188 + lVar17 + 8);
        fVar6 = *(float *)(local_188 + lVar17 + 0xc);
        *(float *)((long)local_88 + lVar17) = *(float *)((long)local_188 + lVar17) * fVar27;
        *(float *)((long)local_88 + lVar17 + 4) = fVar26 * fVar27;
        *(float *)((long)&uStack_80 + lVar17) = fVar5 * fVar27;
        *(float *)((long)&uStack_80 + lVar17 + 4) = fVar6 * fVar27;
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != 0x40);
      *(ulong *)param_3 = CONCAT44(local_88[1],local_88[0]);
      *(undefined8 *)(param_3 + 8) = uStack_80;
      *(undefined8 *)(param_3 + 0x10) = local_78;
      *(undefined8 *)(param_3 + 0x18) = uStack_70;
      *(undefined8 *)(param_3 + 0x20) = local_68;
      *(undefined8 *)(param_3 + 0x28) = uStack_60;
      *(undefined8 *)(param_3 + 0x30) = local_58;
      *(undefined8 *)(param_3 + 0x38) = uStack_50;
    }
    if (local_218 != (void *)0x0) {
      free(local_218);
    }
    if (local_228 != (void *)0x0) {
      free(local_228);
    }
  }
LAB_00117946:
  uVar14 = 1;
LAB_0011794b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<16u, float> >::split_node(unsigned int,
   basisu::priority_queue&, basisu::vector<unsigned int>&, basisu::vector<unsigned int>&) */

undefined4 __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::split_node
          (tree_vector_quant<basisu::vec<16u,float>> *this,uint param_1,priority_queue *param_2,
          vector *param_3,vector *param_4)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float local_120;
  float local_11c;
  ulong local_118;
  ulong local_110;
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
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar17 = (ulong)param_1 * 0x70;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = 0.0;
  local_118 = 0;
  local_110 = 0;
  local_11c = 0.0;
  cVar9 = prep_split(this,(tsvq_node *)(*(long *)this + lVar17),(vec *)&local_108,(vec *)&local_c8);
  if ((cVar9 == '\0') ||
     (uVar10 = refine_split(this,(tsvq_node *)(*(long *)this + lVar17),(vec *)&local_108,&local_118,
                            &local_120,param_3,(vec *)&local_c8,&local_110,&local_11c,param_4),
     (char)uVar10 == '\0')) {
    uVar10 = 0;
    goto LAB_0011814e;
  }
  uVar5 = *(uint *)(this + 8);
  lVar12 = *(long *)this;
  uVar1 = uVar5 + 1;
  *(ulong *)(lVar17 + lVar12 + 0x50) = CONCAT44(uVar1,uVar5);
  iVar6 = *(int *)(this + 0x20);
  *(int *)(lVar17 + lVar12 + 0x68) = iVar6;
  *(int *)(this + 0x20) = iVar6 + 1;
  uVar16 = uVar5 + 2;
  if (uVar5 < 0xfffffffe) {
    lVar17 = 0xe0;
    uVar14 = uVar5;
    if (*(uint *)(this + 0xc) < uVar16) {
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar16,0),0,(_func_void_void_ptr_void_ptr_uint *)0x70,true);
      uVar14 = *(uint *)(this + 8);
      lVar12 = *(long *)this;
      lVar17 = (ulong)(uVar16 - uVar14) * 0x70;
    }
    uVar7 = _LC50;
    lVar11 = (ulong)uVar14 * 0x70 + lVar12;
    lVar17 = lVar17 + lVar11;
    for (; lVar11 != lVar17; lVar11 = lVar11 + 0x70) {
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined1 (*) [16])(lVar11 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar11 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar11 + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar11 + 0x40) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar11 + 0x50) = uVar7;
      *(undefined8 *)(lVar11 + 0x58) = 0;
      *(undefined8 *)(lVar11 + 0x60) = 0;
      *(undefined4 *)(lVar11 + 0x68) = 0xffffffff;
    }
  }
  else {
    lVar12 = (ulong)(-uVar16 & 0x70) + lVar12;
    lVar17 = lVar12 + 0x6fffffff20;
    do {
      if (*(void **)(lVar12 + 0x58) != (void *)0x0) {
        free(*(void **)(lVar12 + 0x58));
      }
      lVar12 = lVar12 + 0x70;
    } while (lVar17 != lVar12);
    lVar12 = *(long *)this;
  }
  *(uint *)(this + 8) = uVar16;
  pfVar18 = (float *)((ulong)uVar5 * 0x70 + lVar12);
  *(undefined8 *)(pfVar18 + 4) = local_108;
  *(undefined8 *)(pfVar18 + 6) = uStack_100;
  pfVar2 = (float *)(lVar12 + (ulong)uVar1 * 0x70);
  *pfVar18 = local_120;
  *(undefined8 *)(pfVar18 + 8) = local_f8;
  *(undefined8 *)(pfVar18 + 10) = uStack_f0;
  *(ulong *)(pfVar18 + 2) = local_118;
  uVar7 = *(undefined8 *)(pfVar18 + 0x16);
  *(undefined8 *)(pfVar18 + 0xc) = local_e8;
  *(undefined8 *)(pfVar18 + 0xe) = uStack_e0;
  *(undefined8 *)(pfVar18 + 0x10) = local_d8;
  *(undefined8 *)(pfVar18 + 0x12) = uStack_d0;
  *(undefined8 *)(pfVar18 + 0x16) = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar7;
  fVar21 = pfVar18[0x18];
  pfVar18[0x18] = *(float *)(param_3 + 8);
  *(float *)(param_3 + 8) = fVar21;
  fVar21 = pfVar18[0x19];
  pfVar18[0x19] = *(float *)(param_3 + 0xc);
  *(float *)(param_3 + 0xc) = fVar21;
  *(undefined8 *)(pfVar2 + 4) = local_c8;
  *(undefined8 *)(pfVar2 + 6) = uStack_c0;
  *(undefined8 *)(pfVar2 + 8) = local_b8;
  *(undefined8 *)(pfVar2 + 10) = uStack_b0;
  *(undefined8 *)(pfVar2 + 0xc) = local_a8;
  *(undefined8 *)(pfVar2 + 0xe) = uStack_a0;
  *pfVar2 = local_11c;
  *(undefined8 *)(pfVar2 + 0x10) = local_98;
  *(undefined8 *)(pfVar2 + 0x12) = uStack_90;
  uVar7 = *(undefined8 *)param_4;
  fVar21 = *pfVar18;
  *(ulong *)(pfVar2 + 2) = local_110;
  uVar8 = *(undefined8 *)(pfVar2 + 0x16);
  *(undefined8 *)(pfVar2 + 0x16) = uVar7;
  *(undefined8 *)param_4 = uVar8;
  fVar20 = pfVar2[0x18];
  pfVar2[0x18] = *(float *)(param_4 + 8);
  *(float *)(param_4 + 8) = fVar20;
  fVar20 = pfVar2[0x19];
  pfVar2[0x19] = *(float *)(param_4 + 0xc);
  *(float *)(param_4 + 0xc) = fVar20;
  fVar20 = local_11c;
  if (fVar21 <= 0.0) {
    if (1 < (uint)pfVar18[0x18]) {
      puVar3 = *(uint **)(pfVar18 + 0x16);
      puVar13 = puVar3 + 1;
      puVar4 = (undefined8 *)(*(long *)(this + 0x10) + (ulong)*puVar3 * 0x48);
      local_88 = *puVar4;
      uStack_80 = puVar4[1];
      local_78 = puVar4[2];
      uStack_70 = puVar4[3];
      local_68 = puVar4[4];
      uStack_60 = puVar4[5];
      local_58 = puVar4[6];
      uStack_50 = puVar4[7];
      do {
        lVar17 = 0;
        do {
          if (*(float *)((long)&local_88 + lVar17) !=
              *(float *)(*(long *)(this + 0x10) + (ulong)*puVar13 * 0x48 + lVar17)) {
            *pfVar18 = 0.0001;
            fVar20 = *pfVar2;
            goto LAB_00118386;
          }
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0x40);
        puVar13 = puVar13 + 1;
      } while (puVar3 + (ulong)((int)pfVar18[0x18] - 2) + 2 != puVar13);
      goto LAB_00118386;
    }
    fVar21 = local_11c;
    if (local_11c <= 0.0) goto LAB_00118438;
  }
  else {
LAB_00118386:
    if (fVar20 <= 0.0) {
LAB_00118438:
      if (1 < (uint)pfVar2[0x18]) {
        puVar3 = *(uint **)(pfVar2 + 0x16);
        puVar13 = puVar3 + 1;
        puVar4 = (undefined8 *)(*(long *)(this + 0x10) + (ulong)*puVar3 * 0x48);
        local_88 = *puVar4;
        uStack_80 = puVar4[1];
        local_78 = puVar4[2];
        uStack_70 = puVar4[3];
        local_68 = puVar4[4];
        uStack_60 = puVar4[5];
        local_58 = puVar4[6];
        uStack_50 = puVar4[7];
        do {
          lVar17 = 0;
          do {
            if (*(float *)((long)&local_88 + lVar17) !=
                *(float *)(*(long *)(this + 0x10) + (ulong)*puVar13 * 0x48 + lVar17)) {
              *pfVar2 = 0.0001;
              goto LAB_00118393;
            }
            lVar17 = lVar17 + 4;
          } while (lVar17 != 0x40);
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar3 + (ulong)((int)pfVar2[0x18] - 2) + 2);
        goto LAB_00118393;
      }
      fVar21 = *pfVar18;
      if (fVar21 <= 0.0) goto LAB_0011814e;
LAB_001183a0:
      if (1 < (uint)pfVar18[0x18]) {
        iVar6 = *(int *)(param_2 + 0x10);
        uVar14 = iVar6 + 1;
        uVar15 = (ulong)uVar14;
        *(uint *)(param_2 + 0x10) = uVar14;
        uVar16 = *(uint *)(param_2 + 8);
        if ((uVar16 <= uVar14) && (uVar19 = iVar6 + 2, uVar16 != uVar19)) {
          if ((uVar16 <= uVar19) && (*(uint *)(param_2 + 0xc) < uVar19)) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_2,SUB41(uVar19,0),(uint)(uVar16 + 1 == uVar19),
                       (_func_void_void_ptr_void_ptr_uint *)0x8,false);
          }
          *(uint *)(param_2 + 8) = uVar19;
        }
        lVar17 = *(long *)param_2;
        puVar13 = (uint *)(lVar17 + uVar15 * 8);
        while (uVar14 = uVar14 >> 1, uVar14 != 0) {
          puVar13 = (uint *)(lVar17 + uVar15 * 8);
          puVar3 = (uint *)(lVar17 + (ulong)uVar14 * 8);
          if (fVar21 < (float)puVar3[1]) break;
          uVar15 = (ulong)uVar14;
          *(undefined8 *)puVar13 = *(undefined8 *)puVar3;
          puVar13 = puVar3;
        }
        puVar13[1] = (uint)fVar21;
        fVar21 = *pfVar2;
        *puVar13 = uVar5;
        goto LAB_001183af;
      }
    }
    else {
LAB_00118393:
      fVar21 = *pfVar18;
      if (0.0 < fVar21) goto LAB_001183a0;
    }
    fVar21 = *pfVar2;
  }
LAB_001183af:
  if ((0.0 < fVar21) && (1 < (uint)pfVar2[0x18])) {
    iVar6 = *(int *)(param_2 + 0x10);
    uVar16 = *(uint *)(param_2 + 8);
    uVar5 = iVar6 + 1;
    uVar15 = (ulong)uVar5;
    *(uint *)(param_2 + 0x10) = uVar5;
    if ((uVar16 <= uVar5) && (uVar14 = iVar6 + 2, uVar16 != uVar14)) {
      if ((uVar16 <= uVar14) && (*(uint *)(param_2 + 0xc) < uVar14)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_2,SUB41(uVar14,0),(uint)(uVar16 + 1 == uVar14),
                   (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      }
      *(uint *)(param_2 + 8) = uVar14;
    }
    lVar17 = *(long *)param_2;
    puVar13 = (uint *)(lVar17 + uVar15 * 8);
    while (uVar5 = uVar5 >> 1, uVar5 != 0) {
      puVar13 = (uint *)(lVar17 + uVar15 * 8);
      puVar3 = (uint *)(lVar17 + (ulong)uVar5 * 8);
      if (fVar21 < (float)puVar3[1]) break;
      uVar15 = (ulong)uVar5;
      *(undefined8 *)puVar13 = *(undefined8 *)puVar3;
      puVar13 = puVar3;
    }
    *puVar13 = uVar1;
    puVar13[1] = (uint)fVar21;
  }
LAB_0011814e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Removing unreachable block (ram,0x00118866) */
/* WARNING: Removing unreachable block (ram,0x00118870) */
/* WARNING: Removing unreachable block (ram,0x00118888) */
/* WARNING: Removing unreachable block (ram,0x0011889b) */
/* WARNING: Removing unreachable block (ram,0x001188c7) */
/* basisu::tree_vector_quant<basisu::vec<16u, float> >::generate(unsigned int) */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<16u,float>>::generate
          (tree_vector_quant<basisu::vec<16u,float>> *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  void *local_60;
  uint local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = 0;
  if (*(int *)(this + 0x18) == 0) goto LAB_001187cf;
  uVar17 = *(uint *)(this + 8);
  *(undefined4 *)(this + 0x20) = 0;
  lVar12 = (ulong)uVar17 * 0x70;
  if (lVar12 != 0) {
    lVar15 = *(long *)this;
    lVar12 = lVar15 + lVar12;
    for (; lVar15 != lVar12; lVar15 = lVar15 + 0x70) {
      if (*(void **)(lVar15 + 0x58) != (void *)0x0) {
        free(*(void **)(lVar15 + 0x58));
      }
    }
    *(uint *)(this + 8) = *(int *)(this + 8) - uVar17;
  }
  vector<basisu::tree_vector_quant<basisu::vec<16u,float>>::tsvq_node>::reserve
            ((vector<basisu::tree_vector_quant<basisu::vec<16u,float>>::tsvq_node> *)this,
             (ulong)(param_1 * 2 + 1));
  prepare_root();
  uVar17 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar17) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar17 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x70,
               true);
    uVar17 = *(uint *)(this + 8);
  }
  puVar16 = (undefined4 *)((ulong)uVar17 * 0x70 + *(long *)this);
  *(undefined8 *)(puVar16 + 2) = local_b0;
  *puVar16 = local_b8;
  memmove(puVar16 + 4,local_a8,0x40);
  *(undefined8 *)(puVar16 + 0x16) = 0;
  *(undefined8 *)(puVar16 + 0x18) = 0;
  *(undefined8 *)(puVar16 + 0x14) = local_68;
  basisu::elemental_vector::increase_capacity
            ((int)puVar16 + 0x58,SUB41(local_58,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false)
  ;
  puVar16[0x18] = local_58;
  if (*(void **)(puVar16 + 0x16) == (void *)0x0) {
LAB_001189cb:
    puVar16[0x1a] = local_50;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    if (local_60 != (void *)0x0) {
      free(local_60);
    }
  }
  else {
    if (local_60 != (void *)0x0) {
      memcpy(*(void **)(puVar16 + 0x16),local_60,(ulong)local_58 * 4);
      goto LAB_001189cb;
    }
    puVar16[0x1a] = local_50;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  local_d8 = (void *)0x0;
  local_d0 = 0;
  uVar3 = **(undefined4 **)this;
  local_c8 = 0;
  iVar14 = param_1 + 1;
  if (iVar14 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_d8,SUB41(iVar14,0),(uint)(param_1 == 0),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    local_d0 = CONCAT44(local_d0._4_4_,iVar14);
  }
  *(undefined4 *)((long)local_d8 + 0xc) = uVar3;
  *(undefined4 *)((long)local_d8 + 8) = 0;
  local_c8 = 1;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  vector<unsigned_int>::reserve
            ((vector<unsigned_int> *)&local_f8,(ulong)(*(int *)(this + 0x18) + 1));
  vector<unsigned_int>::reserve
            ((vector<unsigned_int> *)&local_e8,(ulong)(*(int *)(this + 0x18) + 1));
  for (uVar17 = 1; (local_c8 != 0 && (uVar17 < param_1));
      uVar17 = (uVar17 + 1) - (uint)(cVar9 == '\0')) {
    do {
      while( true ) {
        uVar7 = *(uint *)((long)local_d8 + 8);
        uVar10 = (ulong)local_c8;
        lVar12 = (ulong)uVar7 * 0x70 + *(long *)this;
        local_c8 = local_c8 - 1;
        *(undefined8 *)((long)local_d8 + 8) = *(undefined8 *)((long)local_d8 + uVar10 * 8);
        if (local_c8 == 0) {
          if (*(uint *)(lVar12 + 0x60) < 2) goto LAB_00118af9;
          goto LAB_00118bb0;
        }
        fVar4 = *(float *)((long)local_d8 + 0xc);
        uVar11 = *(undefined8 *)((long)local_d8 + 8);
        if (local_c8 != 1) break;
        *(undefined8 *)((long)local_d8 + 8) = uVar11;
        if (1 < *(uint *)(lVar12 + 0x60)) goto LAB_00118bb0;
      }
      uVar13 = 2;
      uVar10 = 1;
      do {
        puVar1 = (undefined8 *)((long)local_d8 + uVar13 * 8);
        fVar5 = *(float *)((long)puVar1 + 4);
        if ((uint)uVar13 < local_c8) {
          uVar18 = (ulong)((uint)uVar13 + 1);
          puVar2 = (undefined8 *)((long)local_d8 + uVar18 * 8);
          fVar6 = *(float *)((long)puVar2 + 4);
          if (fVar6 <= fVar5) goto LAB_00118b52;
        }
        else {
LAB_00118b52:
          puVar2 = puVar1;
          uVar18 = uVar13;
          fVar6 = fVar5;
        }
        puVar1 = (undefined8 *)((long)local_d8 + uVar10 * 8);
        if (fVar6 < fVar4) {
          *puVar1 = uVar11;
          uVar8 = *(uint *)(lVar12 + 0x60);
          goto joined_r0x00118baa;
        }
        *puVar1 = *puVar2;
        uVar8 = (int)uVar18 * 2;
        uVar13 = (ulong)uVar8;
        uVar10 = uVar18;
      } while (uVar8 <= local_c8);
      *puVar2 = uVar11;
      uVar8 = *(uint *)(lVar12 + 0x60);
joined_r0x00118baa:
    } while (uVar8 < 2);
LAB_00118bb0:
    cVar9 = split_node(this,uVar7,(priority_queue *)&local_d8,(vector *)&local_f8,
                       (vector *)&local_e8);
  }
LAB_00118af9:
  if (local_e8 != (void *)0x0) {
    free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    free(local_f8);
  }
  if (local_d8 != (void *)0x0) {
    free(local_d8);
  }
  uVar11 = 1;
LAB_001187cf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* bool 
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,
   float> > >(basisu::tree_vector_quant<basisu::vec<16u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*) */

bool basisu::
     generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>
               (tree_vector_quant *param_1,uint param_2,uint param_3,vector *param_4,vector *param_5
               ,uint param_6,bool param_7,job_pool *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  void *__ptr;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  void *pvVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined1 local_518 [3];
  char local_515;
  uint local_514;
  uint local_510;
  uint local_50c;
  undefined8 *local_508;
  ulong local_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  code *local_4d8;
  code *pcStack_4d0;
  long local_4c8;
  uint local_4c0 [58];
  long local_3d8;
  uint local_3d0 [2];
  long local_3c8;
  uint local_3c0 [58];
  long local_2d8;
  uint local_2d0 [2];
  long local_2c8 [75];
  long local_70 [5];
  long local_48;
  long local_40;
  
  local_518[0] = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_514 = param_6;
  local_510 = param_3;
  local_50c = param_2;
  vector<basisu::vector<unsigned_int>>::resize
            ((vector<basisu::vector<unsigned_int>> *)param_4,0,false);
  if (*(uint *)(param_5 + 8) != 0) {
    puVar12 = *(undefined8 **)param_5;
    puVar10 = puVar12 + (ulong)*(uint *)(param_5 + 8) * 2;
    do {
      if ((void *)*puVar12 != (void *)0x0) {
        free((void *)*puVar12);
      }
      puVar12 = puVar12 + 2;
    } while (puVar10 != puVar12);
    *(undefined4 *)(param_5 + 8) = 0;
  }
  if (((local_514 < 2) || (*(uint *)(param_1 + 0x18) < 0x100)) || (local_50c < local_514 << 4)) {
    cVar5 = tree_vector_quant<basisu::vec<16u,float>>::generate
                      ((tree_vector_quant<basisu::vec<16u,float>> *)param_1,local_50c);
    if (cVar5 != '\0') {
      lVar22 = 0;
      uVar18 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          lVar13 = *(long *)param_1;
          if (*(int *)(lVar13 + lVar22 + 0x50) < 0) {
            vector<basisu::vector<unsigned_int>>::resize
                      ((vector<basisu::vector<unsigned_int>> *)param_4,
                       (ulong)(*(int *)(param_4 + 8) + 1),false);
            vector<unsigned_int>::operator=
                      ((vector<unsigned_int> *)
                       ((ulong)(*(int *)(param_4 + 8) - 1) * 0x10 + *(long *)param_4),
                       (vector *)(lVar13 + lVar22 + 0x58));
          }
          uVar18 = uVar18 + 1;
          lVar22 = lVar22 + 0x70;
        } while (uVar18 < *(uint *)(param_1 + 8));
      }
      if (local_510 != 0) {
        tree_vector_quant<basisu::vec<16u,float>>::retrieve
                  ((tree_vector_quant<basisu::vec<16u,float>> *)param_1,local_510,param_5);
      }
      goto LAB_00118d0e;
    }
  }
  else {
    if (0x10 < local_514) {
      local_514 = 0x10;
    }
    local_515 = tree_vector_quant<basisu::vec<16u,float>>::generate
                          ((tree_vector_quant<basisu::vec<16u,float>> *)param_1,local_514);
    if (local_515 != '\0') {
      local_508 = (undefined8 *)0x0;
      local_500 = 0;
      tree_vector_quant<basisu::vec<16u,float>>::retrieve
                ((tree_vector_quant<basisu::vec<16u,float>> *)param_1,(vector *)&local_508);
      if ((uint)local_500 < local_514) {
        vector<basisu::vector<unsigned_int>>::operator=
                  ((vector<basisu::vector<unsigned_int>> *)param_4,(vector *)&local_508);
        cVar5 = local_515;
        if (local_510 != 0) {
          tree_vector_quant<basisu::vec<16u,float>>::retrieve
                    ((tree_vector_quant<basisu::vec<16u,float>> *)param_1,local_510,param_5);
          cVar5 = local_515;
        }
      }
      else {
        plVar6 = local_2c8;
        do {
          *plVar6 = 0;
          plVar8 = plVar6 + 5;
          plVar6[1] = 0;
          plVar6[2] = 0;
          plVar6[3] = 0;
          *(undefined4 *)(plVar6 + 4) = 0;
          plVar6 = plVar8;
        } while (plVar8 != &local_48);
        local_4f8 = (undefined1  [16])0x0;
        plVar6 = &local_4c8;
        do {
          *plVar6 = 0;
          plVar7 = plVar6 + 8;
          plVar6[2] = 0;
          plVar6[4] = 0;
          plVar6[6] = 0;
          plVar6[1] = 0;
          plVar6[3] = 0;
          plVar6[5] = 0;
          plVar6[7] = 0;
          plVar8 = &local_3c8;
          plVar6 = plVar7;
        } while (plVar7 != &local_3c8);
        do {
          *plVar8 = 0;
          plVar6 = plVar8 + 8;
          plVar8[2] = 0;
          plVar8[4] = 0;
          plVar8[6] = 0;
          plVar8[1] = 0;
          plVar8[3] = 0;
          plVar8[5] = 0;
          plVar8[7] = 0;
          plVar8 = plVar6;
        } while (plVar6 != local_2c8);
        if (local_514 != 0) {
          uVar18 = 0;
          do {
            local_4d8 = (code *)0x0;
            local_4e8 = (undefined1  [16])0x0;
            pcStack_4d0 = (code *)0x0;
            puVar9 = (uint *)operator_new(0x58);
            *puVar9 = uVar18;
            *(undefined1 **)(puVar9 + 0xe) = local_518;
            *(vector **)(puVar9 + 10) = (vector *)&local_508;
            *(uint **)(puVar9 + 0x12) = &local_514;
            *(tree_vector_quant **)(puVar9 + 0xc) = param_1;
            *(uint **)(puVar9 + 0x10) = &local_50c;
            *(uint **)(puVar9 + 0x14) = &local_510;
            *(long **)(puVar9 + 2) = &local_4c8;
            *(long **)(puVar9 + 4) = &local_3c8;
            *(undefined1 **)(puVar9 + 6) = local_4f8;
            *(long **)(puVar9 + 8) = local_2c8;
            local_4e8._0_8_ = puVar9;
            local_4d8 = std::
                        _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
                        ::_M_manager;
            pcStack_4d0 = std::
                          _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
                          ::_M_invoke;
            basisu::job_pool::add_job((function *)param_8);
            if (local_4d8 != (code *)0x0) {
              (*local_4d8)(local_4e8,local_4e8,3);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < local_514);
        }
        uVar19 = 0;
        basisu::job_pool::wait_for_all();
        uVar15 = 0;
        if (0 < (int)local_514) {
          pcVar16 = local_4f8;
          uVar19 = 0;
          uVar18 = 0;
          lVar22 = 8;
          do {
            cVar5 = *pcVar16;
            if (*pcVar16 == '\0') goto LAB_00119081;
            uVar18 = uVar18 + *(int *)((long)&local_4c8 + lVar22);
            uVar19 = (ulong)(uint)((int)uVar19 + *(int *)((long)&local_3c8 + lVar22));
            lVar22 = lVar22 + 0x10;
            pcVar16 = pcVar16 + 1;
          } while (lVar22 != (ulong)(local_514 - 1) * 0x10 + 0x18);
          uVar15 = (ulong)uVar18;
        }
        puVar9 = local_4c0;
        vector<basisu::vector<unsigned_int>>::reserve
                  ((vector<basisu::vector<unsigned_int>> *)param_4,uVar15);
        puVar20 = local_3c0;
        vector<basisu::vector<unsigned_int>>::reserve
                  ((vector<basisu::vector<unsigned_int>> *)param_5,uVar19);
        cVar5 = local_515;
        if (local_514 != 0) {
          uVar18 = 0;
          do {
            lVar22 = 0;
            if (*puVar9 != 0) {
              do {
                uVar1 = *(uint *)(param_4 + 8);
                uVar21 = uVar1 + 1;
                if (uVar1 < 0xffffffff) {
                  lVar11 = 0x10;
                  uVar2 = uVar1;
                  if (*(uint *)(param_4 + 0xc) < uVar21) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)param_4,SUB41(uVar21,0),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                    uVar2 = *(uint *)(param_4 + 8);
                    lVar11 = (ulong)(uVar21 - uVar2) << 4;
                  }
                  lVar13 = *(long *)param_4;
                  puVar10 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar13);
                  puVar12 = (undefined8 *)(lVar11 + (long)puVar10);
                  for (; puVar10 != puVar12; puVar10 = puVar10 + 2) {
                    *puVar10 = 0;
                    puVar10[1] = 0;
                  }
                }
                else {
                  puVar10 = *(undefined8 **)param_4;
                  puVar12 = puVar10 + 0x1fffffffe;
                  do {
                    if ((void *)*puVar10 != (void *)0x0) {
                      free((void *)*puVar10);
                    }
                    puVar10 = puVar10 + 2;
                  } while (puVar12 != puVar10);
                  lVar13 = *(long *)param_4;
                }
                *(uint *)(param_4 + 8) = uVar21;
                lVar11 = lVar22 + 1;
                puVar12 = (undefined8 *)((ulong)uVar1 * 0x10 + lVar13);
                puVar10 = (undefined8 *)(lVar22 * 0x10 + *(long *)(puVar9 + -2));
                uVar4 = *puVar12;
                *puVar12 = *puVar10;
                *puVar10 = uVar4;
                uVar3 = *(undefined4 *)(puVar12 + 1);
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar10 + 1);
                *(undefined4 *)(puVar10 + 1) = uVar3;
                uVar3 = *(undefined4 *)((long)puVar12 + 0xc);
                *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar10 + 0xc);
                *(undefined4 *)((long)puVar10 + 0xc) = uVar3;
                lVar22 = lVar11;
              } while ((uint)lVar11 < *puVar9);
            }
            lVar22 = 0;
            if (*puVar20 != 0) {
              do {
                uVar1 = *(uint *)(param_5 + 8);
                uVar21 = uVar1 + 1;
                if (uVar1 < 0xffffffff) {
                  lVar11 = 0x10;
                  uVar2 = uVar1;
                  if (*(uint *)(param_5 + 0xc) < uVar21) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)param_5,SUB41(uVar21,0),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                    uVar2 = *(uint *)(param_5 + 8);
                    lVar11 = (ulong)(uVar21 - uVar2) << 4;
                  }
                  lVar13 = *(long *)param_5;
                  puVar10 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar13);
                  puVar12 = (undefined8 *)(lVar11 + (long)puVar10);
                  for (; puVar10 != puVar12; puVar10 = puVar10 + 2) {
                    *puVar10 = 0;
                    puVar10[1] = 0;
                  }
                }
                else {
                  puVar10 = *(undefined8 **)param_5;
                  puVar12 = puVar10 + 0x1fffffffe;
                  do {
                    if ((void *)*puVar10 != (void *)0x0) {
                      free((void *)*puVar10);
                    }
                    puVar10 = puVar10 + 2;
                  } while (puVar12 != puVar10);
                  lVar13 = *(long *)param_5;
                }
                *(uint *)(param_5 + 8) = uVar21;
                lVar11 = lVar22 + 1;
                puVar12 = (undefined8 *)((ulong)uVar1 * 0x10 + lVar13);
                puVar10 = (undefined8 *)(lVar22 * 0x10 + *(long *)(puVar20 + -2));
                uVar4 = *puVar12;
                *puVar12 = *puVar10;
                *puVar10 = uVar4;
                uVar3 = *(undefined4 *)(puVar12 + 1);
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar10 + 1);
                *(undefined4 *)(puVar10 + 1) = uVar3;
                uVar3 = *(undefined4 *)((long)puVar12 + 0xc);
                *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar10 + 0xc);
                *(undefined4 *)((long)puVar10 + 0xc) = uVar3;
                lVar22 = lVar11;
              } while ((uint)lVar11 < *puVar20);
            }
            uVar18 = uVar18 + 1;
            puVar9 = puVar9 + 4;
            puVar20 = puVar20 + 4;
            cVar5 = local_515;
          } while (uVar18 < local_514);
        }
LAB_00119081:
        plVar6 = &local_2d8;
        do {
          puVar10 = (undefined8 *)*plVar6;
          if (puVar10 != (undefined8 *)0x0) {
            puVar12 = puVar10 + (ulong)*(uint *)(plVar6 + 1) * 2;
            if (puVar10 != puVar12) {
              do {
                if ((void *)*puVar10 != (void *)0x0) {
                  free((void *)*puVar10);
                }
                puVar10 = puVar10 + 2;
              } while (puVar12 != puVar10);
              puVar10 = (undefined8 *)*plVar6;
            }
            free(puVar10);
          }
          bVar23 = plVar6 != &local_3c8;
          plVar6 = plVar6 + -2;
        } while (bVar23);
        plVar6 = &local_3d8;
        do {
          puVar10 = (undefined8 *)*plVar6;
          if (puVar10 != (undefined8 *)0x0) {
            puVar12 = puVar10 + (ulong)*(uint *)(plVar6 + 1) * 2;
            if (puVar10 != puVar12) {
              do {
                if ((void *)*puVar10 != (void *)0x0) {
                  free((void *)*puVar10);
                }
                puVar10 = puVar10 + 2;
              } while (puVar12 != puVar10);
              puVar10 = (undefined8 *)*plVar6;
            }
            free(puVar10);
          }
          bVar23 = plVar6 != &local_4c8;
          plVar6 = plVar6 + -2;
        } while (bVar23);
        plVar6 = local_70;
        do {
          if ((void *)plVar6[2] != (void *)0x0) {
            free((void *)plVar6[2]);
          }
          __ptr = (void *)*plVar6;
          if (__ptr != (void *)0x0) {
            pvVar17 = (void *)((ulong)*(uint *)(plVar6 + 1) * 0x70 + (long)__ptr);
            if (__ptr != pvVar17) {
              do {
                if (*(void **)((long)__ptr + 0x58) != (void *)0x0) {
                  free(*(void **)((long)__ptr + 0x58));
                }
                __ptr = (void *)((long)__ptr + 0x70);
              } while (pvVar17 != __ptr);
              __ptr = (void *)*plVar6;
            }
            free(__ptr);
          }
          bVar23 = plVar6 != local_2c8;
          plVar6 = plVar6 + -5;
        } while (bVar23);
      }
      if (local_508 != (undefined8 *)0x0) {
        puVar14 = local_508 + (local_500 & 0xffffffff) * 2;
        puVar10 = puVar14;
        for (puVar12 = local_508; puVar12 != puVar14; puVar12 = puVar12 + 2) {
          if ((void *)*puVar12 != (void *)0x0) {
            free((void *)*puVar12);
          }
          puVar10 = local_508;
        }
        free(puVar10);
      }
      goto LAB_00118d0e;
    }
  }
  cVar5 = '\0';
LAB_00118d0e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (bool)cVar5;
}



/* bool basisu::generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<16u,
   float> > >(basisu::tree_vector_quant<basisu::vec<16u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, basisu::job_pool*, bool) */

bool basisu::
     generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<16u,float>>>
               (tree_vector_quant *param_1,uint param_2,uint param_3,vector *param_4,vector *param_5
               ,uint param_6,job_pool *param_7,bool param_8)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char extraout_DL;
  char extraout_DL_00;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  void *pvVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  void **local_198;
  void *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  ulong local_140;
  undefined8 *local_138;
  ulong local_130;
  long local_128;
  uint *local_120;
  ulong local_118;
  void *local_108;
  ulong local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 *local_d8;
  long local_d0;
  undefined8 *local_c8;
  ulong local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8 [2];
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 1;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_b8[0] = 0x3f800000;
  local_b0 = 0;
  local_a8[0] = 0;
  local_d8 = local_a8;
  lVar5 = std::__detail::_Prime_rehash_policy::_M_next_bkt((ulong)local_b8);
  if (lVar5 == local_d0) {
    local_b0 = 0;
  }
  else {
    std::
    _Hashtable<basisu::vec<16u,float>,std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<16u,float>>,basisu::bit_hasher<basisu::vec<16u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
    ::_M_rehash_aux(&local_d8,lVar5);
  }
  local_120 = (uint *)0x0;
  local_118 = 0;
  if (param_8) {
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_120,2,false);
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      uVar11 = 0;
      do {
        while( true ) {
          pvVar1 = (void *)(*(long *)(param_1 + 0x10) + (ulong)uVar11 * 0x48);
          uVar4 = uVar11 + 1;
          lVar5 = *(long *)((long)pvVar1 + 0x40) +
                  *(long *)(*(long *)(param_1 + 0x10) + 0x40 + (ulong)uVar4 * 0x48);
          *local_120 = uVar11;
          local_120[1] = uVar4;
          local_128 = lVar5;
          memmove(&local_98,pvVar1,0x40);
          local_50 = (void *)0x0;
          local_48 = 0;
          local_58 = lVar5;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_50,SUB81(local_118,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          local_48 = CONCAT44(local_48._4_4_,(undefined4)local_118);
          if ((local_50 != (void *)0x0) && (local_120 != (uint *)0x0)) {
            memcpy(local_50,local_120,(local_118 & 0xffffffff) * 4);
          }
          lVar5 = std::
                  _Hashtable<basisu::vec<16u,float>,std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<16u,float>>,basisu::bit_hasher<basisu::vec<16u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                  ::_M_emplace<std::pair<basisu::vec<16u,float>,basisu::weighted_block_group>>
                            (&local_d8,&local_98);
          if (local_50 != (void *)0x0) {
            free(local_50);
          }
          if (extraout_DL != '\0') break;
          uVar18 = (int)lVar5 + 0x50;
          *(long *)(lVar5 + 0x48) = *(long *)(lVar5 + 0x48) + local_128;
          uVar19 = *(uint *)(lVar5 + 0x58);
          if (*(uint *)(lVar5 + 0x5c) <= uVar19) {
            basisu::elemental_vector::increase_capacity
                      (uVar18,(bool)((char)uVar19 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar19 = *(uint *)(lVar5 + 0x58);
          }
          *(uint *)(*(long *)(lVar5 + 0x50) + (ulong)uVar19 * 4) = uVar11;
          iVar16 = *(int *)(lVar5 + 0x58);
          uVar19 = iVar16 + 1;
          *(uint *)(lVar5 + 0x58) = uVar19;
          if (*(uint *)(lVar5 + 0x5c) <= uVar19) {
            basisu::elemental_vector::increase_capacity
                      (uVar18,(bool)((char)iVar16 + '\x02'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar19 = *(uint *)(lVar5 + 0x58);
          }
          uVar11 = uVar11 + 2;
          *(uint *)(*(long *)(lVar5 + 0x50) + (ulong)uVar19 * 4) = uVar4;
          uVar4 = *(uint *)(param_1 + 0x18);
          *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x58) + 1;
          if (uVar4 <= uVar11) goto LAB_00119915;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar11 = uVar11 + 2;
      } while (uVar11 < uVar4);
    }
  }
  else {
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_120,1,false);
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      lVar5 = 0;
      do {
        local_198 = &local_50;
        pvVar1 = (void *)(*(long *)(param_1 + 0x10) + lVar5 * 0x48);
        lVar8 = *(long *)((long)pvVar1 + 0x40);
        *local_120 = (uint)lVar5;
        local_128 = lVar8;
        memmove(&local_98,pvVar1,0x40);
        local_50 = (void *)0x0;
        local_48 = 0;
        local_58 = lVar8;
        basisu::elemental_vector::increase_capacity
                  ((uint)local_198,SUB81(local_118,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        local_48 = CONCAT44(local_48._4_4_,(undefined4)local_118);
        if ((local_50 != (void *)0x0) && (local_120 != (uint *)0x0)) {
          memcpy(local_50,local_120,(local_118 & 0xffffffff) * 4);
        }
        lVar8 = std::
                _Hashtable<basisu::vec<16u,float>,std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<16u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<16u,float>>,basisu::bit_hasher<basisu::vec<16u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                ::_M_emplace<std::pair<basisu::vec<16u,float>,basisu::weighted_block_group>>
                          (&local_d8,&local_98);
        if (local_50 != (void *)0x0) {
          free(local_50);
        }
        if (extraout_DL_00 == '\0') {
          *(long *)(lVar8 + 0x48) = *(long *)(lVar8 + 0x48) + local_128;
          uVar4 = *(uint *)(lVar8 + 0x58);
          if (*(uint *)(lVar8 + 0x5c) <= uVar4) {
            basisu::elemental_vector::increase_capacity
                      ((int)lVar8 + 0x50,(bool)((char)uVar4 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar4 = *(uint *)(lVar8 + 0x58);
          }
          *(uint *)(*(long *)(lVar8 + 0x50) + (ulong)uVar4 * 4) = (uint)lVar5;
          *(int *)(lVar8 + 0x58) = *(int *)(lVar8 + 0x58) + 1;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < uVar4);
    }
  }
LAB_00119915:
  basisu::debug_printf
            ("generate_hierarchical_codebook_threaded: %u training vectors, %u unique training vectors\n"
             ,(ulong)uVar4,local_c0 & 0xffffffff);
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  if ((local_c0 >> 0x20 == 0) && ((int)local_c0 != 0)) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_158,SUB81(local_c0,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false);
  }
  uVar3 = local_f0;
  puVar6 = local_c8;
  while (local_f0 = uVar3, puVar6 != (undefined8 *)0x0) {
    local_98 = puVar6[1];
    lStack_90 = puVar6[2];
    lVar5 = puVar6[9];
    local_f0._0_4_ = (uint)uVar3;
    local_88 = puVar6[3];
    lStack_80 = puVar6[4];
    local_78 = puVar6[5];
    lStack_70 = puVar6[6];
    local_68 = puVar6[7];
    lStack_60 = puVar6[8];
    local_f0._4_4_ = (uint)((ulong)uVar3 >> 0x20);
    if (local_f0._4_4_ <= (uint)local_f0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_f8,(bool)((char)uVar3 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x48,true);
      uVar3 = local_f0;
    }
    local_f0 = uVar3;
    uVar17 = (ulong)(uint)local_f0;
    iVar16 = (uint)local_f0 + 1;
    plVar15 = (long *)((long)local_f8 + uVar17 * 0x48);
    *plVar15 = local_98;
    plVar15[1] = lStack_90;
    plVar15[2] = local_88;
    plVar15[3] = lStack_80;
    local_f0 = CONCAT44(local_f0._4_4_,iVar16);
    plVar15[4] = local_78;
    plVar15[5] = lStack_70;
    plVar15[8] = lVar5;
    plVar15[6] = local_68;
    plVar15[7] = lStack_60;
    if (local_150._4_4_ <= (uint)local_150) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_158,(bool)((char)local_150 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    }
    *(undefined8 **)((long)local_158 + (ulong)(uint)local_150 * 8) = puVar6;
    puVar6 = (undefined8 *)*puVar6;
    local_150 = CONCAT44(local_150._4_4_,(uint)local_150 + 1);
    uVar3 = local_f0;
  }
  bVar21 = param_2 < local_c0;
  basisu::debug_printf("Limit clusterizers: %u\n",(ulong)bVar21);
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  if (local_c0 < 0x40000) {
    param_6 = 1;
  }
  local_138 = (undefined8 *)0x0;
  local_130 = 0;
  bVar21 = generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>
                     ((tree_vector_quant *)&local_108,param_2,param_3,(vector *)&local_148,
                      (vector *)&local_138,param_6,bVar21,param_7);
  puVar6 = local_138;
  if (bVar21) {
    lVar5 = 0;
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)param_4,0,false);
    if ((uint)local_140 != 0) {
      do {
        uVar4 = *(uint *)(param_4 + 8);
        uVar11 = uVar4 + 1;
        if (uVar4 < 0xffffffff) {
          lVar8 = 0x10;
          if (*(uint *)(param_4 + 0xc) < uVar11) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_4,SUB41(uVar11,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                       false);
            uVar4 = *(uint *)(param_4 + 8);
            lVar8 = (ulong)(uVar11 - uVar4) << 4;
          }
          puVar6 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)param_4);
          puVar9 = (undefined8 *)(lVar8 + (long)puVar6);
          for (; puVar6 != puVar9; puVar6 = puVar6 + 2) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
        }
        else {
          puVar9 = *(undefined8 **)param_4;
          puVar6 = puVar9 + 0x1fffffffe;
          do {
            if ((void *)*puVar9 != (void *)0x0) {
              free((void *)*puVar9);
            }
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar6);
        }
        *(uint *)(param_4 + 8) = uVar11;
        lVar8 = 0;
        plVar15 = local_148 + lVar5 * 2;
        puVar6 = local_148;
        if ((int)plVar15[1] != 0) {
          do {
            lVar2 = *(long *)((long)local_158 + (ulong)*(uint *)(*plVar15 + lVar8 * 4) * 8);
            uVar4 = *(uint *)(lVar2 + 0x58);
            if (uVar4 == 0) {
              plVar15 = puVar6 + lVar5 * 2;
              if (*(uint *)(plVar15 + 1) <= (int)lVar8 + 1U) break;
            }
            else {
              uVar17 = (ulong)uVar4;
              pvVar1 = *(void **)(lVar2 + 0x50);
              plVar15 = (long *)((ulong)(uVar11 - 1) * 0x10 + *(long *)param_4);
              uVar11 = *(uint *)(plVar15 + 1);
              uVar20 = (ulong)uVar11;
              if (uVar17 + uVar20 < 0x100000000) {
                uVar19 = uVar11 + uVar4;
                if (!CARRY4(uVar11,uVar4)) {
                  uVar7 = uVar20;
                  uVar10 = uVar17;
                  if (*(uint *)((long)plVar15 + 0xc) < uVar19) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)plVar15,SUB41(uVar19,0),(uint)(uVar4 == 1),
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar7 = (ulong)*(uint *)(plVar15 + 1);
                    uVar10 = (ulong)(uVar19 - *(uint *)(plVar15 + 1));
                  }
                  memset((void *)(*plVar15 + uVar7 * 4),0,uVar10 << 2);
                }
                *(uint *)(plVar15 + 1) = uVar19;
              }
              memcpy((void *)(*plVar15 + uVar20 * 4),pvVar1,uVar17 * 4);
              plVar15 = local_148 + lVar5 * 2;
              puVar6 = local_148;
              if (*(uint *)(plVar15 + 1) <= (int)lVar8 + 1U) break;
            }
            lVar8 = lVar8 + 1;
            uVar11 = *(uint *)(param_4 + 8);
          } while( true );
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < (uint)local_140);
    }
    lVar5 = 0;
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)param_5,0,false);
    if ((uint)local_130 != 0) {
      do {
        uVar4 = *(uint *)(param_5 + 8);
        uVar11 = uVar4 + 1;
        if (uVar4 < 0xffffffff) {
          lVar8 = 0x10;
          if (*(uint *)(param_5 + 0xc) < uVar11) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_5,SUB41(uVar11,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                       false);
            uVar4 = *(uint *)(param_5 + 8);
            lVar8 = (ulong)(uVar11 - uVar4) << 4;
          }
          puVar6 = (undefined8 *)((ulong)uVar4 * 0x10 + *(long *)param_5);
          puVar9 = (undefined8 *)(lVar8 + (long)puVar6);
          for (; puVar6 != puVar9; puVar6 = puVar6 + 2) {
            *puVar6 = 0;
            puVar6[1] = 0;
          }
        }
        else {
          puVar9 = *(undefined8 **)param_5;
          puVar6 = puVar9 + 0x1fffffffe;
          do {
            if ((void *)*puVar9 != (void *)0x0) {
              free((void *)*puVar9);
            }
            puVar9 = puVar9 + 2;
          } while (puVar9 != puVar6);
        }
        *(uint *)(param_5 + 8) = uVar11;
        lVar8 = 0;
        plVar15 = local_138 + lVar5 * 2;
        puVar6 = local_138;
        if ((int)plVar15[1] != 0) {
          do {
            lVar2 = *(long *)((long)local_158 + (ulong)*(uint *)(*plVar15 + lVar8 * 4) * 8);
            uVar4 = *(uint *)(lVar2 + 0x58);
            if (uVar4 == 0) {
              plVar15 = puVar6 + lVar5 * 2;
              if (*(uint *)(plVar15 + 1) <= (int)lVar8 + 1U) break;
            }
            else {
              uVar17 = (ulong)uVar4;
              pvVar1 = *(void **)(lVar2 + 0x50);
              plVar15 = (long *)((ulong)(uVar11 - 1) * 0x10 + *(long *)param_5);
              uVar11 = *(uint *)(plVar15 + 1);
              uVar20 = (ulong)uVar11;
              if (uVar17 + uVar20 < 0x100000000) {
                uVar19 = uVar11 + uVar4;
                if (!CARRY4(uVar11,uVar4)) {
                  uVar7 = uVar20;
                  uVar10 = uVar17;
                  if (*(uint *)((long)plVar15 + 0xc) < uVar19) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)plVar15,SUB41(uVar19,0),(uint)(uVar4 == 1),
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar7 = (ulong)*(uint *)(plVar15 + 1);
                    uVar10 = (ulong)(uVar19 - *(uint *)(plVar15 + 1));
                  }
                  memset((void *)(*plVar15 + uVar7 * 4),0,uVar10 << 2);
                }
                *(uint *)(plVar15 + 1) = uVar19;
              }
              memcpy((void *)(*plVar15 + uVar20 * 4),pvVar1,uVar17 * 4);
              plVar15 = local_138 + lVar5 * 2;
              puVar6 = local_138;
              if (*(uint *)(plVar15 + 1) <= (int)lVar8 + 1U) break;
            }
            lVar8 = lVar8 + 1;
            uVar11 = *(uint *)(param_5 + 8);
          } while( true );
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < (uint)local_130);
      goto LAB_00119b70;
    }
    puVar9 = local_138;
    if (local_138 == (undefined8 *)0x0) goto LAB_00119bb3;
  }
  else {
LAB_00119b70:
    if (puVar6 == (undefined8 *)0x0) goto LAB_00119bb3;
    puVar13 = puVar6 + (local_130 & 0xffffffff) * 2;
    puVar9 = puVar13;
    for (; puVar6 != puVar13; puVar6 = puVar6 + 2) {
      if ((void *)*puVar6 != (void *)0x0) {
        free((void *)*puVar6);
      }
      puVar9 = local_138;
    }
  }
  free(puVar9);
LAB_00119bb3:
  if (local_148 != (undefined8 *)0x0) {
    puVar13 = local_148 + (local_140 & 0xffffffff) * 2;
    puVar6 = puVar13;
    for (puVar9 = local_148; puVar9 != puVar13; puVar9 = puVar9 + 2) {
      if ((void *)*puVar9 != (void *)0x0) {
        free((void *)*puVar9);
      }
      puVar6 = local_148;
    }
    free(puVar6);
  }
  if (local_158 != (void *)0x0) {
    free(local_158);
  }
  if (local_f8 != (void *)0x0) {
    free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    pvVar14 = (void *)((local_100 & 0xffffffff) * 0x70 + (long)local_108);
    pvVar1 = pvVar14;
    for (pvVar12 = local_108; pvVar12 != pvVar14; pvVar12 = (void *)((long)pvVar12 + 0x70)) {
      if (*(void **)((long)pvVar12 + 0x58) != (void *)0x0) {
        free(*(void **)((long)pvVar12 + 0x58));
      }
      pvVar1 = local_108;
    }
    free(pvVar1);
  }
  puVar6 = local_c8;
  if (local_120 != (uint *)0x0) {
    free(local_120);
    puVar6 = local_c8;
  }
  while (puVar6 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar6;
    if ((void *)puVar6[10] != (void *)0x0) {
      free((void *)puVar6[10]);
    }
    operator_delete(puVar6,0x68);
    puVar6 = puVar9;
  }
  memset(local_d8,0,local_d0 * 8);
  local_c0 = 0;
  local_c8 = (undefined8 *)0x0;
  if (local_d8 != local_a8) {
    operator_delete(local_d8,local_d0 * 8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,
   float> > >(basisu::tree_vector_quant<basisu::vec<16u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::
generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  tree_vector_quant<basisu::vec<16u,float>> *this_00;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  void *local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uVar7 = (ulong)*(uint *)this;
  lVar14 = *(long *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar13 = (long *)(uVar7 * 0x10 + **(long **)(this + 0x28));
  local_98 = (void *)0x0;
  iVar2 = (int)plVar13[1];
  this_00 = (tree_vector_quant<basisu::vec<16u,float>> *)(lVar14 + uVar7 * 0x28);
  local_90 = 0;
  if (iVar2 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_98,SUB41(iVar2,0),(uint)(iVar2 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_98 + (local_90 & 0xffffffff) * 4),0,
           (ulong)(uint)(iVar2 - (int)local_90) << 2);
    local_90 = CONCAT44(local_90._4_4_,iVar2);
  }
  if ((int)plVar13[1] != 0) {
    lVar15 = 0;
    lVar12 = lVar14 + uVar7 * 0x28;
    do {
      lVar8 = *(long *)(this + 0x30);
      uVar3 = *(uint *)(*plVar13 + lVar15 * 4);
      *(uint *)((long)local_98 + lVar15 * 4) = uVar3;
      uVar10 = *(uint *)(lVar12 + 0x18);
      puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x10) + (ulong)uVar3 * 0x48);
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = puVar6[2];
      uStack_70 = puVar6[3];
      local_68 = puVar6[4];
      uStack_60 = puVar6[5];
      local_58 = puVar6[6];
      uStack_50 = puVar6[7];
      uVar4 = puVar6[8];
      if (*(uint *)(lVar12 + 0x1c) <= uVar10) {
        basisu::elemental_vector::increase_capacity
                  ((int)lVar14 + 0x10 + (int)(uVar7 * 0x28),(bool)((char)uVar10 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x48,true);
        uVar10 = *(uint *)(lVar12 + 0x18);
      }
      lVar15 = lVar15 + 1;
      puVar6 = (undefined8 *)(*(long *)(lVar12 + 0x10) + (ulong)uVar10 * 0x48);
      puVar6[8] = uVar4;
      *puVar6 = local_88;
      puVar6[1] = uStack_80;
      puVar6[2] = local_78;
      puVar6[3] = uStack_70;
      puVar6[4] = local_68;
      puVar6[5] = uStack_60;
      puVar6[6] = local_58;
      puVar6[7] = uStack_50;
      *(uint *)(lVar12 + 0x18) = uVar10 + 1;
    } while ((uint)lVar15 < *(uint *)(plVar13 + 1));
  }
  if (**(char **)(this + 0x38) == '\0') {
    uVar10 = *(uint *)(this_00 + 0x18);
  }
  else {
    uVar10 = ((**(int **)(this + 0x40) + **(uint **)(this + 0x48)) - 1) / **(uint **)(this + 0x48);
  }
  lVar14 = *(long *)(this + 0x18);
  uVar3 = *(uint *)this;
  uVar5 = tree_vector_quant<basisu::vec<16u,float>>::generate(this_00,uVar10);
  uVar7 = (ulong)*(uint *)this;
  *(undefined1 *)(lVar14 + (ulong)uVar3) = uVar5;
  if (*(char *)(*(long *)(this + 0x18) + uVar7) != '\0') {
    lVar14 = *(long *)(this + 8);
    plVar13 = (long *)(uVar7 * 0x10 + lVar14);
    if (*(int *)(this_00 + 8) != 0) {
      lVar14 = 0;
      uVar10 = 0;
      do {
        while (lVar12 = *(long *)this_00, *(int *)(lVar12 + lVar14 + 0x50) < 0) {
          uVar3 = *(uint *)(plVar13 + 1);
          uVar7 = (ulong)uVar3;
          uVar11 = uVar3 + 1;
          if (uVar3 < 0xffffffff) {
            lVar8 = 0x10;
            if (*(uint *)((long)plVar13 + 0xc) < uVar11) {
              basisu::elemental_vector::increase_capacity
                        ((uint)plVar13,SUB41(uVar11,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                         false);
              uVar3 = *(uint *)(plVar13 + 1);
              lVar8 = (ulong)(uVar11 - uVar3) << 4;
            }
            lVar15 = *plVar13;
            puVar6 = (undefined8 *)((ulong)uVar3 * 0x10 + lVar15);
            puVar9 = (undefined8 *)(lVar8 + (long)puVar6);
            for (; puVar6 != puVar9; puVar6 = puVar6 + 2) {
              *puVar6 = 0;
              puVar6[1] = 0;
            }
          }
          else {
            puVar6 = (undefined8 *)*plVar13;
            puVar9 = puVar6 + 0x1fffffffe;
            do {
              if ((void *)*puVar6 != (void *)0x0) {
                free((void *)*puVar6);
              }
              puVar6 = puVar6 + 2;
            } while (puVar6 != puVar9);
            lVar15 = *plVar13;
          }
          *(uint *)(plVar13 + 1) = uVar11;
          uVar10 = uVar10 + 1;
          vector<unsigned_int>::operator=
                    ((vector<unsigned_int> *)(lVar15 + uVar7 * 0x10),
                     (vector *)(lVar12 + lVar14 + 0x58));
          lVar14 = lVar14 + 0x70;
          if (*(uint *)(this_00 + 8) <= uVar10) goto LAB_0011a6e8;
        }
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 0x70;
      } while (uVar10 < *(uint *)(this_00 + 8));
LAB_0011a6e8:
      lVar14 = *(long *)(this + 8);
      uVar7 = (ulong)*(uint *)this;
    }
    if (*(int *)(lVar14 + 8 + uVar7 * 0x10) != 0) {
      lVar12 = 0;
      do {
        lVar15 = 0;
        plVar13 = (long *)(*(long *)(lVar14 + uVar7 * 0x10) + lVar12 * 0x10);
        if ((int)plVar13[1] != 0) {
          do {
            puVar1 = (uint *)(*plVar13 + lVar15 * 4);
            lVar15 = lVar15 + 1;
            *puVar1 = *(uint *)((long)local_98 + (ulong)*puVar1 * 4);
            uVar7 = (ulong)*(uint *)this;
            plVar13 = (long *)(*(long *)(lVar14 + uVar7 * 0x10) + lVar12 * 0x10);
          } while ((uint)lVar15 < *(uint *)(plVar13 + 1));
        }
        lVar12 = lVar12 + 1;
      } while ((uint)lVar12 < *(uint *)(lVar14 + 8 + uVar7 * 0x10));
    }
    if (**(int **)(this + 0x50) != 0) {
      tree_vector_quant<basisu::vec<16u,float>>::retrieve
                (this_00,(**(int **)(this + 0x50) + -1 + **(uint **)(this + 0x48)) /
                         **(uint **)(this + 0x48),(vector *)(uVar7 * 0x10 + *(long *)(this + 0x10)))
      ;
      uVar7 = (ulong)*(uint *)this;
      lVar14 = *(long *)(this + 0x10);
      lVar12 = 0;
      if (*(int *)(lVar14 + 8 + uVar7 * 0x10) != 0) {
        do {
          lVar15 = 0;
          plVar13 = (long *)(*(long *)(lVar14 + uVar7 * 0x10) + lVar12 * 0x10);
          if ((int)plVar13[1] != 0) {
            do {
              puVar1 = (uint *)(*plVar13 + lVar15 * 4);
              lVar15 = lVar15 + 1;
              *puVar1 = *(uint *)((long)local_98 + (ulong)*puVar1 * 4);
              uVar7 = (ulong)*(uint *)this;
              plVar13 = (long *)(*(long *)(lVar14 + uVar7 * 0x10) + lVar12 * 0x10);
            } while ((uint)lVar15 < *(uint *)(plVar13 + 1));
          }
          lVar12 = lVar12 + 1;
        } while ((uint)lVar12 < *(uint *)(lVar14 + 8 + uVar7 * 0x10));
      }
    }
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (),
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,
   float> > >(basisu::tree_vector_quant<basisu::vec<16u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::
  generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<16u,float>>>(basisu::tree_vector_quant<basisu::vec<16u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
  ::{lambda()#1}::operator()(*(_lambda___1_ **)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::tree_vector_quant<basisu::vec<6u, float>
   >::prep_split(basisu::tree_vector_quant<basisu::vec<6u, float> >::tsvq_node const&,
   basisu::vec<6u, float>&, basisu::vec<6u, float>&) const */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::prep_split
          (tree_vector_quant<basisu::vec<6u,float>> *this,tsvq_node *param_1,vec *param_2,
          vec *param_3)

{
  tsvq_node *ptVar1;
  uint *puVar2;
  uint uVar3;
  unkuint9 Var4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  vec *pvVar18;
  uint *puVar19;
  long in_FS_OFFSET;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  void *local_138;
  ulong local_130;
  void *local_128;
  undefined8 local_120;
  float local_118;
  undefined4 auStack_114 [7];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_78 [8];
  float local_58 [2];
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  uVar3 = *(uint *)(param_1 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 == 2) {
    puVar2 = *(uint **)(param_1 + 0x30);
    lVar13 = *(long *)(this + 0x10);
    pvVar18 = (vec *)((ulong)*puVar2 * 0x20 + lVar13);
    if (pvVar18 != param_2) {
      memmove(param_2,pvVar18,0x18);
    }
    pvVar18 = (vec *)(lVar13 + (ulong)puVar2[1] * 0x20);
    if (pvVar18 != param_3) {
      memmove(param_3,pvVar18,0x18);
    }
  }
  else {
    compute_split_axis((tsvq_node *)&local_118);
    local_e8 = 0;
    local_c8 = 0;
    local_f8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    if (uVar3 == 0) {
      local_a8 = CONCAT44(_UNK_0011db6c,_LC93);
      local_b8 = CONCAT44(_LC93,_LC93);
      uStack_b0 = CONCAT44(_LC93,_LC93);
      local_88 = CONCAT44(_UNK_0011db74,_LC95);
      local_98 = CONCAT44(_LC95,_LC95);
      uStack_90 = CONCAT44(_LC95,_LC95);
    }
    else {
      puVar19 = *(uint **)(param_1 + 0x30);
      dVar26 = 0.0;
      lVar13 = *(long *)(this + 0x10);
      dVar27 = 0.0;
      puVar2 = puVar19 + uVar3;
      puVar16 = puVar19;
      do {
        lVar11 = (ulong)*puVar16 * 0x20 + lVar13;
        Var4 = (unkuint9)*(ulong *)(lVar11 + 0x18);
        fVar20 = (float)(unkint9)Var4;
        lVar9 = 0;
        do {
          *(ulong *)((long)local_58 + lVar9) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + lVar9) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + lVar9 + 0x10) >> 0x20),
                        (float)*(undefined8 *)(lVar11 + lVar9) -
                        (float)*(undefined8 *)(param_1 + lVar9 + 0x10));
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x18);
        lVar9 = 4;
        fVar23 = local_58[0] * local_118;
        do {
          ptVar1 = (tsvq_node *)&local_118 + lVar9;
          pfVar10 = (float *)((long)local_58 + lVar9);
          lVar9 = lVar9 + 4;
          fVar23 = fVar23 + *(float *)ptVar1 * *pfVar10;
        } while (lVar9 != 0x18);
        lVar9 = 0;
        if (fVar23 < 0.0) {
          lVar9 = 0;
          do {
            *(ulong *)((long)local_58 + lVar9) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + lVar9) >> 0x20) * fVar20,
                          (float)*(undefined8 *)(lVar11 + lVar9) * fVar20);
            lVar9 = lVar9 + 8;
            pfVar10 = local_58;
            puVar14 = (undefined8 *)local_f8;
          } while (lVar9 != 0x18);
          do {
            puVar12 = puVar14 + 1;
            *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) +
                                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20),
                                (float)*puVar14 + (float)*(undefined8 *)pfVar10);
            pfVar10 = pfVar10 + 2;
            puVar14 = puVar12;
          } while (puVar12 != &local_e0);
          dVar27 = dVar27 + (double)(unkint9)Var4;
        }
        else {
          do {
            *(ulong *)((long)local_58 + lVar9) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + lVar9) >> 0x20) * fVar20,
                          (float)*(undefined8 *)(lVar11 + lVar9) * fVar20);
            lVar9 = lVar9 + 8;
            pfVar10 = local_58;
            puVar14 = (undefined8 *)local_d8;
          } while (lVar9 != 0x18);
          do {
            puVar12 = puVar14 + 1;
            *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) +
                                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20),
                                (float)*puVar14 + (float)*(undefined8 *)pfVar10);
            pfVar10 = pfVar10 + 2;
            puVar14 = puVar12;
          } while (puVar12 != &local_c0);
          dVar26 = dVar26 + (double)(unkint9)Var4;
        }
        puVar16 = puVar16 + 1;
      } while (puVar2 != puVar16);
      if ((0.0 < dVar27) && (0.0 < dVar26)) {
        lVar13 = 0;
        do {
          *(ulong *)((long)local_58 + lVar13) =
               CONCAT44((float)((ulong)*(undefined8 *)(local_f8 + lVar13) >> 0x20) *
                        (float)(_LC63 / dVar27),
                        (float)*(undefined8 *)(local_f8 + lVar13) * (float)(_LC63 / dVar27));
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0x18);
        dVar26 = _LC63 / dVar26;
        *(undefined8 *)(param_2 + 0x10) = local_48;
        lVar13 = 0;
        *(ulong *)param_2 = CONCAT44(local_58[1],local_58[0]);
        *(undefined8 *)(param_2 + 8) = uStack_50;
        do {
          *(ulong *)((long)local_58 + lVar13) =
               CONCAT44((float)((ulong)*(undefined8 *)(local_d8 + lVar13) >> 0x20) * (float)dVar26,
                        (float)*(undefined8 *)(local_d8 + lVar13) * (float)dVar26);
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0x18);
        *(undefined8 *)(param_3 + 0x10) = local_48;
        *(ulong *)param_3 = CONCAT44(local_58[1],local_58[0]);
        *(undefined8 *)(param_3 + 8) = uStack_50;
        goto LAB_0011aafa;
      }
      local_a8 = CONCAT44(_UNK_0011db6c,_LC93);
      local_b8 = CONCAT44(_LC93,_LC93);
      uStack_b0 = CONCAT44(_LC93,_LC93);
      local_88 = CONCAT44(_UNK_0011db74,_LC95);
      local_98 = CONCAT44(_LC95,_LC95);
      uStack_90 = CONCAT44(_LC95,_LC95);
      do {
        lVar11 = 0;
        lVar9 = (ulong)*puVar19 * 0x20 + lVar13;
        do {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = *(ulong *)(lVar9 + lVar11);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulong *)((long)&local_b8 + lVar11);
          auVar21 = minps(auVar21,auVar24);
          *(long *)((long)local_58 + lVar11) = auVar21._0_8_;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0x18);
        local_b8 = CONCAT44(local_58[1],local_58[0]);
        local_a8 = local_48;
        lVar11 = 0;
        uStack_b0 = uStack_50;
        do {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = *(ulong *)(lVar9 + lVar11);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = *(ulong *)((long)&local_98 + lVar11);
          auVar21 = maxps(auVar22,auVar25);
          *(long *)((long)local_58 + lVar11) = auVar21._0_8_;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0x18);
        local_98 = CONCAT44(local_58[1],local_58[0]);
        puVar19 = puVar19 + 1;
        local_88 = local_48;
        uStack_90 = uStack_50;
      } while (puVar19 != puVar2);
    }
    lVar13 = 0;
    do {
      *(ulong *)((long)local_78 + lVar13) =
           CONCAT44((float)((ulong)*(undefined8 *)((long)&local_98 + lVar13) >> 0x20) -
                    (float)((ulong)*(undefined8 *)((long)&local_b8 + lVar13) >> 0x20),
                    (float)*(undefined8 *)((long)&local_98 + lVar13) -
                    (float)*(undefined8 *)((long)&local_b8 + lVar13));
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x18);
    uVar8 = 0;
    uVar15 = 0xffffffff;
    fVar20 = 0.0;
    do {
      if (fVar20 < local_78[uVar8]) {
        uVar15 = uVar8 & 0xffffffff;
        fVar20 = local_78[uVar8];
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 6);
    uVar7 = 0;
    if ((int)uVar15 < 0) goto LAB_0011aaff;
    local_138 = (void *)0x0;
    local_130 = 0;
    if (uVar3 == 0) {
LAB_0011b0c5:
      uVar8 = 0;
    }
    else {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_138,SUB41(uVar3,0),(uint)(uVar3 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      memset((void *)((long)local_138 + (local_130 & 0xffffffff) * 4),0,
             (ulong)(uVar3 - (int)local_130) << 2);
      uVar8 = (ulong)*(uint *)(param_1 + 0x38);
      local_130 = CONCAT44(local_130._4_4_,uVar3);
      if (*(uint *)(param_1 + 0x38) == 0) goto LAB_0011b0c5;
      lVar13 = *(long *)(param_1 + 0x30);
      lVar9 = *(long *)(this + 0x10);
      lVar11 = 0;
      do {
        *(undefined4 *)((long)local_138 + lVar11) =
             *(undefined4 *)((ulong)*(uint *)(lVar13 + lVar11) * 0x20 + lVar9 + uVar15 * 4);
        lVar11 = lVar11 + 4;
      } while (lVar11 != uVar8 * 4);
    }
    local_128 = (void *)0x0;
    local_120 = 0;
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_128,uVar8,false);
    pvVar6 = local_128;
    pvVar5 = local_138;
    uVar3 = *(uint *)(param_1 + 0x38);
    if (uVar3 == 0) {
LAB_0011b0ee:
      *(undefined8 *)(param_2 + 0x10) = local_a8;
      *(undefined8 *)param_2 = local_b8;
      *(undefined8 *)(param_2 + 8) = uStack_b0;
      *(undefined8 *)(param_3 + 0x10) = local_88;
      *(undefined8 *)param_3 = local_98;
      *(undefined8 *)(param_3 + 8) = uStack_90;
    }
    else {
      uVar8 = 0;
      do {
        *(int *)((long)local_128 + uVar8 * 4) = (int)uVar8;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar8 = (ulong)uVar3 * 4;
      puVar2 = (uint *)((long)local_128 + uVar8);
      lVar13 = 0x3f;
      if ((long)uVar8 >> 2 != 0) {
        for (; (ulong)((long)uVar8 >> 2) >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      std::
      __introsort_loop<unsigned_int*,long,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                (local_128,puVar2,(long)(int)lVar13 * 2);
      if (uVar8 < 0x41) {
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (pvVar6,puVar2,pvVar5);
      }
      else {
        puVar19 = (uint *)((long)pvVar6 + 0x40);
        std::
        __insertion_sort<unsigned_int*,__gnu_cxx::__ops::_Iter_comp_iter<basisu::indirect_sort<float>(unsigned_int,unsigned_int*,float_const*)::_lambda(unsigned_int,unsigned_int)_1_>>
                  (pvVar6,puVar19,pvVar5);
        for (; puVar2 != puVar19; puVar19 = puVar19 + 1) {
          uVar3 = *puVar19;
          uVar8 = (ulong)puVar19[-1];
          fVar20 = *(float *)((long)pvVar5 + (ulong)uVar3 * 4);
          fVar23 = *(float *)((long)pvVar5 + uVar8 * 4);
          puVar16 = puVar19;
          while (fVar20 < fVar23) {
            *puVar16 = (uint)uVar8;
            uVar8 = (ulong)puVar16[-2];
            puVar16 = puVar16 + -1;
            fVar23 = *(float *)((long)pvVar5 + uVar8 * 4);
          }
          *puVar16 = uVar3;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x38);
      local_e8 = 0;
      local_f8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = 0;
      if (uVar3 == 0) goto LAB_0011b0ee;
      dVar26 = 0.0;
      lVar13 = *(long *)(param_1 + 0x30);
      lVar9 = *(long *)(this + 0x10);
      uVar8 = 0;
      dVar27 = 0.0;
      do {
        lVar17 = (ulong)*(uint *)(lVar13 + uVar8 * 4) * 0x20 + lVar9;
        Var4 = (unkuint9)*(ulong *)(lVar17 + 0x18);
        fVar20 = (float)(unkint9)Var4;
        lVar11 = 0;
        if ((uint)uVar8 < uVar3 >> 1) {
          do {
            *(ulong *)((long)local_58 + lVar11) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + lVar11) >> 0x20) * fVar20,
                          (float)*(undefined8 *)(lVar17 + lVar11) * fVar20);
            lVar11 = lVar11 + 8;
            puVar14 = (undefined8 *)local_f8;
            pfVar10 = local_58;
          } while (lVar11 != 0x18);
          do {
            puVar12 = puVar14 + 1;
            *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) +
                                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20),
                                (float)*puVar14 + (float)*(undefined8 *)pfVar10);
            puVar14 = puVar12;
            pfVar10 = pfVar10 + 2;
          } while (puVar12 != &local_e0);
          dVar27 = dVar27 + (double)(unkint9)Var4;
        }
        else {
          do {
            *(ulong *)((long)local_58 + lVar11) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + lVar11) >> 0x20) * fVar20,
                          (float)*(undefined8 *)(lVar17 + lVar11) * fVar20);
            lVar11 = lVar11 + 8;
            puVar14 = (undefined8 *)local_d8;
            pfVar10 = local_58;
          } while (lVar11 != 0x18);
          do {
            puVar12 = puVar14 + 1;
            *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) +
                                (float)((ulong)*(undefined8 *)pfVar10 >> 0x20),
                                (float)*puVar14 + (float)*(undefined8 *)pfVar10);
            puVar14 = puVar12;
            pfVar10 = pfVar10 + 2;
          } while (puVar12 != &local_c0);
          dVar26 = dVar26 + (double)(unkint9)Var4;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      if ((dVar27 <= 0.0) || (dVar26 <= 0.0)) goto LAB_0011b0ee;
      lVar13 = 0;
      do {
        *(ulong *)((long)local_58 + lVar13) =
             CONCAT44((float)((ulong)*(undefined8 *)(local_f8 + lVar13) >> 0x20) *
                      (float)(_LC63 / dVar27),
                      (float)*(undefined8 *)(local_f8 + lVar13) * (float)(_LC63 / dVar27));
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0x18);
      dVar26 = _LC63 / dVar26;
      *(undefined8 *)(param_2 + 0x10) = local_48;
      lVar13 = 0;
      *(ulong *)param_2 = CONCAT44(local_58[1],local_58[0]);
      *(undefined8 *)(param_2 + 8) = uStack_50;
      do {
        *(ulong *)((long)local_58 + lVar13) =
             CONCAT44((float)((ulong)*(undefined8 *)(local_d8 + lVar13) >> 0x20) * (float)dVar26,
                      (float)*(undefined8 *)(local_d8 + lVar13) * (float)dVar26);
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0x18);
      *(undefined8 *)(param_3 + 0x10) = local_48;
      *(ulong *)param_3 = CONCAT44(local_58[1],local_58[0]);
      *(undefined8 *)(param_3 + 8) = uStack_50;
    }
    if (local_128 != (void *)0x0) {
      free(local_128);
    }
    if (local_138 != (void *)0x0) {
      free(local_138);
    }
  }
LAB_0011aafa:
  uVar7 = 1;
LAB_0011aaff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::tree_vector_quant<basisu::vec<6u, float> >::split_node(unsigned int,
   basisu::priority_queue&, basisu::vector<unsigned int>&, basisu::vector<unsigned int>&) */

undefined4 __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::split_node
          (tree_vector_quant<basisu::vec<6u,float>> *this,uint param_1,priority_queue *param_2,
          vector *param_3,vector *param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  float local_b0;
  float local_ac;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  lVar18 = (ulong)param_1 * 0x48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0.0;
  local_a8 = 0;
  local_a0 = 0;
  local_ac = 0.0;
  cVar9 = prep_split(this,(tsvq_node *)(*(long *)this + lVar18),(vec *)&local_98,(vec *)&local_78);
  if ((cVar9 == '\0') ||
     (uVar10 = refine_split(this,(tsvq_node *)(*(long *)this + lVar18),(vec *)&local_98,&local_a8,
                            &local_b0,param_3,(vec *)&local_78,&local_a0,&local_ac,param_4),
     (char)uVar10 == '\0')) {
    uVar10 = 0;
    goto LAB_0011b234;
  }
  uVar5 = *(uint *)(this + 8);
  lVar13 = *(long *)this;
  uVar1 = uVar5 + 1;
  *(ulong *)(lVar18 + lVar13 + 0x28) = CONCAT44(uVar1,uVar5);
  iVar6 = *(int *)(this + 0x20);
  *(int *)(lVar18 + lVar13 + 0x40) = iVar6;
  *(int *)(this + 0x20) = iVar6 + 1;
  uVar17 = uVar5 + 2;
  if (uVar5 < 0xfffffffe) {
    lVar18 = 0x90;
    uVar15 = uVar5;
    if (*(uint *)(this + 0xc) < uVar17) {
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar17,0),0,(_func_void_void_ptr_void_ptr_uint *)0x48,true);
      uVar15 = *(uint *)(this + 8);
      lVar13 = *(long *)this;
      lVar18 = (ulong)(uVar17 - uVar15) * 0x48;
    }
    uVar7 = _LC50;
    lVar11 = lVar13 + (ulong)uVar15 * 0x48;
    lVar18 = lVar18 + lVar11;
    for (; lVar11 != lVar18; lVar11 = lVar11 + 0x48) {
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined1 (*) [16])(lVar11 + 0x10) = (undefined1  [16])0x0;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x28) = uVar7;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined4 *)(lVar11 + 0x40) = 0xffffffff;
    }
  }
  else {
    lVar13 = (ulong)(-uVar17 & 0x48) + lVar13;
    lVar18 = lVar13 + 0x47ffffff70;
    do {
      if (*(void **)(lVar13 + 0x30) != (void *)0x0) {
        free(*(void **)(lVar13 + 0x30));
      }
      lVar13 = lVar13 + 0x48;
    } while (lVar13 != lVar18);
    lVar13 = *(long *)this;
  }
  *(uint *)(this + 8) = uVar17;
  pfVar2 = (float *)(lVar13 + (ulong)uVar5 * 0x48);
  *(undefined8 *)(pfVar2 + 4) = local_98;
  *(undefined8 *)(pfVar2 + 6) = uStack_90;
  pfVar3 = (float *)(lVar13 + (ulong)uVar1 * 0x48);
  *pfVar2 = local_b0;
  *(undefined8 *)(pfVar2 + 8) = local_88;
  uVar7 = *(undefined8 *)param_3;
  *(ulong *)(pfVar2 + 2) = local_a8;
  uVar8 = *(undefined8 *)(pfVar2 + 0xc);
  *(undefined8 *)(pfVar2 + 0xc) = uVar7;
  *(undefined8 *)param_3 = uVar8;
  fVar21 = pfVar2[0xe];
  pfVar2[0xe] = *(float *)(param_3 + 8);
  *(float *)(param_3 + 8) = fVar21;
  fVar21 = pfVar2[0xf];
  pfVar2[0xf] = *(float *)(param_3 + 0xc);
  *(float *)(param_3 + 0xc) = fVar21;
  *(undefined8 *)(pfVar3 + 4) = local_78;
  *(undefined8 *)(pfVar3 + 6) = uStack_70;
  *pfVar3 = local_ac;
  *(undefined8 *)(pfVar3 + 8) = local_68;
  uVar7 = *(undefined8 *)param_4;
  *(ulong *)(pfVar3 + 2) = local_a0;
  uVar8 = *(undefined8 *)(pfVar3 + 0xc);
  *(undefined8 *)(pfVar3 + 0xc) = uVar7;
  *(undefined8 *)param_4 = uVar8;
  fVar20 = pfVar3[0xe];
  fVar21 = *pfVar2;
  pfVar3[0xe] = *(float *)(param_4 + 8);
  *(float *)(param_4 + 8) = fVar20;
  fVar20 = pfVar3[0xf];
  pfVar3[0xf] = *(float *)(param_4 + 0xc);
  *(float *)(param_4 + 0xc) = fVar20;
  fVar20 = local_ac;
  if (fVar21 <= 0.0) {
    if (1 < (uint)pfVar2[0xe]) {
      puVar4 = *(uint **)(pfVar2 + 0xc);
      puVar14 = puVar4 + 1;
      puVar12 = (undefined8 *)((ulong)*puVar4 * 0x20 + *(long *)(this + 0x10));
      local_48 = puVar12[2];
      local_58 = *puVar12;
      uStack_50 = puVar12[1];
      do {
        lVar18 = 0;
        do {
          if (*(float *)((long)&local_58 + lVar18) !=
              *(float *)((ulong)*puVar14 * 0x20 + *(long *)(this + 0x10) + lVar18)) {
            *pfVar2 = 0.0001;
            fVar20 = *pfVar3;
            goto LAB_0011b407;
          }
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0x18);
        puVar14 = puVar14 + 1;
      } while (puVar4 + (ulong)((int)pfVar2[0xe] - 2) + 2 != puVar14);
      goto LAB_0011b407;
    }
    fVar21 = local_ac;
    if (local_ac <= 0.0) goto LAB_0011b4c0;
  }
  else {
LAB_0011b407:
    if (fVar20 <= 0.0) {
LAB_0011b4c0:
      if (1 < (uint)pfVar3[0xe]) {
        puVar4 = *(uint **)(pfVar3 + 0xc);
        puVar14 = puVar4 + 1;
        puVar12 = (undefined8 *)((ulong)*puVar4 * 0x20 + *(long *)(this + 0x10));
        local_48 = puVar12[2];
        local_58 = *puVar12;
        uStack_50 = puVar12[1];
        do {
          lVar18 = 0;
          do {
            if (*(float *)((long)&local_58 + lVar18) !=
                *(float *)((ulong)*puVar14 * 0x20 + *(long *)(this + 0x10) + lVar18)) {
              *pfVar3 = 0.0001;
              goto LAB_0011b414;
            }
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0x18);
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar4 + (ulong)((int)pfVar3[0xe] - 2) + 2);
        goto LAB_0011b414;
      }
      fVar21 = *pfVar2;
      if (fVar21 <= 0.0) goto LAB_0011b234;
LAB_0011b421:
      if (1 < (uint)pfVar2[0xe]) {
        iVar6 = *(int *)(param_2 + 0x10);
        uVar15 = iVar6 + 1;
        uVar16 = (ulong)uVar15;
        *(uint *)(param_2 + 0x10) = uVar15;
        uVar17 = *(uint *)(param_2 + 8);
        if ((uVar17 <= uVar15) && (uVar19 = iVar6 + 2, uVar17 != uVar19)) {
          if ((uVar17 <= uVar19) && (*(uint *)(param_2 + 0xc) < uVar19)) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_2,SUB41(uVar19,0),(uint)(uVar17 + 1 == uVar19),
                       (_func_void_void_ptr_void_ptr_uint *)0x8,false);
          }
          *(uint *)(param_2 + 8) = uVar19;
        }
        lVar18 = *(long *)param_2;
        puVar14 = (uint *)(lVar18 + uVar16 * 8);
        while (uVar15 = uVar15 >> 1, uVar15 != 0) {
          puVar14 = (uint *)(lVar18 + uVar16 * 8);
          puVar4 = (uint *)(lVar18 + (ulong)uVar15 * 8);
          if (fVar21 < (float)puVar4[1]) break;
          uVar16 = (ulong)uVar15;
          *(undefined8 *)puVar14 = *(undefined8 *)puVar4;
          puVar14 = puVar4;
        }
        puVar14[1] = (uint)fVar21;
        fVar21 = *pfVar3;
        *puVar14 = uVar5;
        goto LAB_0011b430;
      }
    }
    else {
LAB_0011b414:
      fVar21 = *pfVar2;
      if (0.0 < fVar21) goto LAB_0011b421;
    }
    fVar21 = *pfVar3;
  }
LAB_0011b430:
  if ((0.0 < fVar21) && (1 < (uint)pfVar3[0xe])) {
    iVar6 = *(int *)(param_2 + 0x10);
    uVar17 = *(uint *)(param_2 + 8);
    uVar5 = iVar6 + 1;
    uVar16 = (ulong)uVar5;
    *(uint *)(param_2 + 0x10) = uVar5;
    if ((uVar17 <= uVar5) && (uVar15 = iVar6 + 2, uVar17 != uVar15)) {
      if ((uVar17 <= uVar15) && (*(uint *)(param_2 + 0xc) < uVar15)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)param_2,SUB41(uVar15,0),(uint)(uVar17 + 1 == uVar15),
                   (_func_void_void_ptr_void_ptr_uint *)0x8,false);
      }
      *(uint *)(param_2 + 8) = uVar15;
    }
    lVar18 = *(long *)param_2;
    puVar14 = (uint *)(lVar18 + uVar16 * 8);
    while (uVar5 = uVar5 >> 1, uVar5 != 0) {
      puVar14 = (uint *)(lVar18 + uVar16 * 8);
      puVar4 = (uint *)(lVar18 + (ulong)uVar5 * 8);
      if (fVar21 < (float)puVar4[1]) break;
      uVar16 = (ulong)uVar5;
      *(undefined8 *)puVar14 = *(undefined8 *)puVar4;
      puVar14 = puVar4;
    }
    *puVar14 = uVar1;
    puVar14[1] = (uint)fVar21;
  }
LAB_0011b234:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Removing unreachable block (ram,0x0011b8b8) */
/* WARNING: Removing unreachable block (ram,0x0011b8c8) */
/* WARNING: Removing unreachable block (ram,0x0011b8de) */
/* WARNING: Removing unreachable block (ram,0x0011b8f0) */
/* WARNING: Removing unreachable block (ram,0x0011b918) */
/* basisu::tree_vector_quant<basisu::vec<6u, float> >::generate(unsigned int) */

undefined8 __thiscall
basisu::tree_vector_quant<basisu::vec<6u,float>>::generate
          (tree_vector_quant<basisu::vec<6u,float>> *this,uint param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined8 local_60;
  void *local_58;
  uint local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar13 = 0;
  if (*(int *)(this + 0x18) == 0) goto LAB_0011b82f;
  uVar16 = *(uint *)(this + 8);
  *(undefined4 *)(this + 0x20) = 0;
  lVar4 = (ulong)uVar16 * 0x48;
  if (lVar4 != 0) {
    lVar17 = *(long *)this;
    lVar4 = lVar17 + lVar4;
    for (; lVar17 != lVar4; lVar17 = lVar17 + 0x48) {
      if (*(void **)(lVar17 + 0x30) != (void *)0x0) {
        free(*(void **)(lVar17 + 0x30));
      }
    }
    *(uint *)(this + 8) = *(int *)(this + 8) - uVar16;
  }
  vector<basisu::tree_vector_quant<basisu::vec<6u,float>>::tsvq_node>::reserve
            ((vector<basisu::tree_vector_quant<basisu::vec<6u,float>>::tsvq_node> *)this,
             (ulong)(param_1 * 2 + 1));
  prepare_root();
  uVar16 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar16) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar16 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x48,
               true);
    uVar16 = *(uint *)(this + 8);
  }
  puVar1 = (undefined4 *)(*(long *)this + (ulong)uVar16 * 0x48);
  *puVar1 = local_88;
  *(undefined8 *)(puVar1 + 2) = local_80;
  memmove(puVar1 + 4,local_78,0x18);
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 10) = local_60;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  basisu::elemental_vector::increase_capacity
            ((int)puVar1 + 0x30,SUB41(local_50,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  puVar1[0xe] = local_50;
  if (*(void **)(puVar1 + 0xc) == (void *)0x0) {
LAB_0011ba11:
    puVar1[0x10] = local_48;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    if (local_58 != (void *)0x0) {
      free(local_58);
    }
  }
  else {
    if (local_58 != (void *)0x0) {
      memcpy(*(void **)(puVar1 + 0xc),local_58,(ulong)local_50 * 4);
      goto LAB_0011ba11;
    }
    puVar1[0x10] = local_48;
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  local_a8 = (void *)0x0;
  local_a0 = 0;
  uVar5 = **(undefined4 **)this;
  local_98 = 0;
  iVar15 = param_1 + 1;
  if (iVar15 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_a8,SUB41(iVar15,0),(uint)(param_1 == 0),
               (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    local_a0 = CONCAT44(local_a0._4_4_,iVar15);
  }
  *(undefined4 *)((long)local_a8 + 0xc) = uVar5;
  *(undefined4 *)((long)local_a8 + 8) = 0;
  local_98 = 1;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  vector<unsigned_int>::reserve
            ((vector<unsigned_int> *)&local_c8,(ulong)(*(int *)(this + 0x18) + 1));
  vector<unsigned_int>::reserve
            ((vector<unsigned_int> *)&local_b8,(ulong)(*(int *)(this + 0x18) + 1));
  for (uVar16 = 1; (local_98 != 0 && (uVar16 < param_1));
      uVar16 = (uVar16 + 1) - (uint)(cVar11 == '\0')) {
    do {
      while( true ) {
        uVar9 = *(uint *)((long)local_a8 + 8);
        lVar4 = *(long *)this + (ulong)uVar9 * 0x48;
        uVar12 = (ulong)local_98;
        local_98 = local_98 - 1;
        *(undefined8 *)((long)local_a8 + 8) = *(undefined8 *)((long)local_a8 + uVar12 * 8);
        if (local_98 == 0) {
          if (*(uint *)(lVar4 + 0x38) < 2) goto LAB_0011bb38;
          goto LAB_0011bbf0;
        }
        fVar6 = *(float *)((long)local_a8 + 0xc);
        uVar13 = *(undefined8 *)((long)local_a8 + 8);
        if (local_98 != 1) break;
        *(undefined8 *)((long)local_a8 + 8) = uVar13;
        if (1 < *(uint *)(lVar4 + 0x38)) goto LAB_0011bbf0;
      }
      uVar14 = 2;
      uVar12 = 1;
      do {
        puVar2 = (undefined8 *)((long)local_a8 + uVar14 * 8);
        fVar7 = *(float *)((long)puVar2 + 4);
        if ((uint)uVar14 < local_98) {
          uVar18 = (ulong)((uint)uVar14 + 1);
          puVar3 = (undefined8 *)((long)local_a8 + uVar18 * 8);
          fVar8 = *(float *)((long)puVar3 + 4);
          if (fVar8 <= fVar7) goto LAB_0011bb92;
        }
        else {
LAB_0011bb92:
          puVar3 = puVar2;
          uVar18 = uVar14;
          fVar8 = fVar7;
        }
        puVar2 = (undefined8 *)((long)local_a8 + uVar12 * 8);
        if (fVar8 < fVar6) {
          *puVar2 = uVar13;
          uVar10 = *(uint *)(lVar4 + 0x38);
          goto joined_r0x0011bbea;
        }
        *puVar2 = *puVar3;
        uVar10 = (int)uVar18 * 2;
        uVar14 = (ulong)uVar10;
        uVar12 = uVar18;
      } while (uVar10 <= local_98);
      *puVar3 = uVar13;
      uVar10 = *(uint *)(lVar4 + 0x38);
joined_r0x0011bbea:
    } while (uVar10 < 2);
LAB_0011bbf0:
    cVar11 = split_node(this,uVar9,(priority_queue *)&local_a8,(vector *)&local_c8,
                        (vector *)&local_b8);
  }
LAB_0011bb38:
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  uVar13 = 1;
LAB_0011b82f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* bool 
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,
   float> > >(basisu::tree_vector_quant<basisu::vec<6u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*) */

bool basisu::
     generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>
               (tree_vector_quant *param_1,uint param_2,uint param_3,vector *param_4,vector *param_5
               ,uint param_6,bool param_7,job_pool *param_8)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  void *__ptr;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined1 local_518 [3];
  char local_515;
  uint local_514;
  uint local_510;
  uint local_50c;
  undefined8 *local_508;
  ulong local_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  code *local_4d8;
  code *pcStack_4d0;
  long local_4c8;
  uint local_4c0 [58];
  long local_3d8;
  uint local_3d0 [2];
  long local_3c8;
  uint local_3c0 [58];
  long local_2d8;
  uint local_2d0 [2];
  long local_2c8 [75];
  long local_70 [5];
  long local_48;
  long local_40;
  
  local_518[0] = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_514 = param_6;
  local_510 = param_3;
  local_50c = param_2;
  if (*(uint *)(param_4 + 8) != 0) {
    puVar11 = *(undefined8 **)param_4;
    puVar9 = puVar11 + (ulong)*(uint *)(param_4 + 8) * 2;
    do {
      if ((void *)*puVar11 != (void *)0x0) {
        free((void *)*puVar11);
      }
      puVar11 = puVar11 + 2;
    } while (puVar9 != puVar11);
    *(undefined4 *)(param_4 + 8) = 0;
  }
  if (*(uint *)(param_5 + 8) != 0) {
    puVar11 = *(undefined8 **)param_5;
    puVar9 = puVar11 + (ulong)*(uint *)(param_5 + 8) * 2;
    do {
      if ((void *)*puVar11 != (void *)0x0) {
        free((void *)*puVar11);
      }
      puVar11 = puVar11 + 2;
    } while (puVar9 != puVar11);
    *(undefined4 *)(param_5 + 8) = 0;
  }
  if (((local_514 < 2) || (*(uint *)(param_1 + 0x18) < 0x100)) || (local_50c < local_514 << 4)) {
    cVar6 = tree_vector_quant<basisu::vec<6u,float>>::generate
                      ((tree_vector_quant<basisu::vec<6u,float>> *)param_1,local_50c);
    if (cVar6 != '\0') {
      lVar15 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          lVar12 = *(long *)param_1 + lVar15 * 0x48;
          if (*(int *)(lVar12 + 0x28) < 0) {
            vector<basisu::vector<unsigned_int>>::resize
                      ((vector<basisu::vector<unsigned_int>> *)param_4,
                       (ulong)(*(int *)(param_4 + 8) + 1),false);
            vector<unsigned_int>::operator=
                      ((vector<unsigned_int> *)
                       ((ulong)(*(int *)(param_4 + 8) - 1) * 0x10 + *(long *)param_4),
                       (vector *)(lVar12 + 0x30));
          }
          lVar15 = lVar15 + 1;
        } while ((uint)lVar15 < *(uint *)(param_1 + 8));
      }
      if (local_510 != 0) {
        tree_vector_quant<basisu::vec<6u,float>>::retrieve
                  ((tree_vector_quant<basisu::vec<6u,float>> *)param_1,local_510,param_5);
      }
      goto LAB_0011bd86;
    }
  }
  else {
    if (0x10 < local_514) {
      local_514 = 0x10;
    }
    local_515 = tree_vector_quant<basisu::vec<6u,float>>::generate
                          ((tree_vector_quant<basisu::vec<6u,float>> *)param_1,local_514);
    if (local_515 != '\0') {
      local_508 = (undefined8 *)0x0;
      local_500 = 0;
      tree_vector_quant<basisu::vec<6u,float>>::retrieve
                ((tree_vector_quant<basisu::vec<6u,float>> *)param_1,(vector *)&local_508);
      if ((uint)local_500 < local_514) {
        vector<basisu::vector<unsigned_int>>::operator=
                  ((vector<basisu::vector<unsigned_int>> *)param_4,(vector *)&local_508);
        cVar6 = local_515;
        if (local_510 != 0) {
          tree_vector_quant<basisu::vec<6u,float>>::retrieve
                    ((tree_vector_quant<basisu::vec<6u,float>> *)param_1,local_510,param_5);
          cVar6 = local_515;
        }
      }
      else {
        plVar7 = local_2c8;
        do {
          *plVar7 = 0;
          plVar17 = plVar7 + 5;
          plVar7[1] = 0;
          plVar7[2] = 0;
          plVar7[3] = 0;
          *(undefined4 *)(plVar7 + 4) = 0;
          plVar7 = plVar17;
        } while (plVar17 != &local_48);
        local_4f8 = (undefined1  [16])0x0;
        plVar7 = &local_4c8;
        do {
          *plVar7 = 0;
          plVar16 = plVar7 + 8;
          plVar7[2] = 0;
          plVar7[4] = 0;
          plVar7[6] = 0;
          plVar7[1] = 0;
          plVar7[3] = 0;
          plVar7[5] = 0;
          plVar7[7] = 0;
          plVar17 = &local_3c8;
          plVar7 = plVar16;
        } while (plVar16 != &local_3c8);
        do {
          *plVar17 = 0;
          plVar7 = plVar17 + 8;
          plVar17[2] = 0;
          plVar17[4] = 0;
          plVar17[6] = 0;
          plVar17[1] = 0;
          plVar17[3] = 0;
          plVar17[5] = 0;
          plVar17[7] = 0;
          plVar17 = plVar7;
        } while (plVar7 != local_2c8);
        if (local_514 != 0) {
          uVar13 = 0;
          do {
            local_4d8 = (code *)0x0;
            local_4e8 = (undefined1  [16])0x0;
            pcStack_4d0 = (code *)0x0;
            puVar8 = (uint *)operator_new(0x58);
            *puVar8 = uVar13;
            *(uint **)(puVar8 + 0x10) = &local_50c;
            *(vector **)(puVar8 + 10) = (vector *)&local_508;
            *(uint **)(puVar8 + 0x12) = &local_514;
            *(tree_vector_quant **)(puVar8 + 0xc) = param_1;
            *(uint **)(puVar8 + 0x14) = &local_510;
            *(undefined1 **)(puVar8 + 0xe) = local_518;
            *(long **)(puVar8 + 2) = &local_4c8;
            *(long **)(puVar8 + 4) = &local_3c8;
            *(undefined1 **)(puVar8 + 6) = local_4f8;
            *(long **)(puVar8 + 8) = local_2c8;
            local_4e8._0_8_ = puVar8;
            local_4d8 = std::
                        _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
                        ::_M_manager;
            pcStack_4d0 = std::
                          _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
                          ::_M_invoke;
            basisu::job_pool::add_job((function *)param_8);
            if (local_4d8 != (code *)0x0) {
              (*local_4d8)(local_4e8,local_4e8,3);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < local_514);
        }
        basisu::job_pool::wait_for_all();
        if ((int)local_514 < 1) {
          uVar14 = 0;
          uVar18 = 0;
        }
        else {
          pcVar19 = local_4f8;
          uVar14 = 0;
          uVar18 = 0;
          lVar15 = 8;
          do {
            cVar6 = *pcVar19;
            if (*pcVar19 == '\0') goto LAB_0011c100;
            uVar18 = (ulong)(uint)((int)uVar18 + *(int *)((long)&local_4c8 + lVar15));
            uVar14 = (ulong)(uint)((int)uVar14 + *(int *)((long)&local_3c8 + lVar15));
            lVar15 = lVar15 + 0x10;
            pcVar19 = pcVar19 + 1;
          } while (lVar15 != (ulong)(local_514 - 1) * 0x10 + 0x18);
        }
        puVar8 = local_3c0;
        vector<basisu::vector<unsigned_int>>::reserve
                  ((vector<basisu::vector<unsigned_int>> *)param_4,uVar18);
        vector<basisu::vector<unsigned_int>>::reserve
                  ((vector<basisu::vector<unsigned_int>> *)param_5,uVar14);
        puVar22 = local_4c0;
        cVar6 = local_515;
        if (local_514 != 0) {
          uVar13 = 0;
          do {
            lVar15 = 0;
            if (*puVar22 != 0) {
              do {
                uVar2 = *(uint *)(param_4 + 8);
                uVar21 = uVar2 + 1;
                if (uVar2 < 0xffffffff) {
                  lVar10 = 0x10;
                  uVar3 = uVar2;
                  if (*(uint *)(param_4 + 0xc) < uVar21) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)param_4,SUB41(uVar21,0),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                    uVar3 = *(uint *)(param_4 + 8);
                    lVar10 = (ulong)(uVar21 - uVar3) << 4;
                  }
                  lVar12 = *(long *)param_4;
                  puVar9 = (undefined8 *)((ulong)uVar3 * 0x10 + lVar12);
                  puVar11 = (undefined8 *)(lVar10 + (long)puVar9);
                  for (; puVar9 != puVar11; puVar9 = puVar9 + 2) {
                    *puVar9 = 0;
                    puVar9[1] = 0;
                  }
                }
                else {
                  puVar9 = *(undefined8 **)param_4;
                  puVar11 = puVar9 + 0x1fffffffe;
                  do {
                    if ((void *)*puVar9 != (void *)0x0) {
                      free((void *)*puVar9);
                    }
                    puVar9 = puVar9 + 2;
                  } while (puVar11 != puVar9);
                  lVar12 = *(long *)param_4;
                }
                *(uint *)(param_4 + 8) = uVar21;
                lVar10 = lVar15 + 1;
                puVar11 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar12);
                puVar9 = (undefined8 *)(lVar15 * 0x10 + *(long *)(puVar22 + -2));
                uVar5 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar5;
                uVar4 = *(undefined4 *)(puVar11 + 1);
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
                *(undefined4 *)(puVar9 + 1) = uVar4;
                uVar4 = *(undefined4 *)((long)puVar11 + 0xc);
                *(undefined4 *)((long)puVar11 + 0xc) = *(undefined4 *)((long)puVar9 + 0xc);
                *(undefined4 *)((long)puVar9 + 0xc) = uVar4;
                lVar15 = lVar10;
              } while ((uint)lVar10 < *puVar22);
            }
            lVar15 = 0;
            if (*puVar8 != 0) {
              do {
                uVar2 = *(uint *)(param_5 + 8);
                uVar21 = uVar2 + 1;
                if (uVar2 < 0xffffffff) {
                  lVar10 = 0x10;
                  uVar3 = uVar2;
                  if (*(uint *)(param_5 + 0xc) < uVar21) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)param_5,SUB41(uVar21,0),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                    uVar3 = *(uint *)(param_5 + 8);
                    lVar10 = (ulong)(uVar21 - uVar3) << 4;
                  }
                  lVar12 = *(long *)param_5;
                  puVar9 = (undefined8 *)((ulong)uVar3 * 0x10 + lVar12);
                  puVar11 = (undefined8 *)(lVar10 + (long)puVar9);
                  for (; puVar9 != puVar11; puVar9 = puVar9 + 2) {
                    *puVar9 = 0;
                    puVar9[1] = 0;
                  }
                }
                else {
                  puVar9 = *(undefined8 **)param_5;
                  puVar11 = puVar9 + 0x1fffffffe;
                  do {
                    if ((void *)*puVar9 != (void *)0x0) {
                      free((void *)*puVar9);
                    }
                    puVar9 = puVar9 + 2;
                  } while (puVar11 != puVar9);
                  lVar12 = *(long *)param_5;
                }
                *(uint *)(param_5 + 8) = uVar21;
                lVar10 = lVar15 + 1;
                puVar11 = (undefined8 *)((ulong)uVar2 * 0x10 + lVar12);
                puVar9 = (undefined8 *)(lVar15 * 0x10 + *(long *)(puVar8 + -2));
                uVar5 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar5;
                uVar4 = *(undefined4 *)(puVar11 + 1);
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
                *(undefined4 *)(puVar9 + 1) = uVar4;
                uVar4 = *(undefined4 *)((long)puVar11 + 0xc);
                *(undefined4 *)((long)puVar11 + 0xc) = *(undefined4 *)((long)puVar9 + 0xc);
                *(undefined4 *)((long)puVar9 + 0xc) = uVar4;
                lVar15 = lVar10;
              } while ((uint)lVar10 < *puVar8);
            }
            uVar13 = uVar13 + 1;
            puVar22 = puVar22 + 4;
            puVar8 = puVar8 + 4;
            cVar6 = local_515;
          } while (uVar13 < local_514);
        }
LAB_0011c100:
        plVar7 = &local_2d8;
        do {
          puVar9 = (undefined8 *)*plVar7;
          if (puVar9 != (undefined8 *)0x0) {
            puVar11 = puVar9 + (ulong)*(uint *)(plVar7 + 1) * 2;
            if (puVar9 != puVar11) {
              do {
                if ((void *)*puVar9 != (void *)0x0) {
                  free((void *)*puVar9);
                }
                puVar9 = puVar9 + 2;
              } while (puVar11 != puVar9);
              puVar9 = (undefined8 *)*plVar7;
            }
            free(puVar9);
          }
          bVar23 = plVar7 != &local_3c8;
          plVar7 = plVar7 + -2;
        } while (bVar23);
        plVar7 = &local_3d8;
        do {
          puVar9 = (undefined8 *)*plVar7;
          if (puVar9 != (undefined8 *)0x0) {
            puVar11 = puVar9 + (ulong)*(uint *)(plVar7 + 1) * 2;
            if (puVar9 != puVar11) {
              do {
                if ((void *)*puVar9 != (void *)0x0) {
                  free((void *)*puVar9);
                }
                puVar9 = puVar9 + 2;
              } while (puVar11 != puVar9);
              puVar9 = (undefined8 *)*plVar7;
            }
            free(puVar9);
          }
          bVar23 = plVar7 != &local_4c8;
          plVar7 = plVar7 + -2;
        } while (bVar23);
        plVar7 = local_70;
        do {
          if ((void *)plVar7[2] != (void *)0x0) {
            free((void *)plVar7[2]);
          }
          __ptr = (void *)*plVar7;
          if (__ptr != (void *)0x0) {
            pvVar1 = (void *)((long)__ptr + (ulong)*(uint *)(plVar7 + 1) * 0x48);
            if (__ptr != pvVar1) {
              do {
                if (*(void **)((long)__ptr + 0x30) != (void *)0x0) {
                  free(*(void **)((long)__ptr + 0x30));
                }
                __ptr = (void *)((long)__ptr + 0x48);
              } while (pvVar1 != __ptr);
              __ptr = (void *)*plVar7;
            }
            free(__ptr);
          }
          bVar23 = plVar7 != local_2c8;
          plVar7 = plVar7 + -5;
        } while (bVar23);
      }
      if (local_508 != (undefined8 *)0x0) {
        puVar20 = local_508 + (local_500 & 0xffffffff) * 2;
        puVar9 = puVar20;
        for (puVar11 = local_508; puVar11 != puVar20; puVar11 = puVar11 + 2) {
          if ((void *)*puVar11 != (void *)0x0) {
            free((void *)*puVar11);
          }
          puVar9 = local_508;
        }
        free(puVar9);
      }
      goto LAB_0011bd86;
    }
  }
  cVar6 = '\0';
LAB_0011bd86:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bool)cVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool basisu::generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<6u,
   float> > >(basisu::tree_vector_quant<basisu::vec<6u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, basisu::job_pool*, bool) */

bool basisu::
     generate_hierarchical_codebook_threaded<basisu::tree_vector_quant<basisu::vec<6u,float>>>
               (tree_vector_quant *param_1,uint param_2,uint param_3,vector *param_4,vector *param_5
               ,uint param_6,job_pool *param_7,bool param_8)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char extraout_DL;
  char extraout_DL_00;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  void *pvVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  void *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  ulong local_120;
  undefined8 *local_118;
  ulong local_110;
  long local_108;
  uint *local_100;
  ulong local_f8;
  void *local_e8;
  ulong local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 *local_b8;
  long local_b0;
  undefined8 *local_a8;
  ulong local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 local_88 [2];
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  void *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 1;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98[0] = 0x3f800000;
  local_90 = 0;
  local_88[0] = 0;
  local_b8 = local_88;
  lVar3 = std::__detail::_Prime_rehash_policy::_M_next_bkt((ulong)local_98);
  if (lVar3 == local_b0) {
    local_90 = 0;
  }
  else {
    std::
    _Hashtable<basisu::vec<6u,float>,std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<6u,float>>,basisu::bit_hasher<basisu::vec<6u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
    ::_M_rehash_aux(&local_b8,lVar3);
  }
  local_100 = (uint *)0x0;
  local_f8 = 0;
  if (param_8) {
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_100,2,false);
    uVar15 = (ulong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      uVar12 = 0;
      do {
        while( true ) {
          uVar10 = uVar12 + 1;
          pvVar16 = (void *)((ulong)uVar12 * 0x20 + *(long *)(param_1 + 0x10));
          lVar3 = *(long *)((long)pvVar16 + 0x18) +
                  *(long *)(*(long *)(param_1 + 0x10) + 0x18 + (ulong)uVar10 * 0x20);
          *local_100 = uVar12;
          local_100[1] = uVar10;
          local_108 = lVar3;
          memmove(&local_78,pvVar16,0x18);
          local_58 = (void *)0x0;
          local_50 = 0;
          local_60 = lVar3;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_58,SUB81(local_f8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          local_50 = CONCAT44(local_50._4_4_,(undefined4)local_f8);
          if ((local_58 != (void *)0x0) && (local_100 != (uint *)0x0)) {
            memcpy(local_58,local_100,(local_f8 & 0xffffffff) * 4);
          }
          lVar3 = std::
                  _Hashtable<basisu::vec<6u,float>,std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<6u,float>>,basisu::bit_hasher<basisu::vec<6u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                  ::_M_emplace<std::pair<basisu::vec<6u,float>,basisu::weighted_block_group>>
                            (&local_b8,&local_78);
          if (local_58 != (void *)0x0) {
            free(local_58);
          }
          if (extraout_DL != '\0') break;
          uVar17 = (int)lVar3 + 0x28;
          *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + local_108;
          uVar18 = *(uint *)(lVar3 + 0x30);
          if (*(uint *)(lVar3 + 0x34) <= uVar18) {
            basisu::elemental_vector::increase_capacity
                      (uVar17,(bool)((char)uVar18 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar18 = *(uint *)(lVar3 + 0x30);
          }
          *(uint *)(*(long *)(lVar3 + 0x28) + (ulong)uVar18 * 4) = uVar12;
          iVar14 = *(int *)(lVar3 + 0x30);
          uVar18 = iVar14 + 1;
          *(uint *)(lVar3 + 0x30) = uVar18;
          if (*(uint *)(lVar3 + 0x34) <= uVar18) {
            basisu::elemental_vector::increase_capacity
                      (uVar17,(bool)((char)iVar14 + '\x02'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar18 = *(uint *)(lVar3 + 0x30);
          }
          uVar12 = uVar12 + 2;
          *(uint *)(*(long *)(lVar3 + 0x28) + (ulong)uVar18 * 4) = uVar10;
          uVar10 = *(uint *)(param_1 + 0x18);
          uVar15 = (ulong)uVar10;
          *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
          if (uVar10 <= uVar12) goto LAB_0011c8ef;
        }
        uVar15 = (ulong)*(uint *)(param_1 + 0x18);
        uVar12 = uVar12 + 2;
      } while (uVar12 < *(uint *)(param_1 + 0x18));
    }
  }
  else {
    vector<unsigned_int>::resize((vector<unsigned_int> *)&local_100,1,false);
    uVar15 = (ulong)*(uint *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x18) != 0) {
      lVar3 = 0;
      do {
        pvVar16 = (void *)(lVar3 * 0x20 + *(long *)(param_1 + 0x10));
        lVar7 = *(long *)((long)pvVar16 + 0x18);
        *local_100 = (uint)lVar3;
        local_108 = lVar7;
        memmove(&local_78,pvVar16,0x18);
        local_58 = (void *)0x0;
        local_50 = 0;
        local_60 = lVar7;
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_58,SUB81(local_f8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                   false);
        local_50 = CONCAT44(local_50._4_4_,(undefined4)local_f8);
        if ((local_58 != (void *)0x0) && (local_100 != (uint *)0x0)) {
          memcpy(local_58,local_100,(local_f8 & 0xffffffff) * 4);
        }
        lVar7 = std::
                _Hashtable<basisu::vec<6u,float>,std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>,std::allocator<std::pair<basisu::vec<6u,float>const,basisu::weighted_block_group>>,std::__detail::_Select1st,std::equal_to<basisu::vec<6u,float>>,basisu::bit_hasher<basisu::vec<6u,float>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>
                ::_M_emplace<std::pair<basisu::vec<6u,float>,basisu::weighted_block_group>>
                          (&local_b8,&local_78);
        if (local_58 != (void *)0x0) {
          free(local_58);
        }
        if (extraout_DL_00 == '\0') {
          *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + local_108;
          uVar12 = *(uint *)(lVar7 + 0x30);
          if (*(uint *)(lVar7 + 0x34) <= uVar12) {
            basisu::elemental_vector::increase_capacity
                      ((int)lVar7 + 0x28,(bool)((char)uVar12 + '\x01'),1,
                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
            uVar12 = *(uint *)(lVar7 + 0x30);
          }
          *(uint *)(*(long *)(lVar7 + 0x28) + (ulong)uVar12 * 4) = (uint)lVar3;
          *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
        }
        uVar15 = (ulong)*(uint *)(param_1 + 0x18);
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(param_1 + 0x18));
    }
  }
LAB_0011c8ef:
  basisu::debug_printf
            ("generate_hierarchical_codebook_threaded: %u training vectors, %u unique training vectors\n"
             ,uVar15,local_a0 & 0xffffffff);
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  if ((local_a0 >> 0x20 == 0) && ((int)local_a0 != 0)) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_138,SUB81(local_a0,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false);
  }
  uVar2 = local_d0;
  puVar5 = local_a8;
  while (local_d0 = uVar2, puVar5 != (undefined8 *)0x0) {
    local_78 = puVar5[1];
    lStack_70 = puVar5[2];
    lVar3 = puVar5[4];
    local_d0._0_4_ = (uint)uVar2;
    local_68 = puVar5[3];
    local_d0._4_4_ = (uint)((ulong)uVar2 >> 0x20);
    if (local_d0._4_4_ <= (uint)local_d0) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_d8,(bool)((char)uVar2 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x20,true);
      uVar2 = local_d0;
    }
    local_d0 = uVar2;
    uVar15 = (ulong)(uint)local_d0;
    iVar14 = (uint)local_d0 + 1;
    plVar4 = (long *)(uVar15 * 0x20 + (long)local_d8);
    *plVar4 = local_78;
    plVar4[1] = lStack_70;
    plVar4[3] = lVar3;
    plVar4[2] = local_68;
    local_d0 = CONCAT44(local_d0._4_4_,iVar14);
    if (local_130._4_4_ <= (uint)local_130) {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_138,(bool)((char)local_130 + '\x01'),1,
                 (_func_void_void_ptr_void_ptr_uint *)0x8,false);
    }
    *(undefined8 **)((long)local_138 + (ulong)(uint)local_130 * 8) = puVar5;
    puVar5 = (undefined8 *)*puVar5;
    local_130 = CONCAT44(local_130._4_4_,(uint)local_130 + 1);
    uVar2 = local_d0;
  }
  bVar20 = param_2 < local_a0;
  basisu::debug_printf("Limit clusterizers: %u\n",(ulong)bVar20);
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  if (local_a0 < 0x40000) {
    param_6 = 1;
  }
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  bVar20 = generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>
                     ((tree_vector_quant *)&local_e8,param_2,param_3,(vector *)&local_128,
                      (vector *)&local_118,param_6,bVar20,param_7);
  puVar5 = local_118;
  if (bVar20) {
    lVar3 = 0;
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)param_4,0,false);
    if ((uint)local_120 != 0) {
      do {
        uVar12 = *(uint *)(param_4 + 8);
        uVar10 = uVar12 + 1;
        if (uVar12 < 0xffffffff) {
          lVar7 = 0x10;
          if (*(uint *)(param_4 + 0xc) < uVar10) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_4,SUB41(uVar10,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                       false);
            uVar12 = *(uint *)(param_4 + 8);
            lVar7 = (ulong)(uVar10 - uVar12) << 4;
          }
          puVar5 = (undefined8 *)((ulong)uVar12 * 0x10 + *(long *)param_4);
          puVar8 = (undefined8 *)(lVar7 + (long)puVar5);
          for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          puVar8 = *(undefined8 **)param_4;
          puVar5 = puVar8 + 0x1fffffffe;
          do {
            if ((void *)*puVar8 != (void *)0x0) {
              free((void *)*puVar8);
            }
            puVar8 = puVar8 + 2;
          } while (puVar8 != puVar5);
        }
        *(uint *)(param_4 + 8) = uVar10;
        lVar7 = 0;
        plVar4 = local_128 + lVar3 * 2;
        puVar5 = local_128;
        if ((int)plVar4[1] != 0) {
          do {
            lVar1 = *(long *)((long)local_138 + (ulong)*(uint *)(*plVar4 + lVar7 * 4) * 8);
            uVar12 = *(uint *)(lVar1 + 0x30);
            if (uVar12 == 0) {
              plVar4 = puVar5 + lVar3 * 2;
              if (*(uint *)(plVar4 + 1) <= (int)lVar7 + 1U) break;
            }
            else {
              uVar15 = (ulong)uVar12;
              pvVar16 = *(void **)(lVar1 + 0x28);
              plVar4 = (long *)((ulong)(uVar10 - 1) * 0x10 + *(long *)param_4);
              uVar10 = *(uint *)(plVar4 + 1);
              uVar19 = (ulong)uVar10;
              if (uVar15 + uVar19 < 0x100000000) {
                uVar18 = uVar10 + uVar12;
                if (!CARRY4(uVar10,uVar12)) {
                  uVar6 = uVar19;
                  uVar9 = uVar15;
                  if (*(uint *)((long)plVar4 + 0xc) < uVar18) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)plVar4,SUB41(uVar18,0),(uint)(uVar12 == 1),
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar6 = (ulong)*(uint *)(plVar4 + 1);
                    uVar9 = (ulong)(uVar18 - *(uint *)(plVar4 + 1));
                  }
                  memset((void *)(*plVar4 + uVar6 * 4),0,uVar9 << 2);
                }
                *(uint *)(plVar4 + 1) = uVar18;
              }
              memcpy((void *)(*plVar4 + uVar19 * 4),pvVar16,uVar15 * 4);
              plVar4 = local_128 + lVar3 * 2;
              puVar5 = local_128;
              if (*(uint *)(plVar4 + 1) <= (int)lVar7 + 1U) break;
            }
            lVar7 = lVar7 + 1;
            uVar10 = *(uint *)(param_4 + 8);
          } while( true );
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < (uint)local_120);
    }
    lVar3 = 0;
    vector<basisu::vector<unsigned_int>>::resize
              ((vector<basisu::vector<unsigned_int>> *)param_5,0,false);
    if ((uint)local_110 != 0) {
      do {
        uVar12 = *(uint *)(param_5 + 8);
        uVar10 = uVar12 + 1;
        if (uVar12 < 0xffffffff) {
          lVar7 = 0x10;
          if (*(uint *)(param_5 + 0xc) < uVar10) {
            basisu::elemental_vector::increase_capacity
                      ((uint)param_5,SUB41(uVar10,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                       false);
            uVar12 = *(uint *)(param_5 + 8);
            lVar7 = (ulong)(uVar10 - uVar12) << 4;
          }
          puVar5 = (undefined8 *)((ulong)uVar12 * 0x10 + *(long *)param_5);
          puVar8 = (undefined8 *)(lVar7 + (long)puVar5);
          for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
        }
        else {
          puVar8 = *(undefined8 **)param_5;
          puVar5 = puVar8 + 0x1fffffffe;
          do {
            if ((void *)*puVar8 != (void *)0x0) {
              free((void *)*puVar8);
            }
            puVar8 = puVar8 + 2;
          } while (puVar8 != puVar5);
        }
        *(uint *)(param_5 + 8) = uVar10;
        lVar7 = 0;
        plVar4 = local_118 + lVar3 * 2;
        puVar5 = local_118;
        if ((int)plVar4[1] != 0) {
          do {
            lVar1 = *(long *)((long)local_138 + (ulong)*(uint *)(*plVar4 + lVar7 * 4) * 8);
            uVar12 = *(uint *)(lVar1 + 0x30);
            if (uVar12 == 0) {
              plVar4 = puVar5 + lVar3 * 2;
              if (*(uint *)(plVar4 + 1) <= (int)lVar7 + 1U) break;
            }
            else {
              uVar15 = (ulong)uVar12;
              pvVar16 = *(void **)(lVar1 + 0x28);
              plVar4 = (long *)((ulong)(uVar10 - 1) * 0x10 + *(long *)param_5);
              uVar10 = *(uint *)(plVar4 + 1);
              uVar19 = (ulong)uVar10;
              if (uVar15 + uVar19 < 0x100000000) {
                uVar18 = uVar10 + uVar12;
                if (!CARRY4(uVar10,uVar12)) {
                  uVar6 = uVar19;
                  uVar9 = uVar15;
                  if (*(uint *)((long)plVar4 + 0xc) < uVar18) {
                    basisu::elemental_vector::increase_capacity
                              ((uint)plVar4,SUB41(uVar18,0),(uint)(uVar12 == 1),
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar6 = (ulong)*(uint *)(plVar4 + 1);
                    uVar9 = (ulong)(uVar18 - *(uint *)(plVar4 + 1));
                  }
                  memset((void *)(*plVar4 + uVar6 * 4),0,uVar9 << 2);
                }
                *(uint *)(plVar4 + 1) = uVar18;
              }
              memcpy((void *)(*plVar4 + uVar19 * 4),pvVar16,uVar15 * 4);
              plVar4 = local_118 + lVar3 * 2;
              puVar5 = local_118;
              if (*(uint *)(plVar4 + 1) <= (int)lVar7 + 1U) break;
            }
            lVar7 = lVar7 + 1;
            uVar10 = *(uint *)(param_5 + 8);
          } while( true );
        }
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < (uint)local_110);
      goto LAB_0011cb0b;
    }
    puVar8 = local_118;
    if (local_118 == (undefined8 *)0x0) goto LAB_0011cb4b;
  }
  else {
LAB_0011cb0b:
    if (puVar5 == (undefined8 *)0x0) goto LAB_0011cb4b;
    puVar13 = puVar5 + (local_110 & 0xffffffff) * 2;
    puVar8 = puVar13;
    for (; puVar5 != puVar13; puVar5 = puVar5 + 2) {
      if ((void *)*puVar5 != (void *)0x0) {
        free((void *)*puVar5);
      }
      puVar8 = local_118;
    }
  }
  free(puVar8);
LAB_0011cb4b:
  if (local_128 != (undefined8 *)0x0) {
    puVar13 = local_128 + (local_120 & 0xffffffff) * 2;
    puVar5 = puVar13;
    for (puVar8 = local_128; puVar8 != puVar13; puVar8 = puVar8 + 2) {
      if ((void *)*puVar8 != (void *)0x0) {
        free((void *)*puVar8);
      }
      puVar5 = local_128;
    }
    free(puVar5);
  }
  if (local_138 != (void *)0x0) {
    free(local_138);
  }
  if (local_d8 != (void *)0x0) {
    free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    pvVar16 = (void *)((long)local_e8 + (local_e0 & 0xffffffff) * 0x48);
    __ptr = pvVar16;
    for (pvVar11 = local_e8; pvVar11 != pvVar16; pvVar11 = (void *)((long)pvVar11 + 0x48)) {
      if (*(void **)((long)pvVar11 + 0x30) != (void *)0x0) {
        free(*(void **)((long)pvVar11 + 0x30));
      }
      __ptr = local_e8;
    }
    free(__ptr);
  }
  puVar5 = local_a8;
  if (local_100 != (uint *)0x0) {
    free(local_100);
    puVar5 = local_a8;
  }
  while (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar5;
    if ((void *)puVar5[5] != (void *)0x0) {
      free((void *)puVar5[5]);
    }
    operator_delete(puVar5,0x40);
    puVar5 = puVar8;
  }
  memset(local_b8,0,local_b0 * 8);
  local_a0 = 0;
  local_a8 = (undefined8 *)0x0;
  if (local_b8 != local_88) {
    operator_delete(local_b8,local_b0 * 8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,
   float> > >(basisu::tree_vector_quant<basisu::vec<6u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
basisu::
generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
::{lambda()#1}::operator()(_lambda___1_ *this)

{
  tree_vector_quant<basisu::vec<6u,float>> *this_00;
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  void *__ptr;
  long lVar13;
  long *plVar14;
  long in_FS_OFFSET;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  uVar6 = (ulong)*(uint *)this;
  lVar10 = *(long *)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (void *)0x0;
  this_00 = (tree_vector_quant<basisu::vec<6u,float>> *)(lVar10 + uVar6 * 0x28);
  plVar14 = (long *)(**(long **)(this + 0x28) + uVar6 * 0x10);
  iVar2 = (int)plVar14[1];
  local_70 = 0;
  if (iVar2 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_78,SUB41(iVar2,0),(uint)(iVar2 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset((void *)((long)local_78 + (local_70 & 0xffffffff) * 4),0,
           (ulong)(uint)(iVar2 - (int)local_70) << 2);
    local_70 = CONCAT44(local_70._4_4_,iVar2);
  }
  if ((int)plVar14[1] != 0) {
    lVar9 = 0;
    lVar13 = lVar10 + uVar6 * 0x28;
    do {
      uVar12 = *(uint *)(*plVar14 + lVar9 * 4);
      *(uint *)((long)local_78 + lVar9 * 4) = uVar12;
      uVar11 = *(uint *)(lVar13 + 0x18);
      puVar5 = (undefined8 *)((ulong)uVar12 * 0x20 + *(long *)(*(long *)(this + 0x30) + 0x10));
      local_68 = *puVar5;
      uStack_60 = puVar5[1];
      uVar3 = puVar5[3];
      local_58 = puVar5[2];
      if (*(uint *)(lVar13 + 0x1c) <= uVar11) {
        basisu::elemental_vector::increase_capacity
                  ((int)lVar10 + 0x10 + (int)(uVar6 * 0x28),(bool)((char)uVar11 + '\x01'),1,
                   (_func_void_void_ptr_void_ptr_uint *)0x20,true);
        uVar11 = *(uint *)(lVar13 + 0x18);
      }
      puVar5 = (undefined8 *)((ulong)uVar11 * 0x20 + *(long *)(lVar13 + 0x10));
      lVar9 = lVar9 + 1;
      puVar5[2] = local_58;
      puVar5[3] = uVar3;
      *puVar5 = local_68;
      puVar5[1] = uStack_60;
      *(uint *)(lVar13 + 0x18) = uVar11 + 1;
    } while ((uint)lVar9 < *(uint *)(plVar14 + 1));
  }
  if (**(char **)(this + 0x38) == '\0') {
    uVar11 = *(uint *)(this_00 + 0x18);
  }
  else {
    uVar11 = ((**(int **)(this + 0x40) + **(uint **)(this + 0x48)) - 1) / **(uint **)(this + 0x48);
  }
  lVar10 = *(long *)(this + 0x18);
  uVar12 = *(uint *)this;
  uVar4 = tree_vector_quant<basisu::vec<6u,float>>::generate(this_00,uVar11);
  uVar6 = (ulong)*(uint *)this;
  *(undefined1 *)(lVar10 + (ulong)uVar12) = uVar4;
  if (*(char *)(*(long *)(this + 0x18) + uVar6) != '\0') {
    lVar10 = *(long *)(this + 8);
    plVar14 = (long *)(uVar6 * 0x10 + lVar10);
    if (*(int *)(this_00 + 8) != 0) {
      lVar10 = 0;
LAB_0011d56e:
      do {
        lVar13 = *(long *)this_00 + lVar10 * 0x48;
        if (*(int *)(lVar13 + 0x28) < 0) {
          uVar11 = *(uint *)(plVar14 + 1);
          uVar6 = (ulong)uVar11;
          uVar12 = uVar11 + 1;
          if (uVar11 < 0xffffffff) {
            lVar7 = 0x10;
            if (*(uint *)((long)plVar14 + 0xc) < uVar12) {
              basisu::elemental_vector::increase_capacity
                        ((uint)plVar14,SUB41(uVar12,0),1,(_func_void_void_ptr_void_ptr_uint *)0x10,
                         false);
              uVar11 = *(uint *)(plVar14 + 1);
              lVar7 = (ulong)(uVar12 - uVar11) << 4;
            }
            lVar9 = *plVar14;
            puVar5 = (undefined8 *)((ulong)uVar11 * 0x10 + lVar9);
            puVar8 = (undefined8 *)(lVar7 + (long)puVar5);
            for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
              *puVar5 = 0;
              puVar5[1] = 0;
            }
          }
          else {
            puVar8 = (undefined8 *)*plVar14;
            puVar5 = puVar8 + 0x1fffffffe;
            do {
              if ((void *)*puVar8 != (void *)0x0) {
                free((void *)*puVar8);
              }
              puVar8 = puVar8 + 2;
            } while (puVar8 != puVar5);
            lVar9 = *plVar14;
          }
          *(uint *)(plVar14 + 1) = uVar12;
          puVar5 = (undefined8 *)(uVar6 * 0x10 + lVar9);
          if (puVar5 != (undefined8 *)(lVar13 + 0x30)) {
            uVar11 = *(uint *)(lVar13 + 0x38);
            __ptr = (void *)*puVar5;
            if (*(uint *)((long)puVar5 + 0xc) < uVar11) {
              if (__ptr != (void *)0x0) {
                free(__ptr);
                *puVar5 = 0;
                puVar5[1] = 0;
                uVar11 = *(uint *)(lVar13 + 0x38);
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)puVar5,SUB41(uVar11,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,
                         false);
              uVar11 = *(uint *)(lVar13 + 0x38);
              __ptr = (void *)*puVar5;
            }
            else if (*(int *)(puVar5 + 1) != 0) {
              *(undefined4 *)(puVar5 + 1) = 0;
              uVar11 = *(uint *)(lVar13 + 0x38);
            }
            if ((__ptr != (void *)0x0) && (*(void **)(lVar13 + 0x30) != (void *)0x0)) {
              memcpy(__ptr,*(void **)(lVar13 + 0x30),(ulong)uVar11 << 2);
              uVar11 = *(uint *)(lVar13 + 0x38);
            }
            *(uint *)(puVar5 + 1) = uVar11;
            lVar10 = lVar10 + 1;
            if (*(uint *)(this_00 + 8) <= (uint)lVar10) break;
            goto LAB_0011d56e;
          }
        }
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < *(uint *)(this_00 + 8));
      lVar10 = *(long *)(this + 8);
      uVar6 = (ulong)*(uint *)this;
    }
    if (*(int *)(lVar10 + 8 + uVar6 * 0x10) != 0) {
      lVar13 = 0;
      do {
        lVar9 = 0;
        plVar14 = (long *)(*(long *)(lVar10 + uVar6 * 0x10) + lVar13 * 0x10);
        if ((int)plVar14[1] != 0) {
          do {
            puVar1 = (uint *)(*plVar14 + lVar9 * 4);
            lVar9 = lVar9 + 1;
            *puVar1 = *(uint *)((long)local_78 + (ulong)*puVar1 * 4);
            uVar6 = (ulong)*(uint *)this;
            plVar14 = (long *)(*(long *)(lVar10 + uVar6 * 0x10) + lVar13 * 0x10);
          } while ((uint)lVar9 < *(uint *)(plVar14 + 1));
        }
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < *(uint *)(lVar10 + 8 + uVar6 * 0x10));
    }
    if (**(int **)(this + 0x50) != 0) {
      tree_vector_quant<basisu::vec<6u,float>>::retrieve
                (this_00,(**(int **)(this + 0x50) + -1 + **(uint **)(this + 0x48)) /
                         **(uint **)(this + 0x48),(vector *)(uVar6 * 0x10 + *(long *)(this + 0x10)))
      ;
      uVar6 = (ulong)*(uint *)this;
      lVar10 = *(long *)(this + 0x10);
      lVar13 = 0;
      if (*(int *)(lVar10 + 8 + uVar6 * 0x10) != 0) {
        do {
          lVar9 = 0;
          plVar14 = (long *)(*(long *)(lVar10 + uVar6 * 0x10) + lVar13 * 0x10);
          if ((int)plVar14[1] != 0) {
            do {
              puVar1 = (uint *)(*plVar14 + lVar9 * 4);
              lVar9 = lVar9 + 1;
              *puVar1 = *(uint *)((long)local_78 + (ulong)*puVar1 * 4);
              uVar6 = (ulong)*(uint *)this;
              plVar14 = (long *)(*(long *)(lVar10 + uVar6 * 0x10) + lVar13 * 0x10);
            } while ((uint)lVar9 < *(uint *)(plVar14 + 1));
          }
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < *(uint *)(lVar10 + 8 + uVar6 * 0x10));
      }
    }
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::_Function_handler<void (),
   basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,
   float> > >(basisu::tree_vector_quant<basisu::vec<6u, float> >&, unsigned int, unsigned int,
   basisu::vector<basisu::vector<unsigned int> >&, basisu::vector<basisu::vector<unsigned int> >&,
   unsigned int, bool, basisu::job_pool*)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void std::
     _Function_handler<void(),basisu::generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)::{lambda()#1}>
     ::_M_invoke(_Any_data *param_1)

{
  basisu::
  generate_hierarchical_codebook_threaded_internal<basisu::tree_vector_quant<basisu::vec<6u,float>>>(basisu::tree_vector_quant<basisu::vec<6u,float>>&,unsigned_int,unsigned_int,basisu::vector<basisu::vector<unsigned_int>>&,basisu::vector<basisu::vector<unsigned_int>>&,unsigned_int,bool,basisu::job_pool*)
  ::{lambda()#1}::operator()(*(_lambda___1_ **)param_1);
  return;
}



/* basisu::basisu_frontend::init(basisu::basisu_frontend::params const&) */

void basisu::basisu_frontend::_GLOBAL__sub_I_init(void)

{
  g_black_color = 0xff000000;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::image::image(unsigned int, unsigned int, unsigned int) */

void __thiscall basisu::image::image(image *this,uint param_1,uint param_2,uint param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


