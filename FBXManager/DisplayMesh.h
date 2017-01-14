/****************************************************************************************

   Copyright (C) 2015 Autodesk, Inc.
   All rights reserved.

   Use of this software is subject to the terms of the Autodesk license agreement
   provided at the time of installation or download, or which otherwise accompanies
   this software in either electronic or hard copy form.

****************************************************************************************/

#ifndef _DISPLAY_MESH_H
#define _DISPLAY_MESH_H

#include "DisplayCommon.h"

void DisplayMesh(FbxNode* pNode);

FbxVector4* m_lControlPoints = NULL;
int m_nControlPointCount = 0;
#endif // #ifndef _DISPLAY_MESH_H

