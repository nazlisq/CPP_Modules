#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
	{
		std::cout << "Enter a Level" << std::endl;
		return 1;
	}
	std::string level = av[1];

	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4 && !level.empty() && level.compare(str[i]) != 0)
        i++;
   switch (i)
    {
    case 0:
        harl.debug();
    case 1:
        harl.info();
    case 2:
        harl.warning();
    case 3:
        harl.error();
        break;    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}