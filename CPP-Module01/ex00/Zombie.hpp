#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);

    private:
        std::string _name;
};

#endif