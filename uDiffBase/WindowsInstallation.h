#pragma once
// Base class for Windows installations.
// Currently this is just WIM. Later on we will have ESD, i386, Win9x, etc...
class WindowsInstallation
{
public: 
	virtual bool Open() {};
	virtual bool Close() {};

};