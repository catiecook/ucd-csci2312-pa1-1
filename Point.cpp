//
// Created by Catie Cook on 2/1/16.
//

#include <iostream>
#include <iomanip>
#include <cmath>

#include "Point.h"

using namespace std;

Point::Point() // :Point(0,0) {} this calls the second constructor within the first default constructor AKA 0,0, making a point of origin
{

    x = 0;
    y = 0;
    z = 0;

}

Point::Point(double newX, double newY, double newZ) // : x(newX), y(newY, z(newZ) This is a way to initialize x to newX, y to newY and z to newZ. Same as what is written below
 {

    x = newX;
    y = newY;
    z = newZ;

}

void Point::setY(double newY)
{

    y = newY;

}


void Point::setX(double newX)
{

    x = newX;

}

void Point::setZ(double newZ)  //store Z
{

    z = newZ;


}

double Point::getX() const //get X and set it
{


//    cout << "Enter the x value for point A" << endl;
    cin >> x;
    //setX(x);
    return x;


}

double Point::getY() const //get Y and set it
{

    //cout << "Enter the y value for point B" << endl;
    cin >> y;
    //setY(y);

    return y;

}

double Point::getZ() const  //get Z and set it
{

    //cout << "Enter the z value for point C" << endl;
    cin >> z;
    //setZ(z);

    return z;

}

double Point::distanceTo(const Point&) const // will calculate the distance between the points
{
/*
    a.getX(); //Getting all three coordinates for the points
    a.getY();
    a.getZ();

   */

    double distance; //setting variables for the length of the sides

    distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) + pow((a.z - b.z), 2));
    //bToc = sqrt(pow((b.x - c.x), 2) + pow((b.y - c.y), 2) + pow((b.z - c.z), 2));
    //cToa = sqrt(pow((c.x - a.x), 2) + pow((c.y - a.y), 2) + pow((c.z - a.z), 2));


    return distance;

}

//I see where my logic is wrong, but I cannot wrap my head around how to fix it. I need to separate this function
//so that it returns a b and c side lengths from the separate 3D points and then continue with Huron's formula.

//

