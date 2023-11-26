// Factorial.cpp
// Cambios
#include "Factorial.h"

int calcularFactorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    }
    return numero * calcularFactorial(numero - 1);
}

