#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const Warlock& warlock){
    this->name = warlock.name;
    this->title = warlock.title;
}

Warlock::Warlock(std::string name, std::string title){
    this->name = name;
    this->title = title;
    std::cout << name << ": This looks like another boring day." << std::endl;
}


const Warlock& Warlock::operator=(const Warlock& warlock){
    this->name = warlock.name;
    this->title = warlock.title;
    return *this;
}
Warlock::~Warlock(){
    std::cout << name << ": My job here is done!" << std::endl;

}

const std::string& Warlock::getName()const{
    return this->name;
}

const std::string& Warlock::getTitle()const{
    return this->title;
}

void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::setTitle(const std::string& title){
    this->title = title;
}

void Warlock::learnSpell(ASpell* spell){
    this->book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell){
    this->book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget& target){
    ASpell *tmp = this->book.createSpell(spell);
    tmp->launch(target);
}