#pragma once
#include "IVehicle.h"
class Truck : public IVehicle
{
public:
	Truck();
	~Truck() {};
	void getVehicle() override;
	void cargoInVehicle(std::shared_ptr <CompositeCargo> cargo) override;
};