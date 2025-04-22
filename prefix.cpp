#include<iostream>
using namespace std;

int main(){
    int x = 3;
    // the value of x is increased before the value assigned x is to y
    // hence the value assigned to y is the value of x after being increased

    int y = ++x;
    cout<<" x :"<<x<<endl;
    cout<<" y :"<< y<<endl;

    return 0;
}