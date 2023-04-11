#pragma once
#include "ICargo.h"
class Petrol : public ICargo {
public:
	Petrol();
	~Petrol() {};
	void getCargo() override;
	void addCargoCar(ICargo* p) override;
};