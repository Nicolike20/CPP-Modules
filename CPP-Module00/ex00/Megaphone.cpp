#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	std::string s;
	for (int i = 1; i < argc; ++i) {
		s = argv[i];
		//for (size_t j = 0; j < s.length(); ++j) {
		for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
			std::cout << static_cast<char>(std::toupper(*it)); //s[j]);
		}

	}
	std::cout << "\n";
	return 0;
}
