#include "Refrigerator.h"

Refrigerator::Refrigerator() {}
void Refrigerator::getVehicle()
{
	std::cout << "Transport for cargo transportation - refrigerator!\n";
}

void Refrigerator::cargoInVehicle(std::shared_ptr<CompositeCargo> cargo)
{
	cargo->getCargo();
}