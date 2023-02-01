#include <iostream>
#include <cstdio>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i) {
		std::string string = std::string(argv[i]);
		for (size_t j = 0; j < string.length(); ++j) {
			std::cout << (char)std::toupper(string[j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
