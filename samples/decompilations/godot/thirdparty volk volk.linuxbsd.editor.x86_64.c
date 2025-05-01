
void vkGetInstanceProcAddrStub(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkGetInstanceProcAddr)();
  return;
}



void vkGetDeviceProcAddrStub(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*vkGetDeviceProcAddr)();
  return;
}



undefined8 nullProcAddrStub(void)

{
  return 0;
}



void volkGenLoadInstance(undefined8 param_1,code *param_2)

{
  vkCreateDevice = (*param_2)(param_1,"vkCreateDevice");
  vkDestroyInstance = (*param_2)(param_1,"vkDestroyInstance");
  vkEnumerateDeviceExtensionProperties = (*param_2)(param_1,"vkEnumerateDeviceExtensionProperties");
  vkEnumerateDeviceLayerProperties = (*param_2)(param_1,"vkEnumerateDeviceLayerProperties");
  vkEnumeratePhysicalDevices = (*param_2)(param_1,"vkEnumeratePhysicalDevices");
  vkGetDeviceProcAddr = (*param_2)(param_1,"vkGetDeviceProcAddr");
  vkGetPhysicalDeviceFeatures = (*param_2)(param_1,"vkGetPhysicalDeviceFeatures");
  vkGetPhysicalDeviceFormatProperties = (*param_2)(param_1,"vkGetPhysicalDeviceFormatProperties");
  vkGetPhysicalDeviceImageFormatProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceImageFormatProperties");
  vkGetPhysicalDeviceMemoryProperties = (*param_2)(param_1,"vkGetPhysicalDeviceMemoryProperties");
  vkGetPhysicalDeviceProperties = (*param_2)(param_1,"vkGetPhysicalDeviceProperties");
  vkGetPhysicalDeviceQueueFamilyProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties");
  vkGetPhysicalDeviceSparseImageFormatProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties");
  vkEnumeratePhysicalDeviceGroups = (*param_2)(param_1,"vkEnumeratePhysicalDeviceGroups");
  vkGetPhysicalDeviceExternalBufferProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalBufferProperties");
  vkGetPhysicalDeviceExternalFenceProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalFenceProperties");
  vkGetPhysicalDeviceExternalSemaphoreProperties =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalSemaphoreProperties");
  vkGetPhysicalDeviceFeatures2 = (*param_2)(param_1,"vkGetPhysicalDeviceFeatures2");
  vkGetPhysicalDeviceFormatProperties2 = (*param_2)(param_1,"vkGetPhysicalDeviceFormatProperties2");
  vkGetPhysicalDeviceImageFormatProperties2 =
       (*param_2)(param_1,"vkGetPhysicalDeviceImageFormatProperties2");
  vkGetPhysicalDeviceMemoryProperties2 = (*param_2)(param_1,"vkGetPhysicalDeviceMemoryProperties2");
  vkGetPhysicalDeviceProperties2 = (*param_2)(param_1,"vkGetPhysicalDeviceProperties2");
  vkGetPhysicalDeviceQueueFamilyProperties2 =
       (*param_2)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2");
  vkGetPhysicalDeviceSparseImageFormatProperties2 =
       (*param_2)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties2");
  vkGetPhysicalDeviceToolProperties = (*param_2)(param_1,"vkGetPhysicalDeviceToolProperties");
  vkAcquireDrmDisplayEXT = (*param_2)(param_1,"vkAcquireDrmDisplayEXT");
  vkGetDrmDisplayEXT = (*param_2)(param_1,"vkGetDrmDisplayEXT");
  vkGetPhysicalDeviceCalibrateableTimeDomainsEXT =
       (*param_2)(param_1,"vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
  vkCreateDebugReportCallbackEXT = (*param_2)(param_1,"vkCreateDebugReportCallbackEXT");
  vkDebugReportMessageEXT = (*param_2)(param_1,"vkDebugReportMessageEXT");
  vkDestroyDebugReportCallbackEXT = (*param_2)(param_1,"vkDestroyDebugReportCallbackEXT");
  vkCmdBeginDebugUtilsLabelEXT = (*param_2)(param_1,"vkCmdBeginDebugUtilsLabelEXT");
  vkCmdEndDebugUtilsLabelEXT = (*param_2)(param_1,"vkCmdEndDebugUtilsLabelEXT");
  vkCmdInsertDebugUtilsLabelEXT = (*param_2)(param_1,"vkCmdInsertDebugUtilsLabelEXT");
  vkCreateDebugUtilsMessengerEXT = (*param_2)(param_1,"vkCreateDebugUtilsMessengerEXT");
  vkDestroyDebugUtilsMessengerEXT = (*param_2)(param_1,"vkDestroyDebugUtilsMessengerEXT");
  vkQueueBeginDebugUtilsLabelEXT = (*param_2)(param_1,"vkQueueBeginDebugUtilsLabelEXT");
  vkQueueEndDebugUtilsLabelEXT = (*param_2)(param_1,"vkQueueEndDebugUtilsLabelEXT");
  vkQueueInsertDebugUtilsLabelEXT = (*param_2)(param_1,"vkQueueInsertDebugUtilsLabelEXT");
  vkSetDebugUtilsObjectNameEXT = (*param_2)(param_1,"vkSetDebugUtilsObjectNameEXT");
  vkSetDebugUtilsObjectTagEXT = (*param_2)(param_1,"vkSetDebugUtilsObjectTagEXT");
  vkSubmitDebugUtilsMessageEXT = (*param_2)(param_1,"vkSubmitDebugUtilsMessageEXT");
  vkReleaseDisplayEXT = (*param_2)(param_1,"vkReleaseDisplayEXT");
  vkGetPhysicalDeviceSurfaceCapabilities2EXT =
       (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceCapabilities2EXT");
  vkCreateHeadlessSurfaceEXT = (*param_2)(param_1,"vkCreateHeadlessSurfaceEXT");
  vkGetPhysicalDeviceMultisamplePropertiesEXT =
       (*param_2)(param_1,"vkGetPhysicalDeviceMultisamplePropertiesEXT");
  vkGetPhysicalDeviceToolPropertiesEXT = (*param_2)(param_1,"vkGetPhysicalDeviceToolPropertiesEXT");
  vkGetPhysicalDeviceCalibrateableTimeDomainsKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
  vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
  vkEnumeratePhysicalDeviceGroupsKHR = (*param_2)(param_1,"vkEnumeratePhysicalDeviceGroupsKHR");
  vkCreateDisplayModeKHR = (*param_2)(param_1,"vkCreateDisplayModeKHR");
  vkCreateDisplayPlaneSurfaceKHR = (*param_2)(param_1,"vkCreateDisplayPlaneSurfaceKHR");
  vkGetDisplayModePropertiesKHR = (*param_2)(param_1,"vkGetDisplayModePropertiesKHR");
  vkGetDisplayPlaneCapabilitiesKHR = (*param_2)(param_1,"vkGetDisplayPlaneCapabilitiesKHR");
  vkGetDisplayPlaneSupportedDisplaysKHR =
       (*param_2)(param_1,"vkGetDisplayPlaneSupportedDisplaysKHR");
  vkGetPhysicalDeviceDisplayPlanePropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
  vkGetPhysicalDeviceDisplayPropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceDisplayPropertiesKHR");
  vkGetPhysicalDeviceExternalFencePropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalFencePropertiesKHR");
  vkGetPhysicalDeviceExternalBufferPropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalBufferPropertiesKHR");
  vkGetPhysicalDeviceExternalSemaphorePropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
  vkGetPhysicalDeviceFragmentShadingRatesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceFragmentShadingRatesKHR");
  vkGetDisplayModeProperties2KHR = (*param_2)(param_1,"vkGetDisplayModeProperties2KHR");
  vkGetDisplayPlaneCapabilities2KHR = (*param_2)(param_1,"vkGetDisplayPlaneCapabilities2KHR");
  vkGetPhysicalDeviceDisplayPlaneProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
  vkGetPhysicalDeviceDisplayProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceDisplayProperties2KHR");
  vkGetPhysicalDeviceFeatures2KHR = (*param_2)(param_1,"vkGetPhysicalDeviceFeatures2KHR");
  vkGetPhysicalDeviceFormatProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceFormatProperties2KHR");
  vkGetPhysicalDeviceImageFormatProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceImageFormatProperties2KHR");
  vkGetPhysicalDeviceMemoryProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceMemoryProperties2KHR");
  vkGetPhysicalDeviceProperties2KHR = (*param_2)(param_1,"vkGetPhysicalDeviceProperties2KHR");
  vkGetPhysicalDeviceQueueFamilyProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceQueueFamilyProperties2KHR");
  vkGetPhysicalDeviceSparseImageFormatProperties2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
  vkGetPhysicalDeviceSurfaceCapabilities2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceCapabilities2KHR");
  vkGetPhysicalDeviceSurfaceFormats2KHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceFormats2KHR");
  vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR =
       (*param_2)(param_1,"vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
  vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
  vkDestroySurfaceKHR = (*param_2)(param_1,"vkDestroySurfaceKHR");
  vkGetPhysicalDeviceSurfaceCapabilitiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
  vkGetPhysicalDeviceSurfaceFormatsKHR = (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceFormatsKHR");
  vkGetPhysicalDeviceSurfacePresentModesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceSurfacePresentModesKHR");
  vkGetPhysicalDeviceSurfaceSupportKHR = (*param_2)(param_1,"vkGetPhysicalDeviceSurfaceSupportKHR");
  vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
  vkGetPhysicalDeviceVideoCapabilitiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceVideoCapabilitiesKHR");
  vkGetPhysicalDeviceVideoFormatPropertiesKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceVideoFormatPropertiesKHR");
  vkCreateXlibSurfaceKHR = (*param_2)(param_1,"vkCreateXlibSurfaceKHR");
  vkGetPhysicalDeviceXlibPresentationSupportKHR =
       (*param_2)(param_1,"vkGetPhysicalDeviceXlibPresentationSupportKHR");
  vkGetPhysicalDeviceCooperativeMatrixPropertiesNV =
       (*param_2)(param_1,"vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
  vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV =
       (*param_2)(param_1,"vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
  vkGetPhysicalDeviceExternalImageFormatPropertiesNV =
       (*param_2)(param_1,"vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
  vkGetPhysicalDeviceOpticalFlowImageFormatsNV =
       (*param_2)(param_1,"vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
  vkGetPhysicalDevicePresentRectanglesKHR =
       (*param_2)(param_1,"vkGetPhysicalDevicePresentRectanglesKHR");
  return;
}



void volkGenLoadDevice(undefined8 param_1,code *param_2)

{
  vkAllocateCommandBuffers = (*param_2)(param_1,"vkAllocateCommandBuffers");
  vkAllocateDescriptorSets = (*param_2)(param_1,"vkAllocateDescriptorSets");
  vkAllocateMemory = (*param_2)(param_1,"vkAllocateMemory");
  vkBeginCommandBuffer = (*param_2)(param_1,"vkBeginCommandBuffer");
  vkBindBufferMemory = (*param_2)(param_1,"vkBindBufferMemory");
  vkBindImageMemory = (*param_2)(param_1,"vkBindImageMemory");
  vkCmdBeginQuery = (*param_2)(param_1,"vkCmdBeginQuery");
  vkCmdBeginRenderPass = (*param_2)(param_1,"vkCmdBeginRenderPass");
  vkCmdBindDescriptorSets = (*param_2)(param_1,"vkCmdBindDescriptorSets");
  vkCmdBindIndexBuffer = (*param_2)(param_1,"vkCmdBindIndexBuffer");
  vkCmdBindPipeline = (*param_2)(param_1,"vkCmdBindPipeline");
  vkCmdBindVertexBuffers = (*param_2)(param_1,"vkCmdBindVertexBuffers");
  vkCmdBlitImage = (*param_2)(param_1,"vkCmdBlitImage");
  vkCmdClearAttachments = (*param_2)(param_1,"vkCmdClearAttachments");
  vkCmdClearColorImage = (*param_2)(param_1,"vkCmdClearColorImage");
  vkCmdClearDepthStencilImage = (*param_2)(param_1,"vkCmdClearDepthStencilImage");
  vkCmdCopyBuffer = (*param_2)(param_1,"vkCmdCopyBuffer");
  vkCmdCopyBufferToImage = (*param_2)(param_1,"vkCmdCopyBufferToImage");
  vkCmdCopyImage = (*param_2)(param_1,"vkCmdCopyImage");
  vkCmdCopyImageToBuffer = (*param_2)(param_1,"vkCmdCopyImageToBuffer");
  vkCmdCopyQueryPoolResults = (*param_2)(param_1,"vkCmdCopyQueryPoolResults");
  vkCmdDispatch = (*param_2)(param_1,"vkCmdDispatch");
  vkCmdDispatchIndirect = (*param_2)(param_1,"vkCmdDispatchIndirect");
  vkCmdDraw = (*param_2)(param_1,"vkCmdDraw");
  vkCmdDrawIndexed = (*param_2)(param_1,"vkCmdDrawIndexed");
  vkCmdDrawIndexedIndirect = (*param_2)(param_1,"vkCmdDrawIndexedIndirect");
  vkCmdDrawIndirect = (*param_2)(param_1,"vkCmdDrawIndirect");
  vkCmdEndQuery = (*param_2)(param_1,"vkCmdEndQuery");
  vkCmdEndRenderPass = (*param_2)(param_1,"vkCmdEndRenderPass");
  vkCmdExecuteCommands = (*param_2)(param_1,"vkCmdExecuteCommands");
  vkCmdFillBuffer = (*param_2)(param_1,"vkCmdFillBuffer");
  vkCmdNextSubpass = (*param_2)(param_1,"vkCmdNextSubpass");
  vkCmdPipelineBarrier = (*param_2)(param_1,"vkCmdPipelineBarrier");
  vkCmdPushConstants = (*param_2)(param_1,"vkCmdPushConstants");
  vkCmdResetEvent = (*param_2)(param_1,"vkCmdResetEvent");
  vkCmdResetQueryPool = (*param_2)(param_1,"vkCmdResetQueryPool");
  vkCmdResolveImage = (*param_2)(param_1,"vkCmdResolveImage");
  vkCmdSetBlendConstants = (*param_2)(param_1,"vkCmdSetBlendConstants");
  vkCmdSetDepthBias = (*param_2)(param_1,"vkCmdSetDepthBias");
  vkCmdSetDepthBounds = (*param_2)(param_1,"vkCmdSetDepthBounds");
  vkCmdSetEvent = (*param_2)(param_1,"vkCmdSetEvent");
  vkCmdSetLineWidth = (*param_2)(param_1,"vkCmdSetLineWidth");
  vkCmdSetScissor = (*param_2)(param_1,"vkCmdSetScissor");
  vkCmdSetStencilCompareMask = (*param_2)(param_1,"vkCmdSetStencilCompareMask");
  vkCmdSetStencilReference = (*param_2)(param_1,"vkCmdSetStencilReference");
  vkCmdSetStencilWriteMask = (*param_2)(param_1,"vkCmdSetStencilWriteMask");
  vkCmdSetViewport = (*param_2)(param_1,"vkCmdSetViewport");
  vkCmdUpdateBuffer = (*param_2)(param_1,"vkCmdUpdateBuffer");
  vkCmdWaitEvents = (*param_2)(param_1,"vkCmdWaitEvents");
  vkCmdWriteTimestamp = (*param_2)(param_1,"vkCmdWriteTimestamp");
  vkCreateBuffer = (*param_2)(param_1,"vkCreateBuffer");
  vkCreateBufferView = (*param_2)(param_1,"vkCreateBufferView");
  vkCreateCommandPool = (*param_2)(param_1,"vkCreateCommandPool");
  vkCreateComputePipelines = (*param_2)(param_1,"vkCreateComputePipelines");
  vkCreateDescriptorPool = (*param_2)(param_1,"vkCreateDescriptorPool");
  vkCreateDescriptorSetLayout = (*param_2)(param_1,"vkCreateDescriptorSetLayout");
  vkCreateEvent = (*param_2)(param_1,"vkCreateEvent");
  vkCreateFence = (*param_2)(param_1,"vkCreateFence");
  vkCreateFramebuffer = (*param_2)(param_1,"vkCreateFramebuffer");
  vkCreateGraphicsPipelines = (*param_2)(param_1,"vkCreateGraphicsPipelines");
  vkCreateImage = (*param_2)(param_1,"vkCreateImage");
  vkCreateImageView = (*param_2)(param_1,"vkCreateImageView");
  vkCreatePipelineCache = (*param_2)(param_1,"vkCreatePipelineCache");
  vkCreatePipelineLayout = (*param_2)(param_1,"vkCreatePipelineLayout");
  vkCreateQueryPool = (*param_2)(param_1,"vkCreateQueryPool");
  vkCreateRenderPass = (*param_2)(param_1,"vkCreateRenderPass");
  vkCreateSampler = (*param_2)(param_1,"vkCreateSampler");
  vkCreateSemaphore = (*param_2)(param_1,"vkCreateSemaphore");
  vkCreateShaderModule = (*param_2)(param_1,"vkCreateShaderModule");
  vkDestroyBuffer = (*param_2)(param_1,"vkDestroyBuffer");
  vkDestroyBufferView = (*param_2)(param_1,"vkDestroyBufferView");
  vkDestroyCommandPool = (*param_2)(param_1,"vkDestroyCommandPool");
  vkDestroyDescriptorPool = (*param_2)(param_1,"vkDestroyDescriptorPool");
  vkDestroyDescriptorSetLayout = (*param_2)(param_1,"vkDestroyDescriptorSetLayout");
  vkDestroyDevice = (*param_2)(param_1,"vkDestroyDevice");
  vkDestroyEvent = (*param_2)(param_1,"vkDestroyEvent");
  vkDestroyFence = (*param_2)(param_1,"vkDestroyFence");
  vkDestroyFramebuffer = (*param_2)(param_1,"vkDestroyFramebuffer");
  vkDestroyImage = (*param_2)(param_1,"vkDestroyImage");
  vkDestroyImageView = (*param_2)(param_1,"vkDestroyImageView");
  vkDestroyPipeline = (*param_2)(param_1,"vkDestroyPipeline");
  vkDestroyPipelineCache = (*param_2)(param_1,"vkDestroyPipelineCache");
  vkDestroyPipelineLayout = (*param_2)(param_1,"vkDestroyPipelineLayout");
  vkDestroyQueryPool = (*param_2)(param_1,"vkDestroyQueryPool");
  vkDestroyRenderPass = (*param_2)(param_1,"vkDestroyRenderPass");
  vkDestroySampler = (*param_2)(param_1,"vkDestroySampler");
  vkDestroySemaphore = (*param_2)(param_1,"vkDestroySemaphore");
  vkDestroyShaderModule = (*param_2)(param_1,"vkDestroyShaderModule");
  vkDeviceWaitIdle = (*param_2)(param_1,"vkDeviceWaitIdle");
  vkEndCommandBuffer = (*param_2)(param_1,"vkEndCommandBuffer");
  vkFlushMappedMemoryRanges = (*param_2)(param_1,"vkFlushMappedMemoryRanges");
  vkFreeCommandBuffers = (*param_2)(param_1,"vkFreeCommandBuffers");
  vkFreeDescriptorSets = (*param_2)(param_1,"vkFreeDescriptorSets");
  vkFreeMemory = (*param_2)(param_1,"vkFreeMemory");
  vkGetBufferMemoryRequirements = (*param_2)(param_1,"vkGetBufferMemoryRequirements");
  vkGetDeviceMemoryCommitment = (*param_2)(param_1,"vkGetDeviceMemoryCommitment");
  vkGetDeviceQueue = (*param_2)(param_1,"vkGetDeviceQueue");
  vkGetEventStatus = (*param_2)(param_1,"vkGetEventStatus");
  vkGetFenceStatus = (*param_2)(param_1,"vkGetFenceStatus");
  vkGetImageMemoryRequirements = (*param_2)(param_1,"vkGetImageMemoryRequirements");
  vkGetImageSparseMemoryRequirements = (*param_2)(param_1,"vkGetImageSparseMemoryRequirements");
  vkGetImageSubresourceLayout = (*param_2)(param_1,"vkGetImageSubresourceLayout");
  vkGetPipelineCacheData = (*param_2)(param_1,"vkGetPipelineCacheData");
  vkGetQueryPoolResults = (*param_2)(param_1,"vkGetQueryPoolResults");
  vkGetRenderAreaGranularity = (*param_2)(param_1,"vkGetRenderAreaGranularity");
  vkInvalidateMappedMemoryRanges = (*param_2)(param_1,"vkInvalidateMappedMemoryRanges");
  vkMapMemory = (*param_2)(param_1,"vkMapMemory");
  vkMergePipelineCaches = (*param_2)(param_1,"vkMergePipelineCaches");
  vkQueueBindSparse = (*param_2)(param_1,"vkQueueBindSparse");
  vkQueueSubmit = (*param_2)(param_1,"vkQueueSubmit");
  vkQueueWaitIdle = (*param_2)(param_1,"vkQueueWaitIdle");
  vkResetCommandBuffer = (*param_2)(param_1,"vkResetCommandBuffer");
  vkResetCommandPool = (*param_2)(param_1,"vkResetCommandPool");
  vkResetDescriptorPool = (*param_2)(param_1,"vkResetDescriptorPool");
  vkResetEvent = (*param_2)(param_1,"vkResetEvent");
  vkResetFences = (*param_2)(param_1,"vkResetFences");
  vkSetEvent = (*param_2)(param_1,"vkSetEvent");
  vkUnmapMemory = (*param_2)(param_1,"vkUnmapMemory");
  vkUpdateDescriptorSets = (*param_2)(param_1,"vkUpdateDescriptorSets");
  vkWaitForFences = (*param_2)(param_1,"vkWaitForFences");
  vkBindBufferMemory2 = (*param_2)(param_1,"vkBindBufferMemory2");
  vkBindImageMemory2 = (*param_2)(param_1,"vkBindImageMemory2");
  vkCmdDispatchBase = (*param_2)(param_1,"vkCmdDispatchBase");
  vkCmdSetDeviceMask = (*param_2)(param_1,"vkCmdSetDeviceMask");
  vkCreateDescriptorUpdateTemplate = (*param_2)(param_1,"vkCreateDescriptorUpdateTemplate");
  vkCreateSamplerYcbcrConversion = (*param_2)(param_1,"vkCreateSamplerYcbcrConversion");
  vkDestroyDescriptorUpdateTemplate = (*param_2)(param_1,"vkDestroyDescriptorUpdateTemplate");
  vkDestroySamplerYcbcrConversion = (*param_2)(param_1,"vkDestroySamplerYcbcrConversion");
  vkGetBufferMemoryRequirements2 = (*param_2)(param_1,"vkGetBufferMemoryRequirements2");
  vkGetDescriptorSetLayoutSupport = (*param_2)(param_1,"vkGetDescriptorSetLayoutSupport");
  vkGetDeviceGroupPeerMemoryFeatures = (*param_2)(param_1,"vkGetDeviceGroupPeerMemoryFeatures");
  vkGetDeviceQueue2 = (*param_2)(param_1,"vkGetDeviceQueue2");
  vkGetImageMemoryRequirements2 = (*param_2)(param_1,"vkGetImageMemoryRequirements2");
  vkGetImageSparseMemoryRequirements2 = (*param_2)(param_1,"vkGetImageSparseMemoryRequirements2");
  vkTrimCommandPool = (*param_2)(param_1,"vkTrimCommandPool");
  vkUpdateDescriptorSetWithTemplate = (*param_2)(param_1,"vkUpdateDescriptorSetWithTemplate");
  vkCmdBeginRenderPass2 = (*param_2)(param_1,"vkCmdBeginRenderPass2");
  vkCmdDrawIndexedIndirectCount = (*param_2)(param_1,"vkCmdDrawIndexedIndirectCount");
  vkCmdDrawIndirectCount = (*param_2)(param_1,"vkCmdDrawIndirectCount");
  vkCmdEndRenderPass2 = (*param_2)(param_1,"vkCmdEndRenderPass2");
  vkCmdNextSubpass2 = (*param_2)(param_1,"vkCmdNextSubpass2");
  vkCreateRenderPass2 = (*param_2)(param_1,"vkCreateRenderPass2");
  vkGetBufferDeviceAddress = (*param_2)(param_1,"vkGetBufferDeviceAddress");
  vkGetBufferOpaqueCaptureAddress = (*param_2)(param_1,"vkGetBufferOpaqueCaptureAddress");
  vkGetDeviceMemoryOpaqueCaptureAddress =
       (*param_2)(param_1,"vkGetDeviceMemoryOpaqueCaptureAddress");
  vkGetSemaphoreCounterValue = (*param_2)(param_1,"vkGetSemaphoreCounterValue");
  vkResetQueryPool = (*param_2)(param_1,"vkResetQueryPool");
  vkSignalSemaphore = (*param_2)(param_1,"vkSignalSemaphore");
  vkWaitSemaphores = (*param_2)(param_1,"vkWaitSemaphores");
  vkCmdBeginRendering = (*param_2)(param_1,"vkCmdBeginRendering");
  vkCmdBindVertexBuffers2 = (*param_2)(param_1,"vkCmdBindVertexBuffers2");
  vkCmdBlitImage2 = (*param_2)(param_1,"vkCmdBlitImage2");
  vkCmdCopyBuffer2 = (*param_2)(param_1,"vkCmdCopyBuffer2");
  vkCmdCopyBufferToImage2 = (*param_2)(param_1,"vkCmdCopyBufferToImage2");
  vkCmdCopyImage2 = (*param_2)(param_1,"vkCmdCopyImage2");
  vkCmdCopyImageToBuffer2 = (*param_2)(param_1,"vkCmdCopyImageToBuffer2");
  vkCmdEndRendering = (*param_2)(param_1,"vkCmdEndRendering");
  vkCmdPipelineBarrier2 = (*param_2)(param_1,"vkCmdPipelineBarrier2");
  vkCmdResetEvent2 = (*param_2)(param_1,"vkCmdResetEvent2");
  vkCmdResolveImage2 = (*param_2)(param_1,"vkCmdResolveImage2");
  vkCmdSetCullMode = (*param_2)(param_1,"vkCmdSetCullMode");
  vkCmdSetDepthBiasEnable = (*param_2)(param_1,"vkCmdSetDepthBiasEnable");
  vkCmdSetDepthBoundsTestEnable = (*param_2)(param_1,"vkCmdSetDepthBoundsTestEnable");
  vkCmdSetDepthCompareOp = (*param_2)(param_1,"vkCmdSetDepthCompareOp");
  vkCmdSetDepthTestEnable = (*param_2)(param_1,"vkCmdSetDepthTestEnable");
  vkCmdSetDepthWriteEnable = (*param_2)(param_1,"vkCmdSetDepthWriteEnable");
  vkCmdSetEvent2 = (*param_2)(param_1,"vkCmdSetEvent2");
  vkCmdSetFrontFace = (*param_2)(param_1,"vkCmdSetFrontFace");
  vkCmdSetPrimitiveRestartEnable = (*param_2)(param_1,"vkCmdSetPrimitiveRestartEnable");
  vkCmdSetPrimitiveTopology = (*param_2)(param_1,"vkCmdSetPrimitiveTopology");
  vkCmdSetRasterizerDiscardEnable = (*param_2)(param_1,"vkCmdSetRasterizerDiscardEnable");
  vkCmdSetScissorWithCount = (*param_2)(param_1,"vkCmdSetScissorWithCount");
  vkCmdSetStencilOp = (*param_2)(param_1,"vkCmdSetStencilOp");
  vkCmdSetStencilTestEnable = (*param_2)(param_1,"vkCmdSetStencilTestEnable");
  vkCmdSetViewportWithCount = (*param_2)(param_1,"vkCmdSetViewportWithCount");
  vkCmdWaitEvents2 = (*param_2)(param_1,"vkCmdWaitEvents2");
  vkCmdWriteTimestamp2 = (*param_2)(param_1,"vkCmdWriteTimestamp2");
  vkCreatePrivateDataSlot = (*param_2)(param_1,"vkCreatePrivateDataSlot");
  vkDestroyPrivateDataSlot = (*param_2)(param_1,"vkDestroyPrivateDataSlot");
  vkGetDeviceBufferMemoryRequirements = (*param_2)(param_1,"vkGetDeviceBufferMemoryRequirements");
  vkGetDeviceImageMemoryRequirements = (*param_2)(param_1,"vkGetDeviceImageMemoryRequirements");
  vkGetDeviceImageSparseMemoryRequirements =
       (*param_2)(param_1,"vkGetDeviceImageSparseMemoryRequirements");
  vkGetPrivateData = (*param_2)(param_1,"vkGetPrivateData");
  vkQueueSubmit2 = (*param_2)(param_1,"vkQueueSubmit2");
  vkSetPrivateData = (*param_2)(param_1,"vkSetPrivateData");
  vkCmdWriteBufferMarkerAMD = (*param_2)(param_1,"vkCmdWriteBufferMarkerAMD");
  vkSetLocalDimmingAMD = (*param_2)(param_1,"vkSetLocalDimmingAMD");
  vkCmdDrawIndexedIndirectCountAMD = (*param_2)(param_1,"vkCmdDrawIndexedIndirectCountAMD");
  vkCmdDrawIndirectCountAMD = (*param_2)(param_1,"vkCmdDrawIndirectCountAMD");
  vkGetShaderInfoAMD = (*param_2)(param_1,"vkGetShaderInfoAMD");
  vkCmdSetAttachmentFeedbackLoopEnableEXT =
       (*param_2)(param_1,"vkCmdSetAttachmentFeedbackLoopEnableEXT");
  vkGetBufferDeviceAddressEXT = (*param_2)(param_1,"vkGetBufferDeviceAddressEXT");
  vkGetCalibratedTimestampsEXT = (*param_2)(param_1,"vkGetCalibratedTimestampsEXT");
  vkCmdSetColorWriteEnableEXT = (*param_2)(param_1,"vkCmdSetColorWriteEnableEXT");
  vkCmdBeginConditionalRenderingEXT = (*param_2)(param_1,"vkCmdBeginConditionalRenderingEXT");
  vkCmdEndConditionalRenderingEXT = (*param_2)(param_1,"vkCmdEndConditionalRenderingEXT");
  vkCmdDebugMarkerBeginEXT = (*param_2)(param_1,"vkCmdDebugMarkerBeginEXT");
  vkCmdDebugMarkerEndEXT = (*param_2)(param_1,"vkCmdDebugMarkerEndEXT");
  vkCmdDebugMarkerInsertEXT = (*param_2)(param_1,"vkCmdDebugMarkerInsertEXT");
  vkDebugMarkerSetObjectNameEXT = (*param_2)(param_1,"vkDebugMarkerSetObjectNameEXT");
  vkDebugMarkerSetObjectTagEXT = (*param_2)(param_1,"vkDebugMarkerSetObjectTagEXT");
  vkCmdSetDepthBias2EXT = (*param_2)(param_1,"vkCmdSetDepthBias2EXT");
  vkCmdBindDescriptorBufferEmbeddedSamplersEXT =
       (*param_2)(param_1,"vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
  vkCmdBindDescriptorBuffersEXT = (*param_2)(param_1,"vkCmdBindDescriptorBuffersEXT");
  vkCmdSetDescriptorBufferOffsetsEXT = (*param_2)(param_1,"vkCmdSetDescriptorBufferOffsetsEXT");
  vkGetBufferOpaqueCaptureDescriptorDataEXT =
       (*param_2)(param_1,"vkGetBufferOpaqueCaptureDescriptorDataEXT");
  vkGetDescriptorEXT = (*param_2)(param_1,"vkGetDescriptorEXT");
  vkGetDescriptorSetLayoutBindingOffsetEXT =
       (*param_2)(param_1,"vkGetDescriptorSetLayoutBindingOffsetEXT");
  vkGetDescriptorSetLayoutSizeEXT = (*param_2)(param_1,"vkGetDescriptorSetLayoutSizeEXT");
  vkGetImageOpaqueCaptureDescriptorDataEXT =
       (*param_2)(param_1,"vkGetImageOpaqueCaptureDescriptorDataEXT");
  vkGetImageViewOpaqueCaptureDescriptorDataEXT =
       (*param_2)(param_1,"vkGetImageViewOpaqueCaptureDescriptorDataEXT");
  vkGetSamplerOpaqueCaptureDescriptorDataEXT =
       (*param_2)(param_1,"vkGetSamplerOpaqueCaptureDescriptorDataEXT");
  vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT =
       (*param_2)(param_1,"vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
  vkGetDeviceFaultInfoEXT = (*param_2)(param_1,"vkGetDeviceFaultInfoEXT");
  vkCmdSetDiscardRectangleEXT = (*param_2)(param_1,"vkCmdSetDiscardRectangleEXT");
  vkCmdSetDiscardRectangleEnableEXT = (*param_2)(param_1,"vkCmdSetDiscardRectangleEnableEXT");
  vkCmdSetDiscardRectangleModeEXT = (*param_2)(param_1,"vkCmdSetDiscardRectangleModeEXT");
  vkDisplayPowerControlEXT = (*param_2)(param_1,"vkDisplayPowerControlEXT");
  vkGetSwapchainCounterEXT = (*param_2)(param_1,"vkGetSwapchainCounterEXT");
  vkRegisterDeviceEventEXT = (*param_2)(param_1,"vkRegisterDeviceEventEXT");
  vkRegisterDisplayEventEXT = (*param_2)(param_1,"vkRegisterDisplayEventEXT");
  vkGetMemoryHostPointerPropertiesEXT = (*param_2)(param_1,"vkGetMemoryHostPointerPropertiesEXT");
  vkSetHdrMetadataEXT = (*param_2)(param_1,"vkSetHdrMetadataEXT");
  vkCopyImageToImageEXT = (*param_2)(param_1,"vkCopyImageToImageEXT");
  vkCopyImageToMemoryEXT = (*param_2)(param_1,"vkCopyImageToMemoryEXT");
  vkCopyMemoryToImageEXT = (*param_2)(param_1,"vkCopyMemoryToImageEXT");
  vkTransitionImageLayoutEXT = (*param_2)(param_1,"vkTransitionImageLayoutEXT");
  vkResetQueryPoolEXT = (*param_2)(param_1,"vkResetQueryPoolEXT");
  vkGetImageDrmFormatModifierPropertiesEXT =
       (*param_2)(param_1,"vkGetImageDrmFormatModifierPropertiesEXT");
  vkCmdSetLineStippleEXT = (*param_2)(param_1,"vkCmdSetLineStippleEXT");
  vkCmdDrawMeshTasksEXT = (*param_2)(param_1,"vkCmdDrawMeshTasksEXT");
  vkCmdDrawMeshTasksIndirectCountEXT = (*param_2)(param_1,"vkCmdDrawMeshTasksIndirectCountEXT");
  vkCmdDrawMeshTasksIndirectEXT = (*param_2)(param_1,"vkCmdDrawMeshTasksIndirectEXT");
  vkCmdDrawMultiEXT = (*param_2)(param_1,"vkCmdDrawMultiEXT");
  vkCmdDrawMultiIndexedEXT = (*param_2)(param_1,"vkCmdDrawMultiIndexedEXT");
  vkBuildMicromapsEXT = (*param_2)(param_1,"vkBuildMicromapsEXT");
  vkCmdBuildMicromapsEXT = (*param_2)(param_1,"vkCmdBuildMicromapsEXT");
  vkCmdCopyMemoryToMicromapEXT = (*param_2)(param_1,"vkCmdCopyMemoryToMicromapEXT");
  vkCmdCopyMicromapEXT = (*param_2)(param_1,"vkCmdCopyMicromapEXT");
  vkCmdCopyMicromapToMemoryEXT = (*param_2)(param_1,"vkCmdCopyMicromapToMemoryEXT");
  vkCmdWriteMicromapsPropertiesEXT = (*param_2)(param_1,"vkCmdWriteMicromapsPropertiesEXT");
  vkCopyMemoryToMicromapEXT = (*param_2)(param_1,"vkCopyMemoryToMicromapEXT");
  vkCopyMicromapEXT = (*param_2)(param_1,"vkCopyMicromapEXT");
  vkCopyMicromapToMemoryEXT = (*param_2)(param_1,"vkCopyMicromapToMemoryEXT");
  vkCreateMicromapEXT = (*param_2)(param_1,"vkCreateMicromapEXT");
  vkDestroyMicromapEXT = (*param_2)(param_1,"vkDestroyMicromapEXT");
  vkGetDeviceMicromapCompatibilityEXT = (*param_2)(param_1,"vkGetDeviceMicromapCompatibilityEXT");
  vkGetMicromapBuildSizesEXT = (*param_2)(param_1,"vkGetMicromapBuildSizesEXT");
  vkWriteMicromapsPropertiesEXT = (*param_2)(param_1,"vkWriteMicromapsPropertiesEXT");
  vkSetDeviceMemoryPriorityEXT = (*param_2)(param_1,"vkSetDeviceMemoryPriorityEXT");
  vkGetPipelinePropertiesEXT = (*param_2)(param_1,"vkGetPipelinePropertiesEXT");
  vkCreatePrivateDataSlotEXT = (*param_2)(param_1,"vkCreatePrivateDataSlotEXT");
  vkDestroyPrivateDataSlotEXT = (*param_2)(param_1,"vkDestroyPrivateDataSlotEXT");
  vkGetPrivateDataEXT = (*param_2)(param_1,"vkGetPrivateDataEXT");
  vkSetPrivateDataEXT = (*param_2)(param_1,"vkSetPrivateDataEXT");
  vkCmdSetSampleLocationsEXT = (*param_2)(param_1,"vkCmdSetSampleLocationsEXT");
  vkGetShaderModuleCreateInfoIdentifierEXT =
       (*param_2)(param_1,"vkGetShaderModuleCreateInfoIdentifierEXT");
  vkGetShaderModuleIdentifierEXT = (*param_2)(param_1,"vkGetShaderModuleIdentifierEXT");
  vkCmdBindShadersEXT = (*param_2)(param_1,"vkCmdBindShadersEXT");
  vkCreateShadersEXT = (*param_2)(param_1,"vkCreateShadersEXT");
  vkDestroyShaderEXT = (*param_2)(param_1,"vkDestroyShaderEXT");
  vkGetShaderBinaryDataEXT = (*param_2)(param_1,"vkGetShaderBinaryDataEXT");
  vkReleaseSwapchainImagesEXT = (*param_2)(param_1,"vkReleaseSwapchainImagesEXT");
  vkCmdBeginQueryIndexedEXT = (*param_2)(param_1,"vkCmdBeginQueryIndexedEXT");
  vkCmdBeginTransformFeedbackEXT = (*param_2)(param_1,"vkCmdBeginTransformFeedbackEXT");
  vkCmdBindTransformFeedbackBuffersEXT = (*param_2)(param_1,"vkCmdBindTransformFeedbackBuffersEXT");
  vkCmdDrawIndirectByteCountEXT = (*param_2)(param_1,"vkCmdDrawIndirectByteCountEXT");
  vkCmdEndQueryIndexedEXT = (*param_2)(param_1,"vkCmdEndQueryIndexedEXT");
  vkCmdEndTransformFeedbackEXT = (*param_2)(param_1,"vkCmdEndTransformFeedbackEXT");
  vkCreateValidationCacheEXT = (*param_2)(param_1,"vkCreateValidationCacheEXT");
  vkDestroyValidationCacheEXT = (*param_2)(param_1,"vkDestroyValidationCacheEXT");
  vkGetValidationCacheDataEXT = (*param_2)(param_1,"vkGetValidationCacheDataEXT");
  vkMergeValidationCachesEXT = (*param_2)(param_1,"vkMergeValidationCachesEXT");
  vkGetPastPresentationTimingGOOGLE = (*param_2)(param_1,"vkGetPastPresentationTimingGOOGLE");
  vkGetRefreshCycleDurationGOOGLE = (*param_2)(param_1,"vkGetRefreshCycleDurationGOOGLE");
  vkCmdDrawClusterHUAWEI = (*param_2)(param_1,"vkCmdDrawClusterHUAWEI");
  vkCmdDrawClusterIndirectHUAWEI = (*param_2)(param_1,"vkCmdDrawClusterIndirectHUAWEI");
  vkCmdBindInvocationMaskHUAWEI = (*param_2)(param_1,"vkCmdBindInvocationMaskHUAWEI");
  vkCmdSubpassShadingHUAWEI = (*param_2)(param_1,"vkCmdSubpassShadingHUAWEI");
  vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI =
       (*param_2)(param_1,"vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
  vkAcquirePerformanceConfigurationINTEL =
       (*param_2)(param_1,"vkAcquirePerformanceConfigurationINTEL");
  vkCmdSetPerformanceMarkerINTEL = (*param_2)(param_1,"vkCmdSetPerformanceMarkerINTEL");
  vkCmdSetPerformanceOverrideINTEL = (*param_2)(param_1,"vkCmdSetPerformanceOverrideINTEL");
  vkCmdSetPerformanceStreamMarkerINTEL = (*param_2)(param_1,"vkCmdSetPerformanceStreamMarkerINTEL");
  vkGetPerformanceParameterINTEL = (*param_2)(param_1,"vkGetPerformanceParameterINTEL");
  vkInitializePerformanceApiINTEL = (*param_2)(param_1,"vkInitializePerformanceApiINTEL");
  vkQueueSetPerformanceConfigurationINTEL =
       (*param_2)(param_1,"vkQueueSetPerformanceConfigurationINTEL");
  vkReleasePerformanceConfigurationINTEL =
       (*param_2)(param_1,"vkReleasePerformanceConfigurationINTEL");
  vkUninitializePerformanceApiINTEL = (*param_2)(param_1,"vkUninitializePerformanceApiINTEL");
  vkBuildAccelerationStructuresKHR = (*param_2)(param_1,"vkBuildAccelerationStructuresKHR");
  vkCmdBuildAccelerationStructuresIndirectKHR =
       (*param_2)(param_1,"vkCmdBuildAccelerationStructuresIndirectKHR");
  vkCmdBuildAccelerationStructuresKHR = (*param_2)(param_1,"vkCmdBuildAccelerationStructuresKHR");
  vkCmdCopyAccelerationStructureKHR = (*param_2)(param_1,"vkCmdCopyAccelerationStructureKHR");
  vkCmdCopyAccelerationStructureToMemoryKHR =
       (*param_2)(param_1,"vkCmdCopyAccelerationStructureToMemoryKHR");
  vkCmdCopyMemoryToAccelerationStructureKHR =
       (*param_2)(param_1,"vkCmdCopyMemoryToAccelerationStructureKHR");
  vkCmdWriteAccelerationStructuresPropertiesKHR =
       (*param_2)(param_1,"vkCmdWriteAccelerationStructuresPropertiesKHR");
  vkCopyAccelerationStructureKHR = (*param_2)(param_1,"vkCopyAccelerationStructureKHR");
  vkCopyAccelerationStructureToMemoryKHR =
       (*param_2)(param_1,"vkCopyAccelerationStructureToMemoryKHR");
  vkCopyMemoryToAccelerationStructureKHR =
       (*param_2)(param_1,"vkCopyMemoryToAccelerationStructureKHR");
  vkCreateAccelerationStructureKHR = (*param_2)(param_1,"vkCreateAccelerationStructureKHR");
  vkDestroyAccelerationStructureKHR = (*param_2)(param_1,"vkDestroyAccelerationStructureKHR");
  vkGetAccelerationStructureBuildSizesKHR =
       (*param_2)(param_1,"vkGetAccelerationStructureBuildSizesKHR");
  vkGetAccelerationStructureDeviceAddressKHR =
       (*param_2)(param_1,"vkGetAccelerationStructureDeviceAddressKHR");
  vkGetDeviceAccelerationStructureCompatibilityKHR =
       (*param_2)(param_1,"vkGetDeviceAccelerationStructureCompatibilityKHR");
  vkWriteAccelerationStructuresPropertiesKHR =
       (*param_2)(param_1,"vkWriteAccelerationStructuresPropertiesKHR");
  vkBindBufferMemory2KHR = (*param_2)(param_1,"vkBindBufferMemory2KHR");
  vkBindImageMemory2KHR = (*param_2)(param_1,"vkBindImageMemory2KHR");
  vkGetBufferDeviceAddressKHR = (*param_2)(param_1,"vkGetBufferDeviceAddressKHR");
  vkGetBufferOpaqueCaptureAddressKHR = (*param_2)(param_1,"vkGetBufferOpaqueCaptureAddressKHR");
  vkGetDeviceMemoryOpaqueCaptureAddressKHR =
       (*param_2)(param_1,"vkGetDeviceMemoryOpaqueCaptureAddressKHR");
  vkGetCalibratedTimestampsKHR = (*param_2)(param_1,"vkGetCalibratedTimestampsKHR");
  vkCmdBlitImage2KHR = (*param_2)(param_1,"vkCmdBlitImage2KHR");
  vkCmdCopyBuffer2KHR = (*param_2)(param_1,"vkCmdCopyBuffer2KHR");
  vkCmdCopyBufferToImage2KHR = (*param_2)(param_1,"vkCmdCopyBufferToImage2KHR");
  vkCmdCopyImage2KHR = (*param_2)(param_1,"vkCmdCopyImage2KHR");
  vkCmdCopyImageToBuffer2KHR = (*param_2)(param_1,"vkCmdCopyImageToBuffer2KHR");
  vkCmdResolveImage2KHR = (*param_2)(param_1,"vkCmdResolveImage2KHR");
  vkCmdBeginRenderPass2KHR = (*param_2)(param_1,"vkCmdBeginRenderPass2KHR");
  vkCmdEndRenderPass2KHR = (*param_2)(param_1,"vkCmdEndRenderPass2KHR");
  vkCmdNextSubpass2KHR = (*param_2)(param_1,"vkCmdNextSubpass2KHR");
  vkCreateRenderPass2KHR = (*param_2)(param_1,"vkCreateRenderPass2KHR");
  vkCreateDeferredOperationKHR = (*param_2)(param_1,"vkCreateDeferredOperationKHR");
  vkDeferredOperationJoinKHR = (*param_2)(param_1,"vkDeferredOperationJoinKHR");
  vkDestroyDeferredOperationKHR = (*param_2)(param_1,"vkDestroyDeferredOperationKHR");
  vkGetDeferredOperationMaxConcurrencyKHR =
       (*param_2)(param_1,"vkGetDeferredOperationMaxConcurrencyKHR");
  vkGetDeferredOperationResultKHR = (*param_2)(param_1,"vkGetDeferredOperationResultKHR");
  vkCreateDescriptorUpdateTemplateKHR = (*param_2)(param_1,"vkCreateDescriptorUpdateTemplateKHR");
  vkDestroyDescriptorUpdateTemplateKHR = (*param_2)(param_1,"vkDestroyDescriptorUpdateTemplateKHR");
  vkUpdateDescriptorSetWithTemplateKHR = (*param_2)(param_1,"vkUpdateDescriptorSetWithTemplateKHR");
  vkCmdDispatchBaseKHR = (*param_2)(param_1,"vkCmdDispatchBaseKHR");
  vkCmdSetDeviceMaskKHR = (*param_2)(param_1,"vkCmdSetDeviceMaskKHR");
  vkGetDeviceGroupPeerMemoryFeaturesKHR =
       (*param_2)(param_1,"vkGetDeviceGroupPeerMemoryFeaturesKHR");
  vkCreateSharedSwapchainsKHR = (*param_2)(param_1,"vkCreateSharedSwapchainsKHR");
  vkCmdDrawIndexedIndirectCountKHR = (*param_2)(param_1,"vkCmdDrawIndexedIndirectCountKHR");
  vkCmdDrawIndirectCountKHR = (*param_2)(param_1,"vkCmdDrawIndirectCountKHR");
  vkCmdBeginRenderingKHR = (*param_2)(param_1,"vkCmdBeginRenderingKHR");
  vkCmdEndRenderingKHR = (*param_2)(param_1,"vkCmdEndRenderingKHR");
  vkCmdSetRenderingAttachmentLocationsKHR =
       (*param_2)(param_1,"vkCmdSetRenderingAttachmentLocationsKHR");
  vkCmdSetRenderingInputAttachmentIndicesKHR =
       (*param_2)(param_1,"vkCmdSetRenderingInputAttachmentIndicesKHR");
  vkGetFenceFdKHR = (*param_2)(param_1,"vkGetFenceFdKHR");
  vkImportFenceFdKHR = (*param_2)(param_1,"vkImportFenceFdKHR");
  vkGetMemoryFdKHR = (*param_2)(param_1,"vkGetMemoryFdKHR");
  vkGetMemoryFdPropertiesKHR = (*param_2)(param_1,"vkGetMemoryFdPropertiesKHR");
  vkGetSemaphoreFdKHR = (*param_2)(param_1,"vkGetSemaphoreFdKHR");
  vkImportSemaphoreFdKHR = (*param_2)(param_1,"vkImportSemaphoreFdKHR");
  vkCmdSetFragmentShadingRateKHR = (*param_2)(param_1,"vkCmdSetFragmentShadingRateKHR");
  vkGetBufferMemoryRequirements2KHR = (*param_2)(param_1,"vkGetBufferMemoryRequirements2KHR");
  vkGetImageMemoryRequirements2KHR = (*param_2)(param_1,"vkGetImageMemoryRequirements2KHR");
  vkGetImageSparseMemoryRequirements2KHR =
       (*param_2)(param_1,"vkGetImageSparseMemoryRequirements2KHR");
  vkCmdSetLineStippleKHR = (*param_2)(param_1,"vkCmdSetLineStippleKHR");
  vkTrimCommandPoolKHR = (*param_2)(param_1,"vkTrimCommandPoolKHR");
  vkGetDescriptorSetLayoutSupportKHR = (*param_2)(param_1,"vkGetDescriptorSetLayoutSupportKHR");
  vkGetDeviceBufferMemoryRequirementsKHR =
       (*param_2)(param_1,"vkGetDeviceBufferMemoryRequirementsKHR");
  vkGetDeviceImageMemoryRequirementsKHR =
       (*param_2)(param_1,"vkGetDeviceImageMemoryRequirementsKHR");
  vkGetDeviceImageSparseMemoryRequirementsKHR =
       (*param_2)(param_1,"vkGetDeviceImageSparseMemoryRequirementsKHR");
  vkCmdBindIndexBuffer2KHR = (*param_2)(param_1,"vkCmdBindIndexBuffer2KHR");
  vkGetDeviceImageSubresourceLayoutKHR = (*param_2)(param_1,"vkGetDeviceImageSubresourceLayoutKHR");
  vkGetImageSubresourceLayout2KHR = (*param_2)(param_1,"vkGetImageSubresourceLayout2KHR");
  vkGetRenderingAreaGranularityKHR = (*param_2)(param_1,"vkGetRenderingAreaGranularityKHR");
  vkCmdBindDescriptorSets2KHR = (*param_2)(param_1,"vkCmdBindDescriptorSets2KHR");
  vkCmdPushConstants2KHR = (*param_2)(param_1,"vkCmdPushConstants2KHR");
  vkCmdPushDescriptorSet2KHR = (*param_2)(param_1,"vkCmdPushDescriptorSet2KHR");
  vkCmdPushDescriptorSetWithTemplate2KHR =
       (*param_2)(param_1,"vkCmdPushDescriptorSetWithTemplate2KHR");
  vkCmdBindDescriptorBufferEmbeddedSamplers2EXT =
       (*param_2)(param_1,"vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
  vkCmdSetDescriptorBufferOffsets2EXT = (*param_2)(param_1,"vkCmdSetDescriptorBufferOffsets2EXT");
  vkMapMemory2KHR = (*param_2)(param_1,"vkMapMemory2KHR");
  vkUnmapMemory2KHR = (*param_2)(param_1,"vkUnmapMemory2KHR");
  vkAcquireProfilingLockKHR = (*param_2)(param_1,"vkAcquireProfilingLockKHR");
  vkReleaseProfilingLockKHR = (*param_2)(param_1,"vkReleaseProfilingLockKHR");
  vkGetPipelineExecutableInternalRepresentationsKHR =
       (*param_2)(param_1,"vkGetPipelineExecutableInternalRepresentationsKHR");
  vkGetPipelineExecutablePropertiesKHR = (*param_2)(param_1,"vkGetPipelineExecutablePropertiesKHR");
  vkGetPipelineExecutableStatisticsKHR = (*param_2)(param_1,"vkGetPipelineExecutableStatisticsKHR");
  vkWaitForPresentKHR = (*param_2)(param_1,"vkWaitForPresentKHR");
  vkCmdPushDescriptorSetKHR = (*param_2)(param_1,"vkCmdPushDescriptorSetKHR");
  vkCmdTraceRaysIndirect2KHR = (*param_2)(param_1,"vkCmdTraceRaysIndirect2KHR");
  vkCmdSetRayTracingPipelineStackSizeKHR =
       (*param_2)(param_1,"vkCmdSetRayTracingPipelineStackSizeKHR");
  vkCmdTraceRaysIndirectKHR = (*param_2)(param_1,"vkCmdTraceRaysIndirectKHR");
  vkCmdTraceRaysKHR = (*param_2)(param_1,"vkCmdTraceRaysKHR");
  vkCreateRayTracingPipelinesKHR = (*param_2)(param_1,"vkCreateRayTracingPipelinesKHR");
  vkGetRayTracingCaptureReplayShaderGroupHandlesKHR =
       (*param_2)(param_1,"vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
  vkGetRayTracingShaderGroupHandlesKHR = (*param_2)(param_1,"vkGetRayTracingShaderGroupHandlesKHR");
  vkGetRayTracingShaderGroupStackSizeKHR =
       (*param_2)(param_1,"vkGetRayTracingShaderGroupStackSizeKHR");
  vkCreateSamplerYcbcrConversionKHR = (*param_2)(param_1,"vkCreateSamplerYcbcrConversionKHR");
  vkDestroySamplerYcbcrConversionKHR = (*param_2)(param_1,"vkDestroySamplerYcbcrConversionKHR");
  vkGetSwapchainStatusKHR = (*param_2)(param_1,"vkGetSwapchainStatusKHR");
  vkAcquireNextImageKHR = (*param_2)(param_1,"vkAcquireNextImageKHR");
  vkCreateSwapchainKHR = (*param_2)(param_1,"vkCreateSwapchainKHR");
  vkDestroySwapchainKHR = (*param_2)(param_1,"vkDestroySwapchainKHR");
  vkGetSwapchainImagesKHR = (*param_2)(param_1,"vkGetSwapchainImagesKHR");
  vkQueuePresentKHR = (*param_2)(param_1,"vkQueuePresentKHR");
  vkCmdPipelineBarrier2KHR = (*param_2)(param_1,"vkCmdPipelineBarrier2KHR");
  vkCmdResetEvent2KHR = (*param_2)(param_1,"vkCmdResetEvent2KHR");
  vkCmdSetEvent2KHR = (*param_2)(param_1,"vkCmdSetEvent2KHR");
  vkCmdWaitEvents2KHR = (*param_2)(param_1,"vkCmdWaitEvents2KHR");
  vkCmdWriteTimestamp2KHR = (*param_2)(param_1,"vkCmdWriteTimestamp2KHR");
  vkQueueSubmit2KHR = (*param_2)(param_1,"vkQueueSubmit2KHR");
  vkCmdWriteBufferMarker2AMD = (*param_2)(param_1,"vkCmdWriteBufferMarker2AMD");
  vkGetQueueCheckpointData2NV = (*param_2)(param_1,"vkGetQueueCheckpointData2NV");
  vkGetSemaphoreCounterValueKHR = (*param_2)(param_1,"vkGetSemaphoreCounterValueKHR");
  vkSignalSemaphoreKHR = (*param_2)(param_1,"vkSignalSemaphoreKHR");
  vkWaitSemaphoresKHR = (*param_2)(param_1,"vkWaitSemaphoresKHR");
  vkCmdDecodeVideoKHR = (*param_2)(param_1,"vkCmdDecodeVideoKHR");
  vkCmdEncodeVideoKHR = (*param_2)(param_1,"vkCmdEncodeVideoKHR");
  vkGetEncodedVideoSessionParametersKHR =
       (*param_2)(param_1,"vkGetEncodedVideoSessionParametersKHR");
  vkBindVideoSessionMemoryKHR = (*param_2)(param_1,"vkBindVideoSessionMemoryKHR");
  vkCmdBeginVideoCodingKHR = (*param_2)(param_1,"vkCmdBeginVideoCodingKHR");
  vkCmdControlVideoCodingKHR = (*param_2)(param_1,"vkCmdControlVideoCodingKHR");
  vkCmdEndVideoCodingKHR = (*param_2)(param_1,"vkCmdEndVideoCodingKHR");
  vkCreateVideoSessionKHR = (*param_2)(param_1,"vkCreateVideoSessionKHR");
  vkCreateVideoSessionParametersKHR = (*param_2)(param_1,"vkCreateVideoSessionParametersKHR");
  vkDestroyVideoSessionKHR = (*param_2)(param_1,"vkDestroyVideoSessionKHR");
  vkDestroyVideoSessionParametersKHR = (*param_2)(param_1,"vkDestroyVideoSessionParametersKHR");
  vkGetVideoSessionMemoryRequirementsKHR =
       (*param_2)(param_1,"vkGetVideoSessionMemoryRequirementsKHR");
  vkUpdateVideoSessionParametersKHR = (*param_2)(param_1,"vkUpdateVideoSessionParametersKHR");
  vkCmdCuLaunchKernelNVX = (*param_2)(param_1,"vkCmdCuLaunchKernelNVX");
  vkCreateCuFunctionNVX = (*param_2)(param_1,"vkCreateCuFunctionNVX");
  vkCreateCuModuleNVX = (*param_2)(param_1,"vkCreateCuModuleNVX");
  vkDestroyCuFunctionNVX = (*param_2)(param_1,"vkDestroyCuFunctionNVX");
  vkDestroyCuModuleNVX = (*param_2)(param_1,"vkDestroyCuModuleNVX");
  vkGetImageViewAddressNVX = (*param_2)(param_1,"vkGetImageViewAddressNVX");
  vkGetImageViewHandleNVX = (*param_2)(param_1,"vkGetImageViewHandleNVX");
  vkCmdSetViewportWScalingNV = (*param_2)(param_1,"vkCmdSetViewportWScalingNV");
  vkCmdCopyMemoryIndirectNV = (*param_2)(param_1,"vkCmdCopyMemoryIndirectNV");
  vkCmdCopyMemoryToImageIndirectNV = (*param_2)(param_1,"vkCmdCopyMemoryToImageIndirectNV");
  vkCmdCudaLaunchKernelNV = (*param_2)(param_1,"vkCmdCudaLaunchKernelNV");
  vkCreateCudaFunctionNV = (*param_2)(param_1,"vkCreateCudaFunctionNV");
  vkCreateCudaModuleNV = (*param_2)(param_1,"vkCreateCudaModuleNV");
  vkDestroyCudaFunctionNV = (*param_2)(param_1,"vkDestroyCudaFunctionNV");
  vkDestroyCudaModuleNV = (*param_2)(param_1,"vkDestroyCudaModuleNV");
  vkGetCudaModuleCacheNV = (*param_2)(param_1,"vkGetCudaModuleCacheNV");
  vkCmdSetCheckpointNV = (*param_2)(param_1,"vkCmdSetCheckpointNV");
  vkGetQueueCheckpointDataNV = (*param_2)(param_1,"vkGetQueueCheckpointDataNV");
  vkCmdBindPipelineShaderGroupNV = (*param_2)(param_1,"vkCmdBindPipelineShaderGroupNV");
  vkCmdExecuteGeneratedCommandsNV = (*param_2)(param_1,"vkCmdExecuteGeneratedCommandsNV");
  vkCmdPreprocessGeneratedCommandsNV = (*param_2)(param_1,"vkCmdPreprocessGeneratedCommandsNV");
  vkCreateIndirectCommandsLayoutNV = (*param_2)(param_1,"vkCreateIndirectCommandsLayoutNV");
  vkDestroyIndirectCommandsLayoutNV = (*param_2)(param_1,"vkDestroyIndirectCommandsLayoutNV");
  vkGetGeneratedCommandsMemoryRequirementsNV =
       (*param_2)(param_1,"vkGetGeneratedCommandsMemoryRequirementsNV");
  vkCmdUpdatePipelineIndirectBufferNV = (*param_2)(param_1,"vkCmdUpdatePipelineIndirectBufferNV");
  vkGetPipelineIndirectDeviceAddressNV = (*param_2)(param_1,"vkGetPipelineIndirectDeviceAddressNV");
  vkGetPipelineIndirectMemoryRequirementsNV =
       (*param_2)(param_1,"vkGetPipelineIndirectMemoryRequirementsNV");
  vkGetMemoryRemoteAddressNV = (*param_2)(param_1,"vkGetMemoryRemoteAddressNV");
  vkCmdSetFragmentShadingRateEnumNV = (*param_2)(param_1,"vkCmdSetFragmentShadingRateEnumNV");
  vkGetLatencyTimingsNV = (*param_2)(param_1,"vkGetLatencyTimingsNV");
  vkLatencySleepNV = (*param_2)(param_1,"vkLatencySleepNV");
  vkQueueNotifyOutOfBandNV = (*param_2)(param_1,"vkQueueNotifyOutOfBandNV");
  vkSetLatencyMarkerNV = (*param_2)(param_1,"vkSetLatencyMarkerNV");
  vkSetLatencySleepModeNV = (*param_2)(param_1,"vkSetLatencySleepModeNV");
  vkCmdDecompressMemoryIndirectCountNV = (*param_2)(param_1,"vkCmdDecompressMemoryIndirectCountNV");
  vkCmdDecompressMemoryNV = (*param_2)(param_1,"vkCmdDecompressMemoryNV");
  vkCmdDrawMeshTasksIndirectCountNV = (*param_2)(param_1,"vkCmdDrawMeshTasksIndirectCountNV");
  vkCmdDrawMeshTasksIndirectNV = (*param_2)(param_1,"vkCmdDrawMeshTasksIndirectNV");
  vkCmdDrawMeshTasksNV = (*param_2)(param_1,"vkCmdDrawMeshTasksNV");
  vkBindOpticalFlowSessionImageNV = (*param_2)(param_1,"vkBindOpticalFlowSessionImageNV");
  vkCmdOpticalFlowExecuteNV = (*param_2)(param_1,"vkCmdOpticalFlowExecuteNV");
  vkCreateOpticalFlowSessionNV = (*param_2)(param_1,"vkCreateOpticalFlowSessionNV");
  vkDestroyOpticalFlowSessionNV = (*param_2)(param_1,"vkDestroyOpticalFlowSessionNV");
  vkBindAccelerationStructureMemoryNV = (*param_2)(param_1,"vkBindAccelerationStructureMemoryNV");
  vkCmdBuildAccelerationStructureNV = (*param_2)(param_1,"vkCmdBuildAccelerationStructureNV");
  vkCmdCopyAccelerationStructureNV = (*param_2)(param_1,"vkCmdCopyAccelerationStructureNV");
  vkCmdTraceRaysNV = (*param_2)(param_1,"vkCmdTraceRaysNV");
  vkCmdWriteAccelerationStructuresPropertiesNV =
       (*param_2)(param_1,"vkCmdWriteAccelerationStructuresPropertiesNV");
  vkCompileDeferredNV = (*param_2)(param_1,"vkCompileDeferredNV");
  vkCreateAccelerationStructureNV = (*param_2)(param_1,"vkCreateAccelerationStructureNV");
  vkCreateRayTracingPipelinesNV = (*param_2)(param_1,"vkCreateRayTracingPipelinesNV");
  vkDestroyAccelerationStructureNV = (*param_2)(param_1,"vkDestroyAccelerationStructureNV");
  vkGetAccelerationStructureHandleNV = (*param_2)(param_1,"vkGetAccelerationStructureHandleNV");
  vkGetAccelerationStructureMemoryRequirementsNV =
       (*param_2)(param_1,"vkGetAccelerationStructureMemoryRequirementsNV");
  vkGetRayTracingShaderGroupHandlesNV = (*param_2)(param_1,"vkGetRayTracingShaderGroupHandlesNV");
  vkCmdSetExclusiveScissorEnableNV = (*param_2)(param_1,"vkCmdSetExclusiveScissorEnableNV");
  vkCmdSetExclusiveScissorNV = (*param_2)(param_1,"vkCmdSetExclusiveScissorNV");
  vkCmdBindShadingRateImageNV = (*param_2)(param_1,"vkCmdBindShadingRateImageNV");
  vkCmdSetCoarseSampleOrderNV = (*param_2)(param_1,"vkCmdSetCoarseSampleOrderNV");
  vkCmdSetViewportShadingRatePaletteNV = (*param_2)(param_1,"vkCmdSetViewportShadingRatePaletteNV");
  vkGetDynamicRenderingTilePropertiesQCOM =
       (*param_2)(param_1,"vkGetDynamicRenderingTilePropertiesQCOM");
  vkGetFramebufferTilePropertiesQCOM = (*param_2)(param_1,"vkGetFramebufferTilePropertiesQCOM");
  vkGetDescriptorSetHostMappingVALVE = (*param_2)(param_1,"vkGetDescriptorSetHostMappingVALVE");
  vkGetDescriptorSetLayoutHostMappingInfoVALVE =
       (*param_2)(param_1,"vkGetDescriptorSetLayoutHostMappingInfoVALVE");
  vkCmdBindVertexBuffers2EXT = (*param_2)(param_1,"vkCmdBindVertexBuffers2EXT");
  vkCmdSetCullModeEXT = (*param_2)(param_1,"vkCmdSetCullModeEXT");
  vkCmdSetDepthBoundsTestEnableEXT = (*param_2)(param_1,"vkCmdSetDepthBoundsTestEnableEXT");
  vkCmdSetDepthCompareOpEXT = (*param_2)(param_1,"vkCmdSetDepthCompareOpEXT");
  vkCmdSetDepthTestEnableEXT = (*param_2)(param_1,"vkCmdSetDepthTestEnableEXT");
  vkCmdSetDepthWriteEnableEXT = (*param_2)(param_1,"vkCmdSetDepthWriteEnableEXT");
  vkCmdSetFrontFaceEXT = (*param_2)(param_1,"vkCmdSetFrontFaceEXT");
  vkCmdSetPrimitiveTopologyEXT = (*param_2)(param_1,"vkCmdSetPrimitiveTopologyEXT");
  vkCmdSetScissorWithCountEXT = (*param_2)(param_1,"vkCmdSetScissorWithCountEXT");
  vkCmdSetStencilOpEXT = (*param_2)(param_1,"vkCmdSetStencilOpEXT");
  vkCmdSetStencilTestEnableEXT = (*param_2)(param_1,"vkCmdSetStencilTestEnableEXT");
  vkCmdSetViewportWithCountEXT = (*param_2)(param_1,"vkCmdSetViewportWithCountEXT");
  vkCmdSetDepthBiasEnableEXT = (*param_2)(param_1,"vkCmdSetDepthBiasEnableEXT");
  vkCmdSetLogicOpEXT = (*param_2)(param_1,"vkCmdSetLogicOpEXT");
  vkCmdSetPatchControlPointsEXT = (*param_2)(param_1,"vkCmdSetPatchControlPointsEXT");
  vkCmdSetPrimitiveRestartEnableEXT = (*param_2)(param_1,"vkCmdSetPrimitiveRestartEnableEXT");
  vkCmdSetRasterizerDiscardEnableEXT = (*param_2)(param_1,"vkCmdSetRasterizerDiscardEnableEXT");
  vkCmdSetAlphaToCoverageEnableEXT = (*param_2)(param_1,"vkCmdSetAlphaToCoverageEnableEXT");
  vkCmdSetAlphaToOneEnableEXT = (*param_2)(param_1,"vkCmdSetAlphaToOneEnableEXT");
  vkCmdSetColorBlendEnableEXT = (*param_2)(param_1,"vkCmdSetColorBlendEnableEXT");
  vkCmdSetColorBlendEquationEXT = (*param_2)(param_1,"vkCmdSetColorBlendEquationEXT");
  vkCmdSetColorWriteMaskEXT = (*param_2)(param_1,"vkCmdSetColorWriteMaskEXT");
  vkCmdSetDepthClampEnableEXT = (*param_2)(param_1,"vkCmdSetDepthClampEnableEXT");
  vkCmdSetLogicOpEnableEXT = (*param_2)(param_1,"vkCmdSetLogicOpEnableEXT");
  vkCmdSetPolygonModeEXT = (*param_2)(param_1,"vkCmdSetPolygonModeEXT");
  vkCmdSetRasterizationSamplesEXT = (*param_2)(param_1,"vkCmdSetRasterizationSamplesEXT");
  vkCmdSetSampleMaskEXT = (*param_2)(param_1,"vkCmdSetSampleMaskEXT");
  vkCmdSetTessellationDomainOriginEXT = (*param_2)(param_1,"vkCmdSetTessellationDomainOriginEXT");
  vkCmdSetRasterizationStreamEXT = (*param_2)(param_1,"vkCmdSetRasterizationStreamEXT");
  vkCmdSetConservativeRasterizationModeEXT =
       (*param_2)(param_1,"vkCmdSetConservativeRasterizationModeEXT");
  vkCmdSetExtraPrimitiveOverestimationSizeEXT =
       (*param_2)(param_1,"vkCmdSetExtraPrimitiveOverestimationSizeEXT");
  vkCmdSetDepthClipEnableEXT = (*param_2)(param_1,"vkCmdSetDepthClipEnableEXT");
  vkCmdSetSampleLocationsEnableEXT = (*param_2)(param_1,"vkCmdSetSampleLocationsEnableEXT");
  vkCmdSetColorBlendAdvancedEXT = (*param_2)(param_1,"vkCmdSetColorBlendAdvancedEXT");
  vkCmdSetProvokingVertexModeEXT = (*param_2)(param_1,"vkCmdSetProvokingVertexModeEXT");
  vkCmdSetLineRasterizationModeEXT = (*param_2)(param_1,"vkCmdSetLineRasterizationModeEXT");
  vkCmdSetLineStippleEnableEXT = (*param_2)(param_1,"vkCmdSetLineStippleEnableEXT");
  vkCmdSetDepthClipNegativeOneToOneEXT = (*param_2)(param_1,"vkCmdSetDepthClipNegativeOneToOneEXT");
  vkCmdSetViewportWScalingEnableNV = (*param_2)(param_1,"vkCmdSetViewportWScalingEnableNV");
  vkCmdSetViewportSwizzleNV = (*param_2)(param_1,"vkCmdSetViewportSwizzleNV");
  vkCmdSetCoverageToColorEnableNV = (*param_2)(param_1,"vkCmdSetCoverageToColorEnableNV");
  vkCmdSetCoverageToColorLocationNV = (*param_2)(param_1,"vkCmdSetCoverageToColorLocationNV");
  vkCmdSetCoverageModulationModeNV = (*param_2)(param_1,"vkCmdSetCoverageModulationModeNV");
  vkCmdSetCoverageModulationTableEnableNV =
       (*param_2)(param_1,"vkCmdSetCoverageModulationTableEnableNV");
  vkCmdSetCoverageModulationTableNV = (*param_2)(param_1,"vkCmdSetCoverageModulationTableNV");
  vkCmdSetShadingRateImageEnableNV = (*param_2)(param_1,"vkCmdSetShadingRateImageEnableNV");
  vkCmdSetRepresentativeFragmentTestEnableNV =
       (*param_2)(param_1,"vkCmdSetRepresentativeFragmentTestEnableNV");
  vkCmdSetCoverageReductionModeNV = (*param_2)(param_1,"vkCmdSetCoverageReductionModeNV");
  vkGetImageSubresourceLayout2EXT = (*param_2)(param_1,"vkGetImageSubresourceLayout2EXT");
  vkCmdSetVertexInputEXT = (*param_2)(param_1,"vkCmdSetVertexInputEXT");
  vkCmdPushDescriptorSetWithTemplateKHR =
       (*param_2)(param_1,"vkCmdPushDescriptorSetWithTemplateKHR");
  vkGetDeviceGroupPresentCapabilitiesKHR =
       (*param_2)(param_1,"vkGetDeviceGroupPresentCapabilitiesKHR");
  vkGetDeviceGroupSurfacePresentModesKHR =
       (*param_2)(param_1,"vkGetDeviceGroupSurfacePresentModesKHR");
  vkAcquireNextImage2KHR = (*param_2)(param_1,"vkAcquireNextImage2KHR");
  return;
}



undefined8 volkInitialize(void)

{
  long lVar1;
  
  lVar1 = dlopen("libvulkan.so.1",2);
  if (lVar1 == 0) {
    lVar1 = dlopen("libvulkan.so",2);
    if (lVar1 == 0) {
      return 0xfffffffd;
    }
  }
  vkGetInstanceProcAddr = (code *)dlsym(lVar1,"vkGetInstanceProcAddr");
  loadedModule = lVar1;
  vkCreateInstance = (*vkGetInstanceProcAddr)(0,"vkCreateInstance");
  vkEnumerateInstanceExtensionProperties =
       (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceExtensionProperties");
  vkEnumerateInstanceLayerProperties =
       (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceLayerProperties");
  vkEnumerateInstanceVersion = (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceVersion");
  return 0;
}



void volkInitializeCustom(code *param_1)

{
  loadedModule = 0;
  vkGetInstanceProcAddr = param_1;
  vkCreateInstance = (*param_1)(0,"vkCreateInstance");
  vkEnumerateInstanceExtensionProperties =
       (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceExtensionProperties");
  vkEnumerateInstanceLayerProperties =
       (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceLayerProperties");
  vkEnumerateInstanceVersion = (*vkGetInstanceProcAddr)(0,"vkEnumerateInstanceVersion");
  return;
}



void volkFinalize(void)

{
  if (loadedModule != 0) {
    dlclose();
  }
  vkGetInstanceProcAddr = 0;
  vkCreateInstance = 0;
  vkEnumerateInstanceExtensionProperties = 0;
  vkEnumerateInstanceLayerProperties = 0;
  vkEnumerateInstanceVersion = 0;
  volkGenLoadInstance(0,nullProcAddrStub);
  volkGenLoadDevice(0,nullProcAddrStub);
  loadedModule = 0;
  loadedInstance = 0;
  loadedDevice = 0;
  return;
}



int volkGetInstanceVersion(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if ((vkEnumerateInstanceVersion == (code *)0x0) ||
     (iVar2 = (*vkEnumerateInstanceVersion)(&local_14), iVar1 = local_14, iVar2 != 0)) {
    iVar1 = (uint)(vkCreateInstance != 0) << 0x16;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void volkLoadInstance(undefined8 param_1)

{
  loadedInstance = param_1;
  volkGenLoadInstance(param_1,0x100000);
  volkGenLoadDevice(param_1,0x100000);
  return;
}



void volkLoadInstanceOnly(undefined8 param_1)

{
  loadedInstance = param_1;
  volkGenLoadInstance(param_1,0x100000);
  return;
}



undefined8 volkGetLoadedInstance(void)

{
  return loadedInstance;
}



void volkLoadDevice(undefined8 param_1)

{
  loadedDevice = param_1;
  volkGenLoadDevice(param_1,vkGetDeviceProcAddrStub);
  return;
}



undefined8 volkGetLoadedDevice(void)

{
  return loadedDevice;
}



void volkLoadDeviceTable(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAllocateCommandBuffers");
  *param_1 = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAllocateDescriptorSets");
  param_1[1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAllocateMemory");
  param_1[2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBeginCommandBuffer");
  param_1[3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindBufferMemory");
  param_1[4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindImageMemory");
  param_1[5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginQuery");
  param_1[6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginRenderPass");
  param_1[7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindDescriptorSets");
  param_1[8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindIndexBuffer");
  param_1[9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindPipeline");
  param_1[10] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindVertexBuffers");
  param_1[0xb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBlitImage");
  param_1[0xc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdClearAttachments");
  param_1[0xd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdClearColorImage");
  param_1[0xe] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdClearDepthStencilImage");
  param_1[0xf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBuffer");
  param_1[0x10] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBufferToImage");
  param_1[0x11] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImage");
  param_1[0x12] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImageToBuffer");
  param_1[0x13] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyQueryPoolResults");
  param_1[0x14] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDispatch");
  param_1[0x15] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDispatchIndirect");
  param_1[0x16] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDraw");
  param_1[0x17] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndexed");
  param_1[0x18] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndexedIndirect");
  param_1[0x19] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndirect");
  param_1[0x1a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndQuery");
  param_1[0x1b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndRenderPass");
  param_1[0x1c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdExecuteCommands");
  param_1[0x1d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdFillBuffer");
  param_1[0x1e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdNextSubpass");
  param_1[0x1f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPipelineBarrier");
  param_1[0x20] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushConstants");
  param_1[0x21] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResetEvent");
  param_1[0x22] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResetQueryPool");
  param_1[0x23] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResolveImage");
  param_1[0x24] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetBlendConstants");
  param_1[0x25] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBias");
  param_1[0x26] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBounds");
  param_1[0x27] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetEvent");
  param_1[0x28] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLineWidth");
  param_1[0x29] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetScissor");
  param_1[0x2a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilCompareMask");
  param_1[0x2b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilReference");
  param_1[0x2c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilWriteMask");
  param_1[0x2d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewport");
  param_1[0x2e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdUpdateBuffer");
  param_1[0x2f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWaitEvents");
  param_1[0x30] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteTimestamp");
  param_1[0x31] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateBuffer");
  param_1[0x32] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateBufferView");
  param_1[0x33] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateCommandPool");
  param_1[0x34] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateComputePipelines");
  param_1[0x35] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateDescriptorPool");
  param_1[0x36] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateDescriptorSetLayout");
  param_1[0x37] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateEvent");
  param_1[0x38] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateFence");
  param_1[0x39] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateFramebuffer");
  param_1[0x3a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateGraphicsPipelines");
  param_1[0x3b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateImage");
  param_1[0x3c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateImageView");
  param_1[0x3d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreatePipelineCache");
  param_1[0x3e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreatePipelineLayout");
  param_1[0x3f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateQueryPool");
  param_1[0x40] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateRenderPass");
  param_1[0x41] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSampler");
  param_1[0x42] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSemaphore");
  param_1[0x43] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateShaderModule");
  param_1[0x44] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyBuffer");
  param_1[0x45] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyBufferView");
  param_1[0x46] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyCommandPool");
  param_1[0x47] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDescriptorPool");
  param_1[0x48] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDescriptorSetLayout");
  param_1[0x49] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDevice");
  param_1[0x4a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyEvent");
  param_1[0x4b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyFence");
  param_1[0x4c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyFramebuffer");
  param_1[0x4d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyImage");
  param_1[0x4e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyImageView");
  param_1[0x4f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyPipeline");
  param_1[0x50] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyPipelineCache");
  param_1[0x51] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyPipelineLayout");
  param_1[0x52] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyQueryPool");
  param_1[0x53] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyRenderPass");
  param_1[0x54] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroySampler");
  param_1[0x55] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroySemaphore");
  param_1[0x56] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyShaderModule");
  param_1[0x57] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDeviceWaitIdle");
  param_1[0x58] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkEndCommandBuffer");
  param_1[0x59] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkFlushMappedMemoryRanges");
  param_1[0x5a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkFreeCommandBuffers");
  param_1[0x5b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkFreeDescriptorSets");
  param_1[0x5c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkFreeMemory");
  param_1[0x5d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferMemoryRequirements");
  param_1[0x5e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceMemoryCommitment");
  param_1[0x5f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceQueue");
  param_1[0x60] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetEventStatus");
  param_1[0x61] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetFenceStatus");
  param_1[0x62] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageMemoryRequirements");
  param_1[99] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSparseMemoryRequirements");
  param_1[100] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSubresourceLayout");
  param_1[0x65] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineCacheData");
  param_1[0x66] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetQueryPoolResults");
  param_1[0x67] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRenderAreaGranularity");
  param_1[0x68] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkInvalidateMappedMemoryRanges");
  param_1[0x69] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkMapMemory");
  param_1[0x6a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkMergePipelineCaches");
  param_1[0x6b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueBindSparse");
  param_1[0x6c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueSubmit");
  param_1[0x6d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueWaitIdle");
  param_1[0x6e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetCommandBuffer");
  param_1[0x6f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetCommandPool");
  param_1[0x70] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetDescriptorPool");
  param_1[0x71] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetEvent");
  param_1[0x72] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetFences");
  param_1[0x73] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetEvent");
  param_1[0x74] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUnmapMemory");
  param_1[0x75] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUpdateDescriptorSets");
  param_1[0x76] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWaitForFences");
  param_1[0x77] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindBufferMemory2");
  param_1[0x78] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindImageMemory2");
  param_1[0x79] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDispatchBase");
  param_1[0x7a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDeviceMask");
  param_1[0x7b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateDescriptorUpdateTemplate");
  param_1[0x7c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSamplerYcbcrConversion");
  param_1[0x7d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDescriptorUpdateTemplate");
  param_1[0x7e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroySamplerYcbcrConversion");
  param_1[0x7f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferMemoryRequirements2");
  param_1[0x80] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetLayoutSupport");
  param_1[0x81] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceGroupPeerMemoryFeatures");
  param_1[0x82] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceQueue2");
  param_1[0x83] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageMemoryRequirements2");
  param_1[0x84] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSparseMemoryRequirements2");
  param_1[0x85] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkTrimCommandPool");
  param_1[0x86] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUpdateDescriptorSetWithTemplate");
  param_1[0x87] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginRenderPass2");
  param_1[0x88] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndexedIndirectCount");
  param_1[0x89] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndirectCount");
  param_1[0x8a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndRenderPass2");
  param_1[0x8b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdNextSubpass2");
  param_1[0x8c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateRenderPass2");
  param_1[0x8d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferDeviceAddress");
  param_1[0x8e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferOpaqueCaptureAddress");
  param_1[0x8f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceMemoryOpaqueCaptureAddress");
  param_1[0x90] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSemaphoreCounterValue");
  param_1[0x91] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetQueryPool");
  param_1[0x92] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSignalSemaphore");
  param_1[0x93] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWaitSemaphores");
  param_1[0x94] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginRendering");
  param_1[0x95] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindVertexBuffers2");
  param_1[0x96] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBlitImage2");
  param_1[0x97] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBuffer2");
  param_1[0x98] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBufferToImage2");
  param_1[0x99] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImage2");
  param_1[0x9a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImageToBuffer2");
  param_1[0x9b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndRendering");
  param_1[0x9c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPipelineBarrier2");
  param_1[0x9d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResetEvent2");
  param_1[0x9e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResolveImage2");
  param_1[0x9f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCullMode");
  param_1[0xa0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBiasEnable");
  param_1[0xa1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBoundsTestEnable");
  param_1[0xa2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthCompareOp");
  param_1[0xa3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthTestEnable");
  param_1[0xa4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthWriteEnable");
  param_1[0xa5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetEvent2");
  param_1[0xa6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetFrontFace");
  param_1[0xa7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPrimitiveRestartEnable");
  param_1[0xa8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPrimitiveTopology");
  param_1[0xa9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRasterizerDiscardEnable");
  param_1[0xaa] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetScissorWithCount");
  param_1[0xab] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilOp");
  param_1[0xac] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilTestEnable");
  param_1[0xad] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportWithCount");
  param_1[0xae] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWaitEvents2");
  param_1[0xaf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteTimestamp2");
  param_1[0xb0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreatePrivateDataSlot");
  param_1[0xb1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyPrivateDataSlot");
  param_1[0xb2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceBufferMemoryRequirements");
  param_1[0xb3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceImageMemoryRequirements");
  param_1[0xb4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceImageSparseMemoryRequirements");
  param_1[0xb5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPrivateData");
  param_1[0xb6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueSubmit2");
  param_1[0xb7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetPrivateData");
  param_1[0xb8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteBufferMarkerAMD");
  param_1[0xb9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetLocalDimmingAMD");
  param_1[0xba] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndexedIndirectCountAMD");
  param_1[0xbb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndirectCountAMD");
  param_1[0xbc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetShaderInfoAMD");
  param_1[0xbd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetAttachmentFeedbackLoopEnableEXT");
  param_1[0xbe] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferDeviceAddressEXT");
  param_1[0xbf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetCalibratedTimestampsEXT");
  param_1[0xc0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetColorWriteEnableEXT");
  param_1[0xc1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginConditionalRenderingEXT");
  param_1[0xc2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndConditionalRenderingEXT");
  param_1[0xc3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDebugMarkerBeginEXT");
  param_1[0xc4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDebugMarkerEndEXT");
  param_1[0xc5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDebugMarkerInsertEXT");
  param_1[0xc6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDebugMarkerSetObjectNameEXT");
  param_1[199] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDebugMarkerSetObjectTagEXT");
  param_1[200] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBias2EXT");
  param_1[0xc9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
  param_1[0xca] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindDescriptorBuffersEXT");
  param_1[0xcb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDescriptorBufferOffsetsEXT");
  param_1[0xcc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferOpaqueCaptureDescriptorDataEXT");
  param_1[0xcd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorEXT");
  param_1[0xce] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetLayoutBindingOffsetEXT");
  param_1[0xcf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetLayoutSizeEXT");
  param_1[0xd0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageOpaqueCaptureDescriptorDataEXT");
  param_1[0xd1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageViewOpaqueCaptureDescriptorDataEXT");
  param_1[0xd2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSamplerOpaqueCaptureDescriptorDataEXT");
  param_1[0xd3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT")
  ;
  param_1[0xd4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceFaultInfoEXT");
  param_1[0xd5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDiscardRectangleEXT");
  param_1[0xd6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDiscardRectangleEnableEXT");
  param_1[0xd7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDiscardRectangleModeEXT");
  param_1[0xd8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDisplayPowerControlEXT");
  param_1[0xd9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSwapchainCounterEXT");
  param_1[0xda] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkRegisterDeviceEventEXT");
  param_1[0xdb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkRegisterDisplayEventEXT");
  param_1[0xdc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetMemoryHostPointerPropertiesEXT");
  param_1[0xdd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetHdrMetadataEXT");
  param_1[0xde] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyImageToImageEXT");
  param_1[0xdf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyImageToMemoryEXT");
  param_1[0xe0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyMemoryToImageEXT");
  param_1[0xe1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkTransitionImageLayoutEXT");
  param_1[0xe2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkResetQueryPoolEXT");
  param_1[0xe3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageDrmFormatModifierPropertiesEXT");
  param_1[0xe4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLineStippleEXT");
  param_1[0xe5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksEXT");
  param_1[0xe6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksIndirectCountEXT");
  param_1[0xe7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksIndirectEXT");
  param_1[0xe8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMultiEXT");
  param_1[0xe9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMultiIndexedEXT");
  param_1[0xea] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBuildMicromapsEXT");
  param_1[0xeb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBuildMicromapsEXT");
  param_1[0xec] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMemoryToMicromapEXT");
  param_1[0xed] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMicromapEXT");
  param_1[0xee] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMicromapToMemoryEXT");
  param_1[0xef] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteMicromapsPropertiesEXT");
  param_1[0xf0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyMemoryToMicromapEXT");
  param_1[0xf1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyMicromapEXT");
  param_1[0xf2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyMicromapToMemoryEXT");
  param_1[0xf3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateMicromapEXT");
  param_1[0xf4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyMicromapEXT");
  param_1[0xf5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceMicromapCompatibilityEXT");
  param_1[0xf6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetMicromapBuildSizesEXT");
  param_1[0xf7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWriteMicromapsPropertiesEXT");
  param_1[0xf8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetDeviceMemoryPriorityEXT");
  param_1[0xf9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelinePropertiesEXT");
  param_1[0xfa] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreatePrivateDataSlotEXT");
  param_1[0xfb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyPrivateDataSlotEXT");
  param_1[0xfc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPrivateDataEXT");
  param_1[0xfd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetPrivateDataEXT");
  param_1[0xfe] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetSampleLocationsEXT");
  param_1[0xff] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetShaderModuleCreateInfoIdentifierEXT");
  param_1[0x100] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetShaderModuleIdentifierEXT");
  param_1[0x101] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindShadersEXT");
  param_1[0x102] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateShadersEXT");
  param_1[0x103] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyShaderEXT");
  param_1[0x104] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetShaderBinaryDataEXT");
  param_1[0x105] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkReleaseSwapchainImagesEXT");
  param_1[0x106] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginQueryIndexedEXT");
  param_1[0x107] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginTransformFeedbackEXT");
  param_1[0x108] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindTransformFeedbackBuffersEXT");
  param_1[0x109] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndirectByteCountEXT");
  param_1[0x10a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndQueryIndexedEXT");
  param_1[0x10b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndTransformFeedbackEXT");
  param_1[0x10c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateValidationCacheEXT");
  param_1[0x10d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyValidationCacheEXT");
  param_1[0x10e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetValidationCacheDataEXT");
  param_1[0x10f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkMergeValidationCachesEXT");
  param_1[0x110] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPastPresentationTimingGOOGLE");
  param_1[0x111] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRefreshCycleDurationGOOGLE");
  param_1[0x112] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawClusterHUAWEI");
  param_1[0x113] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawClusterIndirectHUAWEI");
  param_1[0x114] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindInvocationMaskHUAWEI");
  param_1[0x115] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSubpassShadingHUAWEI");
  param_1[0x116] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
  param_1[0x117] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAcquirePerformanceConfigurationINTEL");
  param_1[0x118] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPerformanceMarkerINTEL");
  param_1[0x119] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPerformanceOverrideINTEL");
  param_1[0x11a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPerformanceStreamMarkerINTEL");
  param_1[0x11b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPerformanceParameterINTEL");
  param_1[0x11c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkInitializePerformanceApiINTEL");
  param_1[0x11d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueSetPerformanceConfigurationINTEL");
  param_1[0x11e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkReleasePerformanceConfigurationINTEL");
  param_1[0x11f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUninitializePerformanceApiINTEL");
  param_1[0x120] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBuildAccelerationStructuresKHR");
  param_1[0x121] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBuildAccelerationStructuresIndirectKHR");
  param_1[0x122] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBuildAccelerationStructuresKHR");
  param_1[0x123] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyAccelerationStructureKHR");
  param_1[0x124] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyAccelerationStructureToMemoryKHR");
  param_1[0x125] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMemoryToAccelerationStructureKHR");
  param_1[0x126] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteAccelerationStructuresPropertiesKHR");
  param_1[0x127] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyAccelerationStructureKHR");
  param_1[0x128] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyAccelerationStructureToMemoryKHR");
  param_1[0x129] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCopyMemoryToAccelerationStructureKHR");
  param_1[0x12a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateAccelerationStructureKHR");
  param_1[299] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyAccelerationStructureKHR");
  param_1[300] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetAccelerationStructureBuildSizesKHR");
  param_1[0x12d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetAccelerationStructureDeviceAddressKHR");
  param_1[0x12e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceAccelerationStructureCompatibilityKHR");
  param_1[0x12f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWriteAccelerationStructuresPropertiesKHR");
  param_1[0x130] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindBufferMemory2KHR");
  param_1[0x131] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindImageMemory2KHR");
  param_1[0x132] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferDeviceAddressKHR");
  param_1[0x133] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferOpaqueCaptureAddressKHR");
  param_1[0x134] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceMemoryOpaqueCaptureAddressKHR");
  param_1[0x135] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetCalibratedTimestampsKHR");
  param_1[0x136] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBlitImage2KHR");
  param_1[0x137] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBuffer2KHR");
  param_1[0x138] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyBufferToImage2KHR");
  param_1[0x139] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImage2KHR");
  param_1[0x13a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyImageToBuffer2KHR");
  param_1[0x13b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResolveImage2KHR");
  param_1[0x13c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginRenderPass2KHR");
  param_1[0x13d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndRenderPass2KHR");
  param_1[0x13e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdNextSubpass2KHR");
  param_1[0x13f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateRenderPass2KHR");
  param_1[0x140] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateDeferredOperationKHR");
  param_1[0x141] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDeferredOperationJoinKHR");
  param_1[0x142] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDeferredOperationKHR");
  param_1[0x143] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeferredOperationMaxConcurrencyKHR");
  param_1[0x144] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeferredOperationResultKHR");
  param_1[0x145] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateDescriptorUpdateTemplateKHR");
  param_1[0x146] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyDescriptorUpdateTemplateKHR");
  param_1[0x147] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUpdateDescriptorSetWithTemplateKHR");
  param_1[0x148] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDispatchBaseKHR");
  param_1[0x149] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDeviceMaskKHR");
  param_1[0x14a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceGroupPeerMemoryFeaturesKHR");
  param_1[0x14b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSharedSwapchainsKHR");
  param_1[0x14c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndexedIndirectCountKHR");
  param_1[0x14d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawIndirectCountKHR");
  param_1[0x14e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginRenderingKHR");
  param_1[0x14f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndRenderingKHR");
  param_1[0x150] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRenderingAttachmentLocationsKHR");
  param_1[0x151] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRenderingInputAttachmentIndicesKHR");
  param_1[0x152] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetFenceFdKHR");
  param_1[0x153] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkImportFenceFdKHR");
  param_1[0x154] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetMemoryFdKHR");
  param_1[0x155] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetMemoryFdPropertiesKHR");
  param_1[0x156] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSemaphoreFdKHR");
  param_1[0x157] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkImportSemaphoreFdKHR");
  param_1[0x158] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetFragmentShadingRateKHR");
  param_1[0x159] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetBufferMemoryRequirements2KHR");
  param_1[0x15a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageMemoryRequirements2KHR");
  param_1[0x15b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSparseMemoryRequirements2KHR");
  param_1[0x15c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLineStippleKHR");
  param_1[0x15d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkTrimCommandPoolKHR");
  param_1[0x15e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetLayoutSupportKHR");
  param_1[0x15f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceBufferMemoryRequirementsKHR");
  param_1[0x160] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceImageMemoryRequirementsKHR");
  param_1[0x161] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceImageSparseMemoryRequirementsKHR");
  param_1[0x162] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindIndexBuffer2KHR");
  param_1[0x163] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceImageSubresourceLayoutKHR");
  param_1[0x164] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSubresourceLayout2KHR");
  param_1[0x165] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRenderingAreaGranularityKHR");
  param_1[0x166] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindDescriptorSets2KHR");
  param_1[0x167] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushConstants2KHR");
  param_1[0x168] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushDescriptorSet2KHR");
  param_1[0x169] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushDescriptorSetWithTemplate2KHR");
  param_1[0x16a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
  param_1[0x16b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDescriptorBufferOffsets2EXT");
  param_1[0x16c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkMapMemory2KHR");
  param_1[0x16d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUnmapMemory2KHR");
  param_1[0x16e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAcquireProfilingLockKHR");
  param_1[0x16f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkReleaseProfilingLockKHR");
  param_1[0x170] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineExecutableInternalRepresentationsKHR");
  param_1[0x171] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineExecutablePropertiesKHR");
  param_1[0x172] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineExecutableStatisticsKHR");
  param_1[0x173] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWaitForPresentKHR");
  param_1[0x174] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushDescriptorSetKHR");
  param_1[0x175] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdTraceRaysIndirect2KHR");
  param_1[0x176] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRayTracingPipelineStackSizeKHR");
  param_1[0x177] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdTraceRaysIndirectKHR");
  param_1[0x178] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdTraceRaysKHR");
  param_1[0x179] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateRayTracingPipelinesKHR");
  param_1[0x17a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
  param_1[0x17b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRayTracingShaderGroupHandlesKHR");
  param_1[0x17c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRayTracingShaderGroupStackSizeKHR");
  param_1[0x17d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSamplerYcbcrConversionKHR");
  param_1[0x17e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroySamplerYcbcrConversionKHR");
  param_1[0x17f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSwapchainStatusKHR");
  param_1[0x180] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAcquireNextImageKHR");
  param_1[0x181] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateSwapchainKHR");
  param_1[0x182] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroySwapchainKHR");
  param_1[0x183] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSwapchainImagesKHR");
  param_1[0x184] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueuePresentKHR");
  param_1[0x185] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPipelineBarrier2KHR");
  param_1[0x186] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdResetEvent2KHR");
  param_1[0x187] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetEvent2KHR");
  param_1[0x188] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWaitEvents2KHR");
  param_1[0x189] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteTimestamp2KHR");
  param_1[0x18a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueSubmit2KHR");
  param_1[0x18b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteBufferMarker2AMD");
  param_1[0x18c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetQueueCheckpointData2NV");
  param_1[0x18d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetSemaphoreCounterValueKHR");
  param_1[0x18e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSignalSemaphoreKHR");
  param_1[399] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkWaitSemaphoresKHR");
  param_1[400] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDecodeVideoKHR");
  param_1[0x191] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEncodeVideoKHR");
  param_1[0x192] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetEncodedVideoSessionParametersKHR");
  param_1[0x193] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindVideoSessionMemoryKHR");
  param_1[0x194] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBeginVideoCodingKHR");
  param_1[0x195] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdControlVideoCodingKHR");
  param_1[0x196] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdEndVideoCodingKHR");
  param_1[0x197] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateVideoSessionKHR");
  param_1[0x198] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateVideoSessionParametersKHR");
  param_1[0x199] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyVideoSessionKHR");
  param_1[0x19a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyVideoSessionParametersKHR");
  param_1[0x19b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetVideoSessionMemoryRequirementsKHR");
  param_1[0x19c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkUpdateVideoSessionParametersKHR");
  param_1[0x19d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCuLaunchKernelNVX");
  param_1[0x19e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateCuFunctionNVX");
  param_1[0x19f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateCuModuleNVX");
  param_1[0x1a0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyCuFunctionNVX");
  param_1[0x1a1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyCuModuleNVX");
  param_1[0x1a2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageViewAddressNVX");
  param_1[0x1a3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageViewHandleNVX");
  param_1[0x1a4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportWScalingNV");
  param_1[0x1a5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMemoryIndirectNV");
  param_1[0x1a6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyMemoryToImageIndirectNV");
  param_1[0x1a7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCudaLaunchKernelNV");
  param_1[0x1a8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateCudaFunctionNV");
  param_1[0x1a9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateCudaModuleNV");
  param_1[0x1aa] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyCudaFunctionNV");
  param_1[0x1ab] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyCudaModuleNV");
  param_1[0x1ac] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetCudaModuleCacheNV");
  param_1[0x1ad] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCheckpointNV");
  param_1[0x1ae] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetQueueCheckpointDataNV");
  param_1[0x1af] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindPipelineShaderGroupNV");
  param_1[0x1b0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdExecuteGeneratedCommandsNV");
  param_1[0x1b1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPreprocessGeneratedCommandsNV");
  param_1[0x1b2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateIndirectCommandsLayoutNV");
  param_1[0x1b3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyIndirectCommandsLayoutNV");
  param_1[0x1b4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetGeneratedCommandsMemoryRequirementsNV");
  param_1[0x1b5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdUpdatePipelineIndirectBufferNV");
  param_1[0x1b6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineIndirectDeviceAddressNV");
  param_1[0x1b7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetPipelineIndirectMemoryRequirementsNV");
  param_1[0x1b8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetMemoryRemoteAddressNV");
  param_1[0x1b9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetFragmentShadingRateEnumNV");
  param_1[0x1ba] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetLatencyTimingsNV");
  param_1[0x1bb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkLatencySleepNV");
  param_1[0x1bc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkQueueNotifyOutOfBandNV");
  param_1[0x1bd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetLatencyMarkerNV");
  param_1[0x1be] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkSetLatencySleepModeNV");
  param_1[0x1bf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDecompressMemoryIndirectCountNV");
  param_1[0x1c0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDecompressMemoryNV");
  param_1[0x1c1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksIndirectCountNV");
  param_1[0x1c2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksIndirectNV");
  param_1[0x1c3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdDrawMeshTasksNV");
  param_1[0x1c4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindOpticalFlowSessionImageNV");
  param_1[0x1c5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdOpticalFlowExecuteNV");
  param_1[0x1c6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateOpticalFlowSessionNV");
  param_1[0x1c7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyOpticalFlowSessionNV");
  param_1[0x1c8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkBindAccelerationStructureMemoryNV");
  param_1[0x1c9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBuildAccelerationStructureNV");
  param_1[0x1ca] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdCopyAccelerationStructureNV");
  param_1[0x1cb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdTraceRaysNV");
  param_1[0x1cc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdWriteAccelerationStructuresPropertiesNV");
  param_1[0x1cd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCompileDeferredNV");
  param_1[0x1ce] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateAccelerationStructureNV");
  param_1[0x1cf] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCreateRayTracingPipelinesNV");
  param_1[0x1d0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkDestroyAccelerationStructureNV");
  param_1[0x1d1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetAccelerationStructureHandleNV");
  param_1[0x1d2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetAccelerationStructureMemoryRequirementsNV");
  param_1[0x1d3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetRayTracingShaderGroupHandlesNV");
  param_1[0x1d4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetExclusiveScissorEnableNV");
  param_1[0x1d5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetExclusiveScissorNV");
  param_1[0x1d6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindShadingRateImageNV");
  param_1[0x1d7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoarseSampleOrderNV");
  param_1[0x1d8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportShadingRatePaletteNV");
  param_1[0x1d9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDynamicRenderingTilePropertiesQCOM");
  param_1[0x1da] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetFramebufferTilePropertiesQCOM");
  param_1[0x1db] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetHostMappingVALVE");
  param_1[0x1dc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDescriptorSetLayoutHostMappingInfoVALVE");
  param_1[0x1dd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdBindVertexBuffers2EXT");
  param_1[0x1de] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCullModeEXT");
  param_1[0x1df] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBoundsTestEnableEXT");
  param_1[0x1e0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthCompareOpEXT");
  param_1[0x1e1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthTestEnableEXT");
  param_1[0x1e2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthWriteEnableEXT");
  param_1[0x1e3] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetFrontFaceEXT");
  param_1[0x1e4] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPrimitiveTopologyEXT");
  param_1[0x1e5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetScissorWithCountEXT");
  param_1[0x1e6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilOpEXT");
  param_1[0x1e7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetStencilTestEnableEXT");
  param_1[0x1e8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportWithCountEXT");
  param_1[0x1e9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthBiasEnableEXT");
  param_1[0x1ea] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLogicOpEXT");
  param_1[0x1eb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPatchControlPointsEXT");
  param_1[0x1ec] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPrimitiveRestartEnableEXT");
  param_1[0x1ed] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRasterizerDiscardEnableEXT");
  param_1[0x1ee] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetAlphaToCoverageEnableEXT");
  param_1[0x1ef] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetAlphaToOneEnableEXT");
  param_1[0x1f0] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetColorBlendEnableEXT");
  param_1[0x1f1] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetColorBlendEquationEXT");
  param_1[0x1f2] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetColorWriteMaskEXT");
  param_1[499] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthClampEnableEXT");
  param_1[500] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLogicOpEnableEXT");
  param_1[0x1f5] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetPolygonModeEXT");
  param_1[0x1f6] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRasterizationSamplesEXT");
  param_1[0x1f7] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetSampleMaskEXT");
  param_1[0x1f8] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetTessellationDomainOriginEXT");
  param_1[0x1f9] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRasterizationStreamEXT");
  param_1[0x1fa] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetConservativeRasterizationModeEXT");
  param_1[0x1fb] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetExtraPrimitiveOverestimationSizeEXT");
  param_1[0x1fc] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthClipEnableEXT");
  param_1[0x1fd] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetSampleLocationsEnableEXT");
  param_1[0x1fe] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetColorBlendAdvancedEXT");
  param_1[0x1ff] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetProvokingVertexModeEXT");
  param_1[0x200] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLineRasterizationModeEXT");
  param_1[0x201] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetLineStippleEnableEXT");
  param_1[0x202] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetDepthClipNegativeOneToOneEXT");
  param_1[0x203] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportWScalingEnableNV");
  param_1[0x204] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetViewportSwizzleNV");
  param_1[0x205] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageToColorEnableNV");
  param_1[0x206] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageToColorLocationNV");
  param_1[0x207] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageModulationModeNV");
  param_1[0x208] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageModulationTableEnableNV");
  param_1[0x209] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageModulationTableNV");
  param_1[0x20a] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetShadingRateImageEnableNV");
  param_1[0x20b] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetRepresentativeFragmentTestEnableNV");
  param_1[0x20c] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetCoverageReductionModeNV");
  param_1[0x20d] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetImageSubresourceLayout2EXT");
  param_1[0x20e] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdSetVertexInputEXT");
  param_1[0x20f] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkCmdPushDescriptorSetWithTemplateKHR");
  param_1[0x210] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceGroupPresentCapabilitiesKHR");
  param_1[0x211] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkGetDeviceGroupSurfacePresentModesKHR");
  param_1[0x212] = uVar1;
  uVar1 = (*vkGetDeviceProcAddr)(param_2,"vkAcquireNextImage2KHR");
  param_1[0x213] = uVar1;
  return;
}


