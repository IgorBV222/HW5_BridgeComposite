#pragma once
#include "ICargo.h"
#include <vector>


class CompositeCargo : public ICargo
{
public:
	CompositeCargo();
	virtual ~CompositeCargo();
	int getCargo()const;
	void addCargoCar(ICargo* p);
private:
	std::vector<ICargo*> cargo;
};