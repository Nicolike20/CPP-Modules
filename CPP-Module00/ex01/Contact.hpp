#ifndef CONTACT_HPP_
# define CONTACT_HPP_

# include <iostream>
# include <string>
# include <cstdlib>

class Contact {
	public:
		int getContIndex();
		void setContIndex(int);
		std::string getName();
		void setName(std::string s);
		std::string getSurname();
		void setSurname(std::string s);
		std::string getNickname();
		void setNickname(std::string s);
		std::string getPhone();
		void setPhone(std::string s);
		std::string getSecret();
		void setSecret(std::string s);
	private:
		int contIndex_;
		std::string name_;
		std::string surname_;
		std::string nickname_;
		std::string phoneNumber_;
		std::string darkestSecret_;
};

#endif