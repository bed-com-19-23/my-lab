
#include "Box.h"
Box::Box(){
    length =0.0;
    breadth =0.0;
    height= 0.0;
}
Box::Box(const double Newlength,const double NewBreadth,const double Newheigth){
    length = Newlength;
    breadth = NewBreadth;
    height = Newheigth;
}
Box::~Box(){

}
double Box::Getvolume(){
    return length*breadth*height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
    height = hei;
}
// overload +operator to add two Box objects
Box Box::operator+(const Box& b){
    Box box;
    box.length = length + b.length;
    box.breadth = breadth + b.breadth;
    box.height = height + b.height;
    return box;
}