#include<iostream>
#include<string>
using namespace std;

int main(){
    // dynamically allocate integer and string
    int *var = new int;
    string *value = new string;
    // input from user
    cout<<"please enter integer"<<endl;
    cin>>*var;
    cout <<"Enter you string"<<endl;
    cin>>*value;

    cout<<"value of dynamically allocated integer"<<*var<<endl;
    cout<<"valu of dynamicallly allocateed string "<<*value<<endl;


    cout<<"value of dynamically allocated integer"<<&*var<<endl;
    cout<<"valu of dynamicallly allocateed string "<<&*value<<endl;

    delete var;
    delete value;
    return 0;
    
}
