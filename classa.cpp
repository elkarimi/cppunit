#include "classa.h"

void ClassA::setVar(std::string var)
{
	this->var = var;
}

std::string	ClassA::getVar(void)
{
	return this->var;
}

bool ClassA::isEmpty(void)
{
	return this->var.empty();
}
