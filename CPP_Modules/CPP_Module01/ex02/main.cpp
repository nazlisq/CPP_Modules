#include <iostream>
#include <string>
int main(){

	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string& stringREF = text;


	std::cout << "Text'in adresi: " << &text << std::endl;
	std::cout << "StringPTR tarafından tutulan bellek adresi: " << stringPTR << std::endl;
	std::cout << "StringREF tarafından tutulan bellek adresi: " << &stringREF << std::endl;

	std::cout << "Text'in değeri: " << text << std::endl;
	std::cout << "StringPTR tarafından işaret edilen değer: " << *stringPTR << std::endl;
	std::cout << "StringREF tarafından işaret edilen değer: " << stringREF << std::endl;
}