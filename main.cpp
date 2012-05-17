#include <iostream>
#include <string>

#include "classa.h"
#include "classb.h"

int main(int argc, char* argv[])
{
	ClassA 		classa;
	std::string	var = "ClassA is awesome!";

	std::cout << "Current classa var is '" << classa.getVar() << "'" << std::endl;
	std::cout << "Assigning the new value '" << var << "'" << std::endl;
	classa.setVar(var);
	std::cout << "Current classa var is '" << classa.getVar() << "'" << std::endl;

	ClassB classb;
	long	value = 132;
	std::cout << "Current classb value is " << classb.getValue() << std::endl;
	std::cout << "Assigning the new value " << value << std::endl;
	classb.setValue(value);
	std::cout << "Current classb value is " << classb.getValue() << std::endl;

	return 0;
}
