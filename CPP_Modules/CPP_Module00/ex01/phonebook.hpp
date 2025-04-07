#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <ctype.h>
#include "contact.hpp"

class Phonebook
{
    private:
      Contact people[8];
    public:
        int p_count;
        void    add();
        void    search();        
};

#endif
