#include <iostream>
#include "espressomachine.h"

int main()
{
    std::cout << "Begin!" << std::endl;

    std::cout << "Construct with beyond max values" << std::endl;
    // initialize coffee machine with values above max levels
    coffee::EspressoMachine MyEspressoMachine(15, 15, 15);

    std::cout << "Increase beyond max values" << std::endl;
    // increase coffee and water level beyond max levels
    MyEspressoMachine.increase_coffee_level();
    MyEspressoMachine.increase_water_level();

    std::cout
        << "coffee: " << MyEspressoMachine.get_coffee_level() << std::endl
        << "water: " << MyEspressoMachine.get_water_level() << std::endl
        << "pressure: " << MyEspressoMachine.get_pressure_level() << std::endl;

    // setting to smaller than max
    MyEspressoMachine.set_pressure_level(5);

    // should not change anything
    MyEspressoMachine.get_coffee();
    std::cout << "Get coffee with pressure at half" << std::endl;
    std::cout
        << "coffee: " << MyEspressoMachine.get_coffee_level() << std::endl
        << "water: " << MyEspressoMachine.get_water_level() << std::endl
        << "pressure: " << MyEspressoMachine.get_pressure_level() << std::endl;

    MyEspressoMachine.init_pressure();

    std::cout << "Get coffee with pressure at max" << std::endl;

    // should zero all
    MyEspressoMachine.get_coffee();
    std::cout
        << "coffee: " << MyEspressoMachine.get_coffee_level() << std::endl
        << "water: " << MyEspressoMachine.get_water_level() << std::endl
        << "pressure: " << MyEspressoMachine.get_pressure_level() << std::endl;

    // make invalid input
    MyEspressoMachine.set_coffee_level(-2);
    std::cout
        << "coffee: " << MyEspressoMachine.get_coffee_level() << std::endl;
}
