#ifndef ANIMAL_HPP
#define ANIMAL_HPP

namespace ukelele_chicken 
{

    class Animal 
    {
        public:
            virtual ~Animal() = default;

            // Métodos virtuales puros (Clase Abstracta)
            virtual void comer() const = 0;
            virtual void dormir() const = 0;
    };

} // namespace ukelele_chicken

#endif // ANIMAL_HPP