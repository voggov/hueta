#include"pch.h"
#include"Base.h"

extern "C" __declspec(dllexport) Base* createBase() {
	return new Base();
}