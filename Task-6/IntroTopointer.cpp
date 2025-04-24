#include<iostream>
using namespace std;

int main(){
    // declare pointer and initilize it 
    // so that its does not store random address 
    int* pPointer = nullptr;
    int intergervar = 5;
    // assign the address of object 
    pPointer = &intergervar;
    // out the value of intergervar
    cout<<"interger :"<<intergervar<<endl;
    // output the addree of intergervar
    cout<<"Address of intergervar :"<<&intergervar<<endl;
    // output address of pointer
    cout<<"The address of pointer"<<pPointer<<endl;
    // give value assignned
    cout<<*pPointer<<endl;

    return 0;
}