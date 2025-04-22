#include<iostream>
using namespace std;

int main(){
    int numberArray [5];
    int *pPointer = nullptr;
    // assign the address to the first array elements
    pPointer = numberArray;
    // assign value to first element
    *pPointer= 10;
    /*increment the pointer using pointer arithmetic to assign the address of the second element
    to the pointer */
    pPointer++;
    *pPointer = 90;// assign value to the second element
    // assign the address to third element to pointer
    pPointer = &numberArray[2];
    *pPointer = 100;
    cout<<numberArray[2]<<endl;
     // assign the address to fourth element to pointer
     pPointer = &numberArray[3];
     *pPointer = 110;
     cout<<numberArray[3]<<endl;
      // assign the address to fifith element to pointer
    pPointer = &numberArray[4];
    *pPointer = 120;
    cout<<numberArray[4]<<endl;
    // assign value to the first element 
     pPointer = numberArray;
     *pPointer = 100;
     for(int n =0;n<5;n++)
     {
        cout<<numberArray[n]<<",";
     }
}