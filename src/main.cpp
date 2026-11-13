#include <iostream>
#include "animal.hpp"
#include "pollo.hpp"
#include "vaca.hpp"
#include "cerdo.hpp"

using namespace ukelele_chicken;

int main() 
{
    // Array estático de punteros a la clase base
    const int capacidad_maxima = 5;
    Animal* inventario_animales[capacidad_maxima];
    int cantidad_actual = 0;
    int opcion = 0;

    std::cout << "--- Sistema Ukelele Chicken ---\n";

    // Selección de objetos en tiempo de ejecución
    while (cantidad_actual < capacidad_maxima) 
    {
        std::cout << "\nSeleccione el tipo de animal a ingresar (" 
                  << cantidad_actual + 1 << "/" << capacidad_maxima << "):\n"
                  << "1. Pollo\n"
                  << "2. Vaca\n"
                  << "3. Cerdo\n"
                  << "4. Finalizar carga\n"
                  << "Opcion: ";
        std::cin >> opcion;

        if (opcion == 4) break;

        switch (opcion) 
        {
            case 1:
                inventario_animales[cantidad_actual] = new Pollo();
                cantidad_actual++;
                break;
            case 2:
                inventario_animales[cantidad_actual] = new Vaca();
                cantidad_actual++;
                break;
            case 3:
                inventario_animales[cantidad_actual] = new Cerdo();
                cantidad_actual++;
                break;
            default:
                std::cout << "Opcion invalida. Intente de nuevo.\n";
        }
    }

    std::cout << "\n--- Ejecucion Polimorfica ---\n";
    // Recorrido genérico del arreglo ejecutando métodos
    for (int i = 0; i < cantidad_actual; i++) 
    {
        std::cout << "Objeto en indice " << i << ":\n";
        
        // El enlazamiento dinámico (late binding) decide qué método ejecutar
        inventario_animales[i]->comer();
        inventario_animales[i]->dormir();
        
        std::cout << "-----------------------\n";
    }

    // Liberación de memoria gestionada manualmente (requisito al no usar RAII/Smart Pointers de la STL)
    for (int i = 0; i < cantidad_actual; i++) 
    {
        delete inventario_animales[i];
        inventario_animales[i] = nullptr;
    }

    return 0;
}