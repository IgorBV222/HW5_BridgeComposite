#include "TankTruck.h"

TankTruck::TankTruck() {}
void TankTruck::getVehicle()
{
	std::cout << "Transport for cargo transportation - tank truck!\n";
}

void TankTruck::cargoInVehicle(std::shared_ptr<CompositeCargo> cargo)
{
	cargo->getCargo();
}