#include <iostream>
#include "CompositeCargo.h"
#include "Container.h"
#include "Food.h"
#include "Petrol.h"
#include "IVehicle.h"
#include "Truck.h"
#include "TankTruck.h"
#include "Refrigerator.h"

//Транспорт vehicle
//грузовик truck
//Автоцистерна tankTruck
//рефрежератор refrigerator

//Склад Stock
//ангар hangar
//резервуар storageTruck
//холодильник fridge

//Груз Cargo
//контейнер container
//продукты Food
//бензин Petrol

//CompositeCargo* CreateVehicle()
//{
//	CompositeCargo* vehicle = new CompositeCargo;
//	for (int i = 0; i < 4; ++i)
//		vehicle->addCargoCar(new Truck());
//	return vehicle;
//}

//функция для создания груза в авто (вспомогательная создает авто с грузом)
/*CompositeCargo* createVehicle()
{
    CompositeCargo* vehicle = new CompositeCargo;

    //std::shared_ptr<ICargo> vehicle = std::make_shared<Container>();

    for (int i = 0; i < 2; ++i)
        vehicle->addCargoCar(new Container);
    return vehicle;
}*/


int main()
{
    int n = 0, m = 0;

    ICargo* container = new Container();
    ICargo* food = new Food();
    ICargo* petrol = new Petrol();

    std::shared_ptr<ICargo> cargo1; // = std::make_shared<Container>(); = std::make_shared<Food>(); = std::make_shared<Petrol>();

    std::shared_ptr<CompositeCargo> cargo;
    IVehicle* truck = new Truck();
    IVehicle* tankTruck = new TankTruck();
    IVehicle* refrigerator = new Refrigerator();    

    std::shared_ptr<IVehicle> vehicle; // = std::make_shared<Truck>(); = std::make_shared<TankTruck>(); = std::make_shared<Refrigerator>();

    //CompositeCargo* vehicle = new CompositeCargo();
   
    do {
        std::cout << "\nSelect cargo:" << std::endl;
        std::cout << "1 - Container" << std::endl;
        std::cout << "2 - Food" << std::endl;
        std::cout << "3 - Petrol" << std::endl;
        std::cout << "4 - Exit" << std::endl;
        std::cout << "-->";
        std::cin >> m;
        switch (m) {
        case 1:
            container->getCargo();
            truck->getVehicle();            
            cargo = std::make_shared<CompositeCargo>(container); // ХЗ что????
            truck->cargoInVehicle(cargo);

            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            std::cout << "Exit" << std::endl;
            exit(0);
            break;
        default:
            std::cout << "Please enter a valid value!" << std::endl;
            break;
        }
    } while (n != 5);
    return 0;
}