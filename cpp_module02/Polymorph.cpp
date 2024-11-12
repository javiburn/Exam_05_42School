#include "Polymorph.hpp"

#include "Polymorph.hpp"

Polymorph::Polymorph(){
    this->name = "Polymorph";
    this->effects = "turned into a critter";
}


Polymorph::~Polymorph(){}

Polymorph* Polymorph::clone() const{
    Polymorph* temp = new Polymorph();
    return temp;
}