//
// Created by Jessica
//

#ifndef PA1_POINT_H
#define PA1_POINT_H


class Point {


    
        double x;
        double y;
        double z;

    Public:

    //constructors

        Point();				                     //default
        Point (double x, double y, double z);		//three-argument constructor
        ~Point();                                   //destructor

//Mutator Methods

        void setX(double newX);
        void setY(double newY);
        void setZ(double newZ);

        double distanceTo(Point &p);


//Accessor methods

        double getX();
        double getY();
        double getZ();


};



#endif //PA1_POINT_H
