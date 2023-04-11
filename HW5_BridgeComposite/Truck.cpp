#include "Truck.h"
#include "Container.h"


Truck::Truck() {}
void Truck::getVehicle()
{
	std::cout << "Transport for cargo transportation - truck!\n";
}

void Truck::cargoInVehicle(std::shared_ptr<CompositeCargo> cargo)
{
	cargo->getCargo();	
}

//функция для создания груза в авто (вспомогательная создает авто с грузом)
/*CompositeCargo* createVehicle()
{
    CompositeCargo* vehicle = new CompositeCargo;

    //std::shared_ptr<ICargo> vehicle = std::make_shared<Container>();

    for (int i = 0; i < 2; ++i)
        vehicle->addCargoCar(new Container);
    return vehicle;
}*/