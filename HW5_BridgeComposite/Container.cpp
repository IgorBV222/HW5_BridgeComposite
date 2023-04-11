#include "Container.h"

Container::Container(){}

void Container::getCargo()
{
	std::cout << "Cargo for transportation - container!\n";
}

void Container::addCargoCar(ICargo* p)
{
	throw "This operation is not supported!";
}