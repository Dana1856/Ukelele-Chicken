#include "vaca.hpp"
#include <iostream>

namespace ukelele_chicken 
{
    Vaca::Vaca()
    {
        std::cout << "Nace un vaca\n";
    }

    Vaca::~Vaca()
    {
        std::cout << "Muere un vaca\n";
    }

    void Vaca::comer() const 
    {
        std::cout << "[Vaca] Comiendo pasto y ración equilibrada.\n";
    }

    void Vaca::dormir() const 
    {
        std::cout << "[Vaca] Durmiendo en el granero.\n";
    }

} // namespace ukelele_chicken