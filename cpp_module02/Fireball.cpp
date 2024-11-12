#include "Fireball.hpp"

#include "Fireball.hpp"

Fireball::Fireball(){
    this->name = "Fireball";
    this->effects = "burnt to a crisp";
}


Fireball::~Fireball(){}

Fireball* Fireball::clone() const{
    Fireball* temp = new Fireball();
    return temp;
}