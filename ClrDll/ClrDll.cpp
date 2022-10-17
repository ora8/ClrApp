#include "pch.h"

#include "ClrDll.h"

#using "CSharpDll.dll"

double ClrDll::CppClass::sum(double a, double b)
{
	CSharpDll::CSharpClass^ pInstance = gcnew CSharpDll::CSharpClass();

	return pInstance->Sum(a, b);
}


