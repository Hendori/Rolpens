
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetDefaultTBuiltInResourceString[abi:cxx11]() */

void GetDefaultTBuiltInResourceString_abi_cxx11_(void)

{
  pointer_____offset_0x10___ puVar1;
  ostream *poVar2;
  string *in_RDI;
  streambuf *psVar3;
  long in_FS_OFFSET;
  pointer_____offset_0x10___ local_1b8 [2];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar1 = PTR_vtable_00104a88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = std::ios::init;
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_1b8[0] = _init;
  local_70 = 0;
  psVar3 = (streambuf *)((ostream *)local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar3 = _locale;
  std::ios::init(psVar3);
  local_1a8 = (undefined1  [16])0x0;
  local_1b8[0] = &std::ios::vtable;
  local_1b8[1] = puVar1;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_148[0] = std::ostream::operator<<;
  std::locale::locale(local_178);
  local_1b8[1] = &std::ios::vtable;
  local_170 = 0x10;
  local_160 = 0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)local_1b8,"MaxLights ",10);
  poVar2 = (ostream *)std::ostream::operator<<((ostream *)local_1b8,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxClipPlanes ",0xe);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,6);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTextureUnits ",0x10);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTextureCoords ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexAttribs ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexUniformComponents ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x1000);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVaryingFloats ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexTextureImageUnits ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCombinedTextureImageUnits ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x50);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTextureImageUnits ",0x15);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentUniformComponents ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x1000);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxDrawBuffers ",0xf);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexUniformVectors ",0x18);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVaryingVectors ",0x12);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentUniformVectors ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexOutputVectors ",0x17);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentInputVectors ",0x18);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0xf);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MinProgramTexelOffset ",0x16);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,-8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxProgramTexelOffset ",0x16);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,7);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxClipDistances ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupCountX ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0xffff);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupCountY ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0xffff);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupCountZ ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0xffff);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupSizeX ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupSizeY ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeWorkGroupSizeZ ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeUniformComponents ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeTextureImageUnits ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeImageUniforms ",0x18);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeAtomicCounters ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxComputeAtomicCounterBuffers ",0x1f);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVaryingComponents ",0x15);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x3c);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexOutputComponents ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryInputComponents ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryOutputComponents ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentInputComponents ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxImageUnits ",0xe);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxCombinedImageUnitsAndFragmentOutputs ",0x28);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxCombinedShaderOutputResources ",0x21);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxImageSamples ",0x10);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexImageUniforms ",0x17);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlImageUniforms ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessEvaluationImageUniforms ",0x1f);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryImageUniforms ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentImageUniforms ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCombinedImageUniforms ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryTextureImageUnits ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryOutputVertices ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x100);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxGeometryTotalOutputComponents ",0x21);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryUniformComponents ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryVaryingComponents ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlInputComponents ",0x1e);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlOutputComponents ",0x1f);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlTextureImageUnits ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlUniformComponents ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessControlTotalOutputComponents ",0x24);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x1000);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessEvaluationInputComponents ",0x21);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessEvaluationOutputComponents ",0x22);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessEvaluationTextureImageUnits ",0x23);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessEvaluationUniformComponents ",0x23);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x400);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessPatchComponents ",0x17);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x78);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxPatchVertices ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessGenLevel ",0x10);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxViewports ",0xd);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x10);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexAtomicCounters ",0x18);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessControlAtomicCounters ",0x1d);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTessEvaluationAtomicCounters ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryAtomicCounters ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentAtomicCounters ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCombinedAtomicCounters ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxAtomicCounterBindings ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxVertexAtomicCounterBuffers ",0x1e);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessControlAtomicCounterBuffers ",0x23);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTessEvaluationAtomicCounterBuffers ",0x26);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxGeometryAtomicCounterBuffers ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxFragmentAtomicCounterBuffers ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCombinedAtomicCounterBuffers ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxAtomicCounterBufferSize ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x4000);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTransformFeedbackBuffers ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,4);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"MaxTransformFeedbackInterleavedComponents ",0x2a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x40);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCullDistances ",0x11);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxCombinedClipAndCullDistances ",0x20)
  ;
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,8);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxSamples ",0xb);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,4);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshOutputVerticesNV ",0x18);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x100);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshOutputPrimitivesNV ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x200);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeX_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeY_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeZ_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeX_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x20);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeY_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeZ_NV ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshViewCountNV ",0x13);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,4);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshOutputVerticesEXT ",0x19);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x100);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshOutputPrimitivesEXT ",0x1b);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x100);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeX_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeY_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshWorkGroupSizeZ_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeX_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeY_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxTaskWorkGroupSizeZ_EXT ",0x1a);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,0x80);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxMeshViewCountEXT ",0x14);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,4);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"MaxDualSourceDrawBuffersEXT ",0x1c);
  poVar2 = (ostream *)std::ostream::operator<<(poVar2,1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"nonInductiveForLoops ",0x15);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"whileLoops ",0xb);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"doWhileLoops ",0xd);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"generalUniformIndexing ",0x17);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"generalAttributeMatrixVectorIndexing ",0x25);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"generalVaryingIndexing ",0x17);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"generalSamplerIndexing ",0x17);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"generalVariableIndexing ",0x18);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  std::__ostream_insert<char,std::char_traits<char>>
            (poVar2,"generalConstantMatrixVectorIndexing ",0x24);
  poVar2 = std::ostream::_M_insert<bool>(SUB81(poVar2,0));
  std::__ostream_insert<char,std::char_traits<char>>(poVar2,"\n",1);
  *(undefined8 *)(in_RDI + 8) = 0;
  *(string **)in_RDI = in_RDI + 0x10;
  in_RDI[0x10] = (string)0x0;
  if (local_188._0_8_ == 0) {
    std::__cxx11::string::_M_assign(in_RDI);
  }
  else {
    std::__cxx11::string::_M_replace((ulong)in_RDI,0,(char *)0x0,local_198._8_8_);
  }
  local_148[0] = std::ostream::operator<<;
  local_1b8[0] = &std::ios::vtable;
  local_1b8[1] = &std::ios::vtable;
  if (local_168 != &local_158) {
    operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
  }
  local_1b8[1] = std::ios_base::~ios_base;
  std::locale::~locale(local_178);
  local_1b8[0] = _init;
  *(undefined8 *)((long)local_1b8 + *(long *)(_init + -0x18)) = _locale;
  local_148[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetResources() */

undefined1 * GetResources(void)

{
  return Resources;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetDefaultResources() */

undefined1 * GetDefaultResources(void)

{
  return DefaultTBuiltInResource;
}



/* DecodeResourceLimits(TBuiltInResource*, char*) */

void DecodeResourceLimits(TBuiltInResource *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long in_FS_OFFSET;
  long *local_a8;
  long *local_a0;
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68 [2];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = local_98;
  if (param_2 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  else {
    sVar3 = strlen(param_2);
    uVar7 = 0;
    std::__cxx11::string::_M_construct<char_const*>(&local_a8,param_2,param_2 + sVar3);
    while( true ) {
      plVar4 = (long *)std::__cxx11::string::find_first_not_of((char *)&local_a8,0x103844,uVar7);
      if (plVar4 == (long *)0xffffffffffffffff) break;
      uVar5 = std::__cxx11::string::find_first_of((char *)&local_a8,0x103844,(ulong)plVar4);
      plVar6 = (long *)std::__cxx11::string::find_first_not_of((char *)&local_a8,0x103844,uVar5);
      uVar7 = std::__cxx11::string::find_first_of((char *)&local_a8,0x103844,(ulong)plVar6);
      if (local_a0 < plVar4) {
        std::__throw_out_of_range_fmt
                  ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                   plVar4);
LAB_00101fab:
        lVar8 = std::__throw_out_of_range_fmt
                          ("%s: __pos (which is %zu) > this->size() (which is %zu)",
                           "basic_string::substr",plVar6);
LAB_00101fc3:
        iVar10 = (int)plVar6;
        if (lVar8 == 0x17) {
          iVar2 = memcmp(local_88,"MaxVertexUniformVectors",0x17);
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x30) = iVar10;
            goto LAB_00101ba2;
          }
        }
        else if (lVar8 == 0x11) {
          iVar2 = memcmp(local_88,"MaxVaryingVectors",0x11);
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x34) = iVar10;
            goto LAB_00101ba2;
          }
        }
LAB_00101b39:
        bVar1 = std::operator==((string *)&local_88,"MaxFragmentUniformVectors");
        if (bVar1) {
          *(int *)(param_1 + 0x38) = iVar10;
        }
        else {
          bVar1 = std::operator==((string *)&local_88,"MaxVertexOutputVectors");
          if (bVar1) {
            *(int *)(param_1 + 0x3c) = iVar10;
          }
          else {
            bVar1 = std::operator==((string *)&local_88,"MaxFragmentInputVectors");
            if (bVar1) {
              *(int *)(param_1 + 0x40) = iVar10;
            }
            else {
              bVar1 = std::operator==((string *)&local_88,"MinProgramTexelOffset");
              if (bVar1) {
                *(int *)(param_1 + 0x44) = iVar10;
              }
              else {
                bVar1 = std::operator==((string *)&local_88,"MaxProgramTexelOffset");
                if (bVar1) {
                  *(int *)(param_1 + 0x48) = iVar10;
                }
                else {
                  bVar1 = std::operator==((string *)&local_88,"MaxClipDistances");
                  if (bVar1) {
                    *(int *)(param_1 + 0x4c) = iVar10;
                  }
                  else {
                    bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupCountX");
                    if (bVar1) {
                      *(int *)(param_1 + 0x50) = iVar10;
                    }
                    else {
                      bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupCountY");
                      if (bVar1) {
                        *(int *)(param_1 + 0x54) = iVar10;
                      }
                      else {
                        bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupCountZ");
                        if (bVar1) {
                          *(int *)(param_1 + 0x58) = iVar10;
                        }
                        else {
                          bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupSizeX");
                          if (bVar1) {
                            *(int *)(param_1 + 0x5c) = iVar10;
                          }
                          else {
                            bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupSizeY");
                            if (bVar1) {
                              *(int *)(param_1 + 0x60) = iVar10;
                            }
                            else {
                              bVar1 = std::operator==((string *)&local_88,"MaxComputeWorkGroupSizeZ"
                                                     );
                              if (bVar1) {
                                *(int *)(param_1 + 100) = iVar10;
                              }
                              else {
                                bVar1 = std::operator==((string *)&local_88,
                                                        "MaxComputeUniformComponents");
                                if (bVar1) {
                                  *(int *)(param_1 + 0x68) = iVar10;
                                }
                                else {
                                  bVar1 = std::operator==((string *)&local_88,
                                                          "MaxComputeTextureImageUnits");
                                  if (bVar1) {
                                    *(int *)(param_1 + 0x6c) = iVar10;
                                  }
                                  else {
                                    bVar1 = std::operator==((string *)&local_88,
                                                            "MaxComputeImageUniforms");
                                    if (bVar1) {
                                      *(int *)(param_1 + 0x70) = iVar10;
                                    }
                                    else {
                                      bVar1 = std::operator==((string *)&local_88,
                                                              "MaxComputeAtomicCounters");
                                      if (bVar1) {
                                        *(int *)(param_1 + 0x74) = iVar10;
                                      }
                                      else {
                                        bVar1 = std::operator==((string *)&local_88,
                                                                "MaxComputeAtomicCounterBuffers");
                                        if (bVar1) {
                                          *(int *)(param_1 + 0x78) = iVar10;
                                        }
                                        else {
                                          bVar1 = std::operator==((string *)&local_88,
                                                                  "MaxVaryingComponents");
                                          if (bVar1) {
                                            *(int *)(param_1 + 0x7c) = iVar10;
                                          }
                                          else {
                                            bVar1 = std::operator==((string *)&local_88,
                                                                    "MaxVertexOutputComponents");
                                            if (bVar1) {
                                              *(int *)(param_1 + 0x80) = iVar10;
                                            }
                                            else {
                                              bVar1 = std::operator==((string *)&local_88,
                                                                      "MaxGeometryInputComponents");
                                              if (bVar1) {
                                                *(int *)(param_1 + 0x84) = iVar10;
                                              }
                                              else {
                                                bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                
                                                  "MaxGeometryOutputComponents");
                                                if (bVar1) {
                                                  *(int *)(param_1 + 0x88) = iVar10;
                                                }
                                                else {
                                                  bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                    
                                                  "MaxFragmentInputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x8c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxImageUnits");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0x90) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxCombinedImageUnitsAndFragmentOutputs");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x94) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxCombinedShaderOutputResources");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x98) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxImageSamples");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0x9c) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxVertexImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xa0) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xa4) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xa8) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xac) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxFragmentImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xb0) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxCombinedImageUniforms");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xb4) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryTextureImageUnits");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xb8) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryOutputVertices");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xbc) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryTotalOutputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xc0) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryUniformComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xc4) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryVaryingComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 200) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlInputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xcc) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlOutputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xd0) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlTextureImageUnits");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xd4) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlUniformComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xd8) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlTotalOutputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xdc) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationInputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xe0) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationOutputComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xe4) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationTextureImageUnits");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xe8) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationUniformComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0xec) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxTessPatchComponents"
                                                                           );
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0xf0) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                              "MaxPatchVertices");
                                                      if (bVar1) {
                                                        *(int *)(param_1 + 0xf4) = iVar10;
                                                      }
                                                      else {
                                                        bVar1 = std::operator==((string *)&local_88,
                                                                                "MaxTessGenLevel");
                                                        if (bVar1) {
                                                          *(int *)(param_1 + 0xf8) = iVar10;
                                                        }
                                                        else {
                                                          bVar1 = std::operator==((string *)
                                                                                  &local_88,
                                                                                  "MaxViewports");
                                                          if (bVar1) {
                                                            *(int *)(param_1 + 0xfc) = iVar10;
                                                          }
                                                          else {
                                                            bVar1 = std::operator==((string *)
                                                                                    &local_88,
                                                                                                                                                                        
                                                  "MaxVertexAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x100) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x104) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x108) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x10c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxFragmentAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x110) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxCombinedAtomicCounters");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x114) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxAtomicCounterBindings");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x118) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxVertexAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x11c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessControlAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x120) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTessEvaluationAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x124) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxGeometryAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x128) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxFragmentAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 300) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxCombinedAtomicCounterBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x130) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxAtomicCounterBufferSize");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x134) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTransformFeedbackBuffers");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x138) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTransformFeedbackInterleavedComponents");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x13c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxCullDistances");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0x140) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxCombinedClipAndCullDistances");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x144) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxSamples");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0x148) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxMeshOutputVerticesNV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x14c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshOutputPrimitivesNV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x150) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeX_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x154) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeY_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x158) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeZ_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x15c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeX_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x160) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeY_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x164) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeZ_NV");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x168) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxMeshViewCountNV");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 0x16c) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxMeshOutputVerticesEXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x170) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshOutputPrimitivesEXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x174) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeX_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x178) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeY_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x17c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxMeshWorkGroupSizeZ_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x180) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeX_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x184) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeY_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x188) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "MaxTaskWorkGroupSizeZ_EXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x18c) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "MaxMeshViewCountEXT");
                                                    if (bVar1) {
                                                      *(int *)(param_1 + 400) = iVar10;
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "MaxDualSourceDrawBuffersEXT");
                                                  if (bVar1) {
                                                    *(int *)(param_1 + 0x194) = iVar10;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "nonInductiveForLoops");
                                                    if (bVar1) {
                                                      param_1[0x198] =
                                                           (TBuiltInResource)(iVar10 != 0);
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                              "whileLoops");
                                                      if (bVar1) {
                                                        param_1[0x199] =
                                                             (TBuiltInResource)(iVar10 != 0);
                                                      }
                                                      else {
                                                        bVar1 = std::operator==((string *)&local_88,
                                                                                "doWhileLoops");
                                                        if (bVar1) {
                                                          param_1[0x19a] =
                                                               (TBuiltInResource)(iVar10 != 0);
                                                        }
                                                        else {
                                                          bVar1 = std::operator==((string *)
                                                                                  &local_88,
                                                                                                                                                                    
                                                  "generalUniformIndexing");
                                                  if (bVar1) {
                                                    param_1[0x19b] = (TBuiltInResource)(iVar10 != 0)
                                                    ;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "generalAttributeMatrixVectorIndexing");
                                                  if (bVar1) {
                                                    param_1[0x19c] = (TBuiltInResource)(iVar10 != 0)
                                                    ;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                            "generalVaryingIndexing"
                                                                           );
                                                    if (bVar1) {
                                                      param_1[0x19d] =
                                                           (TBuiltInResource)(iVar10 != 0);
                                                    }
                                                    else {
                                                      bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                            
                                                  "generalSamplerIndexing");
                                                  if (bVar1) {
                                                    param_1[0x19e] = (TBuiltInResource)(iVar10 != 0)
                                                    ;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "generalVariableIndexing");
                                                  if (bVar1) {
                                                    param_1[0x19f] = (TBuiltInResource)(iVar10 != 0)
                                                    ;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==((string *)&local_88,
                                                                                                                                                        
                                                  "generalConstantMatrixVectorIndexing");
                                                  if (bVar1) {
                                                    param_1[0x1a0] = (TBuiltInResource)(iVar10 != 0)
                                                    ;
                                                  }
                                                  else {
                                                    __printf_chk(2,
                                                  "Warning: unrecognized limit (%s) in configuration file.\n"
                                                  ,local_88);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar9 = (long)local_a0 - (long)plVar4;
        if (uVar5 - (long)plVar4 < (ulong)((long)local_a0 - (long)plVar4)) {
          uVar9 = uVar5 - (long)plVar4;
        }
        local_88 = local_78;
        std::__cxx11::string::_M_construct<char_const*>
                  ((string *)&local_88,(char *)((long)local_a8 + (long)plVar4),
                   (char *)((long)local_a8 + (long)plVar4) + uVar9);
        if (local_a0 < plVar6) goto LAB_00101fab;
        plVar4 = local_58;
        uVar5 = (long)local_a0 - (long)plVar6;
        if (uVar7 - (long)plVar6 < (ulong)((long)local_a0 - (long)plVar6)) {
          uVar5 = uVar7 - (long)plVar6;
        }
        local_68[0] = plVar4;
        std::__cxx11::string::_M_construct<char_const*>
                  (local_68,(char *)((long)local_a8 + (long)plVar6),
                   (char *)((long)local_a8 + (long)plVar6) + uVar5);
        if ((plVar6 == (long *)0xffffffffffffffff) ||
           (((char)*local_68[0] != '-' && (9 < (int)(char)*local_68[0] - 0x30U)))) {
          __printf_chk(2,
                       "Error: \'%s\' bad .conf file.  Each name must be followed by one number.\n",
                       local_68[0]);
          if (local_68[0] != plVar4) {
            operator_delete(local_68[0],local_58[0] + 1);
          }
          if (local_88 != local_78) {
            operator_delete(local_88,local_78[0] + 1);
          }
          break;
        }
        plVar6 = (long *)__isoc23_strtol(local_68[0],0,10);
        iVar10 = (int)plVar6;
        if (local_80 == 9) {
          if ((*local_88 == 0x746867694c78614d) && ((char)local_88[1] == 's')) {
            *(int *)param_1 = iVar10;
            goto LAB_00101ba2;
          }
          goto LAB_00101b39;
        }
        if (local_80 != 0xd) {
          if (local_80 == 0xf) {
            if ((*local_88 != 0x757478655478614d) ||
               (*(long *)((long)local_88 + 7) != 0x7374696e55657275)) goto LAB_00101b39;
            *(int *)(param_1 + 8) = iVar10;
            goto LAB_00101ba2;
          }
          if (local_80 == 0x10) {
            if (*local_88 == 0x757478655478614d && local_88[1] == 0x7364726f6f436572) {
              *(int *)(param_1 + 0xc) = iVar10;
            }
            else if (*local_88 == 0x657472655678614d && local_88[1] == 0x7362697274744178) {
              *(int *)(param_1 + 0x10) = iVar10;
            }
            else {
              if (*local_88 != 0x697972615678614d || local_88[1] != 0x7374616f6c46676e)
              goto LAB_00101b39;
              *(int *)(param_1 + 0x18) = iVar10;
            }
            goto LAB_00101ba2;
          }
          if (local_80 == 0x1a) {
            if ((*local_88 == 0x657472655678614d && local_88[1] == 0x6d726f66696e5578) &&
               (*(long *)((long)local_88 + 10) == 0x6f436d726f66696e &&
                *(long *)((long)local_88 + 0x12) == 0x73746e656e6f706d)) {
              *(int *)(param_1 + 0x14) = iVar10;
            }
            else {
              if ((*local_88 != 0x657472655678614d || local_88[1] != 0x6572757478655478) ||
                 (*(long *)((long)local_88 + 10) != 0x6d49657275747865 ||
                  *(long *)((long)local_88 + 0x12) != 0x7374696e55656761)) goto LAB_00101b39;
              *(int *)(param_1 + 0x1c) = iVar10;
            }
            goto LAB_00101ba2;
          }
          if (local_80 == 0x1c) {
            if ((*local_88 == 0x69626d6f4378614d && local_88[1] == 0x757478655464656e) &&
               (*(long *)((long)local_88 + 0xc) == 0x6d49657275747865 &&
                *(long *)((long)local_88 + 0x14) == 0x7374696e55656761)) {
              *(int *)(param_1 + 0x20) = iVar10;
            }
            else {
              if ((*local_88 != 0x6d6761724678614d || local_88[1] != 0x6f66696e55746e65) ||
                 (*(long *)((long)local_88 + 0xc) != 0x6f436d726f66696e ||
                  *(long *)((long)local_88 + 0x14) != 0x73746e656e6f706d)) goto LAB_00101b39;
              *(int *)(param_1 + 0x28) = iVar10;
            }
            goto LAB_00101ba2;
          }
          if (local_80 == 0x14) {
            if ((*local_88 != 0x757478655478614d || local_88[1] != 0x556567616d496572) ||
               ((int)local_88[2] != 0x7374696e)) goto LAB_00101b39;
            *(int *)(param_1 + 0x24) = iVar10;
            goto LAB_00101ba2;
          }
          lVar8 = local_80;
          if (local_80 == 0xe) {
            if ((*local_88 != 0x427761724478614d) ||
               (*(long *)((long)local_88 + 6) != 0x7372656666754277)) goto LAB_00101b39;
            *(int *)(param_1 + 0x2c) = iVar10;
            goto LAB_00101ba2;
          }
          goto LAB_00101fc3;
        }
        if ((*local_88 != 0x5070696c4378614d) ||
           (*(long *)((long)local_88 + 5) != 0x73656e616c507069)) goto LAB_00101b39;
        *(int *)(param_1 + 4) = iVar10;
      }
LAB_00101ba2:
      if (local_68[0] != plVar4) {
        operator_delete(local_68[0],local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
    }
    if (local_a8 != local_98) {
      operator_delete(local_a8,local_98[0] + 1);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* bool std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::string const&, char const*) */

bool std::operator==(string *param_1,char *param_2)

{
  size_t __n;
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  __n = *(size_t *)(param_1 + 8);
  sVar3 = strlen(param_2);
  bVar1 = false;
  if ((__n == sVar3) && (bVar1 = true, __n != 0)) {
    iVar2 = memcmp(*(void **)param_1,param_2,__n);
    return iVar2 == 0;
  }
  return bVar1;
}


