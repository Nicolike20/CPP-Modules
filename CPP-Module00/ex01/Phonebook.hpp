#include <string>
#include "Contact.hpp"

class Phonebook {
	public:
		void addContact(Phonebook *pbook);
	private:
		Contact Contacts[8];
};
