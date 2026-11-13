#include "pollo.hpp"
#include <iostream>

namespace ukelele_chicken 
{
    Pollo::Pollo()
    {
        std::cout << "Nace un pollo\n";
    }

    Pollo::~Pollo()
    {
        std::cout << "Muere un pollo\n";
    }

    void Pollo::comer() const 
    {
        std::cout << "[Pollo] Picoteando maíz y ración equilibrada.\n";
    }

    void Pollo::dormir() const 
    {
        std::cout << "[Pollo] Durmiendo en el gallinero.\n";
    }

} // namespace ukelele_chicken