#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* target){
    this->targets.push_back(target);
}

void TargetGenerator::forgetTargetType(std::string const &type){
    for (std::list<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++){
        if ((*it)->getType() == type){
            this->targets.erase(it);
            break;
        }
    }
}


ATarget* TargetGenerator::createTarget(std::string const &target){
    for (std::list<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++){
        if ((*it)->getType() == target){
            return (*it)->clone();
        }
    }
}