#include "Contact.hpp"

class Phonebook {
	public:
		void setIndex(int i);
		void addContact(void);
		void searchContact(void);
		void printContact(std::string s);
		void searchIndex(void);
	private:
		Contact Contacts[8];
		int index;
};
