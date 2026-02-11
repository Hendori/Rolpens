
/* basisu::opencl_init(bool) */

undefined8 basisu::opencl_init(bool param_1)

{
  return 0;
}



/* basisu::opencl_deinit() */

void basisu::opencl_deinit(void)

{
  return;
}



/* basisu::opencl_is_available() */

undefined8 basisu::opencl_is_available(void)

{
  return 0;
}



/* basisu::opencl_create_context() */

undefined8 basisu::opencl_create_context(void)

{
  return 0;
}



/* basisu::opencl_destroy_context(basisu::opencl_context*) */

void basisu::opencl_destroy_context(opencl_context *param_1)

{
  return;
}



/* basisu::opencl_set_pixel_blocks(basisu::opencl_context*, unsigned int, basisu::cl_pixel_block
   const*) */

undefined8
basisu::opencl_set_pixel_blocks(opencl_context *param_1,uint param_2,cl_pixel_block *param_3)

{
  return 0;
}



/* basisu::opencl_encode_etc1s_blocks(basisu::opencl_context*, basisu::etc_block*, bool, unsigned
   int) */

undefined8
basisu::opencl_encode_etc1s_blocks
          (opencl_context *param_1,etc_block *param_2,bool param_3,uint param_4)

{
  return 0;
}



/* basisu::opencl_encode_etc1s_pixel_clusters(basisu::opencl_context*, basisu::etc_block*, unsigned
   int, basisu::cl_pixel_cluster const*, unsigned long, basisu::color_rgba const*, unsigned int
   const*, bool, unsigned int) */

undefined8
basisu::opencl_encode_etc1s_pixel_clusters
          (opencl_context *param_1,etc_block *param_2,uint param_3,cl_pixel_cluster *param_4,
          ulong param_5,color_rgba *param_6,uint *param_7,bool param_8,uint param_9)

{
  return 0;
}



/* basisu::opencl_refine_endpoint_clusterization(basisu::opencl_context*,
   basisu::cl_block_info_struct const*, unsigned int, basisu::cl_endpoint_cluster_struct const*,
   unsigned int const*, unsigned int*, bool) */

undefined8
basisu::opencl_refine_endpoint_clusterization
          (opencl_context *param_1,cl_block_info_struct *param_2,uint param_3,
          cl_endpoint_cluster_struct *param_4,uint *param_5,uint *param_6,bool param_7)

{
  return 0;
}



/* basisu::opencl_find_optimal_selector_clusters_for_each_block(basisu::opencl_context*,
   basisu::fosc_block_struct const*, unsigned int, basisu::fosc_selector_struct const*, unsigned int
   const*, unsigned int*, bool) */

undefined8
basisu::opencl_find_optimal_selector_clusters_for_each_block
          (opencl_context *param_1,fosc_block_struct *param_2,uint param_3,
          fosc_selector_struct *param_4,uint *param_5,uint *param_6,bool param_7)

{
  return 0;
}



/* basisu::opencl_determine_selectors(basisu::opencl_context*, basisu::color_rgba const*,
   basisu::etc_block*, bool) */

undefined8
basisu::opencl_determine_selectors
          (opencl_context *param_1,color_rgba *param_2,etc_block *param_3,bool param_4)

{
  return 0;
}



/* basisu::opencl_init(bool) */

void basisu::_GLOBAL__sub_I_opencl_init(void)

{
  return;
}


