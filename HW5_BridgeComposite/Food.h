#pragma once
#include "ICargo.h"
class Food :  public ICargo{
public:
	Food();
	~Food() {};
	void getCargo() override;
	void addCargoCar(ICargo* p) override;
};