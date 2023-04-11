#pragma once
#include <iostream>
#include "CompositeCargo.h"
class IVehicle
{
public:
	virtual ~IVehicle() {}
	virtual void getVehicle() = 0;
	virtual void cargoInVehicle(std::shared_ptr <CompositeCargo> cargo) = 0;
protected:
	std::shared_ptr <CompositeCargo> _cargo;
	//std::shared_ptr <CompositeCargo> _vehicle;
};

