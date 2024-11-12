#ifndef TARGETGENERATOR_HPP
    #define TARGETGENERATOR_HPP

    #include <iostream>
    #include <list>
    #include "ATarget.hpp"

    class TargetGenerator{
        private:
            std::list<ATarget*> targets;
            TargetGenerator(const TargetGenerator& spell);
            const TargetGenerator& operator=(const TargetGenerator& target);
        public:
            TargetGenerator(){};
            TargetGenerator(std::string type);
            ~TargetGenerator(){};

            void learnTargetType(ATarget* target);
            void forgetTargetType(std::string const &type);
            ATarget* createTarget(std::string const &target);
    };


#endif