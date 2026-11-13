#ifndef POLLO_HPP
#define POLLO_HPP

#include "animal.hpp"

namespace ukelele_chicken 
{

    class Pollo : public Animal 
    {
        public:
            Pollo();
            ~Pollo();
            void comer() const override;
            void dormir() const override;
    };

} // namespace ukelele_chicken

#endif // POLLO_HPP