#ifndef DUMMY_HPP
    #define DUMMY_HPP

    #include <iostream>
    #include "ATarget.hpp"

    class Dummy: public ATarget{
        public:
            Dummy();
            Dummy(std::string type);
            Dummy(const Dummy& spell);
            const Dummy& operator=(const Dummy& target);
            ~Dummy();

            Dummy* clone() const;
    };


#endif