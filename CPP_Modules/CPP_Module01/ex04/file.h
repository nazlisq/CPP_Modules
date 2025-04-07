#pragma once

#include <iostream>
#include <fstream>
#include <sstream>


class file
{
private:
   std::string filename;
public:
    int callfunc(int ac, char **av);
};
