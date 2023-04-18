#pragma once
#include <wimgapi.h>
#include "WindowsInstallation.h"

#include <string>

std::wstring WIM_FILE_EXTENSION = L".wim";
std::wstring WIM_FILE_MAGIC = L"MSWIM";

class WIMInstallation : WindowsInstallation
{

};