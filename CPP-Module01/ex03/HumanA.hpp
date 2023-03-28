#ifndef HUMANA_HPP_
# define HUMANA_HPP_

# include <string>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon const &weapon);
        ~HumanA();
        void attack();

    private:
        std::string name_;
        const Weapon &weapon_;
};

#endif