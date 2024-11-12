#include "Fwoosh.hpp"

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(){
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}


Fwoosh::~Fwoosh(){}

Fwoosh* Fwoosh::clone() const{
    Fwoosh* temp = new Fwoosh();
    return temp;
}