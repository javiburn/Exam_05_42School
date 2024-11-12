#ifndef BRICKWALL_HPP
    #define BRICKWALL_HPP

    #include <iostream>
    #include "ATarget.hpp"

    class BrickWall: public ATarget{
        public:
            BrickWall();
            BrickWall(std::string type);
            BrickWall(const BrickWall& spell);
            const BrickWall& operator=(const BrickWall& target);
            ~BrickWall();

            BrickWall* clone() const;
    };


#endif