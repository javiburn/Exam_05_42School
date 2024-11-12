#ifndef WARLOCK_HPP
    #define WARLOCK_HPP

    #include <iostream>
    #include <list>
    #include "ASpell.hpp"
    #include "SpellBook.hpp"

    class ASpell;

    class Warlock{
        private:
            std::string name;
            std::string title;
            SpellBook book;
            Warlock();
            Warlock(const Warlock& warlock);
            const Warlock& operator=(const Warlock& warlock);
        public:
            Warlock(std::string name, std::string title);
            ~Warlock();
            const std::string& getName() const;
            const std::string& getTitle() const;
            void setTitle(const std::string& title);
            void introduce() const;

            void learnSpell(ASpell* spell);
            void forgetSpell(std::string spell);
            void launchSpell(std::string spell, ATarget& target);

    };

#endif