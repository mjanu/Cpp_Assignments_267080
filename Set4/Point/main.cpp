#include <iostream>
#include<cmath>
#include "point.h"
using namespace std;


int main()
{
        Point<float> p(2,-3);
        p.display();
        p.distanceFromOrigin();
        p.quadrant();
        return 0;
}

