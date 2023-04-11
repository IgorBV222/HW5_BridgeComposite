#pragma once
#include "ICargo.h"
class Container : public ICargo
{
public:
	Container();
	~Container() {};
	void getCargo() override;
	void addCargoCar(ICargo* p) override;
};