#ifndef ASPELL_HPP
    #define ASPELL_HPP

    #include <iostream>

    #include "ATarget.hpp"

    class ATarget;

    class ASpell{
        protected:
            std::string name;
            std::string effects;
        public:
            ASpell();
            ASpell(std::string name, std::string effects);
            ASpell(const ASpell& spell);
            const ASpell& operator=(const ASpell& spell);
            virtual ~ASpell();

            std::string getName()const;
            std::string getEffects()const;
            virtual ASpell* clone() const = 0;
            void launch(const ATarget& target);
    };


#endif
