#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>
# include <iostream>

//crear funcion para asignar nombres?

class Zombie {
    public:
        Zombie(); // esto lo necesito?
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        void setName(std::string name);

    private:
        std::string _name;
};

#endif