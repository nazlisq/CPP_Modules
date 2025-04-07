
#include "file.h"

int file::callfunc(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Need 4 parameter" << std::endl;
        return (0);
    }

    filename = av[1];
    std::ifstream basetxt;
    std::string basestring;

    basetxt.open(av[1]);
    if(!basetxt.is_open())
    {
        std::cout << "File Cannot Open" << std::endl;
        return 0;
    }

    std::stringstream buffer;
    buffer << basetxt.rdbuf();
    basestring = buffer.str();

    std::string s1 = av[2];
    std::string s2 = av[3];
    size_t pos = 0;
    while ((pos = basestring.find(s1, pos)) != std::string::npos)
    {
        basestring.erase(pos, s1.length());
        basestring.insert(pos, s2);
        pos += s2.length();
    }
    std::ofstream myfile(filename +".replace");
    if (myfile.is_open())
    {
        myfile << basestring;
    }
    return (0);
}