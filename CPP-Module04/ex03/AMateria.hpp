#ifndef AMATERIA_HPP_
# define AMATERIA_HPP_

#include <string>

class AMateria
{
	public:
		AMateria(const std::string &type);
		//constructor default y de copia?
		AMateria();
		AMateria(const AMateria &copy);
		//operador =?
		AMateria& operator=(const AMateria &other);
		virtual ~AMateria();

		const std::string& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string _type;
};

#endif