#pragma once
#include <string>
#include <iostream>

class ICargo
{
public:
	virtual ~ICargo() {}
	virtual void getCargo() = 0;
	virtual void addCargoCar(ICargo* p) = 0;	
};