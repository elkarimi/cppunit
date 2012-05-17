#ifndef CLASSA_H
#define CLASSA_H

#include <iostream>
#include <string>

class ClassA
{
	public:
		void		setVar(std::string var);
		std::string	getVar(void);
		bool		isEmpty(void);

	private:
		std::string	var;
};

#endif
