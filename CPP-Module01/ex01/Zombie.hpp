#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        void setName(std::string name);

    private:
        std::string _name;
};

#endif