#include "cerdo.hpp"
#include <iostream>

namespace ukelele_chicken 
{
    Cerdo::Cerdo()
    {
        std::cout << "Nace un cerdo\n";
    }

    Cerdo::~Cerdo()
    {
        std::cout << "Muere un cerdo\n";
    }
    
    void Cerdo::comer() const 
    {
        std::cout << "[Cerdo] Comiendo manzana.\n";
    }

    void Cerdo::dormir() const 
    {
        std::cout << "[Cerdo] Durmiendo en el chiquero.\n";
    }

} // namespace ukelele_chicken