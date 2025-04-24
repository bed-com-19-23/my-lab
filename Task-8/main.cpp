
#include <iostream>
#include "Box.h"
#define Box_H
using namespace std;
//  Main function for the program
int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;
    // Box1 specifications
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);
    // box2 specifications
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);
    // volume of Box1
    volume = Box1.Getvolume();
    cout<<"volume of Box1 :"<<volume<<endl;
    // volume of Box2
    volume = Box2.Getvolume();
    cout<<"volume of Box2 :"<<volume<<endl;
    // add two objects as follows:
    Box3 = Box1 + Box2;
    // volume of Box3
    volume = Box3.Getvolume();
    cout<<"volume of Box3 :"<<volume<<endl;



}