#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell* spell){
    if (spell)
        this->book.push_back(spell->clone());
}
void SpellBook::forgetSpell(std::string const &spell){
    for (std::list<ASpell*>::iterator it = this->book.begin(); it != this->book.end(); it++){
        if ((*it)->getName() == spell){
            this->book.erase(it);
            break;
        }
    }
}
ASpell* SpellBook::createSpell(std::string const &spell){
    for (std::list<ASpell*>::iterator it = this->book.begin(); it != this->book.end(); it++){
        if ((*it)->getName() == spell){
            return (*it)->clone();
        }
    }
}