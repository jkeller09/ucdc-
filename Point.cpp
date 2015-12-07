//
// Created by Jessica
//

#include <math.h>
#include "Point.h"

//default constructor
//Initializes the point to (0.0,0.0,0.0)

Point::Point(double x, double y, double z){

    x = 0.0;
    y = 0.0;
    z = 0.0;


}

//Constructor
//Initializes the point to (initX, initY, initZ)

Point::Point(double initX, double initY, double initZ){

    x = initX;
    y = initY;
    z = initZ;


}

//Destructor

Point::~Point(){
    // no-operation
}

//Mutator mthods
//Change the values of private member variables

void Point::setX(double newX) {

    x = newX;

}

void Point::setY(double newY){

    y = newY;

}

void Point::setZ(double newZ){

    z = newZ;

}

//Accessors
//Return the current values of the private member variables

double Point::getX(){

    return x;

}

double Point::getY(){

    return y;

}

double Point::getZ(){

    return z;

}

double Point::distanceTo(Point &p) const {      //calculates the distance between two points
        if (Point.p == p) {
                double sum = 0;
                for (int i = 0; i < p; i++) {
                      double diff = values[i] - Point.values[i];
                       sum += diff * diff;
                   }
                return sqrt(sum);
            }
        return 0;
}