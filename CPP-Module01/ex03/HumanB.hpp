#ifndef HUMANB_HPP_
# define HUMANB_HPP_

# include <string>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();

    private:
        std::string name_;
        Weapon weapon_;
};

#endif