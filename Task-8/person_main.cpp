#include<iostream>
#include"person.h"
#include<string>
using namespace std;

int main(){

    Person jane = Person("jane",60.0f);
    Person john = Person("john",75.0f);

    float totalWeight = jane + john;
    cout<<"total weight :"<<totalWeight<<endl;
        if(jane==john){
            cout<<"This is this same person"<<endl;
        }
        else{
            cout<<"there are different"<<endl;
        }
   
    return 0;
}