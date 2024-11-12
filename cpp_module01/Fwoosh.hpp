#ifndef FWOOSH_HPP
    #define FWOOSH_HPP

    #include <iostream>
    #include "ASpell.hpp"

    class Fwoosh: public ASpell{
        public:
            Fwoosh();
            Fwoosh(std::string type);
            Fwoosh(const Fwoosh& spell);
            const Fwoosh& operator=(const Fwoosh& target);
            ~Fwoosh();

            Fwoosh* clone() const;
    };


#endif