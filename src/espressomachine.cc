#include "espressomachine.h"

// default values
coffee::EspressoMachine::EspressoMachine() : CoffeeMachine()
{
    pressure_level = 0;
}

// construct with custom pressure level and default for rest
coffee::EspressoMachine::EspressoMachine(const int &pressure) : CoffeeMachine()
{
    set_pressure_level(pressure);
}

// all custom values
coffee::EspressoMachine::EspressoMachine(const int &water, const int &coffee, const int &pressure) : CoffeeMachine(water, coffee)
{
    set_pressure_level(pressure);
}

coffee::EspressoMachine::~EspressoMachine()
{
}

// increase pressure_level to max
void coffee::EspressoMachine::init_pressure()
{
    pressure_level = max_pressure_level;
}

// set water, coffe and pressure to 0 if coffe and water > 0 and pressure is max
void coffee::EspressoMachine::get_coffee()
{
    if (pressure_level == max_pressure_level && get_coffee_level() > 0 && get_water_level() > 0)
    {
        set_water_level(0);
        set_coffee_level(0);
        set_pressure_level(0);
    }
}
