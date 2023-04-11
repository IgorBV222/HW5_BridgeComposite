#pragma once
#include "IVehicle.h"
class Refrigerator :  public IVehicle
{
public:
	Refrigerator();
	~Refrigerator() {};
	void getVehicle() override;
	void cargoInVehicle(std::shared_ptr <CompositeCargo> cargo) override;
};