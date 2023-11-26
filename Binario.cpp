// Binario.cpp
#include "Binario.h"

std::string decimalToBinario(int numero) {
    if (numero == 0) {
        return "0";
    }

    std::string binario = "";
    while (numero > 0) {
        binario = std::to_string(numero % 2) + binario;
        numero /= 2;
    }

    return binario;
}

