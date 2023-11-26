// main.cpp
// llamada
#include <iostream>
#include "Primo.h"
#include "Factorial.h"
#include "ParImpar.h"
#include "Binario.h"

// Definiciones de códigos de color ANSI
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"

void mostrarEncabezado() {
    std::cout << ANSI_COLOR_BLUE << "=============================================" << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_BLUE << "          Calculadora Modular" << ANSI_COLOR_RESET << std::endl;
    std::cout << ANSI_COLOR_BLUE << "=============================================" << ANSI_COLOR_RESET << std::endl;
}

void mostrarOpciones() {
    std::cout << ANSI_COLOR_GREEN << "1. Verificar si un numero es primo." << std::endl;
    std::cout << "2. Calcular el factorial de un numero." << std::endl;
    std::cout << "3. Verificar si un numero es par o impar." << std::endl;
    std::cout << "4. Convertir un numero decimal a binario." << std::endl;
    std::cout << ANSI_COLOR_RED << "0. Salir." << std::endl;
}

int main() {
    int opcion;

    do {
        system("clear"); // Limpia la pantalla (Unix/Linux)
        system("cls"); // Limpia la pantalla (Windows)
        mostrarEncabezado();
        mostrarOpciones();
        std::cout << ANSI_COLOR_RESET << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                if (esPrimo(num)) {
                    std::cout << ANSI_COLOR_GREEN << num << " es primo." << ANSI_COLOR_RESET << std::endl;
                } else {
                    std::cout << ANSI_COLOR_RED << num << " no es primo." << ANSI_COLOR_RESET << std::endl;
                }
                break;
            }
            case 2: {
                int num;
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                std::cout << "Factorial de " << num << ": " << ANSI_COLOR_YELLOW << calcularFactorial(num) << ANSI_COLOR_RESET << std::endl;
                break;
            }
            case 3: {
                int num;
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                if (esPar(num)) {
                    std::cout << ANSI_COLOR_GREEN << num << " es par." << ANSI_COLOR_RESET << std::endl;
                } else {
                    std::cout << ANSI_COLOR_RED << num << " es impar." << ANSI_COLOR_RESET << std::endl;
                }
                break;
            }
            case 4: {
                int num;
                std::cout << "Ingrese un numero: ";
                std::cin >> num;
                std::cout << "Representacion binaria de " << num << ": " << ANSI_COLOR_YELLOW << decimalToBinario(num) << ANSI_COLOR_RESET << std::endl;
                break;
            }
            case 0:
                std::cout << ANSI_COLOR_RED << "Saliendo de la calculadora. ¡Hasta luego!" << ANSI_COLOR_RESET << std::endl;
                break;
            default:
                std::cout << ANSI_COLOR_RED << "Opcion no válida. Intente de nuevo." << ANSI_COLOR_RESET << std::endl;
                break;
        }

        // Espera antes de volver al menú
        std::cout << "Presione Enter para continuar...";
        std::cin.ignore();
        std::cin.get();

    } while (opcion != 0);

    return 0;
}

