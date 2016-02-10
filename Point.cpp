//
// Created by Catie Cook on 2/1/16.
//

#include <iostream>
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


void Point::setX(double newX) {

    x = newX;

}

void Point::setZ(double newZ)  //store Z
{

    z = newZ;


}

const double Point::getX()//get X and set it
{


    //cout << "Enter the x value for point A" << endl;
    //double x;
    setX(x);
    return x;


}

const double Point::getY()//get Y and set it
{

    //cout << "Enter the y value for point B" << endl;
    //double y;
    setY(y);
    return y;

}

const double Point::getZ() //get Z and set it
{

    //cout << "Enter the z value for point C" << endl;
   // double z;
    setZ(z);
    return z;

}

double Point::distanceTo(const Point&) const // will calculate the distance between the points
{


    Point a, b, c;
    double distance; //setting variables for the length of the sides

    distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) + pow((c.z - b.z), 2));


    return distance;

}

