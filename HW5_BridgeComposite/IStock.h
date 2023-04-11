#pragma once
#include <iostream>

class IStock
{
public:
	virtual void getStock() = 0;
	virtual ~IStock() {}
};