#include "pch.h"
#include "clr.h"

#using "CSharpDll.dll"


double sum(double a, double b)
{
	CSharpDll::CSharpClass^ pInstance = gcnew CSharpDll::CSharpClass();

	return pInstance->Sum(a, b);

}