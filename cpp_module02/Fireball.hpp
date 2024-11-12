#ifndef FIREBALL_HPP
    #define FIREBALL_HPP

    #include <iostream>
    #include "ASpell.hpp"

    class Fireball: public ASpell{
        public:
            Fireball();
            Fireball(std::string type);
            Fireball(const Fireball& spell);
            const Fireball& operator=(const Fireball& target);
            ~Fireball();

            Fireball* clone() const;
    };


#endif