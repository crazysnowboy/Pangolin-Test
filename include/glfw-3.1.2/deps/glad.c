#include <stdio.h>
#include <string.h>
#include <glad/glad.h>

struct gladGLversionStruct GLVersion;

#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
#define _GLAD_IS_SOME_NEW_VERSION 1
#endif

int GLAD_GL_VERSION_1_0;
int GLAD_GL_VERSION_1_1;
int GLAD_GL_VERSION_1_2;
int GLAD_GL_VERSION_1_3;
int GLAD_GL_VERSION_1_4;
int GLAD_GL_VERSION_1_5;
int GLAD_GL_VERSION_2_0;
int GLAD_GL_VERSION_2_1;
int GLAD_GL_VERSION_3_0;
int GLAD_GL_VERSION_3_1;
int GLAD_GL_VERSION_3_2;
PFNGLDELETEVERTEXARRAYSPROC glad_glDeleteVertexArrays;
PFNGLBEGINTRANSFORMFEEDBACKPROC glad_glBeginTransformFeedback;
PFNGLFLUSHPROC glad_glFlush;
PFNGLCOPYTEXIMAGE1DPROC glad_glCopyTexImage1D;
PFNGLCLEARCOLORPROC glad_glClearColor;
PFNGLVERTEXATTRIBI3UIPROC glad_glVertexAttribI3ui;
PFNGLGETUNIFORMBLOCKINDEXPROC glad_glGetUniformBlockIndex;
PFNGLVERTEXATTRIB4NIVPROC glad_glVertexAttrib4Niv;
PFNGLCLEARBUFFERIVPROC glad_glClearBufferiv;
PFNGLSTENCILMASKSEPARATEPROC glad_glStencilMaskSeparate;
PFNGLGETVERTEXATTRIBPOINTERVPROC glad_glGetVertexAttribPointerv;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_glGetFramebufferAttachmentParameteriv;
PFNGLBINDFRAGDATALOCATIONPROC glad_glBindFragDataLocation;
PFNGLLINKPROGRAMPROC glad_glLinkProgram;
PFNGLBINDTEXTUREPROC glad_glBindTexture;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glad_glGetActiveUniformBlockName;
PFNGLVERTEXATTRIBI2UIVPROC glad_glVertexAttribI2uiv;
PFNGLFENCESYNCPROC glad_glFenceSync;
PFNGLUNIFORM3UIPROC glad_glUniform3ui;
PFNGLUNIFORM2UIVPROC glad_glUniform2uiv;
PFNGLGETSTRINGPROC glad_glGetString;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glad_glCompressedTexSubImage3D;
PFNGLDETACHSHADERPROC glad_glDetachShader;
PFNGLVERTEXATTRIBI4UIVPROC glad_glVertexAttribI4uiv;
PFNGLGENBUFFERSPROC glad_glGenBuffers;
PFNGLENDQUERYPROC glad_glEndQuery;
PFNGLPOINTPARAMETERFVPROC glad_glPointParameterfv;
PFNGLLINEWIDTHPROC glad_glLineWidth;
PFNGLUNIFORM2FVPROC glad_glUniform2fv;
PFNGLDRAWELEMENTSINSTANCEDPROC glad_glDrawElementsInstanced;
PFNGLGETINTEGERI_VPROC glad_glGetIntegeri_v;
PFNGLBINDATTRIBLOCATIONPROC glad_glBindAttribLocation;
PFNGLCOMPILESHADERPROC glad_glCompileShader;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glad_glGetTransformFeedbackVarying;
PFNGLDELETETEXTURESPROC glad_glDeleteTextures;
PFNGLSTENCILOPSEPARATEPROC glad_glStencilOpSeparate;
PFNGLUNIFORMMATRIX3FVPROC glad_glUniformMatrix3fv;
PFNGLPOLYGONMODEPROC glad_glPolygonMode;
PFNGLBINDBUFFERRANGEPROC glad_glBindBufferRange;
PFNGLVERTEXATTRIB4FPROC glad_glVertexAttrib4f;
PFNGLGENRENDERBUFFERSPROC glad_glGenRenderbuffers;
PFNGLVERTEXATTRIB4DPROC glad_glVertexAttrib4d;
PFNGLVERTEXATTRIB1FPROC glad_glVertexAttrib1f;
PFNGLGETBUFFERPARAMETERI64VPROC glad_glGetBufferParameteri64v;
PFNGLISSYNCPROC glad_glIsSync;
PFNGLCLAMPCOLORPROC glad_glClampColor;
PFNGLUNIFORM4IVPROC glad_glUniform4iv;
PFNGLGETTEXPARAMETERIVPROC glad_glGetTexParameteriv;
PFNGLCLEARSTENCILPROC glad_glClearStencil;
PFNGLFRAMEBUFFERTEXTUREPROC glad_glFramebufferTexture;
PFNGLUNIFORMMATRIX2X3FVPROC glad_glUniformMatrix2x3fv;
PFNGLVERTEXATTRIB4SPROC glad_glVertexAttrib4s;
PFNGLDRAWELEMENTSBASEVERTEXPROC glad_glDrawElementsBaseVertex;
PFNGLGETVERTEXATTRIBIUIVPROC glad_glGetVertexAttribIuiv;
PFNGLENABLEIPROC glad_glEnablei;
PFNGLSAMPLECOVERAGEPROC glad_glSampleCoverage;
PFNGLVERTEXATTRIB4NUSVPROC glad_glVertexAttrib4Nusv;
PFNGLGENTEXTURESPROC glad_glGenTextures;
PFNGLDEPTHFUNCPROC glad_glDepthFunc;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glad_glCompressedTexSubImage2D;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glad_glGetRenderbufferParameteriv;
PFNGLUNIFORM1FPROC glad_glUniform1f;
PFNGLGETVERTEXATTRIBFVPROC glad_glGetVertexAttribfv;
PFNGLVERTEXATTRIBI4BVPROC glad_glVertexAttribI4bv;
PFNGLVERTEXATTRIB4NBVPROC glad_glVertexAttrib4Nbv;
PFNGLGETTEXPARAMETERFVPROC glad_glGetTexParameterfv;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glad_glGetCompressedTexImage;
PFNGLISVERTEXARRAYPROC glad_glIsVertexArray;
PFNGLCREATESHADERPROC glad_glCreateShader;
PFNGLISBUFFERPROC glad_glIsBuffer;
PFNGLUNIFORM1IPROC glad_glUniform1i;
PFNGLVERTEXATTRIB3SPROC glad_glVertexAttrib3s;
PFNGLGETACTIVEATTRIBPROC glad_glGetActiveAttrib;
PFNGLCOPYTEXSUBIMAGE2DPROC glad_glCopyTexSubImage2D;
PFNGLVERTEXATTRIB3DVPROC glad_glVertexAttrib3dv;
PFNGLTEXSUBIMAGE2DPROC glad_glTexSubImage2D;
PFNGLDISABLEPROC glad_glDisable;
PFNGLUNIFORM2IPROC glad_glUniform2i;
PFNGLBLENDFUNCSEPARATEPROC glad_glBlendFuncSeparate;
PFNGLLOGICOPPROC glad_glLogicOp;
PFNGLVERTEXATTRIBI4SVPROC glad_glVertexAttribI4sv;
PFNGLGETPROGRAMIVPROC glad_glGetProgramiv;
PFNGLCOLORMASKPROC glad_glColorMask;
PFNGLHINTPROC glad_glHint;
PFNGLVERTEXATTRIB1SPROC glad_glVertexAttrib1s;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glad_glFramebufferTextureLayer;
PFNGLTEXPARAMETERIIVPROC glad_glTexParameterIiv;
PFNGLBLENDEQUATIONPROC glad_glBlendEquation;
PFNGLGETUNIFORMLOCATIONPROC glad_glGetUniformLocation;
PFNGLSAMPLEMASKIPROC glad_glSampleMaski;
PFNGLBINDFRAMEBUFFERPROC glad_glBindFramebuffer;
PFNGLENDTRANSFORMFEEDBACKPROC glad_glEndTransformFeedback;
PFNGLCULLFACEPROC glad_glCullFace;
PFNGLUNIFORMMATRIX3X2FVPROC glad_glUniformMatrix3x2fv;
PFNGLVERTEXATTRIB4USVPROC glad_glVertexAttrib4usv;
PFNGLUNIFORM4FVPROC glad_glUniform4fv;
PFNGLGETTEXPARAMETERIUIVPROC glad_glGetTexParameterIuiv;
PFNGLDELETEFRAMEBUFFERSPROC glad_glDeleteFramebuffers;
PFNGLUNIFORM1UIVPROC glad_glUniform1uiv;
PFNGLPOINTSIZEPROC glad_glPointSize;
PFNGLGETSTRINGIPROC glad_glGetStringi;
PFNGLVERTEXATTRIB2DVPROC glad_glVertexAttrib2dv;
PFNGLVERTEXATTRIBI1IVPROC glad_glVertexAttribI1iv;
PFNGLDELETEPROGRAMPROC glad_glDeleteProgram;
PFNGLVERTEXATTRIB4NUIVPROC glad_glVertexAttrib4Nuiv;
PFNGLGENQUERIESPROC glad_glGenQueries;
PFNGLWAITSYNCPROC glad_glWaitSync;
PFNGLATTACHSHADERPROC glad_glAttachShader;
PFNGLBLITFRAMEBUFFERPROC glad_glBlitFramebuffer;
PFNGLRENDERBUFFERSTORAGEPROC glad_glRenderbufferStorage;
PFNGLUNIFORMMATRIX4X3FVPROC glad_glUniformMatrix4x3fv;
PFNGLUNIFORM3IPROC glad_glUniform3i;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glad_glCompressedTexImage1D;
PFNGLCOPYTEXSUBIMAGE1DPROC glad_glCopyTexSubImage1D;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glad_glDrawRangeElementsBaseVertex;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glad_glCheckFramebufferStatus;
PFNGLTEXSUBIMAGE3DPROC glad_glTexSubImage3D;
PFNGLGETINTEGER64I_VPROC glad_glGetInteger64i_v;
PFNGLPROVOKINGVERTEXPROC glad_glProvokingVertex;
PFNGLGETMULTISAMPLEFVPROC glad_glGetMultisamplefv;
PFNGLCOPYTEXIMAGE2DPROC glad_glCopyTexImage2D;
PFNGLUNIFORM3FPROC glad_glUniform3f;
PFNGLVERTEXATTRIB4UBVPROC glad_glVertexAttrib4ubv;
PFNGLGETBUFFERPARAMETERIVPROC glad_glGetBufferParameteriv;
PFNGLUNIFORMMATRIX4X2FVPROC glad_glUniformMatrix4x2fv;
PFNGLENDCONDITIONALRENDERPROC glad_glEndConditionalRender;
PFNGLDRAWELEMENTSPROC glad_glDrawElements;
PFNGLCOLORMASKIPROC glad_glColorMaski;
PFNGLISENABLEDIPROC glad_glIsEnabledi;
PFNGLVERTEXATTRIB1DVPROC glad_glVertexAttrib1dv;
PFNGLDRAWRANGEELEMENTSPROC glad_glDrawRangeElements;
PFNGLGETQUERYOBJECTUIVPROC glad_glGetQueryObjectuiv;
PFNGLGENVERTEXARRAYSPROC glad_glGenVertexArrays;
PFNGLBINDBUFFERBASEPROC glad_glBindBufferBase;
PFNGLBUFFERSUBDATAPROC glad_glBufferSubData;
PFNGLUNIFORM1IVPROC glad_glUniform1iv;
PFNGLGETQUERYOBJECTIVPROC glad_glGetQueryObjectiv;
PFNGLUNIFORM4UIVPROC glad_glUniform4uiv;
PFNGLREADBUFFERPROC glad_glReadBuffer;
PFNGLCOPYBUFFERSUBDATAPROC glad_glCopyBufferSubData;
PFNGLBINDVERTEXARRAYPROC glad_glBindVertexArray;
PFNGLCLIENTWAITSYNCPROC glad_glClientWaitSync;
PFNGLBEGINCONDITIONALRENDERPROC glad_glBeginConditionalRender;
PFNGLVERTEXATTRIB3SVPROC glad_glVertexAttrib3sv;
PFNGLVERTEXATTRIBI2UIPROC glad_glVertexAttribI2ui;
PFNGLGENERATEMIPMAPPROC glad_glGenerateMipmap;
PFNGLMULTIDRAWARRAYSPROC glad_glMultiDrawArrays;
PFNGLFRAMEBUFFERTEXTURE1DPROC glad_glFramebufferTexture1D;
PFNGLGETSHADERIVPROC glad_glGetShaderiv;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glad_glGetActiveUniformBlockiv;
PFNGLUNIFORMMATRIX3X4FVPROC glad_glUniformMatrix3x4fv;
PFNGLVERTEXATTRIB3FPROC glad_glVertexAttrib3f;
PFNGLVERTEXATTRIB4UIVPROC glad_glVertexAttrib4uiv;
PFNGLPOINTPARAMETERIPROC glad_glPointParameteri;
PFNGLBLENDCOLORPROC glad_glBlendColor;
PFNGLENABLEVERTEXATTRIBARRAYPROC glad_glEnableVertexAttribArray;
PFNGLUNMAPBUFFERPROC glad_glUnmapBuffer;
PFNGLDEPTHMASKPROC glad_glDepthMask;
PFNGLPOINTPARAMETERFPROC glad_glPointParameterf;
PFNGLDISABLEIPROC glad_glDisablei;
PFNGLGETDOUBLEVPROC glad_glGetDoublev;
PFNGLVERTEXATTRIBI4IVPROC glad_glVertexAttribI4iv;
PFNGLVERTEXATTRIB1SVPROC glad_glVertexAttrib1sv;
PFNGLSHADERSOURCEPROC glad_glShaderSource;
PFNGLBINDRENDERBUFFERPROC glad_glBindRenderbuffer;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glad_glCompressedTexImage2D;
PFNGLVERTEXATTRIBI3UIVPROC glad_glVertexAttribI3uiv;
PFNGLVERTEXATTRIBI2IVPROC glad_glVertexAttribI2iv;
PFNGLDRAWARRAYSPROC glad_glDrawArrays;
PFNGLUNIFORM1UIPROC glad_glUniform1ui;
PFNGLISPROGRAMPROC glad_glIsProgram;
PFNGLGETTEXLEVELPARAMETERIVPROC glad_glGetTexLevelParameteriv;
PFNGLGETFRAGDATALOCATIONPROC glad_glGetFragDataLocation;
PFNGLGETSYNCIVPROC glad_glGetSynciv;
PFNGLGETUNIFORMIVPROC glad_glGetUniformiv;
PFNGLVERTEXATTRIBI2IPROC glad_glVertexAttribI2i;
PFNGLUNIFORM4IPROC glad_glUniform4i;
PFNGLVERTEXATTRIB3DPROC glad_glVertexAttrib3d;
PFNGLCLEARPROC glad_glClear;
PFNGLVERTEXATTRIB4FVPROC glad_glVertexAttrib4fv;
PFNGLGETACTIVEUNIFORMNAMEPROC glad_glGetActiveUniformName;
PFNGLUNIFORM2FPROC glad_glUniform2f;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glad_glTexImage2DMultisample;
PFNGLACTIVETEXTUREPROC glad_glActiveTexture;
PFNGLBEGINQUERYPROC glad_glBeginQuery;
PFNGLUNIFORM2IVPROC glad_glUniform2iv;
PFNGLBINDBUFFERPROC glad_glBindBuffer;
PFNGLISENABLEDPROC glad_glIsEnabled;
PFNGLSTENCILOPPROC glad_glStencilOp;
PFNGLREADPIXELSPROC glad_glReadPixels;
PFNGLCLEARDEPTHPROC glad_glClearDepth;
PFNGLVERTEXATTRIBI3IVPROC glad_glVertexAttribI3iv;
PFNGLUNIFORM4FPROC glad_glUniform4f;
PFNGLFRAMEBUFFERTEXTURE2DPROC glad_glFramebufferTexture2D;
PFNGLMAPBUFFERPROC glad_glMapBuffer;
PFNGLVERTEXATTRIB1DPROC glad_glVertexAttrib1d;
PFNGLVERTEXATTRIB4NUBPROC glad_glVertexAttrib4Nub;
PFNGLUNIFORM3FVPROC glad_glUniform3fv;
PFNGLGETUNIFORMFVPROC glad_glGetUniformfv;
PFNGLBUFFERDATAPROC glad_glBufferData;
PFNGLGETTEXPARAMETERIIVPROC glad_glGetTexParameterIiv;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glad_glCompressedTexImage3D;
PFNGLTEXIMAGE1DPROC glad_glTexImage1D;
PFNGLDELETESYNCPROC glad_glDeleteSync;
PFNGLCOPYTEXSUBIMAGE3DPROC glad_glCopyTexSubImage3D;
PFNGLGETERRORPROC glad_glGetError;
PFNGLDELETERENDERBUFFERSPROC glad_glDeleteRenderbuffers;
PFNGLGETVERTEXATTRIBIVPROC glad_glGetVertexAttribiv;
PFNGLTEXPARAMETERIVPROC glad_glTexParameteriv;
PFNGLMULTIDRAWELEMENTSPROC glad_glMultiDrawElements;
PFNGLVERTEXATTRIB3FVPROC glad_glVertexAttrib3fv;
PFNGLGETFLOATVPROC glad_glGetFloatv;
PFNGLTEXSUBIMAGE1DPROC glad_glTexSubImage1D;
PFNGLUNIFORM3IVPROC glad_glUniform3iv;
PFNGLGETTEXIMAGEPROC glad_glGetTexImage;
PFNGLVERTEXATTRIB2FVPROC glad_glVertexAttrib2fv;
PFNGLUSEPROGRAMPROC glad_glUseProgram;
PFNGLVERTEXATTRIB4IVPROC glad_glVertexAttrib4iv;
PFNGLGETTEXLEVELPARAMETERFVPROC glad_glGetTexLevelParameterfv;
PFNGLVERTEXATTRIBI1IPROC glad_glVertexAttribI1i;
PFNGLGENFRAMEBUFFERSPROC glad_glGenFramebuffers;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glad_glFramebufferRenderbuffer;
PFNGLDRAWBUFFERSPROC glad_glDrawBuffers;
PFNGLCLEARBUFFERFVPROC glad_glClearBufferfv;
PFNGLSTENCILFUNCPROC glad_glStencilFunc;
PFNGLGETINTEGERVPROC glad_glGetIntegerv;
PFNGLGETATTACHEDSHADERSPROC glad_glGetAttachedShaders;
PFNGLUNIFORMBLOCKBINDINGPROC glad_glUniformBlockBinding;
PFNGLISRENDERBUFFERPROC glad_glIsRenderbuffer;
PFNGLGETBUFFERPOINTERVPROC glad_glGetBufferPointerv;
PFNGLGETVERTEXATTRIBIIVPROC glad_glGetVertexAttribIiv;
PFNGLDRAWBUFFERPROC glad_glDrawBuffer;
PFNGLFRAMEBUFFERTEXTURE3DPROC glad_glFramebufferTexture3D;
PFNGLUNIFORM1FVPROC glad_glUniform1fv;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glad_glRenderbufferStorageMultisample;
PFNGLMAPBUFFERRANGEPROC glad_glMapBufferRange;
PFNGLISQUERYPROC glad_glIsQuery;
PFNGLVERTEXATTRIB4NUBVPROC glad_glVertexAttrib4Nubv;
PFNGLUNIFORMMATRIX2FVPROC glad_glUniformMatrix2fv;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glad_glDisableVertexAttribArray;
PFNGLVERTEXATTRIB4SVPROC glad_glVertexAttrib4sv;
PFNGLGETQUERYIVPROC glad_glGetQueryiv;
PFNGLTEXIMAGE2DPROC glad_glTexImage2D;
PFNGLGETPROGRAMINFOLOGPROC glad_glGetProgramInfoLog;
PFNGLSTENCILMASKPROC glad_glStencilMask;
PFNGLUNIFORM4UIPROC glad_glUniform4ui;
PFNGLUNIFORMMATRIX2X4FVPROC glad_glUniformMatrix2x4fv;
PFNGLGETSHADERINFOLOGPROC glad_glGetShaderInfoLog;
PFNGLISTEXTUREPROC glad_glIsTexture;
PFNGLGETUNIFORMINDICESPROC glad_glGetUniformIndices;
PFNGLISSHADERPROC glad_glIsShader;
PFNGLGETSHADERSOURCEPROC glad_glGetShaderSource;
PFNGLVERTEXATTRIBI4UBVPROC glad_glVertexAttribI4ubv;
PFNGLVERTEXATTRIB4BVPROC glad_glVertexAttrib4bv;
PFNGLGETINTEGER64VPROC glad_glGetInteger64v;
PFNGLVERTEXATTRIBPOINTERPROC glad_glVertexAttribPointer;
PFNGLTEXPARAMETERFVPROC glad_glTexParameterfv;
PFNGLGETBUFFERSUBDATAPROC glad_glGetBufferSubData;
PFNGLVERTEXATTRIB1FVPROC glad_glVertexAttrib1fv;
PFNGLTEXPARAMETERIUIVPROC glad_glTexParameterIuiv;
PFNGLENABLEPROC glad_glEnable;
PFNGLGETACTIVEUNIFORMSIVPROC glad_glGetActiveUniformsiv;
PFNGLDRAWARRAYSINSTANCEDPROC glad_glDrawArraysInstanced;
PFNGLVERTEXATTRIBI4IPROC glad_glVertexAttribI4i;
PFNGLSTENCILFUNCSEPARATEPROC glad_glStencilFuncSeparate;
PFNGLDELETEQUERIESPROC glad_glDeleteQueries;
PFNGLPOINTPARAMETERIVPROC glad_glPointParameteriv;
PFNGLBLENDEQUATIONSEPARATEPROC glad_glBlendEquationSeparate;
PFNGLVERTEXATTRIBI1UIPROC glad_glVertexAttribI1ui;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glad_glCompressedTexSubImage1D;
PFNGLFINISHPROC glad_glFinish;
PFNGLGETATTRIBLOCATIONPROC glad_glGetAttribLocation;
PFNGLVERTEXATTRIB4DVPROC glad_glVertexAttrib4dv;
PFNGLVERTEXATTRIB2SVPROC glad_glVertexAttrib2sv;
PFNGLDELETESHADERPROC glad_glDeleteShader;
PFNGLBLENDFUNCPROC glad_glBlendFunc;
PFNGLCREATEPROGRAMPROC glad_glCreateProgram;
PFNGLTEXIMAGE3DPROC glad_glTexImage3D;
PFNGLVERTEXATTRIB4NSVPROC glad_glVertexAttrib4Nsv;
PFNGLISFRAMEBUFFERPROC glad_glIsFramebuffer;
PFNGLVERTEXATTRIBI4UIPROC glad_glVertexAttribI4ui;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glad_glFlushMappedBufferRange;
PFNGLVIEWPORTPROC glad_glViewport;
PFNGLVERTEXATTRIBI1UIVPROC glad_glVertexAttribI1uiv;
PFNGLVERTEXATTRIB2DPROC glad_glVertexAttrib2d;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glad_glTransformFeedbackVaryings;
PFNGLVERTEXATTRIB2FPROC glad_glVertexAttrib2f;
PFNGLGETVERTEXATTRIBDVPROC glad_glGetVertexAttribdv;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glad_glMultiDrawElementsBaseVertex;
PFNGLPRIMITIVERESTARTINDEXPROC glad_glPrimitiveRestartIndex;
PFNGLUNIFORM2UIPROC glad_glUniform2ui;
PFNGLPOLYGONOFFSETPROC glad_glPolygonOffset;
PFNGLGETUNIFORMUIVPROC glad_glGetUniformuiv;
PFNGLVERTEXATTRIBI3IPROC glad_glVertexAttribI3i;
PFNGLVERTEXATTRIB2SPROC glad_glVertexAttrib2s;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glad_glTexImage3DMultisample;
PFNGLUNIFORMMATRIX4FVPROC glad_glUniformMatrix4fv;
PFNGLDEPTHRANGEPROC glad_glDepthRange;
PFNGLGETACTIVEUNIFORMPROC glad_glGetActiveUniform;
PFNGLVERTEXATTRIBI4USVPROC glad_glVertexAttribI4usv;
PFNGLTEXPARAMETERFPROC glad_glTexParameterf;
PFNGLCLEARBUFFERFIPROC glad_glClearBufferfi;
PFNGLTEXPARAMETERIPROC glad_glTexParameteri;
PFNGLFRONTFACEPROC glad_glFrontFace;
PFNGLDELETEBUFFERSPROC glad_glDeleteBuffers;
PFNGLSCISSORPROC glad_glScissor;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glad_glDrawElementsInstancedBaseVertex;
PFNGLGETBOOLEANVPROC glad_glGetBooleanv;
PFNGLTEXBUFFERPROC glad_glTexBuffer;
PFNGLPIXELSTOREIPROC glad_glPixelStorei;
PFNGLVALIDATEPROGRAMPROC glad_glValidateProgram;
PFNGLPIXELSTOREFPROC glad_glPixelStoref;
PFNGLCLEARBUFFERUIVPROC glad_glClearBufferuiv;
PFNGLUNIFORM3UIVPROC glad_glUniform3uiv;
PFNGLGETBOOLEANI_VPROC glad_glGetBooleani_v;
PFNGLVERTEXATTRIBIPOINTERPROC glad_glVertexAttribIPointer;
static void load_GL_VERSION_1_0(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_0)
    {
        return;
    }
    glad_glCullFace = (PFNGLCULLFACEPROC)load("glCullFace");
    glad_glFrontFace = (PFNGLFRONTFACEPROC)load("glFrontFace");
    glad_glHint = (PFNGLHINTPROC)load("glHint");
    glad_glLineWidth = (PFNGLLINEWIDTHPROC)load("glLineWidth");
    glad_glPointSize = (PFNGLPOINTSIZEPROC)load("glPointSize");
    glad_glPolygonMode = (PFNGLPOLYGONMODEPROC)load("glPolygonMode");
    glad_glScissor = (PFNGLSCISSORPROC)load("glScissor");
    glad_glTexParameterf = (PFNGLTEXPARAMETERFPROC)load("glTexParameterf");
    glad_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC)load("glTexParameterfv");
    glad_glTexParameteri = (PFNGLTEXPARAMETERIPROC)load("glTexParameteri");
    glad_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC)load("glTexParameteriv");
    glad_glTexImage1D = (PFNGLTEXIMAGE1DPROC)load("glTexImage1D");
    glad_glTexImage2D = (PFNGLTEXIMAGE2DPROC)load("glTexImage2D");
    glad_glDrawBuffer = (PFNGLDRAWBUFFERPROC)load("glDrawBuffer");
    glad_glClear = (PFNGLCLEARPROC)load("glClear");
    glad_glClearColor = (PFNGLCLEARCOLORPROC)load("glClearColor");
    glad_glClearStencil = (PFNGLCLEARSTENCILPROC)load("glClearStencil");
    glad_glClearDepth = (PFNGLCLEARDEPTHPROC)load("glClearDepth");
    glad_glStencilMask = (PFNGLSTENCILMASKPROC)load("glStencilMask");
    glad_glColorMask = (PFNGLCOLORMASKPROC)load("glColorMask");
    glad_glDepthMask = (PFNGLDEPTHMASKPROC)load("glDepthMask");
    glad_glDisable = (PFNGLDISABLEPROC)load("glDisable");
    glad_glEnable = (PFNGLENABLEPROC)load("glEnable");
    glad_glFinish = (PFNGLFINISHPROC)load("glFinish");
    glad_glFlush = (PFNGLFLUSHPROC)load("glFlush");
    glad_glBlendFunc = (PFNGLBLENDFUNCPROC)load("glBlendFunc");
    glad_glLogicOp = (PFNGLLOGICOPPROC)load("glLogicOp");
    glad_glStencilFunc = (PFNGLSTENCILFUNCPROC)load("glStencilFunc");
    glad_glStencilOp = (PFNGLSTENCILOPPROC)load("glStencilOp");
    glad_glDepthFunc = (PFNGLDEPTHFUNCPROC)load("glDepthFunc");
    glad_glPixelStoref = (PFNGLPIXELSTOREFPROC)load("glPixelStoref");
    glad_glPixelStorei = (PFNGLPIXELSTOREIPROC)load("glPixelStorei");
    glad_glReadBuffer = (PFNGLREADBUFFERPROC)load("glReadBuffer");
    glad_glReadPixels = (PFNGLREADPIXELSPROC)load("glReadPixels");
    glad_glGetBooleanv = (PFNGLGETBOOLEANVPROC)load("glGetBooleanv");
    glad_glGetDoublev = (PFNGLGETDOUBLEVPROC)load("glGetDoublev");
    glad_glGetError = (PFNGLGETERRORPROC)load("glGetError");
    glad_glGetFloatv = (PFNGLGETFLOATVPROC)load("glGetFloatv");
    glad_glGetIntegerv = (PFNGLGETINTEGERVPROC)load("glGetIntegerv");
    glad_glGetString = (PFNGLGETSTRINGPROC)load("glGetString");
    glad_glGetTexImage = (PFNGLGETTEXIMAGEPROC)load("glGetTexImage");
    glad_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)load("glGetTexParameterfv");
    glad_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)load("glGetTexParameteriv");
    glad_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)load("glGetTexLevelParameterfv");
    glad_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)load("glGetTexLevelParameteriv");
    glad_glIsEnabled = (PFNGLISENABLEDPROC)load("glIsEnabled");
    glad_glDepthRange = (PFNGLDEPTHRANGEPROC)load("glDepthRange");
    glad_glViewport = (PFNGLVIEWPORTPROC)load("glViewport");
}
static void load_GL_VERSION_1_1(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_1)
    {
        return;
    }
    glad_glDrawArrays = (PFNGLDRAWARRAYSPROC)load("glDrawArrays");
    glad_glDrawElements = (PFNGLDRAWELEMENTSPROC)load("glDrawElements");
    glad_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC)load("glPolygonOffset");
    glad_glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC)load("glCopyTexImage1D");
    glad_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC)load("glCopyTexImage2D");
    glad_glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC)load("glCopyTexSubImage1D");
    glad_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC)load("glCopyTexSubImage2D");
    glad_glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC)load("glTexSubImage1D");
    glad_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC)load("glTexSubImage2D");
    glad_glBindTexture = (PFNGLBINDTEXTUREPROC)load("glBindTexture");
    glad_glDeleteTextures = (PFNGLDELETETEXTURESPROC)load("glDeleteTextures");
    glad_glGenTextures = (PFNGLGENTEXTURESPROC)load("glGenTextures");
    glad_glIsTexture = (PFNGLISTEXTUREPROC)load("glIsTexture");
}
static void load_GL_VERSION_1_2(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_2)
    {
        return;
    }
    glad_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)load("glDrawRangeElements");
    glad_glTexImage3D = (PFNGLTEXIMAGE3DPROC)load("glTexImage3D");
    glad_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)load("glTexSubImage3D");
    glad_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)load("glCopyTexSubImage3D");
}
static void load_GL_VERSION_1_3(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_3)
    {
        return;
    }
    glad_glActiveTexture = (PFNGLACTIVETEXTUREPROC)load("glActiveTexture");
    glad_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)load("glSampleCoverage");
    glad_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)load("glCompressedTexImage3D");
    glad_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)load("glCompressedTexImage2D");
    glad_glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)load("glCompressedTexImage1D");
    glad_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)load("glCompressedTexSubImage3D");
    glad_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)load("glCompressedTexSubImage2D");
    glad_glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)load("glCompressedTexSubImage1D");
    glad_glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)load("glGetCompressedTexImage");
}
static void load_GL_VERSION_1_4(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_4)
    {
        return;
    }
    glad_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)load("glBlendFuncSeparate");
    glad_glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)load("glMultiDrawArrays");
    glad_glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)load("glMultiDrawElements");
    glad_glPointParameterf = (PFNGLPOINTPARAMETERFPROC)load("glPointParameterf");
    glad_glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)load("glPointParameterfv");
    glad_glPointParameteri = (PFNGLPOINTPARAMETERIPROC)load("glPointParameteri");
    glad_glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)load("glPointParameteriv");
    glad_glBlendColor = (PFNGLBLENDCOLORPROC)load("glBlendColor");
    glad_glBlendEquation = (PFNGLBLENDEQUATIONPROC)load("glBlendEquation");
}
static void load_GL_VERSION_1_5(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_1_5)
    {
        return;
    }
    glad_glGenQueries = (PFNGLGENQUERIESPROC)load("glGenQueries");
    glad_glDeleteQueries = (PFNGLDELETEQUERIESPROC)load("glDeleteQueries");
    glad_glIsQuery = (PFNGLISQUERYPROC)load("glIsQuery");
    glad_glBeginQuery = (PFNGLBEGINQUERYPROC)load("glBeginQuery");
    glad_glEndQuery = (PFNGLENDQUERYPROC)load("glEndQuery");
    glad_glGetQueryiv = (PFNGLGETQUERYIVPROC)load("glGetQueryiv");
    glad_glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)load("glGetQueryObjectiv");
    glad_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)load("glGetQueryObjectuiv");
    glad_glBindBuffer = (PFNGLBINDBUFFERPROC)load("glBindBuffer");
    glad_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)load("glDeleteBuffers");
    glad_glGenBuffers = (PFNGLGENBUFFERSPROC)load("glGenBuffers");
    glad_glIsBuffer = (PFNGLISBUFFERPROC)load("glIsBuffer");
    glad_glBufferData = (PFNGLBUFFERDATAPROC)load("glBufferData");
    glad_glBufferSubData = (PFNGLBUFFERSUBDATAPROC)load("glBufferSubData");
    glad_glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)load("glGetBufferSubData");
    glad_glMapBuffer = (PFNGLMAPBUFFERPROC)load("glMapBuffer");
    glad_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)load("glUnmapBuffer");
    glad_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)load("glGetBufferParameteriv");
    glad_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)load("glGetBufferPointerv");
}
static void load_GL_VERSION_2_0(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_2_0)
    {
        return;
    }
    glad_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)load("glBlendEquationSeparate");
    glad_glDrawBuffers = (PFNGLDRAWBUFFERSPROC)load("glDrawBuffers");
    glad_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)load("glStencilOpSeparate");
    glad_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)load("glStencilFuncSeparate");
    glad_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)load("glStencilMaskSeparate");
    glad_glAttachShader = (PFNGLATTACHSHADERPROC)load("glAttachShader");
    glad_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)load("glBindAttribLocation");
    glad_glCompileShader = (PFNGLCOMPILESHADERPROC)load("glCompileShader");
    glad_glCreateProgram = (PFNGLCREATEPROGRAMPROC)load("glCreateProgram");
    glad_glCreateShader = (PFNGLCREATESHADERPROC)load("glCreateShader");
    glad_glDeleteProgram = (PFNGLDELETEPROGRAMPROC)load("glDeleteProgram");
    glad_glDeleteShader = (PFNGLDELETESHADERPROC)load("glDeleteShader");
    glad_glDetachShader = (PFNGLDETACHSHADERPROC)load("glDetachShader");
    glad_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)load("glDisableVertexAttribArray");
    glad_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)load("glEnableVertexAttribArray");
    glad_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)load("glGetActiveAttrib");
    glad_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)load("glGetActiveUniform");
    glad_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)load("glGetAttachedShaders");
    glad_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)load("glGetAttribLocation");
    glad_glGetProgramiv = (PFNGLGETPROGRAMIVPROC)load("glGetProgramiv");
    glad_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)load("glGetProgramInfoLog");
    glad_glGetShaderiv = (PFNGLGETSHADERIVPROC)load("glGetShaderiv");
    glad_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)load("glGetShaderInfoLog");
    glad_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)load("glGetShaderSource");
    glad_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)load("glGetUniformLocation");
    glad_glGetUniformfv = (PFNGLGETUNIFORMFVPROC)load("glGetUniformfv");
    glad_glGetUniformiv = (PFNGLGETUNIFORMIVPROC)load("glGetUniformiv");
    glad_glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)load("glGetVertexAttribdv");
    glad_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)load("glGetVertexAttribfv");
    glad_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)load("glGetVertexAttribiv");
    glad_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)load("glGetVertexAttribPointerv");
    glad_glIsProgram = (PFNGLISPROGRAMPROC)load("glIsProgram");
    glad_glIsShader = (PFNGLISSHADERPROC)load("glIsShader");
    glad_glLinkProgram = (PFNGLLINKPROGRAMPROC)load("glLinkProgram");
    glad_glShaderSource = (PFNGLSHADERSOURCEPROC)load("glShaderSource");
    glad_glUseProgram = (PFNGLUSEPROGRAMPROC)load("glUseProgram");
    glad_glUniform1f = (PFNGLUNIFORM1FPROC)load("glUniform1f");
    glad_glUniform2f = (PFNGLUNIFORM2FPROC)load("glUniform2f");
    glad_glUniform3f = (PFNGLUNIFORM3FPROC)load("glUniform3f");
    glad_glUniform4f = (PFNGLUNIFORM4FPROC)load("glUniform4f");
    glad_glUniform1i = (PFNGLUNIFORM1IPROC)load("glUniform1i");
    glad_glUniform2i = (PFNGLUNIFORM2IPROC)load("glUniform2i");
    glad_glUniform3i = (PFNGLUNIFORM3IPROC)load("glUniform3i");
    glad_glUniform4i = (PFNGLUNIFORM4IPROC)load("glUniform4i");
    glad_glUniform1fv = (PFNGLUNIFORM1FVPROC)load("glUniform1fv");
    glad_glUniform2fv = (PFNGLUNIFORM2FVPROC)load("glUniform2fv");
    glad_glUniform3fv = (PFNGLUNIFORM3FVPROC)load("glUniform3fv");
    glad_glUniform4fv = (PFNGLUNIFORM4FVPROC)load("glUniform4fv");
    glad_glUniform1iv = (PFNGLUNIFORM1IVPROC)load("glUniform1iv");
    glad_glUniform2iv = (PFNGLUNIFORM2IVPROC)load("glUniform2iv");
    glad_glUniform3iv = (PFNGLUNIFORM3IVPROC)load("glUniform3iv");
    glad_glUniform4iv = (PFNGLUNIFORM4IVPROC)load("glUniform4iv");
    glad_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)load("glUniformMatrix2fv");
    glad_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)load("glUniformMatrix3fv");
    glad_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)load("glUniformMatrix4fv");
    glad_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)load("glValidateProgram");
    glad_glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)load("glVertexAttrib1d");
    glad_glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)load("glVertexAttrib1dv");
    glad_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)load("glVertexAttrib1f");
    glad_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)load("glVertexAttrib1fv");
    glad_glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)load("glVertexAttrib1s");
    glad_glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)load("glVertexAttrib1sv");
    glad_glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)load("glVertexAttrib2d");
    glad_glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)load("glVertexAttrib2dv");
    glad_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)load("glVertexAttrib2f");
    glad_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)load("glVertexAttrib2fv");
    glad_glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)load("glVertexAttrib2s");
    glad_glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)load("glVertexAttrib2sv");
    glad_glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)load("glVertexAttrib3d");
    glad_glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)load("glVertexAttrib3dv");
    glad_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)load("glVertexAttrib3f");
    glad_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)load("glVertexAttrib3fv");
    glad_glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)load("glVertexAttrib3s");
    glad_glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)load("glVertexAttrib3sv");
    glad_glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)load("glVertexAttrib4Nbv");
    glad_glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)load("glVertexAttrib4Niv");
    glad_glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)load("glVertexAttrib4Nsv");
    glad_glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)load("glVertexAttrib4Nub");
    glad_glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)load("glVertexAttrib4Nubv");
    glad_glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)load("glVertexAttrib4Nuiv");
    glad_glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)load("glVertexAttrib4Nusv");
    glad_glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)load("glVertexAttrib4bv");
    glad_glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)load("glVertexAttrib4d");
    glad_glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)load("glVertexAttrib4dv");
    glad_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)load("glVertexAttrib4f");
    glad_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)load("glVertexAttrib4fv");
    glad_glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)load("glVertexAttrib4iv");
    glad_glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)load("glVertexAttrib4s");
    glad_glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)load("glVertexAttrib4sv");
    glad_glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)load("glVertexAttrib4ubv");
    glad_glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)load("glVertexAttrib4uiv");
    glad_glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)load("glVertexAttrib4usv");
    glad_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)load("glVertexAttribPointer");
}
static void load_GL_VERSION_2_1(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_2_1)
    {
        return;
    }
    glad_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)load("glUniformMatrix2x3fv");
    glad_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)load("glUniformMatrix3x2fv");
    glad_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)load("glUniformMatrix2x4fv");
    glad_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)load("glUniformMatrix4x2fv");
    glad_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)load("glUniformMatrix3x4fv");
    glad_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)load("glUniformMatrix4x3fv");
}
static void load_GL_VERSION_3_0(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_3_0)
    {
        return;
    }
    glad_glColorMaski = (PFNGLCOLORMASKIPROC)load("glColorMaski");
    glad_glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)load("glGetBooleani_v");
    glad_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)load("glGetIntegeri_v");
    glad_glEnablei = (PFNGLENABLEIPROC)load("glEnablei");
    glad_glDisablei = (PFNGLDISABLEIPROC)load("glDisablei");
    glad_glIsEnabledi = (PFNGLISENABLEDIPROC)load("glIsEnabledi");
    glad_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)load("glBeginTransformFeedback");
    glad_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)load("glEndTransformFeedback");
    glad_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)load("glBindBufferRange");
    glad_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)load("glBindBufferBase");
    glad_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)load("glTransformFeedbackVaryings");
    glad_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)load("glGetTransformFeedbackVarying");
    glad_glClampColor = (PFNGLCLAMPCOLORPROC)load("glClampColor");
    glad_glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)load("glBeginConditionalRender");
    glad_glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)load("glEndConditionalRender");
    glad_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)load("glVertexAttribIPointer");
    glad_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)load("glGetVertexAttribIiv");
    glad_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)load("glGetVertexAttribIuiv");
    glad_glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)load("glVertexAttribI1i");
    glad_glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)load("glVertexAttribI2i");
    glad_glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)load("glVertexAttribI3i");
    glad_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)load("glVertexAttribI4i");
    glad_glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)load("glVertexAttribI1ui");
    glad_glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)load("glVertexAttribI2ui");
    glad_glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)load("glVertexAttribI3ui");
    glad_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)load("glVertexAttribI4ui");
    glad_glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)load("glVertexAttribI1iv");
    glad_glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)load("glVertexAttribI2iv");
    glad_glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)load("glVertexAttribI3iv");
    glad_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)load("glVertexAttribI4iv");
    glad_glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)load("glVertexAttribI1uiv");
    glad_glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)load("glVertexAttribI2uiv");
    glad_glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)load("glVertexAttribI3uiv");
    glad_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)load("glVertexAttribI4uiv");
    glad_glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)load("glVertexAttribI4bv");
    glad_glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)load("glVertexAttribI4sv");
    glad_glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)load("glVertexAttribI4ubv");
    glad_glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)load("glVertexAttribI4usv");
    glad_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)load("glGetUniformuiv");
    glad_glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)load("glBindFragDataLocation");
    glad_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)load("glGetFragDataLocation");
    glad_glUniform1ui = (PFNGLUNIFORM1UIPROC)load("glUniform1ui");
    glad_glUniform2ui = (PFNGLUNIFORM2UIPROC)load("glUniform2ui");
    glad_glUniform3ui = (PFNGLUNIFORM3UIPROC)load("glUniform3ui");
    glad_glUniform4ui = (PFNGLUNIFORM4UIPROC)load("glUniform4ui");
    glad_glUniform1uiv = (PFNGLUNIFORM1UIVPROC)load("glUniform1uiv");
    glad_glUniform2uiv = (PFNGLUNIFORM2UIVPROC)load("glUniform2uiv");
    glad_glUniform3uiv = (PFNGLUNIFORM3UIVPROC)load("glUniform3uiv");
    glad_glUniform4uiv = (PFNGLUNIFORM4UIVPROC)load("glUniform4uiv");
    glad_glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)load("glTexParameterIiv");
    glad_glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)load("glTexParameterIuiv");
    glad_glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)load("glGetTexParameterIiv");
    glad_glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)load("glGetTexParameterIuiv");
    glad_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)load("glClearBufferiv");
    glad_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)load("glClearBufferuiv");
    glad_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)load("glClearBufferfv");
    glad_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)load("glClearBufferfi");
    glad_glGetStringi = (PFNGLGETSTRINGIPROC)load("glGetStringi");
    glad_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)load("glIsRenderbuffer");
    glad_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)load("glBindRenderbuffer");
    glad_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)load("glDeleteRenderbuffers");
    glad_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)load("glGenRenderbuffers");
    glad_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)load("glRenderbufferStorage");
    glad_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)load("glGetRenderbufferParameteriv");
    glad_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)load("glIsFramebuffer");
    glad_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)load("glBindFramebuffer");
    glad_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)load("glDeleteFramebuffers");
    glad_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)load("glGenFramebuffers");
    glad_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)load("glCheckFramebufferStatus");
    glad_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)load("glFramebufferTexture1D");
    glad_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)load("glFramebufferTexture2D");
    glad_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)load("glFramebufferTexture3D");
    glad_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)load("glFramebufferRenderbuffer");
    glad_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load("glGetFramebufferAttachmentParameteriv");
    glad_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)load("glGenerateMipmap");
    glad_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)load("glBlitFramebuffer");
    glad_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)load("glRenderbufferStorageMultisample");
    glad_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)load("glFramebufferTextureLayer");
    glad_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)load("glMapBufferRange");
    glad_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)load("glFlushMappedBufferRange");
    glad_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)load("glBindVertexArray");
    glad_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)load("glDeleteVertexArrays");
    glad_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)load("glGenVertexArrays");
    glad_glIsVertexArray = (PFNGLISVERTEXARRAYPROC)load("glIsVertexArray");
}
static void load_GL_VERSION_3_1(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_3_1)
    {
        return;
    }
    glad_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)load("glDrawArraysInstanced");
    glad_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)load("glDrawElementsInstanced");
    glad_glTexBuffer = (PFNGLTEXBUFFERPROC)load("glTexBuffer");
    glad_glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)load("glPrimitiveRestartIndex");
    glad_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)load("glCopyBufferSubData");
    glad_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)load("glGetUniformIndices");
    glad_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)load("glGetActiveUniformsiv");
    glad_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)load("glGetActiveUniformName");
    glad_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)load("glGetUniformBlockIndex");
    glad_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)load("glGetActiveUniformBlockiv");
    glad_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)load("glGetActiveUniformBlockName");
    glad_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)load("glUniformBlockBinding");
}
static void load_GL_VERSION_3_2(GLADloadproc load)
{
    if(!GLAD_GL_VERSION_3_2)
    {
        return;
    }
    glad_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)load("glDrawElementsBaseVertex");
    glad_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)load("glDrawRangeElementsBaseVertex");
    glad_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)load("glDrawElementsInstancedBaseVertex");
    glad_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)load("glMultiDrawElementsBaseVertex");
    glad_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)load("glProvokingVertex");
    glad_glFenceSync = (PFNGLFENCESYNCPROC)load("glFenceSync");
    glad_glIsSync = (PFNGLISSYNCPROC)load("glIsSync");
    glad_glDeleteSync = (PFNGLDELETESYNCPROC)load("glDeleteSync");
    glad_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)load("glClientWaitSync");
    glad_glWaitSync = (PFNGLWAITSYNCPROC)load("glWaitSync");
    glad_glGetInteger64v = (PFNGLGETINTEGER64VPROC)load("glGetInteger64v");
    glad_glGetSynciv = (PFNGLGETSYNCIVPROC)load("glGetSynciv");
    glad_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)load("glGetInteger64i_v");
    glad_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)load("glGetBufferParameteri64v");
    glad_glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)load("glFramebufferTexture");
    glad_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)load("glTexImage2DMultisample");
    glad_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)load("glTexImage3DMultisample");
    glad_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)load("glGetMultisamplefv");
    glad_glSampleMaski = (PFNGLSAMPLEMASKIPROC)load("glSampleMaski");
}
static void find_extensionsGL(void)
{
}

static void find_coreGL(void)
{

    /* Thank you @elmindreda
     * https://github.com/elmindreda/greg/blob/master/templates/greg.c.in#L176
     * https://github.com/glfw/glfw/blob/master/src/context.c#L36
     */
    int i, major, minor;

    const char* version;
    const char* prefixes[] =
    {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        NULL
    };

    version = (const char*) glGetString(GL_VERSION);
    if (!version)
    {
        return;
    }

    for (i = 0;  prefixes[i];  i++)
    {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0)
        {
            version += length;
            break;
        }
    }

    sscanf(version, "%d.%d", &major, &minor);
    GLVersion.major = major;
    GLVersion.minor = minor;
    GLAD_GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLAD_GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLAD_GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    GLAD_GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
    GLAD_GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    GLAD_GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
    GLAD_GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
    GLAD_GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
    GLAD_GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
}

int gladLoadGLLoader(GLADloadproc load)
{
    GLVersion.major = 0;
    GLVersion.minor = 0;
    glGetString = (PFNGLGETSTRINGPROC)load("glGetString");
    if(glGetString == NULL)
    {
        return 0;
    }
    if(glGetString(GL_VERSION) == NULL)
    {
        return 0;
    }
    find_coreGL();
    load_GL_VERSION_1_0(load);
    load_GL_VERSION_1_1(load);
    load_GL_VERSION_1_2(load);
    load_GL_VERSION_1_3(load);
    load_GL_VERSION_1_4(load);
    load_GL_VERSION_1_5(load);
    load_GL_VERSION_2_0(load);
    load_GL_VERSION_2_1(load);
    load_GL_VERSION_3_0(load);
    load_GL_VERSION_3_1(load);
    load_GL_VERSION_3_2(load);

    find_extensionsGL();
    return GLVersion.major != 0 || GLVersion.minor != 0;
}

