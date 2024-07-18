#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
        Warlock(void);
        Warlock& operator=(const Warlock& warlock);
        Warlock(const Warlock& warlock);
    public:
        Warlock(const std::string name, const std::string title);
        ~Warlock();
        const std::string& getName(void)const;
        const std::string& getTitle(void)const;
        void setTitle(const std::string& str);
        void introduce(void) const;
};

#endif