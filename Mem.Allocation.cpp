#include<iostream>
using namespace std;

int main(){
    int numberofElement = 0;
    int* dynamicArray = nullptr;
    cout<<"Enter how many number would you like to type"<<endl;
    cin>>numberofElement;
    dynamicArray = new int[numberofElement];
    if(dynamicArray==nullptr){
        cout<<"Error : memory could not allocted"<<endl;

    }
    else{
        for(int i =0;i<numberofElement;i++){
            cout<<"enter your number"<<endl;
            cin>>dynamicArray[i];
        }
        cout<<"you have entered:   ";
        for(int j = 0;j<numberofElement;j++){
            cout<<dynamicArray[j];

        }
        delete[] dynamicArray;
    }
    return 0;
}