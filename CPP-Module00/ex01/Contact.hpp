#include <iostream>
#include <string>
#include <cstdlib>

class Contact {
	public:
		int getContIndex();
		void setContIndex(int);
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
		int _contIndex;
		std::string _name;
		std::string _surname;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
