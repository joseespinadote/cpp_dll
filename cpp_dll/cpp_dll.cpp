// hecho por José Espina Dote

#include "stdafx.h"
#include "cpp_dll.h"

// Esto es una simulación de una función de un sistema legado
__declspec(dllexport) double funcionLegacy_01(double a, double b) {
	return a / b;
}
