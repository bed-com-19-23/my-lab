#include<iostream>
#include<limits>
using namespace std;

int main(){

    int y;
    cout<<"enter value between 5 and 10 : "<<endl;
    while(true){
        if(cin.fail()){
            cin.clear(); // claer error flag

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout<< "you have entered wrong number"<<endl;
            continue;
        } 
        else(y>=5||y<=10);{
            cout<<"you have entered "<< " " +y<< "is between 5 and 10"<<endl;
            break;
        }  
    }
    return 0;
}