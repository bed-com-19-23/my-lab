#include<iostream>
#include"rectangle.h"
using namespace  std;

int main(){
    float length;
    float width;
    cout<<"enter your length"<<endl;
    cin>>length;
    cout<<"enter your width"<<endl;
    cin>>width;
    rectangle rect(length, width);
    rect.setwidth(width);
    rect.setlength(length);
    cout<<"This is area "<<rect.getarea()<<endl;
    return 0;
}
