#include "Petrol.h"

Petrol::Petrol() {}

void Petrol::getCargo()
{
	std::cout << "Cargo for transportation - petrol!\n";
}

void Petrol::addCargoCar(ICargo* p)
{
	throw "This operation is not supported!";
}