#pragma once
#include "IVehicle.h"
class TankTruck :  public IVehicle
{
public:
	TankTruck();
	~TankTruck() {};
	void getVehicle() override;
	void cargoInVehicle(std::shared_ptr <CompositeCargo> cargo) override;
};