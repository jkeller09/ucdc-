#include <iostream>
#include <cmath>
#include <iomanip>

#include "Point.h"

using namespace std;


double computeArea(Point &, Point &, Point &);          //forward Declaration

int main(void){

Point p1, p2, p3;

    cout << "Please enter the point information for Point 1"<< endl;
    cin >> p1.setX;
    cin >> p1.setY;
    cin >> p1.setZ;

    cout << "Please enter the point information for Point 2"<< endl;
    cin >> p2.setX;
    cin >> p2.setY;
    cin >> p2.setZ;

    cout << "Please enter the point information for Point 3"<< endl;
    cin >> p3.setX;
    cin >> p3.setY;
    cin >> p3.setZ;


    cout << fixed << setprecision(2) << computeArea(p1,p2,p3);

return 0;

}

//global function

double computeArea(Point &p1, Point &p2, Point &p3){       //function description
                                                           //function implementation
    double area, perimeter, s;

    perimeter = (p1.distanceTo(p2) + p2.distanceTo(p3) + p3.distanceTo(p1));
    s = perimeter/2;
    area = sqrt(s(s-p1)(s-p2)(s-p3));

    return area;
}