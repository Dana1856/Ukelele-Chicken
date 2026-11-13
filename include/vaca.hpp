#ifndef VACA_HPP
#define VACA_HPP

#include "animal.hpp"

namespace ukelele_chicken 
{

    class Vaca : public Animal 
    {
        public:
            Vaca();
            ~Vaca();
            void comer() const override;
            void dormir() const override;
    };

} // namespace ukelele_chicken

#endif // VACA_HPP