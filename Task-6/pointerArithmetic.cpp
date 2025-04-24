#include<iostream>
using namespace std;

int main(){
    // null pointer
    int *pPointer = nullptr;
    int numberArray[3] ={30,20,50};
    // assign the the first elment to pointer
    pPointer = numberArray;
    // output the addrees of the first element
    cout<<"Addres of at pPointer :"<<pPointer<<endl;
    cout<<"address of numberArray[0] :"<<numberArray<<endl;
    // output the value of the first element using pointer and indirection
    cout<<"value at pPointer :"<<*pPointer<<endl;
    // output teh value of second element
    cout<<"The value at ++pPointer" <<*(pPointer++)<<endl;
    // assign the address   of first element to pointer
    pPointer = numberArray;
    // This output the value of the first element
    cout<<" value at pPointer++"<<*(pPointer++)<<endl;
    
    return 0;
}