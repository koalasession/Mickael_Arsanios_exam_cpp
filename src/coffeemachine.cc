#include "coffeemachine.h"

// constructor with default values
coffee::CoffeeMachine::CoffeeMachine()
{
    water_level = 10;
    coffee_level = 0;
}

// constructor with user values but not exceeding max levels
coffee::CoffeeMachine::CoffeeMachine(const int &water, const int &coffee)
{
    set_water_level(water);
    set_coffee_level(coffee);
}

coffee::CoffeeMachine::~CoffeeMachine()
{
}

// increase water level by one but not exceeding mas_water_level
void coffee::CoffeeMachine::increase_water_level()
{
    if (water_level < max_water_level)
        water_level++;
}

// increase coffee level by one but not exceeding mas_coffee_level
void coffee::CoffeeMachine::increase_coffee_level()
{
    if (coffee_level < max_coffee_level)
        coffee_level++;
}
