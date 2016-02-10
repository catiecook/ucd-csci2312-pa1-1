//
// Created by Catie Cook on 2/1/16.
//

#include <cmath>
#include <iostream>
#include "Point.h"

using namespace std;


//******* FUNCTION DECLARATION ***********
double computeArea(const Point &a, const Point &b, const Point &c);


//****** FUNCTION DEFINITION ************

double computeArea(const Point &a, const Point &b, const Point &c)
{

    double area, s;

   s = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2;


    area = sqrt(s*(s-a.distanceTo(b))*(s- b.distanceTo(c))*(s-c.distanceTo(a)));


    return area;
}

//can't get the variable sfor the sides of the triangle to connect because my logic is flawed in the distanceTo function