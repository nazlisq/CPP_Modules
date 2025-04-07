#include <iostream>
#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "AForm.h"
#include "Bureaucrat.h"
#include <exception>

int main() {
    Intern intern;
    AForm* form;

    try{
        form = intern.makeForm("presidential pardon", "Bender");
        delete form;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;  
}
