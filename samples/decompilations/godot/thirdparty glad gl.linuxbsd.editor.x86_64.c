
void glad_gl_load_GL_VERSION_1_0(code *param_1,undefined8 param_2)

{
  if (GLAD_GL_VERSION_1_0 != 0) {
    glad_glAccum = (*param_1)(param_2,"glAccum");
    glad_glAlphaFunc = (*param_1)(param_2,"glAlphaFunc");
    glad_glBegin = (*param_1)(param_2,"glBegin");
    glad_glBitmap = (*param_1)(param_2,"glBitmap");
    glad_glBlendFunc = (*param_1)(param_2,"glBlendFunc");
    glad_glCallList = (*param_1)(param_2,"glCallList");
    glad_glCallLists = (*param_1)(param_2,"glCallLists");
    glad_glClear = (*param_1)(param_2,"glClear");
    glad_glClearAccum = (*param_1)(param_2,"glClearAccum");
    glad_glClearColor = (*param_1)(param_2,"glClearColor");
    glad_glClearDepth = (*param_1)(param_2,"glClearDepth");
    glad_glClearIndex = (*param_1)(param_2,"glClearIndex");
    glad_glClearStencil = (*param_1)(param_2,"glClearStencil");
    glad_glClipPlane = (*param_1)(param_2,"glClipPlane");
    glad_glColor3b = (*param_1)(param_2,"glColor3b");
    glad_glColor3bv = (*param_1)(param_2,"glColor3bv");
    glad_glColor3d = (*param_1)(param_2,"glColor3d");
    glad_glColor3dv = (*param_1)(param_2,"glColor3dv");
    glad_glColor3f = (*param_1)(param_2,"glColor3f");
    glad_glColor3fv = (*param_1)(param_2,"glColor3fv");
    glad_glColor3i = (*param_1)(param_2,"glColor3i");
    glad_glColor3iv = (*param_1)(param_2,"glColor3iv");
    glad_glColor3s = (*param_1)(param_2,"glColor3s");
    glad_glColor3sv = (*param_1)(param_2,"glColor3sv");
    glad_glColor3ub = (*param_1)(param_2,"glColor3ub");
    glad_glColor3ubv = (*param_1)(param_2,"glColor3ubv");
    glad_glColor3ui = (*param_1)(param_2,"glColor3ui");
    glad_glColor3uiv = (*param_1)(param_2,"glColor3uiv");
    glad_glColor3us = (*param_1)(param_2,"glColor3us");
    glad_glColor3usv = (*param_1)(param_2,"glColor3usv");
    glad_glColor4b = (*param_1)(param_2,"glColor4b");
    glad_glColor4bv = (*param_1)(param_2,"glColor4bv");
    glad_glColor4d = (*param_1)(param_2,"glColor4d");
    glad_glColor4dv = (*param_1)(param_2,"glColor4dv");
    glad_glColor4f = (*param_1)(param_2,"glColor4f");
    glad_glColor4fv = (*param_1)(param_2,"glColor4fv");
    glad_glColor4i = (*param_1)(param_2,"glColor4i");
    glad_glColor4iv = (*param_1)(param_2,"glColor4iv");
    glad_glColor4s = (*param_1)(param_2,"glColor4s");
    glad_glColor4sv = (*param_1)(param_2,"glColor4sv");
    glad_glColor4ub = (*param_1)(param_2,"glColor4ub");
    glad_glColor4ubv = (*param_1)(param_2,"glColor4ubv");
    glad_glColor4ui = (*param_1)(param_2,"glColor4ui");
    glad_glColor4uiv = (*param_1)(param_2,"glColor4uiv");
    glad_glColor4us = (*param_1)(param_2,"glColor4us");
    glad_glColor4usv = (*param_1)(param_2,"glColor4usv");
    glad_glColorMask = (*param_1)(param_2,"glColorMask");
    glad_glColorMaterial = (*param_1)(param_2,"glColorMaterial");
    glad_glCopyPixels = (*param_1)(param_2,"glCopyPixels");
    glad_glCullFace = (*param_1)(param_2,"glCullFace");
    glad_glDeleteLists = (*param_1)(param_2,"glDeleteLists");
    glad_glDepthFunc = (*param_1)(param_2,"glDepthFunc");
    glad_glDepthMask = (*param_1)(param_2,"glDepthMask");
    glad_glDepthRange = (*param_1)(param_2,"glDepthRange");
    glad_glDisable = (*param_1)(param_2,"glDisable");
    glad_glDrawBuffer = (*param_1)(param_2,"glDrawBuffer");
    glad_glDrawPixels = (*param_1)(param_2,"glDrawPixels");
    glad_glEdgeFlag = (*param_1)(param_2,"glEdgeFlag");
    glad_glEdgeFlagv = (*param_1)(param_2,"glEdgeFlagv");
    glad_glEnable = (*param_1)(param_2,"glEnable");
    glad_glEnd = (*param_1)(param_2,"glEnd");
    glad_glEndList = (*param_1)(param_2,"glEndList");
    glad_glEvalCoord1d = (*param_1)(param_2,"glEvalCoord1d");
    glad_glEvalCoord1dv = (*param_1)(param_2,"glEvalCoord1dv");
    glad_glEvalCoord1f = (*param_1)(param_2,"glEvalCoord1f");
    glad_glEvalCoord1fv = (*param_1)(param_2,"glEvalCoord1fv");
    glad_glEvalCoord2d = (*param_1)(param_2,"glEvalCoord2d");
    glad_glEvalCoord2dv = (*param_1)(param_2,"glEvalCoord2dv");
    glad_glEvalCoord2f = (*param_1)(param_2,"glEvalCoord2f");
    glad_glEvalCoord2fv = (*param_1)(param_2,"glEvalCoord2fv");
    glad_glEvalMesh1 = (*param_1)(param_2,"glEvalMesh1");
    glad_glEvalMesh2 = (*param_1)(param_2,"glEvalMesh2");
    glad_glEvalPoint1 = (*param_1)(param_2,"glEvalPoint1");
    glad_glEvalPoint2 = (*param_1)(param_2,"glEvalPoint2");
    glad_glFeedbackBuffer = (*param_1)(param_2,"glFeedbackBuffer");
    glad_glFinish = (*param_1)(param_2,"glFinish");
    glad_glFlush = (*param_1)(param_2,"glFlush");
    glad_glFogf = (*param_1)(param_2,"glFogf");
    glad_glFogfv = (*param_1)(param_2,"glFogfv");
    glad_glFogi = (*param_1)(param_2,"glFogi");
    glad_glFogiv = (*param_1)(param_2,"glFogiv");
    glad_glFrontFace = (*param_1)(param_2,"glFrontFace");
    glad_glFrustum = (*param_1)(param_2,"glFrustum");
    glad_glGenLists = (*param_1)(param_2,"glGenLists");
    glad_glGetBooleanv = (*param_1)(param_2,"glGetBooleanv");
    glad_glGetClipPlane = (*param_1)(param_2,"glGetClipPlane");
    glad_glGetDoublev = (*param_1)(param_2,"glGetDoublev");
    glad_glGetError = (*param_1)(param_2,"glGetError");
    glad_glGetFloatv = (*param_1)(param_2,"glGetFloatv");
    glad_glGetIntegerv = (*param_1)(param_2,"glGetIntegerv");
    glad_glGetLightfv = (*param_1)(param_2,"glGetLightfv");
    glad_glGetLightiv = (*param_1)(param_2,"glGetLightiv");
    glad_glGetMapdv = (*param_1)(param_2,"glGetMapdv");
    glad_glGetMapfv = (*param_1)(param_2,"glGetMapfv");
    glad_glGetMapiv = (*param_1)(param_2,"glGetMapiv");
    glad_glGetMaterialfv = (*param_1)(param_2,"glGetMaterialfv");
    glad_glGetMaterialiv = (*param_1)(param_2,"glGetMaterialiv");
    glad_glGetPixelMapfv = (*param_1)(param_2,"glGetPixelMapfv");
    glad_glGetPixelMapuiv = (*param_1)(param_2,"glGetPixelMapuiv");
    glad_glGetPixelMapusv = (*param_1)(param_2,"glGetPixelMapusv");
    glad_glGetPolygonStipple = (*param_1)(param_2,"glGetPolygonStipple");
    glad_glGetString = (*param_1)(param_2,"glGetString");
    glad_glGetTexEnvfv = (*param_1)(param_2,"glGetTexEnvfv");
    glad_glGetTexEnviv = (*param_1)(param_2,"glGetTexEnviv");
    glad_glGetTexGendv = (*param_1)(param_2,"glGetTexGendv");
    glad_glGetTexGenfv = (*param_1)(param_2,"glGetTexGenfv");
    glad_glGetTexGeniv = (*param_1)(param_2,"glGetTexGeniv");
    glad_glGetTexImage = (*param_1)(param_2,"glGetTexImage");
    glad_glGetTexLevelParameterfv = (*param_1)(param_2,"glGetTexLevelParameterfv");
    glad_glGetTexLevelParameteriv = (*param_1)(param_2,"glGetTexLevelParameteriv");
    glad_glGetTexParameterfv = (*param_1)(param_2,"glGetTexParameterfv");
    glad_glGetTexParameteriv = (*param_1)(param_2,"glGetTexParameteriv");
    glad_glHint = (*param_1)(param_2,"glHint");
    glad_glIndexMask = (*param_1)(param_2,"glIndexMask");
    glad_glIndexd = (*param_1)(param_2,"glIndexd");
    glad_glIndexdv = (*param_1)(param_2,"glIndexdv");
    glad_glIndexf = (*param_1)(param_2,"glIndexf");
    glad_glIndexfv = (*param_1)(param_2,"glIndexfv");
    glad_glIndexi = (*param_1)(param_2,"glIndexi");
    glad_glIndexiv = (*param_1)(param_2,"glIndexiv");
    glad_glIndexs = (*param_1)(param_2,"glIndexs");
    glad_glIndexsv = (*param_1)(param_2,"glIndexsv");
    glad_glInitNames = (*param_1)(param_2,"glInitNames");
    glad_glIsEnabled = (*param_1)(param_2,"glIsEnabled");
    glad_glIsList = (*param_1)(param_2,"glIsList");
    glad_glLightModelf = (*param_1)(param_2,"glLightModelf");
    glad_glLightModelfv = (*param_1)(param_2,"glLightModelfv");
    glad_glLightModeli = (*param_1)(param_2,"glLightModeli");
    glad_glLightModeliv = (*param_1)(param_2,"glLightModeliv");
    glad_glLightf = (*param_1)(param_2,"glLightf");
    glad_glLightfv = (*param_1)(param_2,"glLightfv");
    glad_glLighti = (*param_1)(param_2,"glLighti");
    glad_glLightiv = (*param_1)(param_2,"glLightiv");
    glad_glLineStipple = (*param_1)(param_2,"glLineStipple");
    glad_glLineWidth = (*param_1)(param_2,"glLineWidth");
    glad_glListBase = (*param_1)(param_2,"glListBase");
    glad_glLoadIdentity = (*param_1)(param_2,"glLoadIdentity");
    glad_glLoadMatrixd = (*param_1)(param_2,"glLoadMatrixd");
    glad_glLoadMatrixf = (*param_1)(param_2,"glLoadMatrixf");
    glad_glLoadName = (*param_1)(param_2,"glLoadName");
    glad_glLogicOp = (*param_1)(param_2,"glLogicOp");
    glad_glMap1d = (*param_1)(param_2,"glMap1d");
    glad_glMap1f = (*param_1)(param_2,"glMap1f");
    glad_glMap2d = (*param_1)(param_2,"glMap2d");
    glad_glMap2f = (*param_1)(param_2,"glMap2f");
    glad_glMapGrid1d = (*param_1)(param_2,"glMapGrid1d");
    glad_glMapGrid1f = (*param_1)(param_2,"glMapGrid1f");
    glad_glMapGrid2d = (*param_1)(param_2,"glMapGrid2d");
    glad_glMapGrid2f = (*param_1)(param_2,"glMapGrid2f");
    glad_glMaterialf = (*param_1)(param_2,"glMaterialf");
    glad_glMaterialfv = (*param_1)(param_2,"glMaterialfv");
    glad_glMateriali = (*param_1)(param_2,"glMateriali");
    glad_glMaterialiv = (*param_1)(param_2,"glMaterialiv");
    glad_glMatrixMode = (*param_1)(param_2,"glMatrixMode");
    glad_glMultMatrixd = (*param_1)(param_2,"glMultMatrixd");
    glad_glMultMatrixf = (*param_1)(param_2,"glMultMatrixf");
    glad_glNewList = (*param_1)(param_2,"glNewList");
    glad_glNormal3b = (*param_1)(param_2,"glNormal3b");
    glad_glNormal3bv = (*param_1)(param_2,"glNormal3bv");
    glad_glNormal3d = (*param_1)(param_2,"glNormal3d");
    glad_glNormal3dv = (*param_1)(param_2,"glNormal3dv");
    glad_glNormal3f = (*param_1)(param_2,"glNormal3f");
    glad_glNormal3fv = (*param_1)(param_2,"glNormal3fv");
    glad_glNormal3i = (*param_1)(param_2,"glNormal3i");
    glad_glNormal3iv = (*param_1)(param_2,"glNormal3iv");
    glad_glNormal3s = (*param_1)(param_2,"glNormal3s");
    glad_glNormal3sv = (*param_1)(param_2,"glNormal3sv");
    glad_glOrtho = (*param_1)(param_2,"glOrtho");
    glad_glPassThrough = (*param_1)(param_2,"glPassThrough");
    glad_glPixelMapfv = (*param_1)(param_2,"glPixelMapfv");
    glad_glPixelMapuiv = (*param_1)(param_2,"glPixelMapuiv");
    glad_glPixelMapusv = (*param_1)(param_2,"glPixelMapusv");
    glad_glPixelStoref = (*param_1)(param_2,"glPixelStoref");
    glad_glPixelStorei = (*param_1)(param_2,"glPixelStorei");
    glad_glPixelTransferf = (*param_1)(param_2,"glPixelTransferf");
    glad_glPixelTransferi = (*param_1)(param_2,"glPixelTransferi");
    glad_glPixelZoom = (*param_1)(param_2,"glPixelZoom");
    glad_glPointSize = (*param_1)(param_2,"glPointSize");
    glad_glPolygonMode = (*param_1)(param_2,"glPolygonMode");
    glad_glPolygonStipple = (*param_1)(param_2,"glPolygonStipple");
    glad_glPopAttrib = (*param_1)(param_2,"glPopAttrib");
    glad_glPopMatrix = (*param_1)(param_2,"glPopMatrix");
    glad_glPopName = (*param_1)(param_2,"glPopName");
    glad_glPushAttrib = (*param_1)(param_2,"glPushAttrib");
    glad_glPushMatrix = (*param_1)(param_2,"glPushMatrix");
    glad_glPushName = (*param_1)(param_2,"glPushName");
    glad_glRasterPos2d = (*param_1)(param_2,"glRasterPos2d");
    glad_glRasterPos2dv = (*param_1)(param_2,"glRasterPos2dv");
    glad_glRasterPos2f = (*param_1)(param_2,"glRasterPos2f");
    glad_glRasterPos2fv = (*param_1)(param_2,"glRasterPos2fv");
    glad_glRasterPos2i = (*param_1)(param_2,"glRasterPos2i");
    glad_glRasterPos2iv = (*param_1)(param_2,"glRasterPos2iv");
    glad_glRasterPos2s = (*param_1)(param_2,"glRasterPos2s");
    glad_glRasterPos2sv = (*param_1)(param_2,"glRasterPos2sv");
    glad_glRasterPos3d = (*param_1)(param_2,"glRasterPos3d");
    glad_glRasterPos3dv = (*param_1)(param_2,"glRasterPos3dv");
    glad_glRasterPos3f = (*param_1)(param_2,"glRasterPos3f");
    glad_glRasterPos3fv = (*param_1)(param_2,"glRasterPos3fv");
    glad_glRasterPos3i = (*param_1)(param_2,"glRasterPos3i");
    glad_glRasterPos3iv = (*param_1)(param_2,"glRasterPos3iv");
    glad_glRasterPos3s = (*param_1)(param_2,"glRasterPos3s");
    glad_glRasterPos3sv = (*param_1)(param_2,"glRasterPos3sv");
    glad_glRasterPos4d = (*param_1)(param_2,"glRasterPos4d");
    glad_glRasterPos4dv = (*param_1)(param_2,"glRasterPos4dv");
    glad_glRasterPos4f = (*param_1)(param_2,"glRasterPos4f");
    glad_glRasterPos4fv = (*param_1)(param_2,"glRasterPos4fv");
    glad_glRasterPos4i = (*param_1)(param_2,"glRasterPos4i");
    glad_glRasterPos4iv = (*param_1)(param_2,"glRasterPos4iv");
    glad_glRasterPos4s = (*param_1)(param_2,"glRasterPos4s");
    glad_glRasterPos4sv = (*param_1)(param_2,"glRasterPos4sv");
    glad_glReadBuffer = (*param_1)(param_2,"glReadBuffer");
    glad_glReadPixels = (*param_1)(param_2,"glReadPixels");
    glad_glRectd = (*param_1)(param_2,"glRectd");
    glad_glRectdv = (*param_1)(param_2,"glRectdv");
    glad_glRectf = (*param_1)(param_2,"glRectf");
    glad_glRectfv = (*param_1)(param_2,"glRectfv");
    glad_glRecti = (*param_1)(param_2,"glRecti");
    glad_glRectiv = (*param_1)(param_2,"glRectiv");
    glad_glRects = (*param_1)(param_2,"glRects");
    glad_glRectsv = (*param_1)(param_2,"glRectsv");
    glad_glRenderMode = (*param_1)(param_2,"glRenderMode");
    glad_glRotated = (*param_1)(param_2,"glRotated");
    glad_glRotatef = (*param_1)(param_2,"glRotatef");
    glad_glScaled = (*param_1)(param_2,"glScaled");
    glad_glScalef = (*param_1)(param_2,"glScalef");
    glad_glScissor = (*param_1)(param_2,"glScissor");
    glad_glSelectBuffer = (*param_1)(param_2,"glSelectBuffer");
    glad_glShadeModel = (*param_1)(param_2,"glShadeModel");
    glad_glStencilFunc = (*param_1)(param_2,"glStencilFunc");
    glad_glStencilMask = (*param_1)(param_2,"glStencilMask");
    glad_glStencilOp = (*param_1)(param_2,"glStencilOp");
    glad_glTexCoord1d = (*param_1)(param_2,"glTexCoord1d");
    glad_glTexCoord1dv = (*param_1)(param_2,"glTexCoord1dv");
    glad_glTexCoord1f = (*param_1)(param_2,"glTexCoord1f");
    glad_glTexCoord1fv = (*param_1)(param_2,"glTexCoord1fv");
    glad_glTexCoord1i = (*param_1)(param_2,"glTexCoord1i");
    glad_glTexCoord1iv = (*param_1)(param_2,"glTexCoord1iv");
    glad_glTexCoord1s = (*param_1)(param_2,"glTexCoord1s");
    glad_glTexCoord1sv = (*param_1)(param_2,"glTexCoord1sv");
    glad_glTexCoord2d = (*param_1)(param_2,"glTexCoord2d");
    glad_glTexCoord2dv = (*param_1)(param_2,"glTexCoord2dv");
    glad_glTexCoord2f = (*param_1)(param_2,"glTexCoord2f");
    glad_glTexCoord2fv = (*param_1)(param_2,"glTexCoord2fv");
    glad_glTexCoord2i = (*param_1)(param_2,"glTexCoord2i");
    glad_glTexCoord2iv = (*param_1)(param_2,"glTexCoord2iv");
    glad_glTexCoord2s = (*param_1)(param_2,"glTexCoord2s");
    glad_glTexCoord2sv = (*param_1)(param_2,"glTexCoord2sv");
    glad_glTexCoord3d = (*param_1)(param_2,"glTexCoord3d");
    glad_glTexCoord3dv = (*param_1)(param_2,"glTexCoord3dv");
    glad_glTexCoord3f = (*param_1)(param_2,"glTexCoord3f");
    glad_glTexCoord3fv = (*param_1)(param_2,"glTexCoord3fv");
    glad_glTexCoord3i = (*param_1)(param_2,"glTexCoord3i");
    glad_glTexCoord3iv = (*param_1)(param_2,"glTexCoord3iv");
    glad_glTexCoord3s = (*param_1)(param_2,"glTexCoord3s");
    glad_glTexCoord3sv = (*param_1)(param_2,"glTexCoord3sv");
    glad_glTexCoord4d = (*param_1)(param_2,"glTexCoord4d");
    glad_glTexCoord4dv = (*param_1)(param_2,"glTexCoord4dv");
    glad_glTexCoord4f = (*param_1)(param_2,"glTexCoord4f");
    glad_glTexCoord4fv = (*param_1)(param_2,"glTexCoord4fv");
    glad_glTexCoord4i = (*param_1)(param_2,"glTexCoord4i");
    glad_glTexCoord4iv = (*param_1)(param_2,"glTexCoord4iv");
    glad_glTexCoord4s = (*param_1)(param_2,"glTexCoord4s");
    glad_glTexCoord4sv = (*param_1)(param_2,"glTexCoord4sv");
    glad_glTexEnvf = (*param_1)(param_2,"glTexEnvf");
    glad_glTexEnvfv = (*param_1)(param_2,"glTexEnvfv");
    glad_glTexEnvi = (*param_1)(param_2,"glTexEnvi");
    glad_glTexEnviv = (*param_1)(param_2,"glTexEnviv");
    glad_glTexGend = (*param_1)(param_2,"glTexGend");
    glad_glTexGendv = (*param_1)(param_2,"glTexGendv");
    glad_glTexGenf = (*param_1)(param_2,"glTexGenf");
    glad_glTexGenfv = (*param_1)(param_2,"glTexGenfv");
    glad_glTexGeni = (*param_1)(param_2,"glTexGeni");
    glad_glTexGeniv = (*param_1)(param_2,"glTexGeniv");
    glad_glTexImage1D = (*param_1)(param_2,"glTexImage1D");
    glad_glTexImage2D = (*param_1)(param_2,"glTexImage2D");
    glad_glTexParameterf = (*param_1)(param_2,"glTexParameterf");
    glad_glTexParameterfv = (*param_1)(param_2,"glTexParameterfv");
    glad_glTexParameteri = (*param_1)(param_2,"glTexParameteri");
    glad_glTexParameteriv = (*param_1)(param_2,"glTexParameteriv");
    glad_glTranslated = (*param_1)(param_2,"glTranslated");
    glad_glTranslatef = (*param_1)(param_2,"glTranslatef");
    glad_glVertex2d = (*param_1)(param_2,"glVertex2d");
    glad_glVertex2dv = (*param_1)(param_2,"glVertex2dv");
    glad_glVertex2f = (*param_1)(param_2,"glVertex2f");
    glad_glVertex2fv = (*param_1)(param_2,"glVertex2fv");
    glad_glVertex2i = (*param_1)(param_2,"glVertex2i");
    glad_glVertex2iv = (*param_1)(param_2,"glVertex2iv");
    glad_glVertex2s = (*param_1)(param_2,"glVertex2s");
    glad_glVertex2sv = (*param_1)(param_2,"glVertex2sv");
    glad_glVertex3d = (*param_1)(param_2,"glVertex3d");
    glad_glVertex3dv = (*param_1)(param_2,"glVertex3dv");
    glad_glVertex3f = (*param_1)(param_2,"glVertex3f");
    glad_glVertex3fv = (*param_1)(param_2,"glVertex3fv");
    glad_glVertex3i = (*param_1)(param_2,"glVertex3i");
    glad_glVertex3iv = (*param_1)(param_2,"glVertex3iv");
    glad_glVertex3s = (*param_1)(param_2,"glVertex3s");
    glad_glVertex3sv = (*param_1)(param_2,"glVertex3sv");
    glad_glVertex4d = (*param_1)(param_2,"glVertex4d");
    glad_glVertex4dv = (*param_1)(param_2,"glVertex4dv");
    glad_glVertex4f = (*param_1)(param_2,"glVertex4f");
    glad_glVertex4fv = (*param_1)(param_2,"glVertex4fv");
    glad_glVertex4i = (*param_1)(param_2,"glVertex4i");
    glad_glVertex4iv = (*param_1)(param_2,"glVertex4iv");
    glad_glVertex4s = (*param_1)(param_2,"glVertex4s");
    glad_glVertex4sv = (*param_1)(param_2,"glVertex4sv");
    glad_glViewport = (*param_1)(param_2,"glViewport");
    return;
  }
  return;
}



void glad_gl_load_GL_VERSION_1_1(code *param_1,undefined8 param_2)

{
  if (GLAD_GL_VERSION_1_1 != 0) {
    glad_glAreTexturesResident = (*param_1)(param_2,"glAreTexturesResident");
    glad_glArrayElement = (*param_1)(param_2,"glArrayElement");
    glad_glBindTexture = (*param_1)(param_2,"glBindTexture");
    glad_glColorPointer = (*param_1)(param_2,"glColorPointer");
    glad_glCopyTexImage1D = (*param_1)(param_2,"glCopyTexImage1D");
    glad_glCopyTexImage2D = (*param_1)(param_2,"glCopyTexImage2D");
    glad_glCopyTexSubImage1D = (*param_1)(param_2,"glCopyTexSubImage1D");
    glad_glCopyTexSubImage2D = (*param_1)(param_2,"glCopyTexSubImage2D");
    glad_glDeleteTextures = (*param_1)(param_2,"glDeleteTextures");
    glad_glDisableClientState = (*param_1)(param_2,"glDisableClientState");
    glad_glDrawArrays = (*param_1)(param_2,"glDrawArrays");
    glad_glDrawElements = (*param_1)(param_2,"glDrawElements");
    glad_glEdgeFlagPointer = (*param_1)(param_2,"glEdgeFlagPointer");
    glad_glEnableClientState = (*param_1)(param_2,"glEnableClientState");
    glad_glGenTextures = (*param_1)(param_2,"glGenTextures");
    glad_glGetPointerv = (*param_1)(param_2,"glGetPointerv");
    glad_glIndexPointer = (*param_1)(param_2,"glIndexPointer");
    glad_glIndexub = (*param_1)(param_2,"glIndexub");
    glad_glIndexubv = (*param_1)(param_2,"glIndexubv");
    glad_glInterleavedArrays = (*param_1)(param_2,"glInterleavedArrays");
    glad_glIsTexture = (*param_1)(param_2,"glIsTexture");
    glad_glNormalPointer = (*param_1)(param_2,"glNormalPointer");
    glad_glPolygonOffset = (*param_1)(param_2,"glPolygonOffset");
    glad_glPopClientAttrib = (*param_1)(param_2,"glPopClientAttrib");
    glad_glPrioritizeTextures = (*param_1)(param_2,"glPrioritizeTextures");
    glad_glPushClientAttrib = (*param_1)(param_2,"glPushClientAttrib");
    glad_glTexCoordPointer = (*param_1)(param_2,"glTexCoordPointer");
    glad_glTexSubImage1D = (*param_1)(param_2,"glTexSubImage1D");
    glad_glTexSubImage2D = (*param_1)(param_2,"glTexSubImage2D");
    glad_glVertexPointer = (*param_1)(param_2,"glVertexPointer");
    return;
  }
  return;
}



void glad_gl_load_GL_VERSION_1_3(code *param_1,undefined8 param_2)

{
  if (GLAD_GL_VERSION_1_3 != 0) {
    glad_glActiveTexture = (*param_1)(param_2,"glActiveTexture");
    glad_glClientActiveTexture = (*param_1)(param_2,"glClientActiveTexture");
    glad_glCompressedTexImage1D = (*param_1)(param_2,"glCompressedTexImage1D");
    glad_glCompressedTexImage2D = (*param_1)(param_2,"glCompressedTexImage2D");
    glad_glCompressedTexImage3D = (*param_1)(param_2,"glCompressedTexImage3D");
    glad_glCompressedTexSubImage1D = (*param_1)(param_2,"glCompressedTexSubImage1D");
    glad_glCompressedTexSubImage2D = (*param_1)(param_2,"glCompressedTexSubImage2D");
    glad_glCompressedTexSubImage3D = (*param_1)(param_2,"glCompressedTexSubImage3D");
    glad_glGetCompressedTexImage = (*param_1)(param_2,"glGetCompressedTexImage");
    glad_glLoadTransposeMatrixd = (*param_1)(param_2,"glLoadTransposeMatrixd");
    glad_glLoadTransposeMatrixf = (*param_1)(param_2,"glLoadTransposeMatrixf");
    glad_glMultTransposeMatrixd = (*param_1)(param_2,"glMultTransposeMatrixd");
    glad_glMultTransposeMatrixf = (*param_1)(param_2,"glMultTransposeMatrixf");
    glad_glMultiTexCoord1d = (*param_1)(param_2,"glMultiTexCoord1d");
    glad_glMultiTexCoord1dv = (*param_1)(param_2,"glMultiTexCoord1dv");
    glad_glMultiTexCoord1f = (*param_1)(param_2,"glMultiTexCoord1f");
    glad_glMultiTexCoord1fv = (*param_1)(param_2,"glMultiTexCoord1fv");
    glad_glMultiTexCoord1i = (*param_1)(param_2,"glMultiTexCoord1i");
    glad_glMultiTexCoord1iv = (*param_1)(param_2,"glMultiTexCoord1iv");
    glad_glMultiTexCoord1s = (*param_1)(param_2,"glMultiTexCoord1s");
    glad_glMultiTexCoord1sv = (*param_1)(param_2,"glMultiTexCoord1sv");
    glad_glMultiTexCoord2d = (*param_1)(param_2,"glMultiTexCoord2d");
    glad_glMultiTexCoord2dv = (*param_1)(param_2,"glMultiTexCoord2dv");
    glad_glMultiTexCoord2f = (*param_1)(param_2,"glMultiTexCoord2f");
    glad_glMultiTexCoord2fv = (*param_1)(param_2,"glMultiTexCoord2fv");
    glad_glMultiTexCoord2i = (*param_1)(param_2,"glMultiTexCoord2i");
    glad_glMultiTexCoord2iv = (*param_1)(param_2,"glMultiTexCoord2iv");
    glad_glMultiTexCoord2s = (*param_1)(param_2,"glMultiTexCoord2s");
    glad_glMultiTexCoord2sv = (*param_1)(param_2,"glMultiTexCoord2sv");
    glad_glMultiTexCoord3d = (*param_1)(param_2,"glMultiTexCoord3d");
    glad_glMultiTexCoord3dv = (*param_1)(param_2,"glMultiTexCoord3dv");
    glad_glMultiTexCoord3f = (*param_1)(param_2,"glMultiTexCoord3f");
    glad_glMultiTexCoord3fv = (*param_1)(param_2,"glMultiTexCoord3fv");
    glad_glMultiTexCoord3i = (*param_1)(param_2,"glMultiTexCoord3i");
    glad_glMultiTexCoord3iv = (*param_1)(param_2,"glMultiTexCoord3iv");
    glad_glMultiTexCoord3s = (*param_1)(param_2,"glMultiTexCoord3s");
    glad_glMultiTexCoord3sv = (*param_1)(param_2,"glMultiTexCoord3sv");
    glad_glMultiTexCoord4d = (*param_1)(param_2,"glMultiTexCoord4d");
    glad_glMultiTexCoord4dv = (*param_1)(param_2,"glMultiTexCoord4dv");
    glad_glMultiTexCoord4f = (*param_1)(param_2,"glMultiTexCoord4f");
    glad_glMultiTexCoord4fv = (*param_1)(param_2,"glMultiTexCoord4fv");
    glad_glMultiTexCoord4i = (*param_1)(param_2,"glMultiTexCoord4i");
    glad_glMultiTexCoord4iv = (*param_1)(param_2,"glMultiTexCoord4iv");
    glad_glMultiTexCoord4s = (*param_1)(param_2,"glMultiTexCoord4s");
    glad_glMultiTexCoord4sv = (*param_1)(param_2,"glMultiTexCoord4sv");
    glad_glSampleCoverage = (*param_1)(param_2,"glSampleCoverage");
    return;
  }
  return;
}



void glad_gl_load_GL_VERSION_1_4(code *param_1,undefined8 param_2)

{
  if (GLAD_GL_VERSION_1_4 != 0) {
    glad_glBlendColor = (*param_1)(param_2,"glBlendColor");
    glad_glBlendEquation = (*param_1)(param_2,"glBlendEquation");
    glad_glBlendFuncSeparate = (*param_1)(param_2,"glBlendFuncSeparate");
    glad_glFogCoordPointer = (*param_1)(param_2,"glFogCoordPointer");
    glad_glFogCoordd = (*param_1)(param_2,"glFogCoordd");
    glad_glFogCoorddv = (*param_1)(param_2,"glFogCoorddv");
    glad_glFogCoordf = (*param_1)(param_2,"glFogCoordf");
    glad_glFogCoordfv = (*param_1)(param_2,"glFogCoordfv");
    glad_glMultiDrawArrays = (*param_1)(param_2,"glMultiDrawArrays");
    glad_glMultiDrawElements = (*param_1)(param_2,"glMultiDrawElements");
    glad_glPointParameterf = (*param_1)(param_2,"glPointParameterf");
    glad_glPointParameterfv = (*param_1)(param_2,"glPointParameterfv");
    glad_glPointParameteri = (*param_1)(param_2,"glPointParameteri");
    glad_glPointParameteriv = (*param_1)(param_2,"glPointParameteriv");
    glad_glSecondaryColor3b = (*param_1)(param_2,"glSecondaryColor3b");
    glad_glSecondaryColor3bv = (*param_1)(param_2,"glSecondaryColor3bv");
    glad_glSecondaryColor3d = (*param_1)(param_2,"glSecondaryColor3d");
    glad_glSecondaryColor3dv = (*param_1)(param_2,"glSecondaryColor3dv");
    glad_glSecondaryColor3f = (*param_1)(param_2,"glSecondaryColor3f");
    glad_glSecondaryColor3fv = (*param_1)(param_2,"glSecondaryColor3fv");
    glad_glSecondaryColor3i = (*param_1)(param_2,"glSecondaryColor3i");
    glad_glSecondaryColor3iv = (*param_1)(param_2,"glSecondaryColor3iv");
    glad_glSecondaryColor3s = (*param_1)(param_2,"glSecondaryColor3s");
    glad_glSecondaryColor3sv = (*param_1)(param_2,"glSecondaryColor3sv");
    glad_glSecondaryColor3ub = (*param_1)(param_2,"glSecondaryColor3ub");
    glad_glSecondaryColor3ubv = (*param_1)(param_2,"glSecondaryColor3ubv");
    glad_glSecondaryColor3ui = (*param_1)(param_2,"glSecondaryColor3ui");
    glad_glSecondaryColor3uiv = (*param_1)(param_2,"glSecondaryColor3uiv");
    glad_glSecondaryColor3us = (*param_1)(param_2,"glSecondaryColor3us");
    glad_glSecondaryColor3usv = (*param_1)(param_2,"glSecondaryColor3usv");
    glad_glSecondaryColorPointer = (*param_1)(param_2,"glSecondaryColorPointer");
    glad_glWindowPos2d = (*param_1)(param_2,"glWindowPos2d");
    glad_glWindowPos2dv = (*param_1)(param_2,"glWindowPos2dv");
    glad_glWindowPos2f = (*param_1)(param_2,"glWindowPos2f");
    glad_glWindowPos2fv = (*param_1)(param_2,"glWindowPos2fv");
    glad_glWindowPos2i = (*param_1)(param_2,"glWindowPos2i");
    glad_glWindowPos2iv = (*param_1)(param_2,"glWindowPos2iv");
    glad_glWindowPos2s = (*param_1)(param_2,"glWindowPos2s");
    glad_glWindowPos2sv = (*param_1)(param_2,"glWindowPos2sv");
    glad_glWindowPos3d = (*param_1)(param_2,"glWindowPos3d");
    glad_glWindowPos3dv = (*param_1)(param_2,"glWindowPos3dv");
    glad_glWindowPos3f = (*param_1)(param_2,"glWindowPos3f");
    glad_glWindowPos3fv = (*param_1)(param_2,"glWindowPos3fv");
    glad_glWindowPos3i = (*param_1)(param_2,"glWindowPos3i");
    glad_glWindowPos3iv = (*param_1)(param_2,"glWindowPos3iv");
    glad_glWindowPos3s = (*param_1)(param_2,"glWindowPos3s");
    glad_glWindowPos3sv = (*param_1)(param_2,"glWindowPos3sv");
    return;
  }
  return;
}



void glad_gl_load_GL_VERSION_1_5(code *param_1,undefined8 param_2)

{
  if (GLAD_GL_VERSION_1_5 != 0) {
    glad_glBeginQuery = (*param_1)(param_2,"glBeginQuery");
    glad_glBindBuffer = (*param_1)(param_2,"glBindBuffer");
    glad_glBufferData = (*param_1)(param_2,"glBufferData");
    glad_glBufferSubData = (*param_1)(param_2,"glBufferSubData");
    glad_glDeleteBuffers = (*param_1)(param_2,"glDeleteBuffers");
    glad_glDeleteQueries = (*param_1)(param_2,"glDeleteQueries");
    glad_glEndQuery = (*param_1)(param_2,"glEndQuery");
    glad_glGenBuffers = (*param_1)(param_2,"glGenBuffers");
    glad_glGenQueries = (*param_1)(param_2,"glGenQueries");
    glad_glGetBufferParameteriv = (*param_1)(param_2,"glGetBufferParameteriv");
    glad_glGetBufferPointerv = (*param_1)(param_2,"glGetBufferPointerv");
    glad_glGetBufferSubData = (*param_1)(param_2,"glGetBufferSubData");
    glad_glGetQueryObjectiv = (*param_1)(param_2,"glGetQueryObjectiv");
    glad_glGetQueryObjectuiv = (*param_1)(param_2,"glGetQueryObjectuiv");
    glad_glGetQueryiv = (*param_1)(param_2,"glGetQueryiv");
    glad_glIsBuffer = (*param_1)(param_2,"glIsBuffer");
    glad_glIsQuery = (*param_1)(param_2,"glIsQuery");
    glad_glMapBuffer = (*param_1)(param_2,"glMapBuffer");
    glad_glUnmapBuffer = (*param_1)(param_2,"glUnmapBuffer");
    return;
  }
  return;
}



void glad_gl_get_proc_from_userptr(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010225a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



long glad_gl_get_proc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (((code *)param_1[1] != (code *)0x0) && (lVar1 = (*(code *)param_1[1])(param_2), lVar1 != 0)) {
    return lVar1;
  }
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = dlsym(lVar2,param_2);
  return lVar2;
}



void glad_gles2_get_proc(long *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[1];
  if (*param_1 != 0) {
    lVar1 = dlsym(*param_1);
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001022fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



undefined8
glad_gl_has_extension(int param_1,byte *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  if (param_1 < 30000) {
    uVar6 = 0;
    if (param_2 != (byte *)0x0) {
      do {
        pbVar3 = (byte *)strstr((char *)param_2,param_5);
        if (pbVar3 == (byte *)0x0) {
          return 0;
        }
        sVar4 = strlen(param_5);
        pbVar5 = pbVar3 + sVar4;
      } while (((param_2 != pbVar3) && (param_2 = pbVar5, pbVar3[-1] != 0x20)) ||
              (param_2 = pbVar5, (*pbVar5 & 0xdf) != 0));
      uVar6 = 1;
    }
    return uVar6;
  }
  if (param_3 != 0) {
    puVar1 = param_4 + param_3;
    do {
      iVar2 = strcmp((char *)*param_4,param_5);
      if (iVar2 == 0) {
        return 1;
      }
      param_4 = param_4 + 1;
    } while (param_4 != puVar1);
  }
  return 0;
}



undefined8
glad_gl_get_extensions_constprop_0
          (int param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  char *__s;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 30000) {
    if (glad_glGetString != (code *)0x0) {
      uVar1 = (*glad_glGetString)(0x1f03);
      *param_2 = uVar1;
LAB_001023df:
      uVar1 = 1;
      goto LAB_0010242a;
    }
  }
  else {
    local_44 = 0;
    if ((glad_glGetStringi != (code *)0x0) && (glad_glGetIntegerv != (code *)0x0)) {
      (*glad_glGetIntegerv)(0x821d,&local_44);
      if (local_44 != 0) {
        pvVar2 = malloc((ulong)local_44 << 3);
        if (pvVar2 != (void *)0x0) {
          uVar5 = 0;
          do {
            __s = (char *)(*glad_glGetStringi)(0x1f03,uVar5 & 0xffffffff);
            sVar3 = strlen(__s);
            sVar3 = sVar3 + 1;
            pvVar4 = malloc(sVar3);
            if (pvVar4 != (void *)0x0) {
              pvVar4 = (void *)__memcpy_chk(pvVar4,__s,sVar3,sVar3);
            }
            *(void **)((long)pvVar2 + uVar5 * 8) = pvVar4;
            uVar5 = uVar5 + 1;
          } while ((uint)uVar5 < local_44);
          *param_3 = local_44;
          *param_4 = pvVar2;
          goto LAB_001023df;
        }
      }
    }
  }
  uVar1 = 0;
LAB_0010242a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int gladLoadGLUserPtr(code *param_1,undefined8 param_2)

{
  void *__ptr;
  uint uVar1;
  ulong uVar2;
  undefined8 *__ptr_00;
  int iVar3;
  int iVar4;
  long lVar5;
  char *__s1;
  char *__s2;
  size_t __n;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  uint local_7c;
  ulong local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  char *local_60 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  glad_glGetString = (code *)(*param_1)(param_2,"glGetString");
  if (glad_glGetString != (code *)0x0) {
    lVar5 = (*glad_glGetString)(0x1f02);
    if (lVar5 != 0) {
      local_60[3] = (char *)0x0;
      local_78 = local_78 & 0xffffffff00000000;
      local_60[2] = "OpenGL SC ";
      local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff00000000);
      local_60[0] = "OpenGL ES-CL ";
      local_60[1] = "OpenGL ES ";
      __s1 = (char *)(*glad_glGetString)(0x1f02);
      if (__s1 == (char *)0x0) {
        iVar3 = 0;
      }
      else {
        puVar7 = local_68;
        __n = 0xd;
        __s2 = "OpenGL ES-CM ";
        while( true ) {
          iVar3 = strncmp(__s1,__s2,__n);
          if (iVar3 == 0) break;
          __s2 = *(char **)(puVar7 + 8);
          puVar7 = puVar7 + 8;
          if (__s2 == (char *)0x0) goto LAB_001025c5;
          __n = strlen(__s2);
        }
        __s1 = __s1 + __n;
LAB_001025c5:
        __isoc99_sscanf(__s1,"%d.%d",&local_78);
        if ((int)local_78 == 1) {
          if ((int)local_70 < 0) {
            GLAD_GL_VERSION_1_0 = 0;
LAB_0010422a:
            GLAD_GL_VERSION_1_1 = 0;
LAB_00104234:
            GLAD_GL_VERSION_1_2 = 0;
LAB_001041de:
            GLAD_GL_VERSION_1_3 = 0;
          }
          else {
            GLAD_GL_VERSION_1_0 = 1;
            if ((int)local_70 == 0) goto LAB_0010422a;
            GLAD_GL_VERSION_1_1 = 1;
            if ((int)local_70 == 1) goto LAB_00104234;
            GLAD_GL_VERSION_1_2 = 1;
            if ((int)local_70 == 2) goto LAB_001041de;
            GLAD_GL_VERSION_1_3 = 1;
            if ((int)local_70 != 3) {
              GLAD_GL_VERSION_1_4 = 1;
              if ((int)local_70 != 4) {
                GLAD_GL_VERSION_1_5 = 1;
                GLAD_GL_VERSION_2_0 = 0;
                GLAD_GL_VERSION_2_1 = 0;
                goto LAB_00104192;
              }
              goto LAB_001041f8;
            }
          }
          GLAD_GL_VERSION_1_4 = 0;
LAB_001041f8:
          GLAD_GL_VERSION_1_5 = 0;
          GLAD_GL_VERSION_2_0 = 0;
          GLAD_GL_VERSION_2_1 = 0;
LAB_00104192:
          GLAD_GL_VERSION_3_0 = 0;
          GLAD_GL_VERSION_3_2 = 0;
          GLAD_GL_VERSION_3_3 = 0;
          GLAD_GL_VERSION_3_1 = 0;
        }
        else {
          if ((int)local_78 < 2) {
            GLAD_GL_VERSION_1_0 = 0;
            GLAD_GL_VERSION_1_1 = 0;
            GLAD_GL_VERSION_1_2 = 0;
            GLAD_GL_VERSION_1_3 = 0;
            GLAD_GL_VERSION_1_4 = 0;
            goto LAB_001041f8;
          }
          GLAD_GL_VERSION_1_0 = 1;
          GLAD_GL_VERSION_1_1 = 1;
          GLAD_GL_VERSION_1_2 = 1;
          GLAD_GL_VERSION_1_3 = 1;
          GLAD_GL_VERSION_1_4 = 1;
          GLAD_GL_VERSION_1_5 = 1;
          if ((int)local_78 == 2) {
            if ((int)local_70 < 0) {
              GLAD_GL_VERSION_2_0 = 0;
LAB_001042fa:
              GLAD_GL_VERSION_2_1 = 0;
            }
            else {
              GLAD_GL_VERSION_2_0 = 1;
              if ((int)local_70 == 0) goto LAB_001042fa;
              GLAD_GL_VERSION_2_1 = 1;
            }
            goto LAB_00104192;
          }
          GLAD_GL_VERSION_2_0 = 1;
          GLAD_GL_VERSION_2_1 = 1;
          if ((int)local_78 == 3) {
            if ((int)local_70 < 0) {
              GLAD_GL_VERSION_3_0 = 0;
LAB_00104313:
              GLAD_GL_VERSION_3_1 = 0;
              GLAD_GL_VERSION_3_2 = 0;
            }
            else {
              GLAD_GL_VERSION_3_0 = 1;
              if ((int)local_70 == 0) goto LAB_00104313;
              GLAD_GL_VERSION_3_1 = 1;
              GLAD_GL_VERSION_3_2 = (uint)((int)local_70 != 1);
            }
            GLAD_GL_VERSION_3_3 = (uint)(2 < (int)local_70);
          }
          else {
            GLAD_GL_VERSION_3_0 = 1;
            GLAD_GL_VERSION_3_2 = 1;
            GLAD_GL_VERSION_3_3 = 1;
            GLAD_GL_VERSION_3_1 = 1;
          }
        }
        iVar3 = (int)local_78 * 10000 + (int)local_70;
      }
      glad_gl_load_GL_VERSION_1_0(param_1,param_2);
      glad_gl_load_GL_VERSION_1_1(param_1,param_2);
      if (GLAD_GL_VERSION_1_2 != 0) {
        glad_glCopyTexSubImage3D = (*param_1)(param_2,"glCopyTexSubImage3D");
        glad_glDrawRangeElements = (*param_1)(param_2,"glDrawRangeElements");
        glad_glTexImage3D = (*param_1)(param_2,"glTexImage3D");
        glad_glTexSubImage3D = (*param_1)(param_2,"glTexSubImage3D");
      }
      glad_gl_load_GL_VERSION_1_3(param_1,param_2);
      glad_gl_load_GL_VERSION_1_4(param_1,param_2);
      glad_gl_load_GL_VERSION_1_5(param_1,param_2);
      if (GLAD_GL_VERSION_2_0 != 0) {
        glad_glAttachShader = (*param_1)(param_2,"glAttachShader");
        glad_glBindAttribLocation = (*param_1)(param_2,"glBindAttribLocation");
        glad_glBlendEquationSeparate = (*param_1)(param_2,"glBlendEquationSeparate");
        glad_glCompileShader = (*param_1)(param_2,"glCompileShader");
        glad_glCreateProgram = (*param_1)(param_2,"glCreateProgram");
        glad_glCreateShader = (*param_1)(param_2,"glCreateShader");
        glad_glDeleteProgram = (*param_1)(param_2,"glDeleteProgram");
        glad_glDeleteShader = (*param_1)(param_2,"glDeleteShader");
        glad_glDetachShader = (*param_1)(param_2,"glDetachShader");
        glad_glDisableVertexAttribArray = (*param_1)(param_2,"glDisableVertexAttribArray");
        glad_glDrawBuffers = (*param_1)(param_2,"glDrawBuffers");
        glad_glEnableVertexAttribArray = (*param_1)(param_2,"glEnableVertexAttribArray");
        glad_glGetActiveAttrib = (*param_1)(param_2,"glGetActiveAttrib");
        glad_glGetActiveUniform = (*param_1)(param_2,"glGetActiveUniform");
        glad_glGetAttachedShaders = (*param_1)(param_2,"glGetAttachedShaders");
        glad_glGetAttribLocation = (*param_1)(param_2,"glGetAttribLocation");
        glad_glGetProgramInfoLog = (*param_1)(param_2,"glGetProgramInfoLog");
        glad_glGetProgramiv = (*param_1)(param_2,"glGetProgramiv");
        glad_glGetShaderInfoLog = (*param_1)(param_2,"glGetShaderInfoLog");
        glad_glGetShaderSource = (*param_1)(param_2,"glGetShaderSource");
        glad_glGetShaderiv = (*param_1)(param_2,"glGetShaderiv");
        glad_glGetUniformLocation = (*param_1)(param_2,"glGetUniformLocation");
        glad_glGetUniformfv = (*param_1)(param_2,"glGetUniformfv");
        glad_glGetUniformiv = (*param_1)(param_2,"glGetUniformiv");
        glad_glGetVertexAttribPointerv = (*param_1)(param_2,"glGetVertexAttribPointerv");
        glad_glGetVertexAttribdv = (*param_1)(param_2,"glGetVertexAttribdv");
        glad_glGetVertexAttribfv = (*param_1)(param_2,"glGetVertexAttribfv");
        glad_glGetVertexAttribiv = (*param_1)(param_2,"glGetVertexAttribiv");
        glad_glIsProgram = (*param_1)(param_2,"glIsProgram");
        glad_glIsShader = (*param_1)(param_2,"glIsShader");
        glad_glLinkProgram = (*param_1)(param_2,"glLinkProgram");
        glad_glShaderSource = (*param_1)(param_2,"glShaderSource");
        glad_glStencilFuncSeparate = (*param_1)(param_2,"glStencilFuncSeparate");
        glad_glStencilMaskSeparate = (*param_1)(param_2,"glStencilMaskSeparate");
        glad_glStencilOpSeparate = (*param_1)(param_2,"glStencilOpSeparate");
        glad_glUniform1f = (*param_1)(param_2,"glUniform1f");
        glad_glUniform1fv = (*param_1)(param_2,"glUniform1fv");
        glad_glUniform1i = (*param_1)(param_2,"glUniform1i");
        glad_glUniform1iv = (*param_1)(param_2,"glUniform1iv");
        glad_glUniform2f = (*param_1)(param_2,"glUniform2f");
        glad_glUniform2fv = (*param_1)(param_2,"glUniform2fv");
        glad_glUniform2i = (*param_1)(param_2,"glUniform2i");
        glad_glUniform2iv = (*param_1)(param_2,"glUniform2iv");
        glad_glUniform3f = (*param_1)(param_2,"glUniform3f");
        glad_glUniform3fv = (*param_1)(param_2,"glUniform3fv");
        glad_glUniform3i = (*param_1)(param_2,"glUniform3i");
        glad_glUniform3iv = (*param_1)(param_2,"glUniform3iv");
        glad_glUniform4f = (*param_1)(param_2,"glUniform4f");
        glad_glUniform4fv = (*param_1)(param_2,"glUniform4fv");
        glad_glUniform4i = (*param_1)(param_2,"glUniform4i");
        glad_glUniform4iv = (*param_1)(param_2,"glUniform4iv");
        glad_glUniformMatrix2fv = (*param_1)(param_2,"glUniformMatrix2fv");
        glad_glUniformMatrix3fv = (*param_1)(param_2,"glUniformMatrix3fv");
        glad_glUniformMatrix4fv = (*param_1)(param_2,"glUniformMatrix4fv");
        glad_glUseProgram = (*param_1)(param_2,"glUseProgram");
        glad_glValidateProgram = (*param_1)(param_2,"glValidateProgram");
        glad_glVertexAttrib1d = (*param_1)(param_2,"glVertexAttrib1d");
        glad_glVertexAttrib1dv = (*param_1)(param_2,"glVertexAttrib1dv");
        glad_glVertexAttrib1f = (*param_1)(param_2,"glVertexAttrib1f");
        glad_glVertexAttrib1fv = (*param_1)(param_2,"glVertexAttrib1fv");
        glad_glVertexAttrib1s = (*param_1)(param_2,"glVertexAttrib1s");
        glad_glVertexAttrib1sv = (*param_1)(param_2,"glVertexAttrib1sv");
        glad_glVertexAttrib2d = (*param_1)(param_2,"glVertexAttrib2d");
        glad_glVertexAttrib2dv = (*param_1)(param_2,"glVertexAttrib2dv");
        glad_glVertexAttrib2f = (*param_1)(param_2,"glVertexAttrib2f");
        glad_glVertexAttrib2fv = (*param_1)(param_2,"glVertexAttrib2fv");
        glad_glVertexAttrib2s = (*param_1)(param_2,"glVertexAttrib2s");
        glad_glVertexAttrib2sv = (*param_1)(param_2,"glVertexAttrib2sv");
        glad_glVertexAttrib3d = (*param_1)(param_2,"glVertexAttrib3d");
        glad_glVertexAttrib3dv = (*param_1)(param_2,"glVertexAttrib3dv");
        glad_glVertexAttrib3f = (*param_1)(param_2,"glVertexAttrib3f");
        glad_glVertexAttrib3fv = (*param_1)(param_2,"glVertexAttrib3fv");
        glad_glVertexAttrib3s = (*param_1)(param_2,"glVertexAttrib3s");
        glad_glVertexAttrib3sv = (*param_1)(param_2,"glVertexAttrib3sv");
        glad_glVertexAttrib4Nbv = (*param_1)(param_2,"glVertexAttrib4Nbv");
        glad_glVertexAttrib4Niv = (*param_1)(param_2,"glVertexAttrib4Niv");
        glad_glVertexAttrib4Nsv = (*param_1)(param_2,"glVertexAttrib4Nsv");
        glad_glVertexAttrib4Nub = (*param_1)(param_2,"glVertexAttrib4Nub");
        glad_glVertexAttrib4Nubv = (*param_1)(param_2,"glVertexAttrib4Nubv");
        glad_glVertexAttrib4Nuiv = (*param_1)(param_2,"glVertexAttrib4Nuiv");
        glad_glVertexAttrib4Nusv = (*param_1)(param_2,"glVertexAttrib4Nusv");
        glad_glVertexAttrib4bv = (*param_1)(param_2,"glVertexAttrib4bv");
        glad_glVertexAttrib4d = (*param_1)(param_2,"glVertexAttrib4d");
        glad_glVertexAttrib4dv = (*param_1)(param_2,"glVertexAttrib4dv");
        glad_glVertexAttrib4f = (*param_1)(param_2,"glVertexAttrib4f");
        glad_glVertexAttrib4fv = (*param_1)(param_2,"glVertexAttrib4fv");
        glad_glVertexAttrib4iv = (*param_1)(param_2,"glVertexAttrib4iv");
        glad_glVertexAttrib4s = (*param_1)(param_2,"glVertexAttrib4s");
        glad_glVertexAttrib4sv = (*param_1)(param_2,"glVertexAttrib4sv");
        glad_glVertexAttrib4ubv = (*param_1)(param_2,"glVertexAttrib4ubv");
        glad_glVertexAttrib4uiv = (*param_1)(param_2,"glVertexAttrib4uiv");
        glad_glVertexAttrib4usv = (*param_1)(param_2,"glVertexAttrib4usv");
        glad_glVertexAttribPointer = (*param_1)(param_2,"glVertexAttribPointer");
      }
      if (GLAD_GL_VERSION_2_1 != 0) {
        glad_glUniformMatrix2x3fv = (*param_1)(param_2,"glUniformMatrix2x3fv");
        glad_glUniformMatrix2x4fv = (*param_1)(param_2,"glUniformMatrix2x4fv");
        glad_glUniformMatrix3x2fv = (*param_1)(param_2,"glUniformMatrix3x2fv");
        glad_glUniformMatrix3x4fv = (*param_1)(param_2,"glUniformMatrix3x4fv");
        glad_glUniformMatrix4x2fv = (*param_1)(param_2,"glUniformMatrix4x2fv");
        glad_glUniformMatrix4x3fv = (*param_1)(param_2,"glUniformMatrix4x3fv");
      }
      if (GLAD_GL_VERSION_3_0 != 0) {
        glad_glBeginConditionalRender = (*param_1)(param_2,"glBeginConditionalRender");
        glad_glBeginTransformFeedback = (*param_1)(param_2,"glBeginTransformFeedback");
        glad_glBindBufferBase = (*param_1)(param_2,"glBindBufferBase");
        glad_glBindBufferRange = (*param_1)(param_2,"glBindBufferRange");
        glad_glBindFragDataLocation = (*param_1)(param_2,"glBindFragDataLocation");
        glad_glBindFramebuffer = (*param_1)(param_2,"glBindFramebuffer");
        glad_glBindRenderbuffer = (*param_1)(param_2,"glBindRenderbuffer");
        glad_glBindVertexArray = (*param_1)(param_2,"glBindVertexArray");
        glad_glBlitFramebuffer = (*param_1)(param_2,"glBlitFramebuffer");
        glad_glCheckFramebufferStatus = (*param_1)(param_2,"glCheckFramebufferStatus");
        glad_glClampColor = (*param_1)(param_2,"glClampColor");
        glad_glClearBufferfi = (*param_1)(param_2,"glClearBufferfi");
        glad_glClearBufferfv = (*param_1)(param_2,"glClearBufferfv");
        glad_glClearBufferiv = (*param_1)(param_2,"glClearBufferiv");
        glad_glClearBufferuiv = (*param_1)(param_2,"glClearBufferuiv");
        glad_glColorMaski = (*param_1)(param_2,"glColorMaski");
        glad_glDeleteFramebuffers = (*param_1)(param_2,"glDeleteFramebuffers");
        glad_glDeleteRenderbuffers = (*param_1)(param_2,"glDeleteRenderbuffers");
        glad_glDeleteVertexArrays = (*param_1)(param_2,"glDeleteVertexArrays");
        glad_glDisablei = (*param_1)(param_2,"glDisablei");
        glad_glEnablei = (*param_1)(param_2,"glEnablei");
        glad_glEndConditionalRender = (*param_1)(param_2,"glEndConditionalRender");
        glad_glEndTransformFeedback = (*param_1)(param_2,"glEndTransformFeedback");
        glad_glFlushMappedBufferRange = (*param_1)(param_2,"glFlushMappedBufferRange");
        glad_glFramebufferRenderbuffer = (*param_1)(param_2,"glFramebufferRenderbuffer");
        glad_glFramebufferTexture1D = (*param_1)(param_2,"glFramebufferTexture1D");
        glad_glFramebufferTexture2D = (*param_1)(param_2,"glFramebufferTexture2D");
        glad_glFramebufferTexture3D = (*param_1)(param_2,"glFramebufferTexture3D");
        glad_glFramebufferTextureLayer = (*param_1)(param_2,"glFramebufferTextureLayer");
        glad_glGenFramebuffers = (*param_1)(param_2,"glGenFramebuffers");
        glad_glGenRenderbuffers = (*param_1)(param_2,"glGenRenderbuffers");
        glad_glGenVertexArrays = (*param_1)(param_2,"glGenVertexArrays");
        glad_glGenerateMipmap = (*param_1)(param_2,"glGenerateMipmap");
        glad_glGetBooleani_v = (*param_1)(param_2,"glGetBooleani_v");
        glad_glGetFragDataLocation = (*param_1)(param_2,"glGetFragDataLocation");
        glad_glGetFramebufferAttachmentParameteriv =
             (*param_1)(param_2,"glGetFramebufferAttachmentParameteriv");
        glad_glGetIntegeri_v = (*param_1)(param_2,"glGetIntegeri_v");
        glad_glGetRenderbufferParameteriv = (*param_1)(param_2,"glGetRenderbufferParameteriv");
        glad_glGetStringi = (*param_1)(param_2,"glGetStringi");
        glad_glGetTexParameterIiv = (*param_1)(param_2,"glGetTexParameterIiv");
        glad_glGetTexParameterIuiv = (*param_1)(param_2,"glGetTexParameterIuiv");
        glad_glGetTransformFeedbackVarying = (*param_1)(param_2,"glGetTransformFeedbackVarying");
        glad_glGetUniformuiv = (*param_1)(param_2,"glGetUniformuiv");
        glad_glGetVertexAttribIiv = (*param_1)(param_2,"glGetVertexAttribIiv");
        glad_glGetVertexAttribIuiv = (*param_1)(param_2,"glGetVertexAttribIuiv");
        glad_glIsEnabledi = (*param_1)(param_2,"glIsEnabledi");
        glad_glIsFramebuffer = (*param_1)(param_2,"glIsFramebuffer");
        glad_glIsRenderbuffer = (*param_1)(param_2,"glIsRenderbuffer");
        glad_glIsVertexArray = (*param_1)(param_2,"glIsVertexArray");
        glad_glMapBufferRange = (*param_1)(param_2,"glMapBufferRange");
        glad_glRenderbufferStorage = (*param_1)(param_2,"glRenderbufferStorage");
        glad_glRenderbufferStorageMultisample =
             (*param_1)(param_2,"glRenderbufferStorageMultisample");
        glad_glTexParameterIiv = (*param_1)(param_2,"glTexParameterIiv");
        glad_glTexParameterIuiv = (*param_1)(param_2,"glTexParameterIuiv");
        glad_glTransformFeedbackVaryings = (*param_1)(param_2,"glTransformFeedbackVaryings");
        glad_glUniform1ui = (*param_1)(param_2,"glUniform1ui");
        glad_glUniform1uiv = (*param_1)(param_2,"glUniform1uiv");
        glad_glUniform2ui = (*param_1)(param_2,"glUniform2ui");
        glad_glUniform2uiv = (*param_1)(param_2,"glUniform2uiv");
        glad_glUniform3ui = (*param_1)(param_2,"glUniform3ui");
        glad_glUniform3uiv = (*param_1)(param_2,"glUniform3uiv");
        glad_glUniform4ui = (*param_1)(param_2,"glUniform4ui");
        glad_glUniform4uiv = (*param_1)(param_2,"glUniform4uiv");
        glad_glVertexAttribI1i = (*param_1)(param_2,"glVertexAttribI1i");
        glad_glVertexAttribI1iv = (*param_1)(param_2,"glVertexAttribI1iv");
        glad_glVertexAttribI1ui = (*param_1)(param_2,"glVertexAttribI1ui");
        glad_glVertexAttribI1uiv = (*param_1)(param_2,"glVertexAttribI1uiv");
        glad_glVertexAttribI2i = (*param_1)(param_2,"glVertexAttribI2i");
        glad_glVertexAttribI2iv = (*param_1)(param_2,"glVertexAttribI2iv");
        glad_glVertexAttribI2ui = (*param_1)(param_2,"glVertexAttribI2ui");
        glad_glVertexAttribI2uiv = (*param_1)(param_2,"glVertexAttribI2uiv");
        glad_glVertexAttribI3i = (*param_1)(param_2,"glVertexAttribI3i");
        glad_glVertexAttribI3iv = (*param_1)(param_2,"glVertexAttribI3iv");
        glad_glVertexAttribI3ui = (*param_1)(param_2,"glVertexAttribI3ui");
        glad_glVertexAttribI3uiv = (*param_1)(param_2,"glVertexAttribI3uiv");
        glad_glVertexAttribI4bv = (*param_1)(param_2,"glVertexAttribI4bv");
        glad_glVertexAttribI4i = (*param_1)(param_2,"glVertexAttribI4i");
        glad_glVertexAttribI4iv = (*param_1)(param_2,"glVertexAttribI4iv");
        glad_glVertexAttribI4sv = (*param_1)(param_2,"glVertexAttribI4sv");
        glad_glVertexAttribI4ubv = (*param_1)(param_2,"glVertexAttribI4ubv");
        glad_glVertexAttribI4ui = (*param_1)(param_2,"glVertexAttribI4ui");
        glad_glVertexAttribI4uiv = (*param_1)(param_2,"glVertexAttribI4uiv");
        glad_glVertexAttribI4usv = (*param_1)(param_2,"glVertexAttribI4usv");
        glad_glVertexAttribIPointer = (*param_1)(param_2,"glVertexAttribIPointer");
      }
      if (GLAD_GL_VERSION_3_1 != 0) {
        glad_glBindBufferBase = (*param_1)(param_2,"glBindBufferBase");
        glad_glBindBufferRange = (*param_1)(param_2,"glBindBufferRange");
        glad_glCopyBufferSubData = (*param_1)(param_2,"glCopyBufferSubData");
        glad_glDrawArraysInstanced = (*param_1)(param_2,"glDrawArraysInstanced");
        glad_glDrawElementsInstanced = (*param_1)(param_2,"glDrawElementsInstanced");
        glad_glGetActiveUniformBlockName = (*param_1)(param_2,"glGetActiveUniformBlockName");
        glad_glGetActiveUniformBlockiv = (*param_1)(param_2,"glGetActiveUniformBlockiv");
        glad_glGetActiveUniformName = (*param_1)(param_2,"glGetActiveUniformName");
        glad_glGetActiveUniformsiv = (*param_1)(param_2,"glGetActiveUniformsiv");
        glad_glGetIntegeri_v = (*param_1)(param_2,"glGetIntegeri_v");
        glad_glGetUniformBlockIndex = (*param_1)(param_2,"glGetUniformBlockIndex");
        glad_glGetUniformIndices = (*param_1)(param_2,"glGetUniformIndices");
        glad_glPrimitiveRestartIndex = (*param_1)(param_2,"glPrimitiveRestartIndex");
        glad_glTexBuffer = (*param_1)(param_2,"glTexBuffer");
        glad_glUniformBlockBinding = (*param_1)(param_2,"glUniformBlockBinding");
      }
      if (GLAD_GL_VERSION_3_2 != 0) {
        glad_glClientWaitSync = (*param_1)(param_2,"glClientWaitSync");
        glad_glDeleteSync = (*param_1)(param_2,"glDeleteSync");
        glad_glDrawElementsBaseVertex = (*param_1)(param_2,"glDrawElementsBaseVertex");
        glad_glDrawElementsInstancedBaseVertex =
             (*param_1)(param_2,"glDrawElementsInstancedBaseVertex");
        glad_glDrawRangeElementsBaseVertex = (*param_1)(param_2,"glDrawRangeElementsBaseVertex");
        glad_glFenceSync = (*param_1)(param_2,"glFenceSync");
        glad_glFramebufferTexture = (*param_1)(param_2,"glFramebufferTexture");
        glad_glGetBufferParameteri64v = (*param_1)(param_2,"glGetBufferParameteri64v");
        glad_glGetInteger64i_v = (*param_1)(param_2,"glGetInteger64i_v");
        glad_glGetInteger64v = (*param_1)(param_2,"glGetInteger64v");
        glad_glGetMultisamplefv = (*param_1)(param_2,"glGetMultisamplefv");
        glad_glGetSynciv = (*param_1)(param_2,"glGetSynciv");
        glad_glIsSync = (*param_1)(param_2,"glIsSync");
        glad_glMultiDrawElementsBaseVertex = (*param_1)(param_2,"glMultiDrawElementsBaseVertex");
        glad_glProvokingVertex = (*param_1)(param_2,"glProvokingVertex");
        glad_glSampleMaski = (*param_1)(param_2,"glSampleMaski");
        glad_glTexImage2DMultisample = (*param_1)(param_2,"glTexImage2DMultisample");
        glad_glTexImage3DMultisample = (*param_1)(param_2,"glTexImage3DMultisample");
        glad_glWaitSync = (*param_1)(param_2,"glWaitSync");
      }
      if (GLAD_GL_VERSION_3_3 != 0) {
        glad_glBindFragDataLocationIndexed = (*param_1)(param_2,"glBindFragDataLocationIndexed");
        glad_glBindSampler = (*param_1)(param_2,"glBindSampler");
        glad_glColorP3ui = (*param_1)(param_2,"glColorP3ui");
        glad_glColorP3uiv = (*param_1)(param_2,"glColorP3uiv");
        glad_glColorP4ui = (*param_1)(param_2,"glColorP4ui");
        glad_glColorP4uiv = (*param_1)(param_2,"glColorP4uiv");
        glad_glDeleteSamplers = (*param_1)(param_2,"glDeleteSamplers");
        glad_glGenSamplers = (*param_1)(param_2,"glGenSamplers");
        glad_glGetFragDataIndex = (*param_1)(param_2,"glGetFragDataIndex");
        glad_glGetQueryObjecti64v = (*param_1)(param_2,"glGetQueryObjecti64v");
        glad_glGetQueryObjectui64v = (*param_1)(param_2,"glGetQueryObjectui64v");
        glad_glGetSamplerParameterIiv = (*param_1)(param_2,"glGetSamplerParameterIiv");
        glad_glGetSamplerParameterIuiv = (*param_1)(param_2,"glGetSamplerParameterIuiv");
        glad_glGetSamplerParameterfv = (*param_1)(param_2,"glGetSamplerParameterfv");
        glad_glGetSamplerParameteriv = (*param_1)(param_2,"glGetSamplerParameteriv");
        glad_glIsSampler = (*param_1)(param_2,"glIsSampler");
        glad_glMultiTexCoordP1ui = (*param_1)(param_2,"glMultiTexCoordP1ui");
        glad_glMultiTexCoordP1uiv = (*param_1)(param_2,"glMultiTexCoordP1uiv");
        glad_glMultiTexCoordP2ui = (*param_1)(param_2,"glMultiTexCoordP2ui");
        glad_glMultiTexCoordP2uiv = (*param_1)(param_2,"glMultiTexCoordP2uiv");
        glad_glMultiTexCoordP3ui = (*param_1)(param_2,"glMultiTexCoordP3ui");
        glad_glMultiTexCoordP3uiv = (*param_1)(param_2,"glMultiTexCoordP3uiv");
        glad_glMultiTexCoordP4ui = (*param_1)(param_2,"glMultiTexCoordP4ui");
        glad_glMultiTexCoordP4uiv = (*param_1)(param_2,"glMultiTexCoordP4uiv");
        glad_glNormalP3ui = (*param_1)(param_2,"glNormalP3ui");
        glad_glNormalP3uiv = (*param_1)(param_2,"glNormalP3uiv");
        glad_glQueryCounter = (*param_1)(param_2,"glQueryCounter");
        glad_glSamplerParameterIiv = (*param_1)(param_2,"glSamplerParameterIiv");
        glad_glSamplerParameterIuiv = (*param_1)(param_2,"glSamplerParameterIuiv");
        glad_glSamplerParameterf = (*param_1)(param_2,"glSamplerParameterf");
        glad_glSamplerParameterfv = (*param_1)(param_2,"glSamplerParameterfv");
        glad_glSamplerParameteri = (*param_1)(param_2,"glSamplerParameteri");
        glad_glSamplerParameteriv = (*param_1)(param_2,"glSamplerParameteriv");
        glad_glSecondaryColorP3ui = (*param_1)(param_2,"glSecondaryColorP3ui");
        glad_glSecondaryColorP3uiv = (*param_1)(param_2,"glSecondaryColorP3uiv");
        glad_glTexCoordP1ui = (*param_1)(param_2,"glTexCoordP1ui");
        glad_glTexCoordP1uiv = (*param_1)(param_2,"glTexCoordP1uiv");
        glad_glTexCoordP2ui = (*param_1)(param_2,"glTexCoordP2ui");
        glad_glTexCoordP2uiv = (*param_1)(param_2,"glTexCoordP2uiv");
        glad_glTexCoordP3ui = (*param_1)(param_2,"glTexCoordP3ui");
        glad_glTexCoordP3uiv = (*param_1)(param_2,"glTexCoordP3uiv");
        glad_glTexCoordP4ui = (*param_1)(param_2,"glTexCoordP4ui");
        glad_glTexCoordP4uiv = (*param_1)(param_2,"glTexCoordP4uiv");
        glad_glVertexAttribDivisor = (*param_1)(param_2,"glVertexAttribDivisor");
        glad_glVertexAttribP1ui = (*param_1)(param_2,"glVertexAttribP1ui");
        glad_glVertexAttribP1uiv = (*param_1)(param_2,"glVertexAttribP1uiv");
        glad_glVertexAttribP2ui = (*param_1)(param_2,"glVertexAttribP2ui");
        glad_glVertexAttribP2uiv = (*param_1)(param_2,"glVertexAttribP2uiv");
        glad_glVertexAttribP3ui = (*param_1)(param_2,"glVertexAttribP3ui");
        glad_glVertexAttribP3uiv = (*param_1)(param_2,"glVertexAttribP3uiv");
        glad_glVertexAttribP4ui = (*param_1)(param_2,"glVertexAttribP4ui");
        glad_glVertexAttribP4uiv = (*param_1)(param_2,"glVertexAttribP4uiv");
        glad_glVertexP2ui = (*param_1)(param_2,"glVertexP2ui");
        glad_glVertexP2uiv = (*param_1)(param_2,"glVertexP2uiv");
        glad_glVertexP3ui = (*param_1)(param_2,"glVertexP3ui");
        glad_glVertexP3uiv = (*param_1)(param_2,"glVertexP3uiv");
        glad_glVertexP4ui = (*param_1)(param_2,"glVertexP4ui");
        glad_glVertexP4uiv = (*param_1)(param_2,"glVertexP4uiv");
      }
      local_78 = 0;
      local_7c = 0;
      local_70 = (undefined8 *)0x0;
      iVar4 = glad_gl_get_extensions_constprop_0(iVar3,&local_78,&local_7c,&local_70);
      __ptr_00 = local_70;
      uVar2 = local_78;
      uVar1 = local_7c;
      if (iVar4 != 0) {
        uVar8 = (ulong)local_7c;
        iVar4 = glad_gl_has_extension(iVar3,local_78,uVar8,local_70,"GL_ARB_debug_output");
        GLAD_GL_ARB_debug_output = iVar4;
        GLAD_GL_ARB_framebuffer_object =
             glad_gl_has_extension(iVar3,uVar2,uVar1,__ptr_00,"GL_ARB_framebuffer_object");
        GLAD_GL_ARB_get_program_binary =
             glad_gl_has_extension(iVar3,uVar2,uVar8,__ptr_00,"GL_ARB_get_program_binary");
        GLAD_GL_EXT_framebuffer_blit =
             glad_gl_has_extension(iVar3,uVar2,uVar1,__ptr_00,"GL_EXT_framebuffer_blit");
        GLAD_GL_EXT_framebuffer_multisample =
             glad_gl_has_extension(iVar3,uVar2,uVar1,__ptr_00,"GL_EXT_framebuffer_multisample");
        GLAD_GL_EXT_framebuffer_object =
             glad_gl_has_extension(iVar3,uVar2,uVar1,__ptr_00,"GL_EXT_framebuffer_object");
        GLAD_GL_OVR_multiview = glad_gl_has_extension(iVar3,uVar2,uVar8,__ptr_00,"GL_OVR_multiview")
        ;
        GLAD_GL_OVR_multiview2 =
             glad_gl_has_extension(iVar3,uVar2,uVar1,__ptr_00,"GL_OVR_multiview2");
        if (__ptr_00 != (undefined8 *)0x0) {
          if (uVar1 != 0) {
            puVar6 = __ptr_00;
            do {
              __ptr = (void *)*puVar6;
              puVar6 = puVar6 + 1;
              free(__ptr);
            } while (__ptr_00 + uVar8 != puVar6);
          }
          free(__ptr_00);
          iVar4 = GLAD_GL_ARB_debug_output;
        }
        if (iVar4 != 0) {
          glad_glDebugMessageCallbackARB = (*param_1)(param_2,"glDebugMessageCallbackARB");
          glad_glDebugMessageControlARB = (*param_1)(param_2,"glDebugMessageControlARB");
          glad_glDebugMessageInsertARB = (*param_1)(param_2,"glDebugMessageInsertARB");
          glad_glGetDebugMessageLogARB = (*param_1)(param_2,"glGetDebugMessageLogARB");
        }
        if (GLAD_GL_ARB_framebuffer_object != 0) {
          glad_glBindFramebuffer = (*param_1)(param_2,"glBindFramebuffer");
          glad_glBindRenderbuffer = (*param_1)(param_2,"glBindRenderbuffer");
          glad_glBlitFramebuffer = (*param_1)(param_2,"glBlitFramebuffer");
          glad_glCheckFramebufferStatus = (*param_1)(param_2,"glCheckFramebufferStatus");
          glad_glDeleteFramebuffers = (*param_1)(param_2,"glDeleteFramebuffers");
          glad_glDeleteRenderbuffers = (*param_1)(param_2,"glDeleteRenderbuffers");
          glad_glFramebufferRenderbuffer = (*param_1)(param_2,"glFramebufferRenderbuffer");
          glad_glFramebufferTexture1D = (*param_1)(param_2,"glFramebufferTexture1D");
          glad_glFramebufferTexture2D = (*param_1)(param_2,"glFramebufferTexture2D");
          glad_glFramebufferTexture3D = (*param_1)(param_2,"glFramebufferTexture3D");
          glad_glFramebufferTextureLayer = (*param_1)(param_2,"glFramebufferTextureLayer");
          glad_glGenFramebuffers = (*param_1)(param_2,"glGenFramebuffers");
          glad_glGenRenderbuffers = (*param_1)(param_2,"glGenRenderbuffers");
          glad_glGenerateMipmap = (*param_1)(param_2,"glGenerateMipmap");
          glad_glGetFramebufferAttachmentParameteriv =
               (*param_1)(param_2,"glGetFramebufferAttachmentParameteriv");
          glad_glGetRenderbufferParameteriv = (*param_1)(param_2,"glGetRenderbufferParameteriv");
          glad_glIsFramebuffer = (*param_1)(param_2,"glIsFramebuffer");
          glad_glIsRenderbuffer = (*param_1)(param_2,"glIsRenderbuffer");
          glad_glRenderbufferStorage = (*param_1)(param_2,"glRenderbufferStorage");
          glad_glRenderbufferStorageMultisample =
               (*param_1)(param_2,"glRenderbufferStorageMultisample");
        }
        if (GLAD_GL_ARB_get_program_binary != 0) {
          glad_glGetProgramBinary = (*param_1)(param_2,"glGetProgramBinary");
          glad_glProgramBinary = (*param_1)(param_2,"glProgramBinary");
          glad_glProgramParameteri = (*param_1)(param_2,"glProgramParameteri");
        }
        if (GLAD_GL_EXT_framebuffer_blit != 0) {
          glad_glBlitFramebufferEXT = (*param_1)(param_2,"glBlitFramebufferEXT");
        }
        if (GLAD_GL_EXT_framebuffer_multisample != 0) {
          glad_glRenderbufferStorageMultisampleEXT =
               (*param_1)(param_2,"glRenderbufferStorageMultisampleEXT");
        }
        if (GLAD_GL_EXT_framebuffer_object != 0) {
          glad_glBindFramebufferEXT = (*param_1)(param_2,"glBindFramebufferEXT");
          glad_glBindRenderbufferEXT = (*param_1)(param_2,"glBindRenderbufferEXT");
          glad_glCheckFramebufferStatusEXT = (*param_1)(param_2,"glCheckFramebufferStatusEXT");
          glad_glDeleteFramebuffersEXT = (*param_1)(param_2,"glDeleteFramebuffersEXT");
          glad_glDeleteRenderbuffersEXT = (*param_1)(param_2,"glDeleteRenderbuffersEXT");
          glad_glFramebufferRenderbufferEXT = (*param_1)(param_2,"glFramebufferRenderbufferEXT");
          glad_glFramebufferTexture1DEXT = (*param_1)(param_2,"glFramebufferTexture1DEXT");
          glad_glFramebufferTexture2DEXT = (*param_1)(param_2,"glFramebufferTexture2DEXT");
          glad_glFramebufferTexture3DEXT = (*param_1)(param_2,"glFramebufferTexture3DEXT");
          glad_glGenFramebuffersEXT = (*param_1)(param_2,"glGenFramebuffersEXT");
          glad_glGenRenderbuffersEXT = (*param_1)(param_2,"glGenRenderbuffersEXT");
          glad_glGenerateMipmapEXT = (*param_1)(param_2,"glGenerateMipmapEXT");
          glad_glGetFramebufferAttachmentParameterivEXT =
               (*param_1)(param_2,"glGetFramebufferAttachmentParameterivEXT");
          glad_glGetRenderbufferParameterivEXT =
               (*param_1)(param_2,"glGetRenderbufferParameterivEXT");
          glad_glIsFramebufferEXT = (*param_1)(param_2,"glIsFramebufferEXT");
          glad_glIsRenderbufferEXT = (*param_1)(param_2,"glIsRenderbufferEXT");
          glad_glRenderbufferStorageEXT = (*param_1)(param_2,"glRenderbufferStorageEXT");
        }
        if (GLAD_GL_OVR_multiview != 0) {
          glad_glFramebufferTextureMultiviewOVR =
               (*param_1)(param_2,"glFramebufferTextureMultiviewOVR");
        }
        goto LAB_0010412b;
      }
    }
  }
  iVar3 = 0;
LAB_0010412b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gladLoadGL(undefined8 param_1)

{
  gladLoadGLUserPtr(glad_gl_get_proc_from_userptr,param_1);
  return;
}



int gladLoadGLES2UserPtr(code *param_1,undefined8 param_2)

{
  void *__ptr;
  uint uVar1;
  undefined8 *__ptr_00;
  int iVar2;
  int iVar3;
  long lVar4;
  char *__s1;
  size_t __n;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  char *__s2;
  long in_FS_OFFSET;
  uint local_7c;
  ulong local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  char *local_60 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  glad_glGetString = (code *)(*param_1)(param_2,"glGetString");
  if (glad_glGetString != (code *)0x0) {
    lVar4 = (*glad_glGetString)(0x1f02);
    if (lVar4 != 0) {
      local_60[3] = (char *)0x0;
      local_78 = local_78 & 0xffffffff00000000;
      local_60[2] = "OpenGL SC ";
      local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff00000000);
      local_60[0] = "OpenGL ES-CL ";
      local_60[1] = "OpenGL ES ";
      __s1 = (char *)(*glad_glGetString)(0x1f02);
      if (__s1 == (char *)0x0) {
        iVar2 = GLAD_GL_ES_VERSION_2_0;
        if (GLAD_GL_ES_VERSION_2_0 != 0) {
          iVar2 = 0;
          goto LAB_001044a8;
        }
LAB_00104f32:
        if (GLAD_GL_ES_VERSION_3_0 != 0) {
          glad_glBeginQuery = (*param_1)(param_2,"glBeginQuery");
          glad_glBeginTransformFeedback = (*param_1)(param_2,"glBeginTransformFeedback");
          glad_glBindBufferBase = (*param_1)(param_2,"glBindBufferBase");
          glad_glBindBufferRange = (*param_1)(param_2,"glBindBufferRange");
          glad_glBindSampler = (*param_1)(param_2,"glBindSampler");
          glad_glBindTransformFeedback = (*param_1)(param_2,"glBindTransformFeedback");
          glad_glBindVertexArray = (*param_1)(param_2,"glBindVertexArray");
          glad_glBlitFramebuffer = (*param_1)(param_2,"glBlitFramebuffer");
          glad_glClearBufferfi = (*param_1)(param_2,"glClearBufferfi");
          glad_glClearBufferfv = (*param_1)(param_2,"glClearBufferfv");
          glad_glClearBufferiv = (*param_1)(param_2,"glClearBufferiv");
          glad_glClearBufferuiv = (*param_1)(param_2,"glClearBufferuiv");
          glad_glClientWaitSync = (*param_1)(param_2,"glClientWaitSync");
          glad_glCompressedTexImage3D = (*param_1)(param_2,"glCompressedTexImage3D");
          glad_glCompressedTexSubImage3D = (*param_1)(param_2,"glCompressedTexSubImage3D");
          glad_glCopyBufferSubData = (*param_1)(param_2,"glCopyBufferSubData");
          glad_glCopyTexSubImage3D = (*param_1)(param_2,"glCopyTexSubImage3D");
          glad_glDeleteQueries = (*param_1)(param_2,"glDeleteQueries");
          glad_glDeleteSamplers = (*param_1)(param_2,"glDeleteSamplers");
          glad_glDeleteSync = (*param_1)(param_2,"glDeleteSync");
          glad_glDeleteTransformFeedbacks = (*param_1)(param_2,"glDeleteTransformFeedbacks");
          glad_glDeleteVertexArrays = (*param_1)(param_2,"glDeleteVertexArrays");
          glad_glDrawArraysInstanced = (*param_1)(param_2,"glDrawArraysInstanced");
          glad_glDrawBuffers = (*param_1)(param_2,"glDrawBuffers");
          glad_glDrawElementsInstanced = (*param_1)(param_2,"glDrawElementsInstanced");
          glad_glDrawRangeElements = (*param_1)(param_2,"glDrawRangeElements");
          glad_glEndQuery = (*param_1)(param_2,"glEndQuery");
          glad_glEndTransformFeedback = (*param_1)(param_2,"glEndTransformFeedback");
          glad_glFenceSync = (*param_1)(param_2,"glFenceSync");
          glad_glFlushMappedBufferRange = (*param_1)(param_2,"glFlushMappedBufferRange");
          glad_glFramebufferTextureLayer = (*param_1)(param_2,"glFramebufferTextureLayer");
          glad_glGenQueries = (*param_1)(param_2,"glGenQueries");
          glad_glGenSamplers = (*param_1)(param_2,"glGenSamplers");
          glad_glGenTransformFeedbacks = (*param_1)(param_2,"glGenTransformFeedbacks");
          glad_glGenVertexArrays = (*param_1)(param_2,"glGenVertexArrays");
          glad_glGetActiveUniformBlockName = (*param_1)(param_2,"glGetActiveUniformBlockName");
          glad_glGetActiveUniformBlockiv = (*param_1)(param_2,"glGetActiveUniformBlockiv");
          glad_glGetActiveUniformsiv = (*param_1)(param_2,"glGetActiveUniformsiv");
          glad_glGetBufferParameteri64v = (*param_1)(param_2,"glGetBufferParameteri64v");
          glad_glGetBufferPointerv = (*param_1)(param_2,"glGetBufferPointerv");
          glad_glGetFragDataLocation = (*param_1)(param_2,"glGetFragDataLocation");
          glad_glGetInteger64i_v = (*param_1)(param_2,"glGetInteger64i_v");
          glad_glGetInteger64v = (*param_1)(param_2,"glGetInteger64v");
          glad_glGetIntegeri_v = (*param_1)(param_2,"glGetIntegeri_v");
          glad_glGetInternalformativ = (*param_1)(param_2,"glGetInternalformativ");
          glad_glGetProgramBinary = (*param_1)(param_2,"glGetProgramBinary");
          glad_glGetQueryObjectuiv = (*param_1)(param_2,"glGetQueryObjectuiv");
          glad_glGetQueryiv = (*param_1)(param_2,"glGetQueryiv");
          glad_glGetSamplerParameterfv = (*param_1)(param_2,"glGetSamplerParameterfv");
          glad_glGetSamplerParameteriv = (*param_1)(param_2,"glGetSamplerParameteriv");
          glad_glGetStringi = (*param_1)(param_2,"glGetStringi");
          glad_glGetSynciv = (*param_1)(param_2,"glGetSynciv");
          glad_glGetTransformFeedbackVarying = (*param_1)(param_2,"glGetTransformFeedbackVarying");
          glad_glGetUniformBlockIndex = (*param_1)(param_2,"glGetUniformBlockIndex");
          glad_glGetUniformIndices = (*param_1)(param_2,"glGetUniformIndices");
          glad_glGetUniformuiv = (*param_1)(param_2,"glGetUniformuiv");
          glad_glGetVertexAttribIiv = (*param_1)(param_2,"glGetVertexAttribIiv");
          glad_glGetVertexAttribIuiv = (*param_1)(param_2,"glGetVertexAttribIuiv");
          glad_glInvalidateFramebuffer = (*param_1)(param_2,"glInvalidateFramebuffer");
          glad_glInvalidateSubFramebuffer = (*param_1)(param_2,"glInvalidateSubFramebuffer");
          glad_glIsQuery = (*param_1)(param_2,"glIsQuery");
          glad_glIsSampler = (*param_1)(param_2,"glIsSampler");
          glad_glIsSync = (*param_1)(param_2,"glIsSync");
          glad_glIsTransformFeedback = (*param_1)(param_2,"glIsTransformFeedback");
          glad_glIsVertexArray = (*param_1)(param_2,"glIsVertexArray");
          glad_glMapBufferRange = (*param_1)(param_2,"glMapBufferRange");
          glad_glPauseTransformFeedback = (*param_1)(param_2,"glPauseTransformFeedback");
          glad_glProgramBinary = (*param_1)(param_2,"glProgramBinary");
          glad_glProgramParameteri = (*param_1)(param_2,"glProgramParameteri");
          glad_glReadBuffer = (*param_1)(param_2,"glReadBuffer");
          glad_glRenderbufferStorageMultisample =
               (*param_1)(param_2,"glRenderbufferStorageMultisample");
          glad_glResumeTransformFeedback = (*param_1)(param_2,"glResumeTransformFeedback");
          glad_glSamplerParameterf = (*param_1)(param_2,"glSamplerParameterf");
          glad_glSamplerParameterfv = (*param_1)(param_2,"glSamplerParameterfv");
          glad_glSamplerParameteri = (*param_1)(param_2,"glSamplerParameteri");
          glad_glSamplerParameteriv = (*param_1)(param_2,"glSamplerParameteriv");
          glad_glTexImage3D = (*param_1)(param_2,"glTexImage3D");
          glad_glTexStorage2D = (*param_1)(param_2,"glTexStorage2D");
          glad_glTexStorage3D = (*param_1)(param_2,"glTexStorage3D");
          glad_glTexSubImage3D = (*param_1)(param_2,"glTexSubImage3D");
          glad_glTransformFeedbackVaryings = (*param_1)(param_2,"glTransformFeedbackVaryings");
          glad_glUniform1ui = (*param_1)(param_2,"glUniform1ui");
          glad_glUniform1uiv = (*param_1)(param_2,"glUniform1uiv");
          glad_glUniform2ui = (*param_1)(param_2,"glUniform2ui");
          glad_glUniform2uiv = (*param_1)(param_2,"glUniform2uiv");
          glad_glUniform3ui = (*param_1)(param_2,"glUniform3ui");
          glad_glUniform3uiv = (*param_1)(param_2,"glUniform3uiv");
          glad_glUniform4ui = (*param_1)(param_2,"glUniform4ui");
          glad_glUniform4uiv = (*param_1)(param_2,"glUniform4uiv");
          glad_glUniformBlockBinding = (*param_1)(param_2,"glUniformBlockBinding");
          glad_glUniformMatrix2x3fv = (*param_1)(param_2,"glUniformMatrix2x3fv");
          glad_glUniformMatrix2x4fv = (*param_1)(param_2,"glUniformMatrix2x4fv");
          glad_glUniformMatrix3x2fv = (*param_1)(param_2,"glUniformMatrix3x2fv");
          glad_glUniformMatrix3x4fv = (*param_1)(param_2,"glUniformMatrix3x4fv");
          glad_glUniformMatrix4x2fv = (*param_1)(param_2,"glUniformMatrix4x2fv");
          glad_glUniformMatrix4x3fv = (*param_1)(param_2,"glUniformMatrix4x3fv");
          glad_glUnmapBuffer = (*param_1)(param_2,"glUnmapBuffer");
          glad_glVertexAttribDivisor = (*param_1)(param_2,"glVertexAttribDivisor");
          glad_glVertexAttribI4i = (*param_1)(param_2,"glVertexAttribI4i");
          glad_glVertexAttribI4iv = (*param_1)(param_2,"glVertexAttribI4iv");
          glad_glVertexAttribI4ui = (*param_1)(param_2,"glVertexAttribI4ui");
          glad_glVertexAttribI4uiv = (*param_1)(param_2,"glVertexAttribI4uiv");
          glad_glVertexAttribIPointer = (*param_1)(param_2,"glVertexAttribIPointer");
          glad_glWaitSync = (*param_1)(param_2,"glWaitSync");
        }
      }
      else {
        puVar6 = local_68;
        __n = 0xd;
        __s2 = "OpenGL ES-CM ";
        while( true ) {
          iVar2 = strncmp(__s1,__s2,__n);
          if (iVar2 == 0) break;
          __s2 = *(char **)(puVar6 + 8);
          puVar6 = puVar6 + 8;
          if (__s2 == (char *)0x0) goto LAB_00104435;
          __n = strlen(__s2);
        }
        __s1 = __s1 + __n;
LAB_00104435:
        __isoc99_sscanf(__s1,"%d.%d",&local_78,&local_70);
        if ((int)local_78 == 2) {
          if ((int)local_70 < 0) {
            iVar2 = (int)local_70 + 20000;
            goto LAB_00106117;
          }
          GLAD_GL_ES_VERSION_2_0 = 1;
          iVar2 = (int)local_70 + 20000;
          GLAD_GL_ES_VERSION_3_0 = 0;
          GLAD_GL_ES_VERSION_3_1 = 0;
          GLAD_GL_ES_VERSION_3_2 = 0;
LAB_001044a8:
          glad_glActiveTexture = (*param_1)(param_2,"glActiveTexture");
          glad_glAttachShader = (*param_1)(param_2,"glAttachShader");
          glad_glBindAttribLocation = (*param_1)(param_2,"glBindAttribLocation");
          glad_glBindBuffer = (*param_1)(param_2,"glBindBuffer");
          glad_glBindFramebuffer = (*param_1)(param_2,"glBindFramebuffer");
          glad_glBindRenderbuffer = (*param_1)(param_2,"glBindRenderbuffer");
          glad_glBindTexture = (*param_1)(param_2,"glBindTexture");
          glad_glBlendColor = (*param_1)(param_2,"glBlendColor");
          glad_glBlendEquation = (*param_1)(param_2,"glBlendEquation");
          glad_glBlendEquationSeparate = (*param_1)(param_2,"glBlendEquationSeparate");
          glad_glBlendFunc = (*param_1)(param_2,"glBlendFunc");
          glad_glBlendFuncSeparate = (*param_1)(param_2,"glBlendFuncSeparate");
          glad_glBufferData = (*param_1)(param_2,"glBufferData");
          glad_glBufferSubData = (*param_1)(param_2,"glBufferSubData");
          glad_glCheckFramebufferStatus = (*param_1)(param_2,"glCheckFramebufferStatus");
          glad_glClear = (*param_1)(param_2,"glClear");
          glad_glClearColor = (*param_1)(param_2,"glClearColor");
          glad_glClearDepthf = (*param_1)(param_2,"glClearDepthf");
          glad_glClearStencil = (*param_1)(param_2,"glClearStencil");
          glad_glColorMask = (*param_1)(param_2,"glColorMask");
          glad_glCompileShader = (*param_1)(param_2,"glCompileShader");
          glad_glCompressedTexImage2D = (*param_1)(param_2,"glCompressedTexImage2D");
          glad_glCompressedTexSubImage2D = (*param_1)(param_2,"glCompressedTexSubImage2D");
          glad_glCopyTexImage2D = (*param_1)(param_2,"glCopyTexImage2D");
          glad_glCopyTexSubImage2D = (*param_1)(param_2,"glCopyTexSubImage2D");
          glad_glCreateProgram = (*param_1)(param_2,"glCreateProgram");
          glad_glCreateShader = (*param_1)(param_2,"glCreateShader");
          glad_glCullFace = (*param_1)(param_2,"glCullFace");
          glad_glDeleteBuffers = (*param_1)(param_2,"glDeleteBuffers");
          glad_glDeleteFramebuffers = (*param_1)(param_2,"glDeleteFramebuffers");
          glad_glDeleteProgram = (*param_1)(param_2,"glDeleteProgram");
          glad_glDeleteRenderbuffers = (*param_1)(param_2,"glDeleteRenderbuffers");
          glad_glDeleteShader = (*param_1)(param_2,"glDeleteShader");
          glad_glDeleteTextures = (*param_1)(param_2,"glDeleteTextures");
          glad_glDepthFunc = (*param_1)(param_2,"glDepthFunc");
          glad_glDepthMask = (*param_1)(param_2,"glDepthMask");
          glad_glDepthRangef = (*param_1)(param_2,"glDepthRangef");
          glad_glDetachShader = (*param_1)(param_2,"glDetachShader");
          glad_glDisable = (*param_1)(param_2,"glDisable");
          glad_glDisableVertexAttribArray = (*param_1)(param_2,"glDisableVertexAttribArray");
          glad_glDrawArrays = (*param_1)(param_2,"glDrawArrays");
          glad_glDrawElements = (*param_1)(param_2,"glDrawElements");
          glad_glEnable = (*param_1)(param_2,"glEnable");
          glad_glEnableVertexAttribArray = (*param_1)(param_2,"glEnableVertexAttribArray");
          glad_glFinish = (*param_1)(param_2,"glFinish");
          glad_glFlush = (*param_1)(param_2,"glFlush");
          glad_glFramebufferRenderbuffer = (*param_1)(param_2,"glFramebufferRenderbuffer");
          glad_glFramebufferTexture2D = (*param_1)(param_2,"glFramebufferTexture2D");
          glad_glFrontFace = (*param_1)(param_2,"glFrontFace");
          glad_glGenBuffers = (*param_1)(param_2,"glGenBuffers");
          glad_glGenFramebuffers = (*param_1)(param_2,"glGenFramebuffers");
          glad_glGenRenderbuffers = (*param_1)(param_2,"glGenRenderbuffers");
          glad_glGenTextures = (*param_1)(param_2,"glGenTextures");
          glad_glGenerateMipmap = (*param_1)(param_2,"glGenerateMipmap");
          glad_glGetActiveAttrib = (*param_1)(param_2,"glGetActiveAttrib");
          glad_glGetActiveUniform = (*param_1)(param_2,"glGetActiveUniform");
          glad_glGetAttachedShaders = (*param_1)(param_2,"glGetAttachedShaders");
          glad_glGetAttribLocation = (*param_1)(param_2,"glGetAttribLocation");
          glad_glGetBooleanv = (*param_1)(param_2,"glGetBooleanv");
          glad_glGetBufferParameteriv = (*param_1)(param_2,"glGetBufferParameteriv");
          glad_glGetError = (*param_1)(param_2,"glGetError");
          glad_glGetFloatv = (*param_1)(param_2,"glGetFloatv");
          glad_glGetFramebufferAttachmentParameteriv =
               (*param_1)(param_2,"glGetFramebufferAttachmentParameteriv");
          glad_glGetIntegerv = (*param_1)(param_2,"glGetIntegerv");
          glad_glGetProgramInfoLog = (*param_1)(param_2,"glGetProgramInfoLog");
          glad_glGetProgramiv = (*param_1)(param_2,"glGetProgramiv");
          glad_glGetRenderbufferParameteriv = (*param_1)(param_2,"glGetRenderbufferParameteriv");
          glad_glGetShaderInfoLog = (*param_1)(param_2,"glGetShaderInfoLog");
          glad_glGetShaderPrecisionFormat = (*param_1)(param_2,"glGetShaderPrecisionFormat");
          glad_glGetShaderSource = (*param_1)(param_2,"glGetShaderSource");
          glad_glGetShaderiv = (*param_1)(param_2,"glGetShaderiv");
          glad_glGetString = (code *)(*param_1)(param_2,"glGetString");
          glad_glGetTexParameterfv = (*param_1)(param_2,"glGetTexParameterfv");
          glad_glGetTexParameteriv = (*param_1)(param_2,"glGetTexParameteriv");
          glad_glGetUniformLocation = (*param_1)(param_2,"glGetUniformLocation");
          glad_glGetUniformfv = (*param_1)(param_2,"glGetUniformfv");
          glad_glGetUniformiv = (*param_1)(param_2,"glGetUniformiv");
          glad_glGetVertexAttribPointerv = (*param_1)(param_2,"glGetVertexAttribPointerv");
          glad_glGetVertexAttribfv = (*param_1)(param_2,"glGetVertexAttribfv");
          glad_glGetVertexAttribiv = (*param_1)(param_2,"glGetVertexAttribiv");
          glad_glHint = (*param_1)(param_2,"glHint");
          glad_glIsBuffer = (*param_1)(param_2,"glIsBuffer");
          glad_glIsEnabled = (*param_1)(param_2,"glIsEnabled");
          glad_glIsFramebuffer = (*param_1)(param_2,"glIsFramebuffer");
          glad_glIsProgram = (*param_1)(param_2,"glIsProgram");
          glad_glIsRenderbuffer = (*param_1)(param_2,"glIsRenderbuffer");
          glad_glIsShader = (*param_1)(param_2,"glIsShader");
          glad_glIsTexture = (*param_1)(param_2,"glIsTexture");
          glad_glLineWidth = (*param_1)(param_2,"glLineWidth");
          glad_glLinkProgram = (*param_1)(param_2,"glLinkProgram");
          glad_glPixelStorei = (*param_1)(param_2,"glPixelStorei");
          glad_glPolygonOffset = (*param_1)(param_2,"glPolygonOffset");
          glad_glReadPixels = (*param_1)(param_2,"glReadPixels");
          glad_glReleaseShaderCompiler = (*param_1)(param_2,"glReleaseShaderCompiler");
          glad_glRenderbufferStorage = (*param_1)(param_2,"glRenderbufferStorage");
          glad_glSampleCoverage = (*param_1)(param_2,"glSampleCoverage");
          glad_glScissor = (*param_1)(param_2,"glScissor");
          glad_glShaderBinary = (*param_1)(param_2,"glShaderBinary");
          glad_glShaderSource = (*param_1)(param_2,"glShaderSource");
          glad_glStencilFunc = (*param_1)(param_2,"glStencilFunc");
          glad_glStencilFuncSeparate = (*param_1)(param_2,"glStencilFuncSeparate");
          glad_glStencilMask = (*param_1)(param_2,"glStencilMask");
          glad_glStencilMaskSeparate = (*param_1)(param_2,"glStencilMaskSeparate");
          glad_glStencilOp = (*param_1)(param_2,"glStencilOp");
          glad_glStencilOpSeparate = (*param_1)(param_2,"glStencilOpSeparate");
          glad_glTexImage2D = (*param_1)(param_2,"glTexImage2D");
          glad_glTexParameterf = (*param_1)(param_2,"glTexParameterf");
          glad_glTexParameterfv = (*param_1)(param_2,"glTexParameterfv");
          glad_glTexParameteri = (*param_1)(param_2,"glTexParameteri");
          glad_glTexParameteriv = (*param_1)(param_2,"glTexParameteriv");
          glad_glTexSubImage2D = (*param_1)(param_2,"glTexSubImage2D");
          glad_glUniform1f = (*param_1)(param_2,"glUniform1f");
          glad_glUniform1fv = (*param_1)(param_2,"glUniform1fv");
          glad_glUniform1i = (*param_1)(param_2,"glUniform1i");
          glad_glUniform1iv = (*param_1)(param_2,"glUniform1iv");
          glad_glUniform2f = (*param_1)(param_2,"glUniform2f");
          glad_glUniform2fv = (*param_1)(param_2,"glUniform2fv");
          glad_glUniform2i = (*param_1)(param_2,"glUniform2i");
          glad_glUniform2iv = (*param_1)(param_2,"glUniform2iv");
          glad_glUniform3f = (*param_1)(param_2,"glUniform3f");
          glad_glUniform3fv = (*param_1)(param_2,"glUniform3fv");
          glad_glUniform3i = (*param_1)(param_2,"glUniform3i");
          glad_glUniform3iv = (*param_1)(param_2,"glUniform3iv");
          glad_glUniform4f = (*param_1)(param_2,"glUniform4f");
          glad_glUniform4fv = (*param_1)(param_2,"glUniform4fv");
          glad_glUniform4i = (*param_1)(param_2,"glUniform4i");
          glad_glUniform4iv = (*param_1)(param_2,"glUniform4iv");
          glad_glUniformMatrix2fv = (*param_1)(param_2,"glUniformMatrix2fv");
          glad_glUniformMatrix3fv = (*param_1)(param_2,"glUniformMatrix3fv");
          glad_glUniformMatrix4fv = (*param_1)(param_2,"glUniformMatrix4fv");
          glad_glUseProgram = (*param_1)(param_2,"glUseProgram");
          glad_glValidateProgram = (*param_1)(param_2,"glValidateProgram");
          glad_glVertexAttrib1f = (*param_1)(param_2,"glVertexAttrib1f");
          glad_glVertexAttrib1fv = (*param_1)(param_2,"glVertexAttrib1fv");
          glad_glVertexAttrib2f = (*param_1)(param_2,"glVertexAttrib2f");
          glad_glVertexAttrib2fv = (*param_1)(param_2,"glVertexAttrib2fv");
          glad_glVertexAttrib3f = (*param_1)(param_2,"glVertexAttrib3f");
          glad_glVertexAttrib3fv = (*param_1)(param_2,"glVertexAttrib3fv");
          glad_glVertexAttrib4f = (*param_1)(param_2,"glVertexAttrib4f");
          glad_glVertexAttrib4fv = (*param_1)(param_2,"glVertexAttrib4fv");
          glad_glVertexAttribPointer = (*param_1)(param_2,"glVertexAttribPointer");
          glad_glViewport = (*param_1)(param_2,"glViewport");
          goto LAB_00104f32;
        }
        if (2 < (int)local_78) {
          GLAD_GL_ES_VERSION_2_0 = 1;
          if ((int)local_78 == 3) {
            if ((int)local_70 < 0) {
              GLAD_GL_ES_VERSION_3_1 = 0;
            }
            else {
              GLAD_GL_ES_VERSION_3_1 = (uint)((int)local_70 != 0);
            }
            GLAD_GL_ES_VERSION_3_2 = (uint)(1 < (int)local_70);
            GLAD_GL_ES_VERSION_3_0 = (uint)((int)local_70 >= 0);
            iVar2 = (int)local_70 + 30000;
          }
          else {
            GLAD_GL_ES_VERSION_3_0 = 1;
            GLAD_GL_ES_VERSION_3_1 = 1;
            GLAD_GL_ES_VERSION_3_2 = 1;
            iVar2 = (int)local_70 + (int)local_78 * 10000;
          }
          goto LAB_001044a8;
        }
        iVar2 = (int)local_70 + (int)local_78 * 10000;
LAB_00106117:
        GLAD_GL_ES_VERSION_2_0 = 0;
        GLAD_GL_ES_VERSION_3_0 = 0;
        GLAD_GL_ES_VERSION_3_1 = 0;
        GLAD_GL_ES_VERSION_3_2 = 0;
      }
      if (GLAD_GL_ES_VERSION_3_1 != 0) {
        glad_glActiveShaderProgram = (*param_1)(param_2,"glActiveShaderProgram");
        glad_glBindImageTexture = (*param_1)(param_2,"glBindImageTexture");
        glad_glBindProgramPipeline = (*param_1)(param_2,"glBindProgramPipeline");
        glad_glBindVertexBuffer = (*param_1)(param_2,"glBindVertexBuffer");
        glad_glCreateShaderProgramv = (*param_1)(param_2,"glCreateShaderProgramv");
        glad_glDeleteProgramPipelines = (*param_1)(param_2,"glDeleteProgramPipelines");
        glad_glDispatchCompute = (*param_1)(param_2,"glDispatchCompute");
        glad_glDispatchComputeIndirect = (*param_1)(param_2,"glDispatchComputeIndirect");
        glad_glDrawArraysIndirect = (*param_1)(param_2,"glDrawArraysIndirect");
        glad_glDrawElementsIndirect = (*param_1)(param_2,"glDrawElementsIndirect");
        glad_glFramebufferParameteri = (*param_1)(param_2,"glFramebufferParameteri");
        glad_glGenProgramPipelines = (*param_1)(param_2,"glGenProgramPipelines");
        glad_glGetBooleani_v = (*param_1)(param_2,"glGetBooleani_v");
        glad_glGetFramebufferParameteriv = (*param_1)(param_2,"glGetFramebufferParameteriv");
        glad_glGetMultisamplefv = (*param_1)(param_2,"glGetMultisamplefv");
        glad_glGetProgramInterfaceiv = (*param_1)(param_2,"glGetProgramInterfaceiv");
        glad_glGetProgramPipelineInfoLog = (*param_1)(param_2,"glGetProgramPipelineInfoLog");
        glad_glGetProgramPipelineiv = (*param_1)(param_2,"glGetProgramPipelineiv");
        glad_glGetProgramResourceIndex = (*param_1)(param_2,"glGetProgramResourceIndex");
        glad_glGetProgramResourceLocation = (*param_1)(param_2,"glGetProgramResourceLocation");
        glad_glGetProgramResourceName = (*param_1)(param_2,"glGetProgramResourceName");
        glad_glGetProgramResourceiv = (*param_1)(param_2,"glGetProgramResourceiv");
        glad_glGetTexLevelParameterfv = (*param_1)(param_2,"glGetTexLevelParameterfv");
        glad_glGetTexLevelParameteriv = (*param_1)(param_2,"glGetTexLevelParameteriv");
        glad_glIsProgramPipeline = (*param_1)(param_2,"glIsProgramPipeline");
        glad_glMemoryBarrier = (*param_1)(param_2,"glMemoryBarrier");
        glad_glMemoryBarrierByRegion = (*param_1)(param_2,"glMemoryBarrierByRegion");
        glad_glProgramUniform1f = (*param_1)(param_2,"glProgramUniform1f");
        glad_glProgramUniform1fv = (*param_1)(param_2,"glProgramUniform1fv");
        glad_glProgramUniform1i = (*param_1)(param_2,"glProgramUniform1i");
        glad_glProgramUniform1iv = (*param_1)(param_2,"glProgramUniform1iv");
        glad_glProgramUniform1ui = (*param_1)(param_2,"glProgramUniform1ui");
        glad_glProgramUniform1uiv = (*param_1)(param_2,"glProgramUniform1uiv");
        glad_glProgramUniform2f = (*param_1)(param_2,"glProgramUniform2f");
        glad_glProgramUniform2fv = (*param_1)(param_2,"glProgramUniform2fv");
        glad_glProgramUniform2i = (*param_1)(param_2,"glProgramUniform2i");
        glad_glProgramUniform2iv = (*param_1)(param_2,"glProgramUniform2iv");
        glad_glProgramUniform2ui = (*param_1)(param_2,"glProgramUniform2ui");
        glad_glProgramUniform2uiv = (*param_1)(param_2,"glProgramUniform2uiv");
        glad_glProgramUniform3f = (*param_1)(param_2,"glProgramUniform3f");
        glad_glProgramUniform3fv = (*param_1)(param_2,"glProgramUniform3fv");
        glad_glProgramUniform3i = (*param_1)(param_2,"glProgramUniform3i");
        glad_glProgramUniform3iv = (*param_1)(param_2,"glProgramUniform3iv");
        glad_glProgramUniform3ui = (*param_1)(param_2,"glProgramUniform3ui");
        glad_glProgramUniform3uiv = (*param_1)(param_2,"glProgramUniform3uiv");
        glad_glProgramUniform4f = (*param_1)(param_2,"glProgramUniform4f");
        glad_glProgramUniform4fv = (*param_1)(param_2,"glProgramUniform4fv");
        glad_glProgramUniform4i = (*param_1)(param_2,"glProgramUniform4i");
        glad_glProgramUniform4iv = (*param_1)(param_2,"glProgramUniform4iv");
        glad_glProgramUniform4ui = (*param_1)(param_2,"glProgramUniform4ui");
        glad_glProgramUniform4uiv = (*param_1)(param_2,"glProgramUniform4uiv");
        glad_glProgramUniformMatrix2fv = (*param_1)(param_2,"glProgramUniformMatrix2fv");
        glad_glProgramUniformMatrix2x3fv = (*param_1)(param_2,"glProgramUniformMatrix2x3fv");
        glad_glProgramUniformMatrix2x4fv = (*param_1)(param_2,"glProgramUniformMatrix2x4fv");
        glad_glProgramUniformMatrix3fv = (*param_1)(param_2,"glProgramUniformMatrix3fv");
        glad_glProgramUniformMatrix3x2fv = (*param_1)(param_2,"glProgramUniformMatrix3x2fv");
        glad_glProgramUniformMatrix3x4fv = (*param_1)(param_2,"glProgramUniformMatrix3x4fv");
        glad_glProgramUniformMatrix4fv = (*param_1)(param_2,"glProgramUniformMatrix4fv");
        glad_glProgramUniformMatrix4x2fv = (*param_1)(param_2,"glProgramUniformMatrix4x2fv");
        glad_glProgramUniformMatrix4x3fv = (*param_1)(param_2,"glProgramUniformMatrix4x3fv");
        glad_glSampleMaski = (*param_1)(param_2,"glSampleMaski");
        glad_glTexStorage2DMultisample = (*param_1)(param_2,"glTexStorage2DMultisample");
        glad_glUseProgramStages = (*param_1)(param_2,"glUseProgramStages");
        glad_glValidateProgramPipeline = (*param_1)(param_2,"glValidateProgramPipeline");
        glad_glVertexAttribBinding = (*param_1)(param_2,"glVertexAttribBinding");
        glad_glVertexAttribFormat = (*param_1)(param_2,"glVertexAttribFormat");
        glad_glVertexAttribIFormat = (*param_1)(param_2,"glVertexAttribIFormat");
        glad_glVertexBindingDivisor = (*param_1)(param_2,"glVertexBindingDivisor");
      }
      if (GLAD_GL_ES_VERSION_3_2 != 0) {
        glad_glBlendBarrier = (*param_1)(param_2,"glBlendBarrier");
        glad_glBlendEquationSeparatei = (*param_1)(param_2,"glBlendEquationSeparatei");
        glad_glBlendEquationi = (*param_1)(param_2,"glBlendEquationi");
        glad_glBlendFuncSeparatei = (*param_1)(param_2,"glBlendFuncSeparatei");
        glad_glBlendFunci = (*param_1)(param_2,"glBlendFunci");
        glad_glColorMaski = (*param_1)(param_2,"glColorMaski");
        glad_glCopyImageSubData = (*param_1)(param_2,"glCopyImageSubData");
        glad_glDebugMessageCallback = (*param_1)(param_2,"glDebugMessageCallback");
        glad_glDebugMessageControl = (*param_1)(param_2,"glDebugMessageControl");
        glad_glDebugMessageInsert = (*param_1)(param_2,"glDebugMessageInsert");
        glad_glDisablei = (*param_1)(param_2,"glDisablei");
        glad_glDrawElementsBaseVertex = (*param_1)(param_2,"glDrawElementsBaseVertex");
        glad_glDrawElementsInstancedBaseVertex =
             (*param_1)(param_2,"glDrawElementsInstancedBaseVertex");
        glad_glDrawRangeElementsBaseVertex = (*param_1)(param_2,"glDrawRangeElementsBaseVertex");
        glad_glEnablei = (*param_1)(param_2,"glEnablei");
        glad_glFramebufferTexture = (*param_1)(param_2,"glFramebufferTexture");
        glad_glGetDebugMessageLog = (*param_1)(param_2,"glGetDebugMessageLog");
        glad_glGetGraphicsResetStatus = (*param_1)(param_2,"glGetGraphicsResetStatus");
        glad_glGetObjectLabel = (*param_1)(param_2,"glGetObjectLabel");
        glad_glGetObjectPtrLabel = (*param_1)(param_2,"glGetObjectPtrLabel");
        glad_glGetPointerv = (*param_1)(param_2,"glGetPointerv");
        glad_glGetSamplerParameterIiv = (*param_1)(param_2,"glGetSamplerParameterIiv");
        glad_glGetSamplerParameterIuiv = (*param_1)(param_2,"glGetSamplerParameterIuiv");
        glad_glGetTexParameterIiv = (*param_1)(param_2,"glGetTexParameterIiv");
        glad_glGetTexParameterIuiv = (*param_1)(param_2,"glGetTexParameterIuiv");
        glad_glGetnUniformfv = (*param_1)(param_2,"glGetnUniformfv");
        glad_glGetnUniformiv = (*param_1)(param_2,"glGetnUniformiv");
        glad_glGetnUniformuiv = (*param_1)(param_2,"glGetnUniformuiv");
        glad_glIsEnabledi = (*param_1)(param_2,"glIsEnabledi");
        glad_glMinSampleShading = (*param_1)(param_2,"glMinSampleShading");
        glad_glObjectLabel = (*param_1)(param_2,"glObjectLabel");
        glad_glObjectPtrLabel = (*param_1)(param_2,"glObjectPtrLabel");
        glad_glPatchParameteri = (*param_1)(param_2,"glPatchParameteri");
        glad_glPopDebugGroup = (*param_1)(param_2,"glPopDebugGroup");
        glad_glPrimitiveBoundingBox = (*param_1)(param_2,"glPrimitiveBoundingBox");
        glad_glPushDebugGroup = (*param_1)(param_2,"glPushDebugGroup");
        glad_glReadnPixels = (*param_1)(param_2,"glReadnPixels");
        glad_glSamplerParameterIiv = (*param_1)(param_2,"glSamplerParameterIiv");
        glad_glSamplerParameterIuiv = (*param_1)(param_2,"glSamplerParameterIuiv");
        glad_glTexBuffer = (*param_1)(param_2,"glTexBuffer");
        glad_glTexBufferRange = (*param_1)(param_2,"glTexBufferRange");
        glad_glTexParameterIiv = (*param_1)(param_2,"glTexParameterIiv");
        glad_glTexParameterIuiv = (*param_1)(param_2,"glTexParameterIuiv");
        glad_glTexStorage3DMultisample = (*param_1)(param_2,"glTexStorage3DMultisample");
      }
      local_78 = 0;
      local_7c = 0;
      local_70 = (undefined8 *)0x0;
      iVar3 = glad_gl_get_extensions_constprop_0(iVar2,&local_78,&local_7c,&local_70);
      __ptr_00 = local_70;
      uVar1 = local_7c;
      if (iVar3 != 0) {
        uVar7 = (ulong)local_7c;
        iVar3 = glad_gl_has_extension(iVar2,local_78,uVar7,local_70,"GL_OVR_multiview");
        GLAD_GL_OVR_multiview = iVar3;
        GLAD_GL_OVR_multiview2 =
             glad_gl_has_extension(iVar2,local_78,uVar1,__ptr_00,"GL_OVR_multiview2");
        if (__ptr_00 != (undefined8 *)0x0) {
          if (uVar1 != 0) {
            puVar5 = __ptr_00;
            do {
              __ptr = (void *)*puVar5;
              puVar5 = puVar5 + 1;
              free(__ptr);
            } while (__ptr_00 + uVar7 != puVar5);
          }
          free(__ptr_00);
          iVar3 = GLAD_GL_OVR_multiview;
        }
        if (iVar3 != 0) {
          glad_glFramebufferTextureMultiviewOVR =
               (*param_1)(param_2,"glFramebufferTextureMultiviewOVR");
        }
        goto LAB_00106043;
      }
    }
  }
  iVar2 = 0;
LAB_00106043:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gladLoadGLES2(undefined8 param_1)

{
  gladLoadGLES2UserPtr(glad_gl_get_proc_from_userptr,param_1);
  return;
}



ulong gladLoaderLoadGL(void)

{
  uint uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_28;
  undefined8 local_20;
  long local_10;
  
  uVar2 = _glad_gles_loader_handle;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (_glad_gles_loader_handle == 0) {
    uVar2 = dlopen(NAMES_1,1);
    if ((uVar2 != 0) ||
       (uVar2 = dlopen(PTR_s_libGL_so_0010b888,1), _glad_gles_loader_handle = uVar2, uVar2 != 0)) {
      _glad_gles_loader_handle = uVar2;
      local_20 = dlsym(uVar2,"glXGetProcAddressARB");
      local_28 = uVar2;
      uVar1 = gladLoadGLUserPtr(glad_gl_get_proc,&local_28);
      uVar2 = (ulong)uVar1;
      if (_glad_gles_loader_handle != 0) {
        dlclose();
        _glad_gles_loader_handle = 0;
      }
    }
  }
  else {
    local_20 = dlsym(_glad_gles_loader_handle,"glXGetProcAddressARB");
    local_28 = uVar2;
    uVar1 = gladLoadGLUserPtr(glad_gl_get_proc,&local_28);
    uVar2 = (ulong)uVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 0xffffffff;
}



void gladLoaderUnloadGL(void)

{
  if (_glad_gles_loader_handle != 0) {
    dlclose();
    _glad_gles_loader_handle = 0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 gladLoaderLoadGLES2(void)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (_glad_eglGetProcAddress != 0) {
    if (_glad_GL_loader_handle != 0) {
      local_28 = _glad_GL_loader_handle;
      local_20 = _glad_eglGetProcAddress;
      uVar1 = gladLoadGLES2UserPtr(glad_gles2_get_proc,&local_28);
      goto LAB_00106316;
    }
    lVar2 = dlopen(NAMES_0,1);
    if ((lVar2 != 0) ||
       (lVar2 = dlopen(PTR_s_libGLESv2_so_0010b878,1), _glad_GL_loader_handle = lVar2, lVar2 != 0))
    {
      local_20 = _glad_eglGetProcAddress;
      _glad_GL_loader_handle = lVar2;
      local_28 = lVar2;
      uVar1 = gladLoadGLES2UserPtr(glad_gles2_get_proc,&local_28);
      if ((int)uVar1 != 0) goto LAB_00106316;
      if (_glad_GL_loader_handle != 0) {
        dlclose();
        uVar1 = 0;
        _glad_GL_loader_handle = 0;
        goto LAB_00106316;
      }
    }
  }
  uVar1 = 0;
LAB_00106316:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void gladLoaderUnloadGLES2(void)

{
  if (_glad_GL_loader_handle != 0) {
    dlclose();
    _glad_GL_loader_handle = 0;
    return;
  }
  return;
}


