#ifndef CERDO_HPP
#define CERDO_HPP

#include "animal.hpp"

namespace ukelele_chicken 
{

    class Cerdo : public Animal 
    {
        public:
            Cerdo();
            ~Cerdo();
            void comer() const override;
            void dormir() const override;
    };

} // namespace ukelele_chicken

#endif // CERDO_HPP