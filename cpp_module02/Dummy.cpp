#include "Dummy.hpp"

#include "Dummy.hpp"

Dummy::Dummy(){
    this->type = "Target Practice Dummy";
}


Dummy::~Dummy(){}

Dummy* Dummy::clone() const{
    Dummy* temp = new Dummy();
    return temp;
}