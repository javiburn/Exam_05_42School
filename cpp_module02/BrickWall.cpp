#include "BrickWall.hpp"

BrickWall::BrickWall(){
    this->type = "Inconspicuous Red-brick Wall";
}


BrickWall::~BrickWall(){}

BrickWall* BrickWall::clone() const{
    BrickWall* temp = new BrickWall();
    return temp;
}