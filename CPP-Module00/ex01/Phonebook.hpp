#ifndef PHONEBOOK_HPP_
# define PHONEBOOK_HPP_

# include "Contact.hpp"

class Phonebook {
	public:
		void setIndex(int i);
		void addContact(void);
		void searchContact(void);
		void printContact(std::string s);
		int	 alphaString(std::string str);
		void searchIndex(void);

	private:
		Contact Contacts[8];
		int index_;
		int	checker_;
};

#endif