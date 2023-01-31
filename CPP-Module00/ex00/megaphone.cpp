#include <cctype>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int		i;
	size_t	j;

	i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (++i < argc)
		{
			j = -1;
			std::string string = std::string(argv[i]);
			while (++j < string.length())
			{
				std::cout << (char)std::toupper(string[j]);
			}
		}
		std::cout << std::endl;
	}

	return (0);
}
