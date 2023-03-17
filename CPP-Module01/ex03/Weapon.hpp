#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType() const; //referencia constante?;
        void setType(std::string type);

    private:
        std::string type_;
};

#endif