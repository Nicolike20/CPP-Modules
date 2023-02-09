#include <string>
#include "Contact.hpp"

class Phonebook {
	public:
		void setIndex(int i);
		void addContact(void);
	private:
		Contact Contacts[8];
		int index;
};
