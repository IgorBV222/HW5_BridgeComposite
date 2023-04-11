#include "CompositeCargo.h"


CompositeCargo::CompositeCargo(){}

CompositeCargo::~CompositeCargo()
{
	for (int i = 0; i < cargo.size(); ++i)
		delete cargo[i];
}

int CompositeCargo::getCargo() const
{
	int amount_cargo = 0;
	for (int i = 0; i < cargo.size(); i++) {
		cargo[i]->getCargo();		
		amount_cargo++;
	}
	return amount_cargo;
}

void CompositeCargo::addCargoCar(ICargo* p)
{
	cargo.push_back(p);
}