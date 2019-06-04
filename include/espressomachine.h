#ifndef SRC_ESPRESSO_MACHINE
#define SRC_ESPRESSO_MACHINE

#include "coffeemachine.h"

namespace coffee
{

class EspressoMachine : public CoffeeMachine
{
private:
    int pressure_level;
    static int const max_pressure_level = 10;

public:
    EspressoMachine();
    EspressoMachine(const int &);
    EspressoMachine(const int &, const int &, const int &);
    ~EspressoMachine();

    // getters
    inline int get_pressure_level()
    {
        return pressure_level;
    }
    inline int get_max_pressure_level()
    {
        return max_pressure_level;
    }
    // setter without exceeding max level
    inline void set_pressure_level(const int &new_pressure_level)
    {
        if (new_pressure_level < 0)
            pressure_level = 0;
        else if (new_pressure_level < max_pressure_level)
            pressure_level = new_pressure_level;
        else
            pressure_level = max_pressure_level;
    }

    // methods
    // set pressure to max
    void init_pressure();
    void get_coffee();
};

#endif // SRC_ESPRESSO_MACHINE

} // namespace coffee
