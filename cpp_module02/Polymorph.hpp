#ifndef POLYMORPH_HPP
    #define POLYMORPH_HPP

    #include <iostream>
    #include "ASpell.hpp"

    class Polymorph: public ASpell{
        public:
            Polymorph();
            Polymorph(std::string type);
            Polymorph(const Polymorph& spell);
            const Polymorph& operator=(const Polymorph& target);
            ~Polymorph();

            Polymorph* clone() const;
    };


#endif