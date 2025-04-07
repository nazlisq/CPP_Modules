#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"

class Contact
{
    private:
        std::string name;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
        int index;
    public:
        void    designSearch();
        void    add_attr(int p_count);
        void    more_info(int p_count);
        std::string stringlimit(std::string str) const;

};

#endif
