#include<iostream>
using namespace std;

int main(){
    int firstvalue;
    int secondvalue;
    int * pPointer = nullptr;
    // assign the pointer with address of firstvalue
    pPointer = &firstvalue;
    // indirection
    *pPointer = 10;
    // asssign the pointer to the second value address
    pPointer = &secondvalue;
    // indirection
    *pPointer = 30;
    cout<<"The firstvalue is "<<firstvalue<<endl;
    cout<<"The firstvalue is "<<secondvalue<<endl;

    return 0;
}
