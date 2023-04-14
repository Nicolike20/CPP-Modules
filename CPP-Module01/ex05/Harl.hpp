#ifndef HARL_HPP_
# define HARL_HPP_

# include <string>
# include <iostream>

class Harl {
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		typedef void (Harl::*func)(void);
};


#endif
