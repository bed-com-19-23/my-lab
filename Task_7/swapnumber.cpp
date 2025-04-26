#include<iostream>
using namespace std;
void swapNumbers(int &varA, int &varB){
    int temp;
    temp = varA;
    varA = varB;
    varB = temp;
}
int main(){ 
    int varA; 
    int varB;
    cout<<"enter value of varA :"<<endl;
    cin>>varA;
    cout<<"enter value of varB ;"<<endl;
    cin>>varB;
    cout << "varA before swap: " << &varA << endl; //varA is 25 
    cout << "VarB before swap: " << &varB << endl; //varB is 100 
    int *ptra = &varA;
    int *ptrb = &varB;
    swapNumbers(varA, varB);
    
    cout << "varA after swap: " << varA << endl; //varA is 100 
    cout << "VarB after swap: " << varB << endl; //varB is 25 
    return 0;
}