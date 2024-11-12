#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell::~ASpell(){}

std::string ASpell::getName()const{
    return this->name;
}
std::string ASpell::getEffects()const{
    return this->effects;
}

void ASpell::launch(const ATarget& target){
    target.getHitBySpell(*this);
}