#include "Food.h"

Food::Food() {}

void Food::getCargo()
{
	std::cout << "Cargo for transportation - food!\n";
}

void Food::addCargoCar(ICargo* p)
{
	throw "This operation is not supported!";
}