#pragma once
#include<iostream>
using namespace std;
class Box{
public :
    Box();
    Box(const double newlength ,const double newBreadth,const double newheight);
    ~Box();
double Getvolume();
void setLength(double len);
void setBreadth(double bre);
void setHeight(double hei);
// overloading the + operator
Box operator+(const Box & b);
private :
    double length;
    double breadth;
    double height;
    double volume;

};


