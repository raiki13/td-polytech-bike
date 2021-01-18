#include "Road.h"
#include "Bike.h"

int main()
{
    Road road(20);
    //road.show();
    Bike bike;
    bike.run(road);

    Road road(40);
    //road.show();
    Bike bike;
    bike.run(longRoad);

    return 0;
}


