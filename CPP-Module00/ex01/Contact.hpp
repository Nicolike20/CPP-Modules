#include <iostream>
#include <string>

class Contact {
	public:
		std::string getName();
		void setName(std::string);
		std::string getSurname();
		void setSurname(std::string);
		std::string getNickname();
		void setNickname(std::string);
		std::string getPhone();
		void setPhone(std::string);
		std::string getSecret();
		void setSecret(std::string);
	private:
//		int index;
		std::string _name;
		std::string _surname;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
