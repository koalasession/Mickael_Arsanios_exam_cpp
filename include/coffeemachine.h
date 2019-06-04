#ifndef SRC_COFFEE_MACHINE
#define SRC_COFFEE_MACHINE

namespace coffee
{

class CoffeeMachine
{
private:
    int water_level;
    int coffee_level;
    static int const max_water_level = 10;
    static int const max_coffee_level = 10;

public:
    // constructor with default values
    CoffeeMachine();
    // constructor with user values (water, coffee)
    CoffeeMachine(const int &, const int &);
    ~CoffeeMachine();

    // getter methods
    inline int get_water_level() const
    {
        return water_level;
    }
    inline int get_coffee_level() const
    {
        return coffee_level;
    }
    inline int get_max_water_level() const
    {
        return max_water_level;
    }
    inline int get_max_coffee_level() const
    {
        return max_coffee_level;
    }

    // setter methods but not exceeding max levels
    inline void set_water_level(const int &new_water_level)
    {
        if (new_water_level < 0)
            water_level = 0;
        else if (new_water_level < max_water_level)
            water_level = new_water_level;
        else
            water_level = max_water_level;
    }
    inline void set_coffee_level(const int &new_coffee_level)
    {
        if (new_coffee_level < 0)
            coffee_level = 0;
        else if (new_coffee_level < max_coffee_level)
            coffee_level = new_coffee_level;
        else
            coffee_level = max_coffee_level;
    }

    // methods
    void increase_water_level();
    void increase_coffee_level();
};
} // namespace coffee

#endif // SRC_COFFEE_MACHINE
