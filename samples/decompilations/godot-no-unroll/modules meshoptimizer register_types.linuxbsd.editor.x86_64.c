
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_meshoptimizer_module(ModuleInitializationLevel) */

void initialize_meshoptimizer_module(int param_1)

{
  if (param_1 == 2) {
    SurfaceTool::optimize_vertex_cache_func = &meshopt_optimizeVertexCache;
    SurfaceTool::optimize_vertex_fetch_remap_func = &meshopt_optimizeVertexFetchRemap;
    SurfaceTool::simplify_func = &meshopt_simplify;
    SurfaceTool::simplify_with_attrib_func = &meshopt_simplifyWithAttributes;
    SurfaceTool::simplify_scale_func = &meshopt_simplifyScale;
    SurfaceTool::generate_remap_func = &meshopt_generateVertexRemap;
    SurfaceTool::remap_vertex_func = &meshopt_remapVertexBuffer;
    _remap_index_func = &meshopt_remapIndexBuffer;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* uninitialize_meshoptimizer_module(ModuleInitializationLevel) */

void uninitialize_meshoptimizer_module(int param_1)

{
  if (param_1 == 2) {
    SurfaceTool::optimize_vertex_cache_func = 0;
    SurfaceTool::optimize_vertex_fetch_remap_func = 0;
    SurfaceTool::simplify_func = 0;
    SurfaceTool::simplify_scale_func = 0;
    SurfaceTool::generate_remap_func = 0;
    SurfaceTool::remap_vertex_func = 0;
    _remap_index_func = 0;
  }
  return;
}


