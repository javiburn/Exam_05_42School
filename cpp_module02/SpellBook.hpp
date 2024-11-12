#ifndef SPELLBOOK_HPP
    #define SPELLBOOK_HPP

    #include <iostream>
    #include <list>
    #include "ASpell.hpp"

    class SpellBook{
        private:
            std::list<ASpell*> book;
            SpellBook(const SpellBook& spell);
            const SpellBook& operator=(const SpellBook& target);
        public:
            SpellBook(){};
            SpellBook(std::string type);
            ~SpellBook(){};

            void learnSpell(ASpell* spell);
            void forgetSpell(std::string const &spell);
            ASpell* createSpell(std::string const &spell);
    };


#endif