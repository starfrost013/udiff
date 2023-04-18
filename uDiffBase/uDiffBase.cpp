// uDiffBase.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "uDiffBase.h"


// This is an example of an exported variable
UDIFFBASE_API int nuDiffBase=0;

// This is an example of an exported function.
UDIFFBASE_API int fnuDiffBase(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CuDiffBase::CuDiffBase()
{
    return;
}
