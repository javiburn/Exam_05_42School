#ifndef ATARGET_HPP
    #define ATARGET_HPP

    #include <iostream>
    #include "ASpell.hpp"

    class ASpell;

    class ATarget{
        protected:
            std::string type;
        public:
            ATarget();
            ATarget(std::string type);
            ATarget(const ATarget& spell);
            const ATarget& operator=(const ATarget& target);
            virtual ~ATarget();

            const std::string& getType()const;
            virtual ATarget* clone() const = 0;
            void getHitBySpell(const ASpell& spell) const;
    };


#endif