#include<iostream>
#include"rectangle.h"
using namespace std;
rectangle::rectangle(float l, float w){
    length = l;
    width = w;

}
rectangle::~rectangle(){
    cout<<"PLEASE PROVIDE VALUES";
}
float rectangle::getlength(){
    return length;
}
float rectangle::getwidth(){
    return width;
}
float rectangle::getarea(){
    return length*width;
}
void rectangle::setlength(float length){
    this->length = length;
}
void rectangle::setwidth(float width){
    this->width = width;

}
